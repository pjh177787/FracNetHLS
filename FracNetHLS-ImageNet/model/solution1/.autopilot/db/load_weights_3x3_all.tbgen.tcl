set moduleName load_weights_3x3_all
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
set C_modelName {load_weights_3x3_all}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv_weight_3x3_all_V int 512 regular {axi_master 0}  }
	{ conv_weight_3x3_all_V_offset int 26 regular  }
	{ weight_3x3_index int 11 regular  }
	{ weights_all_V_offset int 26 regular  }
	{ weights_all_index int 13 regular  }
	{ weight_buf_3x3_V_0 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_1 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_2 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_3 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_4 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_5 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_6 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_7 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_8 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_9 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_10 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_11 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_12 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_13 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_14 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_15 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_16 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_17 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_18 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_19 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_20 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_21 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_22 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_23 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_24 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_25 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_26 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_27 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_28 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_29 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_30 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ weight_buf_3x3_V_31 int 64 regular {array 36 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_0 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_0 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_0 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_0 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_0 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_1 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_1 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_1 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_1 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_1 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_2 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_2 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_2 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_2 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_2 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_3 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_3 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_3 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_3 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_3 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_4 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_4 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_4 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_4 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_4 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_5 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_5 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_5 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_5 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_5 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_6 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_6 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_6 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_6 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_6 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_7 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_7 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_7 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_7 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_7 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_8 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_8 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_8 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_8 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_8 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_9 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_9 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_9 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_9 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_9 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_10 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_10 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_10 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_10 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_10 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_11 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_11 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_11 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_11 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_11 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_12 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_12 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_12 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_12 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_12 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_13 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_13 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_13 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_13 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_13 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_14 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_14 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_14 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_14 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_14 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_15 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_15 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_15 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_15 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_15 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_16 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_16 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_16 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_16 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_16 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_17 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_17 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_17 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_17 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_17 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_18 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_18 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_18 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_18 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_18 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_19 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_19 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_19 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_19 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_19 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_20 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_20 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_20 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_20 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_20 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_21 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_21 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_21 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_21 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_21 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_22 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_22 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_22 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_22 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_22 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_23 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_23 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_23 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_23 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_23 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_24 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_24 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_24 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_24 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_24 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_25 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_25 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_25 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_25 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_25 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_26 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_26 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_26 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_26 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_26 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_27 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_27 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_27 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_27 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_27 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_28 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_28 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_28 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_28 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_28 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_29 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_29 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_29 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_29 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_29 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_30 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_30 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_30 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_30 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_30 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ relu_shiftx_buf_V_31 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_shifty_buf_V_31 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ relu_weight_buf_V_31 int 11 regular {array 2 { 0 3 } 0 1 } {global 1}  }
	{ bn_weight_buf_V_31 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
	{ bn_bias_buf_V_31 int 11 regular {array 4 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv_weight_3x3_all_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "conv_weight_3x3_all_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "weight_3x3_index", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "weights_all_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "weights_all_index", "interface" : "wire", "bitwidth" : 13, "direction" : "READONLY"} , 
 	{ "Name" : "weight_buf_3x3_V_0", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_1", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_2", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_3", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_4", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_5", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_6", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_7", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_8", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_9", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_10", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_11", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_12", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_13", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_14", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_15", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_16", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_17", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_18", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_19", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_20", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_21", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_22", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_23", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_24", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 24,"up" : 24,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_25", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 25,"up" : 25,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_26", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 26,"up" : 26,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_27", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 27,"up" : 27,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_28", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 28,"up" : 28,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_29", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 29,"up" : 29,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_30", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 30,"up" : 30,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_31", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 31,"up" : 31,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_0", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_0", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_0", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_0", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_0", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_1", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_1", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_1", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_1", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_1", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_2", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_2", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_2", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_2", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_2", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_3", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_3", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_3", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_3", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_3", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_4", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_4", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_4", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_4", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_4", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_5", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_5", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_5", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_5", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_5", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_6", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_6", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_6", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_6", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_6", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_7", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_7", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_7", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_7", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_7", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_8", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_8", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_8", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_8", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_8", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_9", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_9", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_9", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_9", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_9", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_10", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 10,"up" : 10,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_10", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 10,"up" : 10,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_10", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 10,"up" : 10,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_10", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 10,"up" : 10,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_10", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 10,"up" : 10,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_11", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 11,"up" : 11,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_11", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 11,"up" : 11,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_11", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 11,"up" : 11,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_11", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 11,"up" : 11,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_11", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 11,"up" : 11,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_12", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 12,"up" : 12,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_12", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 12,"up" : 12,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_12", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 12,"up" : 12,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_12", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 12,"up" : 12,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_12", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 12,"up" : 12,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_13", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 13,"up" : 13,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_13", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 13,"up" : 13,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_13", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 13,"up" : 13,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_13", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 13,"up" : 13,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_13", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 13,"up" : 13,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_14", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 14,"up" : 14,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_14", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 14,"up" : 14,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_14", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 14,"up" : 14,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_14", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 14,"up" : 14,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_14", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 14,"up" : 14,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_15", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 15,"up" : 15,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_15", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 15,"up" : 15,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_15", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 15,"up" : 15,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_15", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 15,"up" : 15,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_15", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 15,"up" : 15,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_16", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 16,"up" : 16,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_16", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 16,"up" : 16,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_16", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 16,"up" : 16,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_16", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 16,"up" : 16,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_16", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 16,"up" : 16,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_17", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 17,"up" : 17,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_17", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 17,"up" : 17,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_17", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 17,"up" : 17,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_17", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 17,"up" : 17,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_17", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 17,"up" : 17,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_18", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 18,"up" : 18,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_18", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 18,"up" : 18,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_18", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 18,"up" : 18,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_18", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 18,"up" : 18,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_18", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 18,"up" : 18,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_19", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 19,"up" : 19,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_19", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 19,"up" : 19,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_19", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 19,"up" : 19,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_19", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 19,"up" : 19,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_19", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 19,"up" : 19,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_20", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 20,"up" : 20,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_20", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 20,"up" : 20,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_20", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 20,"up" : 20,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_20", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 20,"up" : 20,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_20", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 20,"up" : 20,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_21", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 21,"up" : 21,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_21", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 21,"up" : 21,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_21", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 21,"up" : 21,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_21", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 21,"up" : 21,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_21", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 21,"up" : 21,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_22", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 22,"up" : 22,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_22", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 22,"up" : 22,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_22", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 22,"up" : 22,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_22", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 22,"up" : 22,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_22", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 22,"up" : 22,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_23", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 23,"up" : 23,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_23", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 23,"up" : 23,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_23", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 23,"up" : 23,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_23", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 23,"up" : 23,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_23", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 23,"up" : 23,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_24", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 24,"up" : 24,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_24", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 24,"up" : 24,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_24", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 24,"up" : 24,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_24", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 24,"up" : 24,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_24", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 24,"up" : 24,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_25", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 25,"up" : 25,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_25", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 25,"up" : 25,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_25", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 25,"up" : 25,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_25", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 25,"up" : 25,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_25", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 25,"up" : 25,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_26", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 26,"up" : 26,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_26", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 26,"up" : 26,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_26", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 26,"up" : 26,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_26", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 26,"up" : 26,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_26", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 26,"up" : 26,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_27", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 27,"up" : 27,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_27", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 27,"up" : 27,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_27", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 27,"up" : 27,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_27", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 27,"up" : 27,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_27", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 27,"up" : 27,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_28", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 28,"up" : 28,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_28", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 28,"up" : 28,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_28", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 28,"up" : 28,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_28", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 28,"up" : 28,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_28", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 28,"up" : 28,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_29", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 29,"up" : 29,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_29", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 29,"up" : 29,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_29", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 29,"up" : 29,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_29", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 29,"up" : 29,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_29", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 29,"up" : 29,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_30", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 30,"up" : 30,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_30", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 30,"up" : 30,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_30", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 30,"up" : 30,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_30", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 30,"up" : 30,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_30", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 30,"up" : 30,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shiftx_buf_V_31", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shiftx_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 31,"up" : 31,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_shifty_buf_V_31", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_shifty_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 31,"up" : 31,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "relu_weight_buf_V_31", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "relu_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 31,"up" : 31,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_weight_buf_V_31", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_weight_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 31,"up" : 31,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "bn_bias_buf_V_31", "interface" : "memory", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "bn_bias_buf.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 31,"up" : 31,"step" : 2}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 823
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_conv_weight_3x3_all_V_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BUSER sc_in sc_lv 1 signal 0 } 
	{ conv_weight_3x3_all_V_offset sc_in sc_lv 26 signal 1 } 
	{ weight_3x3_index sc_in sc_lv 11 signal 2 } 
	{ weights_all_V_offset sc_in sc_lv 26 signal 3 } 
	{ weights_all_index sc_in sc_lv 13 signal 4 } 
	{ weight_buf_3x3_V_0_address0 sc_out sc_lv 6 signal 5 } 
	{ weight_buf_3x3_V_0_ce0 sc_out sc_logic 1 signal 5 } 
	{ weight_buf_3x3_V_0_we0 sc_out sc_logic 1 signal 5 } 
	{ weight_buf_3x3_V_0_d0 sc_out sc_lv 64 signal 5 } 
	{ weight_buf_3x3_V_1_address0 sc_out sc_lv 6 signal 6 } 
	{ weight_buf_3x3_V_1_ce0 sc_out sc_logic 1 signal 6 } 
	{ weight_buf_3x3_V_1_we0 sc_out sc_logic 1 signal 6 } 
	{ weight_buf_3x3_V_1_d0 sc_out sc_lv 64 signal 6 } 
	{ weight_buf_3x3_V_2_address0 sc_out sc_lv 6 signal 7 } 
	{ weight_buf_3x3_V_2_ce0 sc_out sc_logic 1 signal 7 } 
	{ weight_buf_3x3_V_2_we0 sc_out sc_logic 1 signal 7 } 
	{ weight_buf_3x3_V_2_d0 sc_out sc_lv 64 signal 7 } 
	{ weight_buf_3x3_V_3_address0 sc_out sc_lv 6 signal 8 } 
	{ weight_buf_3x3_V_3_ce0 sc_out sc_logic 1 signal 8 } 
	{ weight_buf_3x3_V_3_we0 sc_out sc_logic 1 signal 8 } 
	{ weight_buf_3x3_V_3_d0 sc_out sc_lv 64 signal 8 } 
	{ weight_buf_3x3_V_4_address0 sc_out sc_lv 6 signal 9 } 
	{ weight_buf_3x3_V_4_ce0 sc_out sc_logic 1 signal 9 } 
	{ weight_buf_3x3_V_4_we0 sc_out sc_logic 1 signal 9 } 
	{ weight_buf_3x3_V_4_d0 sc_out sc_lv 64 signal 9 } 
	{ weight_buf_3x3_V_5_address0 sc_out sc_lv 6 signal 10 } 
	{ weight_buf_3x3_V_5_ce0 sc_out sc_logic 1 signal 10 } 
	{ weight_buf_3x3_V_5_we0 sc_out sc_logic 1 signal 10 } 
	{ weight_buf_3x3_V_5_d0 sc_out sc_lv 64 signal 10 } 
	{ weight_buf_3x3_V_6_address0 sc_out sc_lv 6 signal 11 } 
	{ weight_buf_3x3_V_6_ce0 sc_out sc_logic 1 signal 11 } 
	{ weight_buf_3x3_V_6_we0 sc_out sc_logic 1 signal 11 } 
	{ weight_buf_3x3_V_6_d0 sc_out sc_lv 64 signal 11 } 
	{ weight_buf_3x3_V_7_address0 sc_out sc_lv 6 signal 12 } 
	{ weight_buf_3x3_V_7_ce0 sc_out sc_logic 1 signal 12 } 
	{ weight_buf_3x3_V_7_we0 sc_out sc_logic 1 signal 12 } 
	{ weight_buf_3x3_V_7_d0 sc_out sc_lv 64 signal 12 } 
	{ weight_buf_3x3_V_8_address0 sc_out sc_lv 6 signal 13 } 
	{ weight_buf_3x3_V_8_ce0 sc_out sc_logic 1 signal 13 } 
	{ weight_buf_3x3_V_8_we0 sc_out sc_logic 1 signal 13 } 
	{ weight_buf_3x3_V_8_d0 sc_out sc_lv 64 signal 13 } 
	{ weight_buf_3x3_V_9_address0 sc_out sc_lv 6 signal 14 } 
	{ weight_buf_3x3_V_9_ce0 sc_out sc_logic 1 signal 14 } 
	{ weight_buf_3x3_V_9_we0 sc_out sc_logic 1 signal 14 } 
	{ weight_buf_3x3_V_9_d0 sc_out sc_lv 64 signal 14 } 
	{ weight_buf_3x3_V_10_address0 sc_out sc_lv 6 signal 15 } 
	{ weight_buf_3x3_V_10_ce0 sc_out sc_logic 1 signal 15 } 
	{ weight_buf_3x3_V_10_we0 sc_out sc_logic 1 signal 15 } 
	{ weight_buf_3x3_V_10_d0 sc_out sc_lv 64 signal 15 } 
	{ weight_buf_3x3_V_11_address0 sc_out sc_lv 6 signal 16 } 
	{ weight_buf_3x3_V_11_ce0 sc_out sc_logic 1 signal 16 } 
	{ weight_buf_3x3_V_11_we0 sc_out sc_logic 1 signal 16 } 
	{ weight_buf_3x3_V_11_d0 sc_out sc_lv 64 signal 16 } 
	{ weight_buf_3x3_V_12_address0 sc_out sc_lv 6 signal 17 } 
	{ weight_buf_3x3_V_12_ce0 sc_out sc_logic 1 signal 17 } 
	{ weight_buf_3x3_V_12_we0 sc_out sc_logic 1 signal 17 } 
	{ weight_buf_3x3_V_12_d0 sc_out sc_lv 64 signal 17 } 
	{ weight_buf_3x3_V_13_address0 sc_out sc_lv 6 signal 18 } 
	{ weight_buf_3x3_V_13_ce0 sc_out sc_logic 1 signal 18 } 
	{ weight_buf_3x3_V_13_we0 sc_out sc_logic 1 signal 18 } 
	{ weight_buf_3x3_V_13_d0 sc_out sc_lv 64 signal 18 } 
	{ weight_buf_3x3_V_14_address0 sc_out sc_lv 6 signal 19 } 
	{ weight_buf_3x3_V_14_ce0 sc_out sc_logic 1 signal 19 } 
	{ weight_buf_3x3_V_14_we0 sc_out sc_logic 1 signal 19 } 
	{ weight_buf_3x3_V_14_d0 sc_out sc_lv 64 signal 19 } 
	{ weight_buf_3x3_V_15_address0 sc_out sc_lv 6 signal 20 } 
	{ weight_buf_3x3_V_15_ce0 sc_out sc_logic 1 signal 20 } 
	{ weight_buf_3x3_V_15_we0 sc_out sc_logic 1 signal 20 } 
	{ weight_buf_3x3_V_15_d0 sc_out sc_lv 64 signal 20 } 
	{ weight_buf_3x3_V_16_address0 sc_out sc_lv 6 signal 21 } 
	{ weight_buf_3x3_V_16_ce0 sc_out sc_logic 1 signal 21 } 
	{ weight_buf_3x3_V_16_we0 sc_out sc_logic 1 signal 21 } 
	{ weight_buf_3x3_V_16_d0 sc_out sc_lv 64 signal 21 } 
	{ weight_buf_3x3_V_17_address0 sc_out sc_lv 6 signal 22 } 
	{ weight_buf_3x3_V_17_ce0 sc_out sc_logic 1 signal 22 } 
	{ weight_buf_3x3_V_17_we0 sc_out sc_logic 1 signal 22 } 
	{ weight_buf_3x3_V_17_d0 sc_out sc_lv 64 signal 22 } 
	{ weight_buf_3x3_V_18_address0 sc_out sc_lv 6 signal 23 } 
	{ weight_buf_3x3_V_18_ce0 sc_out sc_logic 1 signal 23 } 
	{ weight_buf_3x3_V_18_we0 sc_out sc_logic 1 signal 23 } 
	{ weight_buf_3x3_V_18_d0 sc_out sc_lv 64 signal 23 } 
	{ weight_buf_3x3_V_19_address0 sc_out sc_lv 6 signal 24 } 
	{ weight_buf_3x3_V_19_ce0 sc_out sc_logic 1 signal 24 } 
	{ weight_buf_3x3_V_19_we0 sc_out sc_logic 1 signal 24 } 
	{ weight_buf_3x3_V_19_d0 sc_out sc_lv 64 signal 24 } 
	{ weight_buf_3x3_V_20_address0 sc_out sc_lv 6 signal 25 } 
	{ weight_buf_3x3_V_20_ce0 sc_out sc_logic 1 signal 25 } 
	{ weight_buf_3x3_V_20_we0 sc_out sc_logic 1 signal 25 } 
	{ weight_buf_3x3_V_20_d0 sc_out sc_lv 64 signal 25 } 
	{ weight_buf_3x3_V_21_address0 sc_out sc_lv 6 signal 26 } 
	{ weight_buf_3x3_V_21_ce0 sc_out sc_logic 1 signal 26 } 
	{ weight_buf_3x3_V_21_we0 sc_out sc_logic 1 signal 26 } 
	{ weight_buf_3x3_V_21_d0 sc_out sc_lv 64 signal 26 } 
	{ weight_buf_3x3_V_22_address0 sc_out sc_lv 6 signal 27 } 
	{ weight_buf_3x3_V_22_ce0 sc_out sc_logic 1 signal 27 } 
	{ weight_buf_3x3_V_22_we0 sc_out sc_logic 1 signal 27 } 
	{ weight_buf_3x3_V_22_d0 sc_out sc_lv 64 signal 27 } 
	{ weight_buf_3x3_V_23_address0 sc_out sc_lv 6 signal 28 } 
	{ weight_buf_3x3_V_23_ce0 sc_out sc_logic 1 signal 28 } 
	{ weight_buf_3x3_V_23_we0 sc_out sc_logic 1 signal 28 } 
	{ weight_buf_3x3_V_23_d0 sc_out sc_lv 64 signal 28 } 
	{ weight_buf_3x3_V_24_address0 sc_out sc_lv 6 signal 29 } 
	{ weight_buf_3x3_V_24_ce0 sc_out sc_logic 1 signal 29 } 
	{ weight_buf_3x3_V_24_we0 sc_out sc_logic 1 signal 29 } 
	{ weight_buf_3x3_V_24_d0 sc_out sc_lv 64 signal 29 } 
	{ weight_buf_3x3_V_25_address0 sc_out sc_lv 6 signal 30 } 
	{ weight_buf_3x3_V_25_ce0 sc_out sc_logic 1 signal 30 } 
	{ weight_buf_3x3_V_25_we0 sc_out sc_logic 1 signal 30 } 
	{ weight_buf_3x3_V_25_d0 sc_out sc_lv 64 signal 30 } 
	{ weight_buf_3x3_V_26_address0 sc_out sc_lv 6 signal 31 } 
	{ weight_buf_3x3_V_26_ce0 sc_out sc_logic 1 signal 31 } 
	{ weight_buf_3x3_V_26_we0 sc_out sc_logic 1 signal 31 } 
	{ weight_buf_3x3_V_26_d0 sc_out sc_lv 64 signal 31 } 
	{ weight_buf_3x3_V_27_address0 sc_out sc_lv 6 signal 32 } 
	{ weight_buf_3x3_V_27_ce0 sc_out sc_logic 1 signal 32 } 
	{ weight_buf_3x3_V_27_we0 sc_out sc_logic 1 signal 32 } 
	{ weight_buf_3x3_V_27_d0 sc_out sc_lv 64 signal 32 } 
	{ weight_buf_3x3_V_28_address0 sc_out sc_lv 6 signal 33 } 
	{ weight_buf_3x3_V_28_ce0 sc_out sc_logic 1 signal 33 } 
	{ weight_buf_3x3_V_28_we0 sc_out sc_logic 1 signal 33 } 
	{ weight_buf_3x3_V_28_d0 sc_out sc_lv 64 signal 33 } 
	{ weight_buf_3x3_V_29_address0 sc_out sc_lv 6 signal 34 } 
	{ weight_buf_3x3_V_29_ce0 sc_out sc_logic 1 signal 34 } 
	{ weight_buf_3x3_V_29_we0 sc_out sc_logic 1 signal 34 } 
	{ weight_buf_3x3_V_29_d0 sc_out sc_lv 64 signal 34 } 
	{ weight_buf_3x3_V_30_address0 sc_out sc_lv 6 signal 35 } 
	{ weight_buf_3x3_V_30_ce0 sc_out sc_logic 1 signal 35 } 
	{ weight_buf_3x3_V_30_we0 sc_out sc_logic 1 signal 35 } 
	{ weight_buf_3x3_V_30_d0 sc_out sc_lv 64 signal 35 } 
	{ weight_buf_3x3_V_31_address0 sc_out sc_lv 6 signal 36 } 
	{ weight_buf_3x3_V_31_ce0 sc_out sc_logic 1 signal 36 } 
	{ weight_buf_3x3_V_31_we0 sc_out sc_logic 1 signal 36 } 
	{ weight_buf_3x3_V_31_d0 sc_out sc_lv 64 signal 36 } 
	{ relu_shiftx_buf_V_0_address0 sc_out sc_lv 1 signal 37 } 
	{ relu_shiftx_buf_V_0_ce0 sc_out sc_logic 1 signal 37 } 
	{ relu_shiftx_buf_V_0_we0 sc_out sc_logic 1 signal 37 } 
	{ relu_shiftx_buf_V_0_d0 sc_out sc_lv 11 signal 37 } 
	{ relu_shifty_buf_V_0_address0 sc_out sc_lv 1 signal 38 } 
	{ relu_shifty_buf_V_0_ce0 sc_out sc_logic 1 signal 38 } 
	{ relu_shifty_buf_V_0_we0 sc_out sc_logic 1 signal 38 } 
	{ relu_shifty_buf_V_0_d0 sc_out sc_lv 11 signal 38 } 
	{ relu_weight_buf_V_0_address0 sc_out sc_lv 1 signal 39 } 
	{ relu_weight_buf_V_0_ce0 sc_out sc_logic 1 signal 39 } 
	{ relu_weight_buf_V_0_we0 sc_out sc_logic 1 signal 39 } 
	{ relu_weight_buf_V_0_d0 sc_out sc_lv 11 signal 39 } 
	{ bn_weight_buf_V_0_address0 sc_out sc_lv 2 signal 40 } 
	{ bn_weight_buf_V_0_ce0 sc_out sc_logic 1 signal 40 } 
	{ bn_weight_buf_V_0_we0 sc_out sc_logic 1 signal 40 } 
	{ bn_weight_buf_V_0_d0 sc_out sc_lv 11 signal 40 } 
	{ bn_bias_buf_V_0_address0 sc_out sc_lv 2 signal 41 } 
	{ bn_bias_buf_V_0_ce0 sc_out sc_logic 1 signal 41 } 
	{ bn_bias_buf_V_0_we0 sc_out sc_logic 1 signal 41 } 
	{ bn_bias_buf_V_0_d0 sc_out sc_lv 11 signal 41 } 
	{ relu_shiftx_buf_V_1_address0 sc_out sc_lv 1 signal 42 } 
	{ relu_shiftx_buf_V_1_ce0 sc_out sc_logic 1 signal 42 } 
	{ relu_shiftx_buf_V_1_we0 sc_out sc_logic 1 signal 42 } 
	{ relu_shiftx_buf_V_1_d0 sc_out sc_lv 11 signal 42 } 
	{ relu_shifty_buf_V_1_address0 sc_out sc_lv 1 signal 43 } 
	{ relu_shifty_buf_V_1_ce0 sc_out sc_logic 1 signal 43 } 
	{ relu_shifty_buf_V_1_we0 sc_out sc_logic 1 signal 43 } 
	{ relu_shifty_buf_V_1_d0 sc_out sc_lv 11 signal 43 } 
	{ relu_weight_buf_V_1_address0 sc_out sc_lv 1 signal 44 } 
	{ relu_weight_buf_V_1_ce0 sc_out sc_logic 1 signal 44 } 
	{ relu_weight_buf_V_1_we0 sc_out sc_logic 1 signal 44 } 
	{ relu_weight_buf_V_1_d0 sc_out sc_lv 11 signal 44 } 
	{ bn_weight_buf_V_1_address0 sc_out sc_lv 2 signal 45 } 
	{ bn_weight_buf_V_1_ce0 sc_out sc_logic 1 signal 45 } 
	{ bn_weight_buf_V_1_we0 sc_out sc_logic 1 signal 45 } 
	{ bn_weight_buf_V_1_d0 sc_out sc_lv 11 signal 45 } 
	{ bn_bias_buf_V_1_address0 sc_out sc_lv 2 signal 46 } 
	{ bn_bias_buf_V_1_ce0 sc_out sc_logic 1 signal 46 } 
	{ bn_bias_buf_V_1_we0 sc_out sc_logic 1 signal 46 } 
	{ bn_bias_buf_V_1_d0 sc_out sc_lv 11 signal 46 } 
	{ relu_shiftx_buf_V_2_address0 sc_out sc_lv 1 signal 47 } 
	{ relu_shiftx_buf_V_2_ce0 sc_out sc_logic 1 signal 47 } 
	{ relu_shiftx_buf_V_2_we0 sc_out sc_logic 1 signal 47 } 
	{ relu_shiftx_buf_V_2_d0 sc_out sc_lv 11 signal 47 } 
	{ relu_shifty_buf_V_2_address0 sc_out sc_lv 1 signal 48 } 
	{ relu_shifty_buf_V_2_ce0 sc_out sc_logic 1 signal 48 } 
	{ relu_shifty_buf_V_2_we0 sc_out sc_logic 1 signal 48 } 
	{ relu_shifty_buf_V_2_d0 sc_out sc_lv 11 signal 48 } 
	{ relu_weight_buf_V_2_address0 sc_out sc_lv 1 signal 49 } 
	{ relu_weight_buf_V_2_ce0 sc_out sc_logic 1 signal 49 } 
	{ relu_weight_buf_V_2_we0 sc_out sc_logic 1 signal 49 } 
	{ relu_weight_buf_V_2_d0 sc_out sc_lv 11 signal 49 } 
	{ bn_weight_buf_V_2_address0 sc_out sc_lv 2 signal 50 } 
	{ bn_weight_buf_V_2_ce0 sc_out sc_logic 1 signal 50 } 
	{ bn_weight_buf_V_2_we0 sc_out sc_logic 1 signal 50 } 
	{ bn_weight_buf_V_2_d0 sc_out sc_lv 11 signal 50 } 
	{ bn_bias_buf_V_2_address0 sc_out sc_lv 2 signal 51 } 
	{ bn_bias_buf_V_2_ce0 sc_out sc_logic 1 signal 51 } 
	{ bn_bias_buf_V_2_we0 sc_out sc_logic 1 signal 51 } 
	{ bn_bias_buf_V_2_d0 sc_out sc_lv 11 signal 51 } 
	{ relu_shiftx_buf_V_3_address0 sc_out sc_lv 1 signal 52 } 
	{ relu_shiftx_buf_V_3_ce0 sc_out sc_logic 1 signal 52 } 
	{ relu_shiftx_buf_V_3_we0 sc_out sc_logic 1 signal 52 } 
	{ relu_shiftx_buf_V_3_d0 sc_out sc_lv 11 signal 52 } 
	{ relu_shifty_buf_V_3_address0 sc_out sc_lv 1 signal 53 } 
	{ relu_shifty_buf_V_3_ce0 sc_out sc_logic 1 signal 53 } 
	{ relu_shifty_buf_V_3_we0 sc_out sc_logic 1 signal 53 } 
	{ relu_shifty_buf_V_3_d0 sc_out sc_lv 11 signal 53 } 
	{ relu_weight_buf_V_3_address0 sc_out sc_lv 1 signal 54 } 
	{ relu_weight_buf_V_3_ce0 sc_out sc_logic 1 signal 54 } 
	{ relu_weight_buf_V_3_we0 sc_out sc_logic 1 signal 54 } 
	{ relu_weight_buf_V_3_d0 sc_out sc_lv 11 signal 54 } 
	{ bn_weight_buf_V_3_address0 sc_out sc_lv 2 signal 55 } 
	{ bn_weight_buf_V_3_ce0 sc_out sc_logic 1 signal 55 } 
	{ bn_weight_buf_V_3_we0 sc_out sc_logic 1 signal 55 } 
	{ bn_weight_buf_V_3_d0 sc_out sc_lv 11 signal 55 } 
	{ bn_bias_buf_V_3_address0 sc_out sc_lv 2 signal 56 } 
	{ bn_bias_buf_V_3_ce0 sc_out sc_logic 1 signal 56 } 
	{ bn_bias_buf_V_3_we0 sc_out sc_logic 1 signal 56 } 
	{ bn_bias_buf_V_3_d0 sc_out sc_lv 11 signal 56 } 
	{ relu_shiftx_buf_V_4_address0 sc_out sc_lv 1 signal 57 } 
	{ relu_shiftx_buf_V_4_ce0 sc_out sc_logic 1 signal 57 } 
	{ relu_shiftx_buf_V_4_we0 sc_out sc_logic 1 signal 57 } 
	{ relu_shiftx_buf_V_4_d0 sc_out sc_lv 11 signal 57 } 
	{ relu_shifty_buf_V_4_address0 sc_out sc_lv 1 signal 58 } 
	{ relu_shifty_buf_V_4_ce0 sc_out sc_logic 1 signal 58 } 
	{ relu_shifty_buf_V_4_we0 sc_out sc_logic 1 signal 58 } 
	{ relu_shifty_buf_V_4_d0 sc_out sc_lv 11 signal 58 } 
	{ relu_weight_buf_V_4_address0 sc_out sc_lv 1 signal 59 } 
	{ relu_weight_buf_V_4_ce0 sc_out sc_logic 1 signal 59 } 
	{ relu_weight_buf_V_4_we0 sc_out sc_logic 1 signal 59 } 
	{ relu_weight_buf_V_4_d0 sc_out sc_lv 11 signal 59 } 
	{ bn_weight_buf_V_4_address0 sc_out sc_lv 2 signal 60 } 
	{ bn_weight_buf_V_4_ce0 sc_out sc_logic 1 signal 60 } 
	{ bn_weight_buf_V_4_we0 sc_out sc_logic 1 signal 60 } 
	{ bn_weight_buf_V_4_d0 sc_out sc_lv 11 signal 60 } 
	{ bn_bias_buf_V_4_address0 sc_out sc_lv 2 signal 61 } 
	{ bn_bias_buf_V_4_ce0 sc_out sc_logic 1 signal 61 } 
	{ bn_bias_buf_V_4_we0 sc_out sc_logic 1 signal 61 } 
	{ bn_bias_buf_V_4_d0 sc_out sc_lv 11 signal 61 } 
	{ relu_shiftx_buf_V_5_address0 sc_out sc_lv 1 signal 62 } 
	{ relu_shiftx_buf_V_5_ce0 sc_out sc_logic 1 signal 62 } 
	{ relu_shiftx_buf_V_5_we0 sc_out sc_logic 1 signal 62 } 
	{ relu_shiftx_buf_V_5_d0 sc_out sc_lv 11 signal 62 } 
	{ relu_shifty_buf_V_5_address0 sc_out sc_lv 1 signal 63 } 
	{ relu_shifty_buf_V_5_ce0 sc_out sc_logic 1 signal 63 } 
	{ relu_shifty_buf_V_5_we0 sc_out sc_logic 1 signal 63 } 
	{ relu_shifty_buf_V_5_d0 sc_out sc_lv 11 signal 63 } 
	{ relu_weight_buf_V_5_address0 sc_out sc_lv 1 signal 64 } 
	{ relu_weight_buf_V_5_ce0 sc_out sc_logic 1 signal 64 } 
	{ relu_weight_buf_V_5_we0 sc_out sc_logic 1 signal 64 } 
	{ relu_weight_buf_V_5_d0 sc_out sc_lv 11 signal 64 } 
	{ bn_weight_buf_V_5_address0 sc_out sc_lv 2 signal 65 } 
	{ bn_weight_buf_V_5_ce0 sc_out sc_logic 1 signal 65 } 
	{ bn_weight_buf_V_5_we0 sc_out sc_logic 1 signal 65 } 
	{ bn_weight_buf_V_5_d0 sc_out sc_lv 11 signal 65 } 
	{ bn_bias_buf_V_5_address0 sc_out sc_lv 2 signal 66 } 
	{ bn_bias_buf_V_5_ce0 sc_out sc_logic 1 signal 66 } 
	{ bn_bias_buf_V_5_we0 sc_out sc_logic 1 signal 66 } 
	{ bn_bias_buf_V_5_d0 sc_out sc_lv 11 signal 66 } 
	{ relu_shiftx_buf_V_6_address0 sc_out sc_lv 1 signal 67 } 
	{ relu_shiftx_buf_V_6_ce0 sc_out sc_logic 1 signal 67 } 
	{ relu_shiftx_buf_V_6_we0 sc_out sc_logic 1 signal 67 } 
	{ relu_shiftx_buf_V_6_d0 sc_out sc_lv 11 signal 67 } 
	{ relu_shifty_buf_V_6_address0 sc_out sc_lv 1 signal 68 } 
	{ relu_shifty_buf_V_6_ce0 sc_out sc_logic 1 signal 68 } 
	{ relu_shifty_buf_V_6_we0 sc_out sc_logic 1 signal 68 } 
	{ relu_shifty_buf_V_6_d0 sc_out sc_lv 11 signal 68 } 
	{ relu_weight_buf_V_6_address0 sc_out sc_lv 1 signal 69 } 
	{ relu_weight_buf_V_6_ce0 sc_out sc_logic 1 signal 69 } 
	{ relu_weight_buf_V_6_we0 sc_out sc_logic 1 signal 69 } 
	{ relu_weight_buf_V_6_d0 sc_out sc_lv 11 signal 69 } 
	{ bn_weight_buf_V_6_address0 sc_out sc_lv 2 signal 70 } 
	{ bn_weight_buf_V_6_ce0 sc_out sc_logic 1 signal 70 } 
	{ bn_weight_buf_V_6_we0 sc_out sc_logic 1 signal 70 } 
	{ bn_weight_buf_V_6_d0 sc_out sc_lv 11 signal 70 } 
	{ bn_bias_buf_V_6_address0 sc_out sc_lv 2 signal 71 } 
	{ bn_bias_buf_V_6_ce0 sc_out sc_logic 1 signal 71 } 
	{ bn_bias_buf_V_6_we0 sc_out sc_logic 1 signal 71 } 
	{ bn_bias_buf_V_6_d0 sc_out sc_lv 11 signal 71 } 
	{ relu_shiftx_buf_V_7_address0 sc_out sc_lv 1 signal 72 } 
	{ relu_shiftx_buf_V_7_ce0 sc_out sc_logic 1 signal 72 } 
	{ relu_shiftx_buf_V_7_we0 sc_out sc_logic 1 signal 72 } 
	{ relu_shiftx_buf_V_7_d0 sc_out sc_lv 11 signal 72 } 
	{ relu_shifty_buf_V_7_address0 sc_out sc_lv 1 signal 73 } 
	{ relu_shifty_buf_V_7_ce0 sc_out sc_logic 1 signal 73 } 
	{ relu_shifty_buf_V_7_we0 sc_out sc_logic 1 signal 73 } 
	{ relu_shifty_buf_V_7_d0 sc_out sc_lv 11 signal 73 } 
	{ relu_weight_buf_V_7_address0 sc_out sc_lv 1 signal 74 } 
	{ relu_weight_buf_V_7_ce0 sc_out sc_logic 1 signal 74 } 
	{ relu_weight_buf_V_7_we0 sc_out sc_logic 1 signal 74 } 
	{ relu_weight_buf_V_7_d0 sc_out sc_lv 11 signal 74 } 
	{ bn_weight_buf_V_7_address0 sc_out sc_lv 2 signal 75 } 
	{ bn_weight_buf_V_7_ce0 sc_out sc_logic 1 signal 75 } 
	{ bn_weight_buf_V_7_we0 sc_out sc_logic 1 signal 75 } 
	{ bn_weight_buf_V_7_d0 sc_out sc_lv 11 signal 75 } 
	{ bn_bias_buf_V_7_address0 sc_out sc_lv 2 signal 76 } 
	{ bn_bias_buf_V_7_ce0 sc_out sc_logic 1 signal 76 } 
	{ bn_bias_buf_V_7_we0 sc_out sc_logic 1 signal 76 } 
	{ bn_bias_buf_V_7_d0 sc_out sc_lv 11 signal 76 } 
	{ relu_shiftx_buf_V_8_address0 sc_out sc_lv 1 signal 77 } 
	{ relu_shiftx_buf_V_8_ce0 sc_out sc_logic 1 signal 77 } 
	{ relu_shiftx_buf_V_8_we0 sc_out sc_logic 1 signal 77 } 
	{ relu_shiftx_buf_V_8_d0 sc_out sc_lv 11 signal 77 } 
	{ relu_shifty_buf_V_8_address0 sc_out sc_lv 1 signal 78 } 
	{ relu_shifty_buf_V_8_ce0 sc_out sc_logic 1 signal 78 } 
	{ relu_shifty_buf_V_8_we0 sc_out sc_logic 1 signal 78 } 
	{ relu_shifty_buf_V_8_d0 sc_out sc_lv 11 signal 78 } 
	{ relu_weight_buf_V_8_address0 sc_out sc_lv 1 signal 79 } 
	{ relu_weight_buf_V_8_ce0 sc_out sc_logic 1 signal 79 } 
	{ relu_weight_buf_V_8_we0 sc_out sc_logic 1 signal 79 } 
	{ relu_weight_buf_V_8_d0 sc_out sc_lv 11 signal 79 } 
	{ bn_weight_buf_V_8_address0 sc_out sc_lv 2 signal 80 } 
	{ bn_weight_buf_V_8_ce0 sc_out sc_logic 1 signal 80 } 
	{ bn_weight_buf_V_8_we0 sc_out sc_logic 1 signal 80 } 
	{ bn_weight_buf_V_8_d0 sc_out sc_lv 11 signal 80 } 
	{ bn_bias_buf_V_8_address0 sc_out sc_lv 2 signal 81 } 
	{ bn_bias_buf_V_8_ce0 sc_out sc_logic 1 signal 81 } 
	{ bn_bias_buf_V_8_we0 sc_out sc_logic 1 signal 81 } 
	{ bn_bias_buf_V_8_d0 sc_out sc_lv 11 signal 81 } 
	{ relu_shiftx_buf_V_9_address0 sc_out sc_lv 1 signal 82 } 
	{ relu_shiftx_buf_V_9_ce0 sc_out sc_logic 1 signal 82 } 
	{ relu_shiftx_buf_V_9_we0 sc_out sc_logic 1 signal 82 } 
	{ relu_shiftx_buf_V_9_d0 sc_out sc_lv 11 signal 82 } 
	{ relu_shifty_buf_V_9_address0 sc_out sc_lv 1 signal 83 } 
	{ relu_shifty_buf_V_9_ce0 sc_out sc_logic 1 signal 83 } 
	{ relu_shifty_buf_V_9_we0 sc_out sc_logic 1 signal 83 } 
	{ relu_shifty_buf_V_9_d0 sc_out sc_lv 11 signal 83 } 
	{ relu_weight_buf_V_9_address0 sc_out sc_lv 1 signal 84 } 
	{ relu_weight_buf_V_9_ce0 sc_out sc_logic 1 signal 84 } 
	{ relu_weight_buf_V_9_we0 sc_out sc_logic 1 signal 84 } 
	{ relu_weight_buf_V_9_d0 sc_out sc_lv 11 signal 84 } 
	{ bn_weight_buf_V_9_address0 sc_out sc_lv 2 signal 85 } 
	{ bn_weight_buf_V_9_ce0 sc_out sc_logic 1 signal 85 } 
	{ bn_weight_buf_V_9_we0 sc_out sc_logic 1 signal 85 } 
	{ bn_weight_buf_V_9_d0 sc_out sc_lv 11 signal 85 } 
	{ bn_bias_buf_V_9_address0 sc_out sc_lv 2 signal 86 } 
	{ bn_bias_buf_V_9_ce0 sc_out sc_logic 1 signal 86 } 
	{ bn_bias_buf_V_9_we0 sc_out sc_logic 1 signal 86 } 
	{ bn_bias_buf_V_9_d0 sc_out sc_lv 11 signal 86 } 
	{ relu_shiftx_buf_V_10_address0 sc_out sc_lv 1 signal 87 } 
	{ relu_shiftx_buf_V_10_ce0 sc_out sc_logic 1 signal 87 } 
	{ relu_shiftx_buf_V_10_we0 sc_out sc_logic 1 signal 87 } 
	{ relu_shiftx_buf_V_10_d0 sc_out sc_lv 11 signal 87 } 
	{ relu_shifty_buf_V_10_address0 sc_out sc_lv 1 signal 88 } 
	{ relu_shifty_buf_V_10_ce0 sc_out sc_logic 1 signal 88 } 
	{ relu_shifty_buf_V_10_we0 sc_out sc_logic 1 signal 88 } 
	{ relu_shifty_buf_V_10_d0 sc_out sc_lv 11 signal 88 } 
	{ relu_weight_buf_V_10_address0 sc_out sc_lv 1 signal 89 } 
	{ relu_weight_buf_V_10_ce0 sc_out sc_logic 1 signal 89 } 
	{ relu_weight_buf_V_10_we0 sc_out sc_logic 1 signal 89 } 
	{ relu_weight_buf_V_10_d0 sc_out sc_lv 11 signal 89 } 
	{ bn_weight_buf_V_10_address0 sc_out sc_lv 2 signal 90 } 
	{ bn_weight_buf_V_10_ce0 sc_out sc_logic 1 signal 90 } 
	{ bn_weight_buf_V_10_we0 sc_out sc_logic 1 signal 90 } 
	{ bn_weight_buf_V_10_d0 sc_out sc_lv 11 signal 90 } 
	{ bn_bias_buf_V_10_address0 sc_out sc_lv 2 signal 91 } 
	{ bn_bias_buf_V_10_ce0 sc_out sc_logic 1 signal 91 } 
	{ bn_bias_buf_V_10_we0 sc_out sc_logic 1 signal 91 } 
	{ bn_bias_buf_V_10_d0 sc_out sc_lv 11 signal 91 } 
	{ relu_shiftx_buf_V_11_address0 sc_out sc_lv 1 signal 92 } 
	{ relu_shiftx_buf_V_11_ce0 sc_out sc_logic 1 signal 92 } 
	{ relu_shiftx_buf_V_11_we0 sc_out sc_logic 1 signal 92 } 
	{ relu_shiftx_buf_V_11_d0 sc_out sc_lv 11 signal 92 } 
	{ relu_shifty_buf_V_11_address0 sc_out sc_lv 1 signal 93 } 
	{ relu_shifty_buf_V_11_ce0 sc_out sc_logic 1 signal 93 } 
	{ relu_shifty_buf_V_11_we0 sc_out sc_logic 1 signal 93 } 
	{ relu_shifty_buf_V_11_d0 sc_out sc_lv 11 signal 93 } 
	{ relu_weight_buf_V_11_address0 sc_out sc_lv 1 signal 94 } 
	{ relu_weight_buf_V_11_ce0 sc_out sc_logic 1 signal 94 } 
	{ relu_weight_buf_V_11_we0 sc_out sc_logic 1 signal 94 } 
	{ relu_weight_buf_V_11_d0 sc_out sc_lv 11 signal 94 } 
	{ bn_weight_buf_V_11_address0 sc_out sc_lv 2 signal 95 } 
	{ bn_weight_buf_V_11_ce0 sc_out sc_logic 1 signal 95 } 
	{ bn_weight_buf_V_11_we0 sc_out sc_logic 1 signal 95 } 
	{ bn_weight_buf_V_11_d0 sc_out sc_lv 11 signal 95 } 
	{ bn_bias_buf_V_11_address0 sc_out sc_lv 2 signal 96 } 
	{ bn_bias_buf_V_11_ce0 sc_out sc_logic 1 signal 96 } 
	{ bn_bias_buf_V_11_we0 sc_out sc_logic 1 signal 96 } 
	{ bn_bias_buf_V_11_d0 sc_out sc_lv 11 signal 96 } 
	{ relu_shiftx_buf_V_12_address0 sc_out sc_lv 1 signal 97 } 
	{ relu_shiftx_buf_V_12_ce0 sc_out sc_logic 1 signal 97 } 
	{ relu_shiftx_buf_V_12_we0 sc_out sc_logic 1 signal 97 } 
	{ relu_shiftx_buf_V_12_d0 sc_out sc_lv 11 signal 97 } 
	{ relu_shifty_buf_V_12_address0 sc_out sc_lv 1 signal 98 } 
	{ relu_shifty_buf_V_12_ce0 sc_out sc_logic 1 signal 98 } 
	{ relu_shifty_buf_V_12_we0 sc_out sc_logic 1 signal 98 } 
	{ relu_shifty_buf_V_12_d0 sc_out sc_lv 11 signal 98 } 
	{ relu_weight_buf_V_12_address0 sc_out sc_lv 1 signal 99 } 
	{ relu_weight_buf_V_12_ce0 sc_out sc_logic 1 signal 99 } 
	{ relu_weight_buf_V_12_we0 sc_out sc_logic 1 signal 99 } 
	{ relu_weight_buf_V_12_d0 sc_out sc_lv 11 signal 99 } 
	{ bn_weight_buf_V_12_address0 sc_out sc_lv 2 signal 100 } 
	{ bn_weight_buf_V_12_ce0 sc_out sc_logic 1 signal 100 } 
	{ bn_weight_buf_V_12_we0 sc_out sc_logic 1 signal 100 } 
	{ bn_weight_buf_V_12_d0 sc_out sc_lv 11 signal 100 } 
	{ bn_bias_buf_V_12_address0 sc_out sc_lv 2 signal 101 } 
	{ bn_bias_buf_V_12_ce0 sc_out sc_logic 1 signal 101 } 
	{ bn_bias_buf_V_12_we0 sc_out sc_logic 1 signal 101 } 
	{ bn_bias_buf_V_12_d0 sc_out sc_lv 11 signal 101 } 
	{ relu_shiftx_buf_V_13_address0 sc_out sc_lv 1 signal 102 } 
	{ relu_shiftx_buf_V_13_ce0 sc_out sc_logic 1 signal 102 } 
	{ relu_shiftx_buf_V_13_we0 sc_out sc_logic 1 signal 102 } 
	{ relu_shiftx_buf_V_13_d0 sc_out sc_lv 11 signal 102 } 
	{ relu_shifty_buf_V_13_address0 sc_out sc_lv 1 signal 103 } 
	{ relu_shifty_buf_V_13_ce0 sc_out sc_logic 1 signal 103 } 
	{ relu_shifty_buf_V_13_we0 sc_out sc_logic 1 signal 103 } 
	{ relu_shifty_buf_V_13_d0 sc_out sc_lv 11 signal 103 } 
	{ relu_weight_buf_V_13_address0 sc_out sc_lv 1 signal 104 } 
	{ relu_weight_buf_V_13_ce0 sc_out sc_logic 1 signal 104 } 
	{ relu_weight_buf_V_13_we0 sc_out sc_logic 1 signal 104 } 
	{ relu_weight_buf_V_13_d0 sc_out sc_lv 11 signal 104 } 
	{ bn_weight_buf_V_13_address0 sc_out sc_lv 2 signal 105 } 
	{ bn_weight_buf_V_13_ce0 sc_out sc_logic 1 signal 105 } 
	{ bn_weight_buf_V_13_we0 sc_out sc_logic 1 signal 105 } 
	{ bn_weight_buf_V_13_d0 sc_out sc_lv 11 signal 105 } 
	{ bn_bias_buf_V_13_address0 sc_out sc_lv 2 signal 106 } 
	{ bn_bias_buf_V_13_ce0 sc_out sc_logic 1 signal 106 } 
	{ bn_bias_buf_V_13_we0 sc_out sc_logic 1 signal 106 } 
	{ bn_bias_buf_V_13_d0 sc_out sc_lv 11 signal 106 } 
	{ relu_shiftx_buf_V_14_address0 sc_out sc_lv 1 signal 107 } 
	{ relu_shiftx_buf_V_14_ce0 sc_out sc_logic 1 signal 107 } 
	{ relu_shiftx_buf_V_14_we0 sc_out sc_logic 1 signal 107 } 
	{ relu_shiftx_buf_V_14_d0 sc_out sc_lv 11 signal 107 } 
	{ relu_shifty_buf_V_14_address0 sc_out sc_lv 1 signal 108 } 
	{ relu_shifty_buf_V_14_ce0 sc_out sc_logic 1 signal 108 } 
	{ relu_shifty_buf_V_14_we0 sc_out sc_logic 1 signal 108 } 
	{ relu_shifty_buf_V_14_d0 sc_out sc_lv 11 signal 108 } 
	{ relu_weight_buf_V_14_address0 sc_out sc_lv 1 signal 109 } 
	{ relu_weight_buf_V_14_ce0 sc_out sc_logic 1 signal 109 } 
	{ relu_weight_buf_V_14_we0 sc_out sc_logic 1 signal 109 } 
	{ relu_weight_buf_V_14_d0 sc_out sc_lv 11 signal 109 } 
	{ bn_weight_buf_V_14_address0 sc_out sc_lv 2 signal 110 } 
	{ bn_weight_buf_V_14_ce0 sc_out sc_logic 1 signal 110 } 
	{ bn_weight_buf_V_14_we0 sc_out sc_logic 1 signal 110 } 
	{ bn_weight_buf_V_14_d0 sc_out sc_lv 11 signal 110 } 
	{ bn_bias_buf_V_14_address0 sc_out sc_lv 2 signal 111 } 
	{ bn_bias_buf_V_14_ce0 sc_out sc_logic 1 signal 111 } 
	{ bn_bias_buf_V_14_we0 sc_out sc_logic 1 signal 111 } 
	{ bn_bias_buf_V_14_d0 sc_out sc_lv 11 signal 111 } 
	{ relu_shiftx_buf_V_15_address0 sc_out sc_lv 1 signal 112 } 
	{ relu_shiftx_buf_V_15_ce0 sc_out sc_logic 1 signal 112 } 
	{ relu_shiftx_buf_V_15_we0 sc_out sc_logic 1 signal 112 } 
	{ relu_shiftx_buf_V_15_d0 sc_out sc_lv 11 signal 112 } 
	{ relu_shifty_buf_V_15_address0 sc_out sc_lv 1 signal 113 } 
	{ relu_shifty_buf_V_15_ce0 sc_out sc_logic 1 signal 113 } 
	{ relu_shifty_buf_V_15_we0 sc_out sc_logic 1 signal 113 } 
	{ relu_shifty_buf_V_15_d0 sc_out sc_lv 11 signal 113 } 
	{ relu_weight_buf_V_15_address0 sc_out sc_lv 1 signal 114 } 
	{ relu_weight_buf_V_15_ce0 sc_out sc_logic 1 signal 114 } 
	{ relu_weight_buf_V_15_we0 sc_out sc_logic 1 signal 114 } 
	{ relu_weight_buf_V_15_d0 sc_out sc_lv 11 signal 114 } 
	{ bn_weight_buf_V_15_address0 sc_out sc_lv 2 signal 115 } 
	{ bn_weight_buf_V_15_ce0 sc_out sc_logic 1 signal 115 } 
	{ bn_weight_buf_V_15_we0 sc_out sc_logic 1 signal 115 } 
	{ bn_weight_buf_V_15_d0 sc_out sc_lv 11 signal 115 } 
	{ bn_bias_buf_V_15_address0 sc_out sc_lv 2 signal 116 } 
	{ bn_bias_buf_V_15_ce0 sc_out sc_logic 1 signal 116 } 
	{ bn_bias_buf_V_15_we0 sc_out sc_logic 1 signal 116 } 
	{ bn_bias_buf_V_15_d0 sc_out sc_lv 11 signal 116 } 
	{ relu_shiftx_buf_V_16_address0 sc_out sc_lv 1 signal 117 } 
	{ relu_shiftx_buf_V_16_ce0 sc_out sc_logic 1 signal 117 } 
	{ relu_shiftx_buf_V_16_we0 sc_out sc_logic 1 signal 117 } 
	{ relu_shiftx_buf_V_16_d0 sc_out sc_lv 11 signal 117 } 
	{ relu_shifty_buf_V_16_address0 sc_out sc_lv 1 signal 118 } 
	{ relu_shifty_buf_V_16_ce0 sc_out sc_logic 1 signal 118 } 
	{ relu_shifty_buf_V_16_we0 sc_out sc_logic 1 signal 118 } 
	{ relu_shifty_buf_V_16_d0 sc_out sc_lv 11 signal 118 } 
	{ relu_weight_buf_V_16_address0 sc_out sc_lv 1 signal 119 } 
	{ relu_weight_buf_V_16_ce0 sc_out sc_logic 1 signal 119 } 
	{ relu_weight_buf_V_16_we0 sc_out sc_logic 1 signal 119 } 
	{ relu_weight_buf_V_16_d0 sc_out sc_lv 11 signal 119 } 
	{ bn_weight_buf_V_16_address0 sc_out sc_lv 2 signal 120 } 
	{ bn_weight_buf_V_16_ce0 sc_out sc_logic 1 signal 120 } 
	{ bn_weight_buf_V_16_we0 sc_out sc_logic 1 signal 120 } 
	{ bn_weight_buf_V_16_d0 sc_out sc_lv 11 signal 120 } 
	{ bn_bias_buf_V_16_address0 sc_out sc_lv 2 signal 121 } 
	{ bn_bias_buf_V_16_ce0 sc_out sc_logic 1 signal 121 } 
	{ bn_bias_buf_V_16_we0 sc_out sc_logic 1 signal 121 } 
	{ bn_bias_buf_V_16_d0 sc_out sc_lv 11 signal 121 } 
	{ relu_shiftx_buf_V_17_address0 sc_out sc_lv 1 signal 122 } 
	{ relu_shiftx_buf_V_17_ce0 sc_out sc_logic 1 signal 122 } 
	{ relu_shiftx_buf_V_17_we0 sc_out sc_logic 1 signal 122 } 
	{ relu_shiftx_buf_V_17_d0 sc_out sc_lv 11 signal 122 } 
	{ relu_shifty_buf_V_17_address0 sc_out sc_lv 1 signal 123 } 
	{ relu_shifty_buf_V_17_ce0 sc_out sc_logic 1 signal 123 } 
	{ relu_shifty_buf_V_17_we0 sc_out sc_logic 1 signal 123 } 
	{ relu_shifty_buf_V_17_d0 sc_out sc_lv 11 signal 123 } 
	{ relu_weight_buf_V_17_address0 sc_out sc_lv 1 signal 124 } 
	{ relu_weight_buf_V_17_ce0 sc_out sc_logic 1 signal 124 } 
	{ relu_weight_buf_V_17_we0 sc_out sc_logic 1 signal 124 } 
	{ relu_weight_buf_V_17_d0 sc_out sc_lv 11 signal 124 } 
	{ bn_weight_buf_V_17_address0 sc_out sc_lv 2 signal 125 } 
	{ bn_weight_buf_V_17_ce0 sc_out sc_logic 1 signal 125 } 
	{ bn_weight_buf_V_17_we0 sc_out sc_logic 1 signal 125 } 
	{ bn_weight_buf_V_17_d0 sc_out sc_lv 11 signal 125 } 
	{ bn_bias_buf_V_17_address0 sc_out sc_lv 2 signal 126 } 
	{ bn_bias_buf_V_17_ce0 sc_out sc_logic 1 signal 126 } 
	{ bn_bias_buf_V_17_we0 sc_out sc_logic 1 signal 126 } 
	{ bn_bias_buf_V_17_d0 sc_out sc_lv 11 signal 126 } 
	{ relu_shiftx_buf_V_18_address0 sc_out sc_lv 1 signal 127 } 
	{ relu_shiftx_buf_V_18_ce0 sc_out sc_logic 1 signal 127 } 
	{ relu_shiftx_buf_V_18_we0 sc_out sc_logic 1 signal 127 } 
	{ relu_shiftx_buf_V_18_d0 sc_out sc_lv 11 signal 127 } 
	{ relu_shifty_buf_V_18_address0 sc_out sc_lv 1 signal 128 } 
	{ relu_shifty_buf_V_18_ce0 sc_out sc_logic 1 signal 128 } 
	{ relu_shifty_buf_V_18_we0 sc_out sc_logic 1 signal 128 } 
	{ relu_shifty_buf_V_18_d0 sc_out sc_lv 11 signal 128 } 
	{ relu_weight_buf_V_18_address0 sc_out sc_lv 1 signal 129 } 
	{ relu_weight_buf_V_18_ce0 sc_out sc_logic 1 signal 129 } 
	{ relu_weight_buf_V_18_we0 sc_out sc_logic 1 signal 129 } 
	{ relu_weight_buf_V_18_d0 sc_out sc_lv 11 signal 129 } 
	{ bn_weight_buf_V_18_address0 sc_out sc_lv 2 signal 130 } 
	{ bn_weight_buf_V_18_ce0 sc_out sc_logic 1 signal 130 } 
	{ bn_weight_buf_V_18_we0 sc_out sc_logic 1 signal 130 } 
	{ bn_weight_buf_V_18_d0 sc_out sc_lv 11 signal 130 } 
	{ bn_bias_buf_V_18_address0 sc_out sc_lv 2 signal 131 } 
	{ bn_bias_buf_V_18_ce0 sc_out sc_logic 1 signal 131 } 
	{ bn_bias_buf_V_18_we0 sc_out sc_logic 1 signal 131 } 
	{ bn_bias_buf_V_18_d0 sc_out sc_lv 11 signal 131 } 
	{ relu_shiftx_buf_V_19_address0 sc_out sc_lv 1 signal 132 } 
	{ relu_shiftx_buf_V_19_ce0 sc_out sc_logic 1 signal 132 } 
	{ relu_shiftx_buf_V_19_we0 sc_out sc_logic 1 signal 132 } 
	{ relu_shiftx_buf_V_19_d0 sc_out sc_lv 11 signal 132 } 
	{ relu_shifty_buf_V_19_address0 sc_out sc_lv 1 signal 133 } 
	{ relu_shifty_buf_V_19_ce0 sc_out sc_logic 1 signal 133 } 
	{ relu_shifty_buf_V_19_we0 sc_out sc_logic 1 signal 133 } 
	{ relu_shifty_buf_V_19_d0 sc_out sc_lv 11 signal 133 } 
	{ relu_weight_buf_V_19_address0 sc_out sc_lv 1 signal 134 } 
	{ relu_weight_buf_V_19_ce0 sc_out sc_logic 1 signal 134 } 
	{ relu_weight_buf_V_19_we0 sc_out sc_logic 1 signal 134 } 
	{ relu_weight_buf_V_19_d0 sc_out sc_lv 11 signal 134 } 
	{ bn_weight_buf_V_19_address0 sc_out sc_lv 2 signal 135 } 
	{ bn_weight_buf_V_19_ce0 sc_out sc_logic 1 signal 135 } 
	{ bn_weight_buf_V_19_we0 sc_out sc_logic 1 signal 135 } 
	{ bn_weight_buf_V_19_d0 sc_out sc_lv 11 signal 135 } 
	{ bn_bias_buf_V_19_address0 sc_out sc_lv 2 signal 136 } 
	{ bn_bias_buf_V_19_ce0 sc_out sc_logic 1 signal 136 } 
	{ bn_bias_buf_V_19_we0 sc_out sc_logic 1 signal 136 } 
	{ bn_bias_buf_V_19_d0 sc_out sc_lv 11 signal 136 } 
	{ relu_shiftx_buf_V_20_address0 sc_out sc_lv 1 signal 137 } 
	{ relu_shiftx_buf_V_20_ce0 sc_out sc_logic 1 signal 137 } 
	{ relu_shiftx_buf_V_20_we0 sc_out sc_logic 1 signal 137 } 
	{ relu_shiftx_buf_V_20_d0 sc_out sc_lv 11 signal 137 } 
	{ relu_shifty_buf_V_20_address0 sc_out sc_lv 1 signal 138 } 
	{ relu_shifty_buf_V_20_ce0 sc_out sc_logic 1 signal 138 } 
	{ relu_shifty_buf_V_20_we0 sc_out sc_logic 1 signal 138 } 
	{ relu_shifty_buf_V_20_d0 sc_out sc_lv 11 signal 138 } 
	{ relu_weight_buf_V_20_address0 sc_out sc_lv 1 signal 139 } 
	{ relu_weight_buf_V_20_ce0 sc_out sc_logic 1 signal 139 } 
	{ relu_weight_buf_V_20_we0 sc_out sc_logic 1 signal 139 } 
	{ relu_weight_buf_V_20_d0 sc_out sc_lv 11 signal 139 } 
	{ bn_weight_buf_V_20_address0 sc_out sc_lv 2 signal 140 } 
	{ bn_weight_buf_V_20_ce0 sc_out sc_logic 1 signal 140 } 
	{ bn_weight_buf_V_20_we0 sc_out sc_logic 1 signal 140 } 
	{ bn_weight_buf_V_20_d0 sc_out sc_lv 11 signal 140 } 
	{ bn_bias_buf_V_20_address0 sc_out sc_lv 2 signal 141 } 
	{ bn_bias_buf_V_20_ce0 sc_out sc_logic 1 signal 141 } 
	{ bn_bias_buf_V_20_we0 sc_out sc_logic 1 signal 141 } 
	{ bn_bias_buf_V_20_d0 sc_out sc_lv 11 signal 141 } 
	{ relu_shiftx_buf_V_21_address0 sc_out sc_lv 1 signal 142 } 
	{ relu_shiftx_buf_V_21_ce0 sc_out sc_logic 1 signal 142 } 
	{ relu_shiftx_buf_V_21_we0 sc_out sc_logic 1 signal 142 } 
	{ relu_shiftx_buf_V_21_d0 sc_out sc_lv 11 signal 142 } 
	{ relu_shifty_buf_V_21_address0 sc_out sc_lv 1 signal 143 } 
	{ relu_shifty_buf_V_21_ce0 sc_out sc_logic 1 signal 143 } 
	{ relu_shifty_buf_V_21_we0 sc_out sc_logic 1 signal 143 } 
	{ relu_shifty_buf_V_21_d0 sc_out sc_lv 11 signal 143 } 
	{ relu_weight_buf_V_21_address0 sc_out sc_lv 1 signal 144 } 
	{ relu_weight_buf_V_21_ce0 sc_out sc_logic 1 signal 144 } 
	{ relu_weight_buf_V_21_we0 sc_out sc_logic 1 signal 144 } 
	{ relu_weight_buf_V_21_d0 sc_out sc_lv 11 signal 144 } 
	{ bn_weight_buf_V_21_address0 sc_out sc_lv 2 signal 145 } 
	{ bn_weight_buf_V_21_ce0 sc_out sc_logic 1 signal 145 } 
	{ bn_weight_buf_V_21_we0 sc_out sc_logic 1 signal 145 } 
	{ bn_weight_buf_V_21_d0 sc_out sc_lv 11 signal 145 } 
	{ bn_bias_buf_V_21_address0 sc_out sc_lv 2 signal 146 } 
	{ bn_bias_buf_V_21_ce0 sc_out sc_logic 1 signal 146 } 
	{ bn_bias_buf_V_21_we0 sc_out sc_logic 1 signal 146 } 
	{ bn_bias_buf_V_21_d0 sc_out sc_lv 11 signal 146 } 
	{ relu_shiftx_buf_V_22_address0 sc_out sc_lv 1 signal 147 } 
	{ relu_shiftx_buf_V_22_ce0 sc_out sc_logic 1 signal 147 } 
	{ relu_shiftx_buf_V_22_we0 sc_out sc_logic 1 signal 147 } 
	{ relu_shiftx_buf_V_22_d0 sc_out sc_lv 11 signal 147 } 
	{ relu_shifty_buf_V_22_address0 sc_out sc_lv 1 signal 148 } 
	{ relu_shifty_buf_V_22_ce0 sc_out sc_logic 1 signal 148 } 
	{ relu_shifty_buf_V_22_we0 sc_out sc_logic 1 signal 148 } 
	{ relu_shifty_buf_V_22_d0 sc_out sc_lv 11 signal 148 } 
	{ relu_weight_buf_V_22_address0 sc_out sc_lv 1 signal 149 } 
	{ relu_weight_buf_V_22_ce0 sc_out sc_logic 1 signal 149 } 
	{ relu_weight_buf_V_22_we0 sc_out sc_logic 1 signal 149 } 
	{ relu_weight_buf_V_22_d0 sc_out sc_lv 11 signal 149 } 
	{ bn_weight_buf_V_22_address0 sc_out sc_lv 2 signal 150 } 
	{ bn_weight_buf_V_22_ce0 sc_out sc_logic 1 signal 150 } 
	{ bn_weight_buf_V_22_we0 sc_out sc_logic 1 signal 150 } 
	{ bn_weight_buf_V_22_d0 sc_out sc_lv 11 signal 150 } 
	{ bn_bias_buf_V_22_address0 sc_out sc_lv 2 signal 151 } 
	{ bn_bias_buf_V_22_ce0 sc_out sc_logic 1 signal 151 } 
	{ bn_bias_buf_V_22_we0 sc_out sc_logic 1 signal 151 } 
	{ bn_bias_buf_V_22_d0 sc_out sc_lv 11 signal 151 } 
	{ relu_shiftx_buf_V_23_address0 sc_out sc_lv 1 signal 152 } 
	{ relu_shiftx_buf_V_23_ce0 sc_out sc_logic 1 signal 152 } 
	{ relu_shiftx_buf_V_23_we0 sc_out sc_logic 1 signal 152 } 
	{ relu_shiftx_buf_V_23_d0 sc_out sc_lv 11 signal 152 } 
	{ relu_shifty_buf_V_23_address0 sc_out sc_lv 1 signal 153 } 
	{ relu_shifty_buf_V_23_ce0 sc_out sc_logic 1 signal 153 } 
	{ relu_shifty_buf_V_23_we0 sc_out sc_logic 1 signal 153 } 
	{ relu_shifty_buf_V_23_d0 sc_out sc_lv 11 signal 153 } 
	{ relu_weight_buf_V_23_address0 sc_out sc_lv 1 signal 154 } 
	{ relu_weight_buf_V_23_ce0 sc_out sc_logic 1 signal 154 } 
	{ relu_weight_buf_V_23_we0 sc_out sc_logic 1 signal 154 } 
	{ relu_weight_buf_V_23_d0 sc_out sc_lv 11 signal 154 } 
	{ bn_weight_buf_V_23_address0 sc_out sc_lv 2 signal 155 } 
	{ bn_weight_buf_V_23_ce0 sc_out sc_logic 1 signal 155 } 
	{ bn_weight_buf_V_23_we0 sc_out sc_logic 1 signal 155 } 
	{ bn_weight_buf_V_23_d0 sc_out sc_lv 11 signal 155 } 
	{ bn_bias_buf_V_23_address0 sc_out sc_lv 2 signal 156 } 
	{ bn_bias_buf_V_23_ce0 sc_out sc_logic 1 signal 156 } 
	{ bn_bias_buf_V_23_we0 sc_out sc_logic 1 signal 156 } 
	{ bn_bias_buf_V_23_d0 sc_out sc_lv 11 signal 156 } 
	{ relu_shiftx_buf_V_24_address0 sc_out sc_lv 1 signal 157 } 
	{ relu_shiftx_buf_V_24_ce0 sc_out sc_logic 1 signal 157 } 
	{ relu_shiftx_buf_V_24_we0 sc_out sc_logic 1 signal 157 } 
	{ relu_shiftx_buf_V_24_d0 sc_out sc_lv 11 signal 157 } 
	{ relu_shifty_buf_V_24_address0 sc_out sc_lv 1 signal 158 } 
	{ relu_shifty_buf_V_24_ce0 sc_out sc_logic 1 signal 158 } 
	{ relu_shifty_buf_V_24_we0 sc_out sc_logic 1 signal 158 } 
	{ relu_shifty_buf_V_24_d0 sc_out sc_lv 11 signal 158 } 
	{ relu_weight_buf_V_24_address0 sc_out sc_lv 1 signal 159 } 
	{ relu_weight_buf_V_24_ce0 sc_out sc_logic 1 signal 159 } 
	{ relu_weight_buf_V_24_we0 sc_out sc_logic 1 signal 159 } 
	{ relu_weight_buf_V_24_d0 sc_out sc_lv 11 signal 159 } 
	{ bn_weight_buf_V_24_address0 sc_out sc_lv 2 signal 160 } 
	{ bn_weight_buf_V_24_ce0 sc_out sc_logic 1 signal 160 } 
	{ bn_weight_buf_V_24_we0 sc_out sc_logic 1 signal 160 } 
	{ bn_weight_buf_V_24_d0 sc_out sc_lv 11 signal 160 } 
	{ bn_bias_buf_V_24_address0 sc_out sc_lv 2 signal 161 } 
	{ bn_bias_buf_V_24_ce0 sc_out sc_logic 1 signal 161 } 
	{ bn_bias_buf_V_24_we0 sc_out sc_logic 1 signal 161 } 
	{ bn_bias_buf_V_24_d0 sc_out sc_lv 11 signal 161 } 
	{ relu_shiftx_buf_V_25_address0 sc_out sc_lv 1 signal 162 } 
	{ relu_shiftx_buf_V_25_ce0 sc_out sc_logic 1 signal 162 } 
	{ relu_shiftx_buf_V_25_we0 sc_out sc_logic 1 signal 162 } 
	{ relu_shiftx_buf_V_25_d0 sc_out sc_lv 11 signal 162 } 
	{ relu_shifty_buf_V_25_address0 sc_out sc_lv 1 signal 163 } 
	{ relu_shifty_buf_V_25_ce0 sc_out sc_logic 1 signal 163 } 
	{ relu_shifty_buf_V_25_we0 sc_out sc_logic 1 signal 163 } 
	{ relu_shifty_buf_V_25_d0 sc_out sc_lv 11 signal 163 } 
	{ relu_weight_buf_V_25_address0 sc_out sc_lv 1 signal 164 } 
	{ relu_weight_buf_V_25_ce0 sc_out sc_logic 1 signal 164 } 
	{ relu_weight_buf_V_25_we0 sc_out sc_logic 1 signal 164 } 
	{ relu_weight_buf_V_25_d0 sc_out sc_lv 11 signal 164 } 
	{ bn_weight_buf_V_25_address0 sc_out sc_lv 2 signal 165 } 
	{ bn_weight_buf_V_25_ce0 sc_out sc_logic 1 signal 165 } 
	{ bn_weight_buf_V_25_we0 sc_out sc_logic 1 signal 165 } 
	{ bn_weight_buf_V_25_d0 sc_out sc_lv 11 signal 165 } 
	{ bn_bias_buf_V_25_address0 sc_out sc_lv 2 signal 166 } 
	{ bn_bias_buf_V_25_ce0 sc_out sc_logic 1 signal 166 } 
	{ bn_bias_buf_V_25_we0 sc_out sc_logic 1 signal 166 } 
	{ bn_bias_buf_V_25_d0 sc_out sc_lv 11 signal 166 } 
	{ relu_shiftx_buf_V_26_address0 sc_out sc_lv 1 signal 167 } 
	{ relu_shiftx_buf_V_26_ce0 sc_out sc_logic 1 signal 167 } 
	{ relu_shiftx_buf_V_26_we0 sc_out sc_logic 1 signal 167 } 
	{ relu_shiftx_buf_V_26_d0 sc_out sc_lv 11 signal 167 } 
	{ relu_shifty_buf_V_26_address0 sc_out sc_lv 1 signal 168 } 
	{ relu_shifty_buf_V_26_ce0 sc_out sc_logic 1 signal 168 } 
	{ relu_shifty_buf_V_26_we0 sc_out sc_logic 1 signal 168 } 
	{ relu_shifty_buf_V_26_d0 sc_out sc_lv 11 signal 168 } 
	{ relu_weight_buf_V_26_address0 sc_out sc_lv 1 signal 169 } 
	{ relu_weight_buf_V_26_ce0 sc_out sc_logic 1 signal 169 } 
	{ relu_weight_buf_V_26_we0 sc_out sc_logic 1 signal 169 } 
	{ relu_weight_buf_V_26_d0 sc_out sc_lv 11 signal 169 } 
	{ bn_weight_buf_V_26_address0 sc_out sc_lv 2 signal 170 } 
	{ bn_weight_buf_V_26_ce0 sc_out sc_logic 1 signal 170 } 
	{ bn_weight_buf_V_26_we0 sc_out sc_logic 1 signal 170 } 
	{ bn_weight_buf_V_26_d0 sc_out sc_lv 11 signal 170 } 
	{ bn_bias_buf_V_26_address0 sc_out sc_lv 2 signal 171 } 
	{ bn_bias_buf_V_26_ce0 sc_out sc_logic 1 signal 171 } 
	{ bn_bias_buf_V_26_we0 sc_out sc_logic 1 signal 171 } 
	{ bn_bias_buf_V_26_d0 sc_out sc_lv 11 signal 171 } 
	{ relu_shiftx_buf_V_27_address0 sc_out sc_lv 1 signal 172 } 
	{ relu_shiftx_buf_V_27_ce0 sc_out sc_logic 1 signal 172 } 
	{ relu_shiftx_buf_V_27_we0 sc_out sc_logic 1 signal 172 } 
	{ relu_shiftx_buf_V_27_d0 sc_out sc_lv 11 signal 172 } 
	{ relu_shifty_buf_V_27_address0 sc_out sc_lv 1 signal 173 } 
	{ relu_shifty_buf_V_27_ce0 sc_out sc_logic 1 signal 173 } 
	{ relu_shifty_buf_V_27_we0 sc_out sc_logic 1 signal 173 } 
	{ relu_shifty_buf_V_27_d0 sc_out sc_lv 11 signal 173 } 
	{ relu_weight_buf_V_27_address0 sc_out sc_lv 1 signal 174 } 
	{ relu_weight_buf_V_27_ce0 sc_out sc_logic 1 signal 174 } 
	{ relu_weight_buf_V_27_we0 sc_out sc_logic 1 signal 174 } 
	{ relu_weight_buf_V_27_d0 sc_out sc_lv 11 signal 174 } 
	{ bn_weight_buf_V_27_address0 sc_out sc_lv 2 signal 175 } 
	{ bn_weight_buf_V_27_ce0 sc_out sc_logic 1 signal 175 } 
	{ bn_weight_buf_V_27_we0 sc_out sc_logic 1 signal 175 } 
	{ bn_weight_buf_V_27_d0 sc_out sc_lv 11 signal 175 } 
	{ bn_bias_buf_V_27_address0 sc_out sc_lv 2 signal 176 } 
	{ bn_bias_buf_V_27_ce0 sc_out sc_logic 1 signal 176 } 
	{ bn_bias_buf_V_27_we0 sc_out sc_logic 1 signal 176 } 
	{ bn_bias_buf_V_27_d0 sc_out sc_lv 11 signal 176 } 
	{ relu_shiftx_buf_V_28_address0 sc_out sc_lv 1 signal 177 } 
	{ relu_shiftx_buf_V_28_ce0 sc_out sc_logic 1 signal 177 } 
	{ relu_shiftx_buf_V_28_we0 sc_out sc_logic 1 signal 177 } 
	{ relu_shiftx_buf_V_28_d0 sc_out sc_lv 11 signal 177 } 
	{ relu_shifty_buf_V_28_address0 sc_out sc_lv 1 signal 178 } 
	{ relu_shifty_buf_V_28_ce0 sc_out sc_logic 1 signal 178 } 
	{ relu_shifty_buf_V_28_we0 sc_out sc_logic 1 signal 178 } 
	{ relu_shifty_buf_V_28_d0 sc_out sc_lv 11 signal 178 } 
	{ relu_weight_buf_V_28_address0 sc_out sc_lv 1 signal 179 } 
	{ relu_weight_buf_V_28_ce0 sc_out sc_logic 1 signal 179 } 
	{ relu_weight_buf_V_28_we0 sc_out sc_logic 1 signal 179 } 
	{ relu_weight_buf_V_28_d0 sc_out sc_lv 11 signal 179 } 
	{ bn_weight_buf_V_28_address0 sc_out sc_lv 2 signal 180 } 
	{ bn_weight_buf_V_28_ce0 sc_out sc_logic 1 signal 180 } 
	{ bn_weight_buf_V_28_we0 sc_out sc_logic 1 signal 180 } 
	{ bn_weight_buf_V_28_d0 sc_out sc_lv 11 signal 180 } 
	{ bn_bias_buf_V_28_address0 sc_out sc_lv 2 signal 181 } 
	{ bn_bias_buf_V_28_ce0 sc_out sc_logic 1 signal 181 } 
	{ bn_bias_buf_V_28_we0 sc_out sc_logic 1 signal 181 } 
	{ bn_bias_buf_V_28_d0 sc_out sc_lv 11 signal 181 } 
	{ relu_shiftx_buf_V_29_address0 sc_out sc_lv 1 signal 182 } 
	{ relu_shiftx_buf_V_29_ce0 sc_out sc_logic 1 signal 182 } 
	{ relu_shiftx_buf_V_29_we0 sc_out sc_logic 1 signal 182 } 
	{ relu_shiftx_buf_V_29_d0 sc_out sc_lv 11 signal 182 } 
	{ relu_shifty_buf_V_29_address0 sc_out sc_lv 1 signal 183 } 
	{ relu_shifty_buf_V_29_ce0 sc_out sc_logic 1 signal 183 } 
	{ relu_shifty_buf_V_29_we0 sc_out sc_logic 1 signal 183 } 
	{ relu_shifty_buf_V_29_d0 sc_out sc_lv 11 signal 183 } 
	{ relu_weight_buf_V_29_address0 sc_out sc_lv 1 signal 184 } 
	{ relu_weight_buf_V_29_ce0 sc_out sc_logic 1 signal 184 } 
	{ relu_weight_buf_V_29_we0 sc_out sc_logic 1 signal 184 } 
	{ relu_weight_buf_V_29_d0 sc_out sc_lv 11 signal 184 } 
	{ bn_weight_buf_V_29_address0 sc_out sc_lv 2 signal 185 } 
	{ bn_weight_buf_V_29_ce0 sc_out sc_logic 1 signal 185 } 
	{ bn_weight_buf_V_29_we0 sc_out sc_logic 1 signal 185 } 
	{ bn_weight_buf_V_29_d0 sc_out sc_lv 11 signal 185 } 
	{ bn_bias_buf_V_29_address0 sc_out sc_lv 2 signal 186 } 
	{ bn_bias_buf_V_29_ce0 sc_out sc_logic 1 signal 186 } 
	{ bn_bias_buf_V_29_we0 sc_out sc_logic 1 signal 186 } 
	{ bn_bias_buf_V_29_d0 sc_out sc_lv 11 signal 186 } 
	{ relu_shiftx_buf_V_30_address0 sc_out sc_lv 1 signal 187 } 
	{ relu_shiftx_buf_V_30_ce0 sc_out sc_logic 1 signal 187 } 
	{ relu_shiftx_buf_V_30_we0 sc_out sc_logic 1 signal 187 } 
	{ relu_shiftx_buf_V_30_d0 sc_out sc_lv 11 signal 187 } 
	{ relu_shifty_buf_V_30_address0 sc_out sc_lv 1 signal 188 } 
	{ relu_shifty_buf_V_30_ce0 sc_out sc_logic 1 signal 188 } 
	{ relu_shifty_buf_V_30_we0 sc_out sc_logic 1 signal 188 } 
	{ relu_shifty_buf_V_30_d0 sc_out sc_lv 11 signal 188 } 
	{ relu_weight_buf_V_30_address0 sc_out sc_lv 1 signal 189 } 
	{ relu_weight_buf_V_30_ce0 sc_out sc_logic 1 signal 189 } 
	{ relu_weight_buf_V_30_we0 sc_out sc_logic 1 signal 189 } 
	{ relu_weight_buf_V_30_d0 sc_out sc_lv 11 signal 189 } 
	{ bn_weight_buf_V_30_address0 sc_out sc_lv 2 signal 190 } 
	{ bn_weight_buf_V_30_ce0 sc_out sc_logic 1 signal 190 } 
	{ bn_weight_buf_V_30_we0 sc_out sc_logic 1 signal 190 } 
	{ bn_weight_buf_V_30_d0 sc_out sc_lv 11 signal 190 } 
	{ bn_bias_buf_V_30_address0 sc_out sc_lv 2 signal 191 } 
	{ bn_bias_buf_V_30_ce0 sc_out sc_logic 1 signal 191 } 
	{ bn_bias_buf_V_30_we0 sc_out sc_logic 1 signal 191 } 
	{ bn_bias_buf_V_30_d0 sc_out sc_lv 11 signal 191 } 
	{ relu_shiftx_buf_V_31_address0 sc_out sc_lv 1 signal 192 } 
	{ relu_shiftx_buf_V_31_ce0 sc_out sc_logic 1 signal 192 } 
	{ relu_shiftx_buf_V_31_we0 sc_out sc_logic 1 signal 192 } 
	{ relu_shiftx_buf_V_31_d0 sc_out sc_lv 11 signal 192 } 
	{ relu_shifty_buf_V_31_address0 sc_out sc_lv 1 signal 193 } 
	{ relu_shifty_buf_V_31_ce0 sc_out sc_logic 1 signal 193 } 
	{ relu_shifty_buf_V_31_we0 sc_out sc_logic 1 signal 193 } 
	{ relu_shifty_buf_V_31_d0 sc_out sc_lv 11 signal 193 } 
	{ relu_weight_buf_V_31_address0 sc_out sc_lv 1 signal 194 } 
	{ relu_weight_buf_V_31_ce0 sc_out sc_logic 1 signal 194 } 
	{ relu_weight_buf_V_31_we0 sc_out sc_logic 1 signal 194 } 
	{ relu_weight_buf_V_31_d0 sc_out sc_lv 11 signal 194 } 
	{ bn_weight_buf_V_31_address0 sc_out sc_lv 2 signal 195 } 
	{ bn_weight_buf_V_31_ce0 sc_out sc_logic 1 signal 195 } 
	{ bn_weight_buf_V_31_we0 sc_out sc_logic 1 signal 195 } 
	{ bn_weight_buf_V_31_d0 sc_out sc_lv 11 signal 195 } 
	{ bn_bias_buf_V_31_address0 sc_out sc_lv 2 signal 196 } 
	{ bn_bias_buf_V_31_ce0 sc_out sc_logic 1 signal 196 } 
	{ bn_bias_buf_V_31_we0 sc_out sc_logic 1 signal 196 } 
	{ bn_bias_buf_V_31_d0 sc_out sc_lv 11 signal 196 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BUSER" }} , 
 	{ "name": "conv_weight_3x3_all_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V_offset", "role": "default" }} , 
 	{ "name": "weight_3x3_index", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "weight_3x3_index", "role": "default" }} , 
 	{ "name": "weights_all_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "weights_all_V_offset", "role": "default" }} , 
 	{ "name": "weights_all_index", "direction": "in", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "weights_all_index", "role": "default" }} , 
 	{ "name": "weight_buf_3x3_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "d0" }} , 
 	{ "name": "weight_buf_3x3_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "we0" }} , 
 	{ "name": "weight_buf_3x3_V_31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_0", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_0", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_0", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_0", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_0", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_0", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_0", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_0", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_0", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_0", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_0", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_0", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_0", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_0", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_0", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_0", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_0", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_0", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_0", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_0", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_1", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_1", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_1", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_1", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_1", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_1", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_1", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_1", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_1", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_1", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_1", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_1", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_1", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_1", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_1", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_1", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_1", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_1", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_1", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_1", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_2", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_2", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_2", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_2", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_2", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_2", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_2", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_2", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_2", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_2", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_2", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_2", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_2", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_2", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_2", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_2", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_2", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_2", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_2", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_2", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_3", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_3", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_3", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_3", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_3", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_3", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_3", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_3", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_3", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_3", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_3", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_3", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_3", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_3", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_3", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_3", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_3", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_3", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_3", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_3", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_4", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_4", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_4", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_4", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_4", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_4", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_4", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_4", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_4", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_4", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_4", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_4", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_4", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_4", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_4", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_4", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_4", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_4", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_4", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_4", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_5", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_5", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_5", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_5", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_5", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_5", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_5", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_5", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_5", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_5", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_5", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_5", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_5", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_5", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_5", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_5", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_5", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_5", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_5", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_5", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_6", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_6", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_6", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_6", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_6", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_6", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_6", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_6", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_6", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_6", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_6", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_6", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_6", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_6", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_6", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_6", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_6", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_6", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_6", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_6", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_7", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_7", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_7", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_7", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_7", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_7", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_7", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_7", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_7", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_7", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_7", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_7", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_7", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_7", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_7", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_7", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_7", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_7", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_7", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_7", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_8", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_8", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_8", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_8", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_8", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_8", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_8", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_8", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_8", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_8", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_8", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_8", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_8", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_8", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_8", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_8", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_8", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_8", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_8", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_8", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_9", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_9", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_9", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_9", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_9", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_9", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_9", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_9", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_9", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_9", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_9", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_9", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_9", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_9", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_9", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_9", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_9", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_9", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_9", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_9", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_10", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_10", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_10", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_10", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_10", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_10", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_10", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_10", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_10", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_10", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_10", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_10", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_10", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_10", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_10", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_10", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_10", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_10", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_10", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_10", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_11", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_11", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_11", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_11", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_11", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_11", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_11", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_11", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_11", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_11", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_11", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_11", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_11", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_11", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_11", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_11", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_11", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_11", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_11", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_11", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_12", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_12", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_12", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_12", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_12", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_12", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_12", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_12", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_12", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_12", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_12", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_12", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_12", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_12", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_12", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_12", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_12", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_12", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_12", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_12", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_13", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_13", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_13", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_13", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_13", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_13", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_13", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_13", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_13", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_13", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_13", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_13", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_13", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_13", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_13", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_13", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_13", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_13", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_13", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_13", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_14", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_14", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_14", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_14", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_14", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_14", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_14", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_14", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_14", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_14", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_14", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_14", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_14", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_14", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_14", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_14", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_14", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_14", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_14", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_14", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_15", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_15", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_15", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_15", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_15", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_15", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_15", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_15", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_15", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_15", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_15", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_15", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_15", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_15", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_15", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_15", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_15", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_15", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_15", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_15", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_16", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_16", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_16", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_16", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_16", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_16", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_16", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_16", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_16", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_16", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_16", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_16", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_16", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_16", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_16", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_16", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_16", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_16", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_16", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_16", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_17", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_17", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_17", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_17", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_17", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_17", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_17", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_17", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_17", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_17", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_17", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_17", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_17", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_17", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_17", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_17", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_17", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_17", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_17", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_17", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_18", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_18", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_18", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_18", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_18", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_18", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_18", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_18", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_18", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_18", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_18", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_18", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_18", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_18", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_18", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_18", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_18", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_18", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_18", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_18", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_19", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_19", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_19", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_19", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_19", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_19", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_19", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_19", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_19", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_19", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_19", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_19", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_19", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_19", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_19", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_19", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_19", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_19", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_19", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_19", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_20", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_20", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_20", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_20", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_20", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_20", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_20", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_20", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_20", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_20", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_20", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_20", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_20", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_20", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_20", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_20", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_20", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_20", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_20", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_20", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_21", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_21", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_21", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_21", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_21", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_21", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_21", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_21", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_21", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_21", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_21", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_21", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_21", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_21", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_21", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_21", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_21", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_21", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_21", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_21", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_22", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_22", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_22", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_22", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_22", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_22", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_22", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_22", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_22", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_22", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_22", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_22", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_22", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_22", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_22", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_22", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_22", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_22", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_22", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_22", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_23", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_23", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_23", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_23", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_23", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_23", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_23", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_23", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_23", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_23", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_23", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_23", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_23", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_23", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_23", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_23", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_23", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_23", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_23", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_23", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_24", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_24", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_24", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_24", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_24", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_24", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_24", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_24", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_24", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_24", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_24", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_24", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_24", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_24", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_24", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_24", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_24", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_24", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_24", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_24", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_25", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_25", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_25", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_25", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_25", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_25", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_25", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_25", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_25", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_25", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_25", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_25", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_25", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_25", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_25", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_25", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_25", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_25", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_25", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_25", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_26", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_26", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_26", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_26", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_26", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_26", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_26", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_26", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_26", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_26", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_26", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_26", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_26", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_26", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_26", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_26", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_26", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_26", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_26", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_26", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_27", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_27", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_27", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_27", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_27", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_27", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_27", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_27", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_27", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_27", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_27", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_27", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_27", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_27", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_27", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_27", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_27", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_27", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_27", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_27", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_28", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_28", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_28", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_28", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_28", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_28", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_28", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_28", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_28", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_28", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_28", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_28", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_28", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_28", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_28", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_28", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_28", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_28", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_28", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_28", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_29", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_29", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_29", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_29", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_29", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_29", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_29", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_29", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_29", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_29", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_29", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_29", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_29", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_29", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_29", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_29", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_29", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_29", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_29", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_29", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_30", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_30", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_30", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_30", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_30", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_30", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_30", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_30", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_30", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_30", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_30", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_30", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_30", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_30", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_30", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_30", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_30", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_30", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_30", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_30", "role": "d0" }} , 
 	{ "name": "relu_shiftx_buf_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_31", "role": "address0" }} , 
 	{ "name": "relu_shiftx_buf_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_31", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_buf_V_31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_31", "role": "we0" }} , 
 	{ "name": "relu_shiftx_buf_V_31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_buf_V_31", "role": "d0" }} , 
 	{ "name": "relu_shifty_buf_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_31", "role": "address0" }} , 
 	{ "name": "relu_shifty_buf_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_31", "role": "ce0" }} , 
 	{ "name": "relu_shifty_buf_V_31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_31", "role": "we0" }} , 
 	{ "name": "relu_shifty_buf_V_31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_buf_V_31", "role": "d0" }} , 
 	{ "name": "relu_weight_buf_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_31", "role": "address0" }} , 
 	{ "name": "relu_weight_buf_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_31", "role": "ce0" }} , 
 	{ "name": "relu_weight_buf_V_31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weight_buf_V_31", "role": "we0" }} , 
 	{ "name": "relu_weight_buf_V_31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weight_buf_V_31", "role": "d0" }} , 
 	{ "name": "bn_weight_buf_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_buf_V_31", "role": "address0" }} , 
 	{ "name": "bn_weight_buf_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_31", "role": "ce0" }} , 
 	{ "name": "bn_weight_buf_V_31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_buf_V_31", "role": "we0" }} , 
 	{ "name": "bn_weight_buf_V_31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_buf_V_31", "role": "d0" }} , 
 	{ "name": "bn_bias_buf_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_buf_V_31", "role": "address0" }} , 
 	{ "name": "bn_bias_buf_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_31", "role": "ce0" }} , 
 	{ "name": "bn_bias_buf_V_31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_buf_V_31", "role": "we0" }} , 
 	{ "name": "bn_bias_buf_V_31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_buf_V_31", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "load_weights_3x3_all",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "65", "EstimateLatencyMax" : "65",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weight_3x3_from_fu_2133"}],
		"Port" : [
			{"Name" : "conv_weight_3x3_all_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "conv_weight_3x3_all_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "conv_weight_3x3_all_V_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "src_V"}]},
			{"Name" : "conv_weight_3x3_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_3x3_index", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_index", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_0_V"}]},
			{"Name" : "weight_buf_3x3_V_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_1_V"}]},
			{"Name" : "weight_buf_3x3_V_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_2_V"}]},
			{"Name" : "weight_buf_3x3_V_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_3_V"}]},
			{"Name" : "weight_buf_3x3_V_4", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_4_V"}]},
			{"Name" : "weight_buf_3x3_V_5", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_5_V"}]},
			{"Name" : "weight_buf_3x3_V_6", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_6_V"}]},
			{"Name" : "weight_buf_3x3_V_7", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_7_V"}]},
			{"Name" : "weight_buf_3x3_V_8", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_8_V"}]},
			{"Name" : "weight_buf_3x3_V_9", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_9_V"}]},
			{"Name" : "weight_buf_3x3_V_10", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_10_V"}]},
			{"Name" : "weight_buf_3x3_V_11", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_11_V"}]},
			{"Name" : "weight_buf_3x3_V_12", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_12_V"}]},
			{"Name" : "weight_buf_3x3_V_13", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_13_V"}]},
			{"Name" : "weight_buf_3x3_V_14", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_14_V"}]},
			{"Name" : "weight_buf_3x3_V_15", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_15_V"}]},
			{"Name" : "weight_buf_3x3_V_16", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_16_V"}]},
			{"Name" : "weight_buf_3x3_V_17", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_17_V"}]},
			{"Name" : "weight_buf_3x3_V_18", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_18_V"}]},
			{"Name" : "weight_buf_3x3_V_19", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_19_V"}]},
			{"Name" : "weight_buf_3x3_V_20", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_20_V"}]},
			{"Name" : "weight_buf_3x3_V_21", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_21_V"}]},
			{"Name" : "weight_buf_3x3_V_22", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_22_V"}]},
			{"Name" : "weight_buf_3x3_V_23", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_23_V"}]},
			{"Name" : "weight_buf_3x3_V_24", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_24_V"}]},
			{"Name" : "weight_buf_3x3_V_25", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_25_V"}]},
			{"Name" : "weight_buf_3x3_V_26", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_26_V"}]},
			{"Name" : "weight_buf_3x3_V_27", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_27_V"}]},
			{"Name" : "weight_buf_3x3_V_28", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_28_V"}]},
			{"Name" : "weight_buf_3x3_V_29", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_29_V"}]},
			{"Name" : "weight_buf_3x3_V_30", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_30_V"}]},
			{"Name" : "weight_buf_3x3_V_31", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_31_V"}]},
			{"Name" : "relu_shiftx_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_31", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_weight_3x3_from_fu_2133", "Parent" : "0",
		"CDFG" : "load_weight_3x3_from",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "47", "EstimateLatencyMax" : "47",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dest_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_16_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_17_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_18_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_19_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_20_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_21_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_22_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_23_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_24_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_25_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_26_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_27_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_28_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_29_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_30_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_31_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "src_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "src_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "src_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "src_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "index", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	load_weights_3x3_all {
		conv_weight_3x3_all_V {Type I LastRead 13 FirstWrite -1}
		conv_weight_3x3_all_V_offset {Type I LastRead 0 FirstWrite -1}
		weight_3x3_index {Type I LastRead 0 FirstWrite -1}
		weights_all_V_offset {Type I LastRead 1 FirstWrite -1}
		weights_all_index {Type I LastRead 1 FirstWrite -1}
		weight_buf_3x3_V_0 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_1 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_2 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_3 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_4 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_5 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_6 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_7 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_8 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_9 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_10 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_11 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_12 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_13 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_14 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_15 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_16 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_17 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_18 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_19 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_20 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_21 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_22 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_23 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_24 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_25 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_26 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_27 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_28 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_29 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_30 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_31 {Type O LastRead -1 FirstWrite 14}
		relu_shiftx_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_31 {Type O LastRead -1 FirstWrite 10}}
	load_weight_3x3_from {
		dest_0_V {Type O LastRead -1 FirstWrite 11}
		dest_1_V {Type O LastRead -1 FirstWrite 11}
		dest_2_V {Type O LastRead -1 FirstWrite 11}
		dest_3_V {Type O LastRead -1 FirstWrite 11}
		dest_4_V {Type O LastRead -1 FirstWrite 11}
		dest_5_V {Type O LastRead -1 FirstWrite 11}
		dest_6_V {Type O LastRead -1 FirstWrite 11}
		dest_7_V {Type O LastRead -1 FirstWrite 11}
		dest_8_V {Type O LastRead -1 FirstWrite 12}
		dest_9_V {Type O LastRead -1 FirstWrite 12}
		dest_10_V {Type O LastRead -1 FirstWrite 12}
		dest_11_V {Type O LastRead -1 FirstWrite 12}
		dest_12_V {Type O LastRead -1 FirstWrite 12}
		dest_13_V {Type O LastRead -1 FirstWrite 12}
		dest_14_V {Type O LastRead -1 FirstWrite 12}
		dest_15_V {Type O LastRead -1 FirstWrite 12}
		dest_16_V {Type O LastRead -1 FirstWrite 13}
		dest_17_V {Type O LastRead -1 FirstWrite 13}
		dest_18_V {Type O LastRead -1 FirstWrite 13}
		dest_19_V {Type O LastRead -1 FirstWrite 13}
		dest_20_V {Type O LastRead -1 FirstWrite 13}
		dest_21_V {Type O LastRead -1 FirstWrite 13}
		dest_22_V {Type O LastRead -1 FirstWrite 13}
		dest_23_V {Type O LastRead -1 FirstWrite 13}
		dest_24_V {Type O LastRead -1 FirstWrite 14}
		dest_25_V {Type O LastRead -1 FirstWrite 14}
		dest_26_V {Type O LastRead -1 FirstWrite 14}
		dest_27_V {Type O LastRead -1 FirstWrite 14}
		dest_28_V {Type O LastRead -1 FirstWrite 14}
		dest_29_V {Type O LastRead -1 FirstWrite 14}
		dest_30_V {Type O LastRead -1 FirstWrite 14}
		dest_31_V {Type O LastRead -1 FirstWrite 14}
		src_V {Type I LastRead 13 FirstWrite -1}
		src_V_offset {Type I LastRead 0 FirstWrite -1}
		index {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "65", "Max" : "65"}
	, {"Name" : "Interval", "Min" : "65", "Max" : "65"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	conv_weight_3x3_all_V { m_axi {  { m_axi_conv_weight_3x3_all_V_AWVALID VALID 1 1 }  { m_axi_conv_weight_3x3_all_V_AWREADY READY 0 1 }  { m_axi_conv_weight_3x3_all_V_AWADDR ADDR 1 32 }  { m_axi_conv_weight_3x3_all_V_AWID ID 1 1 }  { m_axi_conv_weight_3x3_all_V_AWLEN LEN 1 32 }  { m_axi_conv_weight_3x3_all_V_AWSIZE SIZE 1 3 }  { m_axi_conv_weight_3x3_all_V_AWBURST BURST 1 2 }  { m_axi_conv_weight_3x3_all_V_AWLOCK LOCK 1 2 }  { m_axi_conv_weight_3x3_all_V_AWCACHE CACHE 1 4 }  { m_axi_conv_weight_3x3_all_V_AWPROT PROT 1 3 }  { m_axi_conv_weight_3x3_all_V_AWQOS QOS 1 4 }  { m_axi_conv_weight_3x3_all_V_AWREGION REGION 1 4 }  { m_axi_conv_weight_3x3_all_V_AWUSER USER 1 1 }  { m_axi_conv_weight_3x3_all_V_WVALID VALID 1 1 }  { m_axi_conv_weight_3x3_all_V_WREADY READY 0 1 }  { m_axi_conv_weight_3x3_all_V_WDATA DATA 1 512 }  { m_axi_conv_weight_3x3_all_V_WSTRB STRB 1 64 }  { m_axi_conv_weight_3x3_all_V_WLAST LAST 1 1 }  { m_axi_conv_weight_3x3_all_V_WID ID 1 1 }  { m_axi_conv_weight_3x3_all_V_WUSER USER 1 1 }  { m_axi_conv_weight_3x3_all_V_ARVALID VALID 1 1 }  { m_axi_conv_weight_3x3_all_V_ARREADY READY 0 1 }  { m_axi_conv_weight_3x3_all_V_ARADDR ADDR 1 32 }  { m_axi_conv_weight_3x3_all_V_ARID ID 1 1 }  { m_axi_conv_weight_3x3_all_V_ARLEN LEN 1 32 }  { m_axi_conv_weight_3x3_all_V_ARSIZE SIZE 1 3 }  { m_axi_conv_weight_3x3_all_V_ARBURST BURST 1 2 }  { m_axi_conv_weight_3x3_all_V_ARLOCK LOCK 1 2 }  { m_axi_conv_weight_3x3_all_V_ARCACHE CACHE 1 4 }  { m_axi_conv_weight_3x3_all_V_ARPROT PROT 1 3 }  { m_axi_conv_weight_3x3_all_V_ARQOS QOS 1 4 }  { m_axi_conv_weight_3x3_all_V_ARREGION REGION 1 4 }  { m_axi_conv_weight_3x3_all_V_ARUSER USER 1 1 }  { m_axi_conv_weight_3x3_all_V_RVALID VALID 0 1 }  { m_axi_conv_weight_3x3_all_V_RREADY READY 1 1 }  { m_axi_conv_weight_3x3_all_V_RDATA DATA 0 512 }  { m_axi_conv_weight_3x3_all_V_RLAST LAST 0 1 }  { m_axi_conv_weight_3x3_all_V_RID ID 0 1 }  { m_axi_conv_weight_3x3_all_V_RUSER USER 0 1 }  { m_axi_conv_weight_3x3_all_V_RRESP RESP 0 2 }  { m_axi_conv_weight_3x3_all_V_BVALID VALID 0 1 }  { m_axi_conv_weight_3x3_all_V_BREADY READY 1 1 }  { m_axi_conv_weight_3x3_all_V_BRESP RESP 0 2 }  { m_axi_conv_weight_3x3_all_V_BID ID 0 1 }  { m_axi_conv_weight_3x3_all_V_BUSER USER 0 1 } } }
	conv_weight_3x3_all_V_offset { ap_none {  { conv_weight_3x3_all_V_offset in_data 0 26 } } }
	weight_3x3_index { ap_none {  { weight_3x3_index in_data 0 11 } } }
	weights_all_V_offset { ap_none {  { weights_all_V_offset in_data 0 26 } } }
	weights_all_index { ap_none {  { weights_all_index in_data 0 13 } } }
	weight_buf_3x3_V_0 { ap_memory {  { weight_buf_3x3_V_0_address0 mem_address 1 6 }  { weight_buf_3x3_V_0_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_0_we0 mem_we 1 1 }  { weight_buf_3x3_V_0_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_1 { ap_memory {  { weight_buf_3x3_V_1_address0 mem_address 1 6 }  { weight_buf_3x3_V_1_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_1_we0 mem_we 1 1 }  { weight_buf_3x3_V_1_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_2 { ap_memory {  { weight_buf_3x3_V_2_address0 mem_address 1 6 }  { weight_buf_3x3_V_2_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_2_we0 mem_we 1 1 }  { weight_buf_3x3_V_2_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_3 { ap_memory {  { weight_buf_3x3_V_3_address0 mem_address 1 6 }  { weight_buf_3x3_V_3_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_3_we0 mem_we 1 1 }  { weight_buf_3x3_V_3_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_4 { ap_memory {  { weight_buf_3x3_V_4_address0 mem_address 1 6 }  { weight_buf_3x3_V_4_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_4_we0 mem_we 1 1 }  { weight_buf_3x3_V_4_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_5 { ap_memory {  { weight_buf_3x3_V_5_address0 mem_address 1 6 }  { weight_buf_3x3_V_5_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_5_we0 mem_we 1 1 }  { weight_buf_3x3_V_5_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_6 { ap_memory {  { weight_buf_3x3_V_6_address0 mem_address 1 6 }  { weight_buf_3x3_V_6_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_6_we0 mem_we 1 1 }  { weight_buf_3x3_V_6_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_7 { ap_memory {  { weight_buf_3x3_V_7_address0 mem_address 1 6 }  { weight_buf_3x3_V_7_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_7_we0 mem_we 1 1 }  { weight_buf_3x3_V_7_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_8 { ap_memory {  { weight_buf_3x3_V_8_address0 mem_address 1 6 }  { weight_buf_3x3_V_8_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_8_we0 mem_we 1 1 }  { weight_buf_3x3_V_8_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_9 { ap_memory {  { weight_buf_3x3_V_9_address0 mem_address 1 6 }  { weight_buf_3x3_V_9_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_9_we0 mem_we 1 1 }  { weight_buf_3x3_V_9_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_10 { ap_memory {  { weight_buf_3x3_V_10_address0 mem_address 1 6 }  { weight_buf_3x3_V_10_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_10_we0 mem_we 1 1 }  { weight_buf_3x3_V_10_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_11 { ap_memory {  { weight_buf_3x3_V_11_address0 mem_address 1 6 }  { weight_buf_3x3_V_11_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_11_we0 mem_we 1 1 }  { weight_buf_3x3_V_11_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_12 { ap_memory {  { weight_buf_3x3_V_12_address0 mem_address 1 6 }  { weight_buf_3x3_V_12_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_12_we0 mem_we 1 1 }  { weight_buf_3x3_V_12_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_13 { ap_memory {  { weight_buf_3x3_V_13_address0 mem_address 1 6 }  { weight_buf_3x3_V_13_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_13_we0 mem_we 1 1 }  { weight_buf_3x3_V_13_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_14 { ap_memory {  { weight_buf_3x3_V_14_address0 mem_address 1 6 }  { weight_buf_3x3_V_14_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_14_we0 mem_we 1 1 }  { weight_buf_3x3_V_14_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_15 { ap_memory {  { weight_buf_3x3_V_15_address0 mem_address 1 6 }  { weight_buf_3x3_V_15_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_15_we0 mem_we 1 1 }  { weight_buf_3x3_V_15_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_16 { ap_memory {  { weight_buf_3x3_V_16_address0 mem_address 1 6 }  { weight_buf_3x3_V_16_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_16_we0 mem_we 1 1 }  { weight_buf_3x3_V_16_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_17 { ap_memory {  { weight_buf_3x3_V_17_address0 mem_address 1 6 }  { weight_buf_3x3_V_17_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_17_we0 mem_we 1 1 }  { weight_buf_3x3_V_17_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_18 { ap_memory {  { weight_buf_3x3_V_18_address0 mem_address 1 6 }  { weight_buf_3x3_V_18_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_18_we0 mem_we 1 1 }  { weight_buf_3x3_V_18_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_19 { ap_memory {  { weight_buf_3x3_V_19_address0 mem_address 1 6 }  { weight_buf_3x3_V_19_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_19_we0 mem_we 1 1 }  { weight_buf_3x3_V_19_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_20 { ap_memory {  { weight_buf_3x3_V_20_address0 mem_address 1 6 }  { weight_buf_3x3_V_20_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_20_we0 mem_we 1 1 }  { weight_buf_3x3_V_20_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_21 { ap_memory {  { weight_buf_3x3_V_21_address0 mem_address 1 6 }  { weight_buf_3x3_V_21_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_21_we0 mem_we 1 1 }  { weight_buf_3x3_V_21_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_22 { ap_memory {  { weight_buf_3x3_V_22_address0 mem_address 1 6 }  { weight_buf_3x3_V_22_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_22_we0 mem_we 1 1 }  { weight_buf_3x3_V_22_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_23 { ap_memory {  { weight_buf_3x3_V_23_address0 mem_address 1 6 }  { weight_buf_3x3_V_23_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_23_we0 mem_we 1 1 }  { weight_buf_3x3_V_23_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_24 { ap_memory {  { weight_buf_3x3_V_24_address0 mem_address 1 6 }  { weight_buf_3x3_V_24_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_24_we0 mem_we 1 1 }  { weight_buf_3x3_V_24_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_25 { ap_memory {  { weight_buf_3x3_V_25_address0 mem_address 1 6 }  { weight_buf_3x3_V_25_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_25_we0 mem_we 1 1 }  { weight_buf_3x3_V_25_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_26 { ap_memory {  { weight_buf_3x3_V_26_address0 mem_address 1 6 }  { weight_buf_3x3_V_26_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_26_we0 mem_we 1 1 }  { weight_buf_3x3_V_26_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_27 { ap_memory {  { weight_buf_3x3_V_27_address0 mem_address 1 6 }  { weight_buf_3x3_V_27_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_27_we0 mem_we 1 1 }  { weight_buf_3x3_V_27_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_28 { ap_memory {  { weight_buf_3x3_V_28_address0 mem_address 1 6 }  { weight_buf_3x3_V_28_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_28_we0 mem_we 1 1 }  { weight_buf_3x3_V_28_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_29 { ap_memory {  { weight_buf_3x3_V_29_address0 mem_address 1 6 }  { weight_buf_3x3_V_29_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_29_we0 mem_we 1 1 }  { weight_buf_3x3_V_29_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_30 { ap_memory {  { weight_buf_3x3_V_30_address0 mem_address 1 6 }  { weight_buf_3x3_V_30_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_30_we0 mem_we 1 1 }  { weight_buf_3x3_V_30_d0 mem_din 1 64 } } }
	weight_buf_3x3_V_31 { ap_memory {  { weight_buf_3x3_V_31_address0 mem_address 1 6 }  { weight_buf_3x3_V_31_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_31_we0 mem_we 1 1 }  { weight_buf_3x3_V_31_d0 mem_din 1 64 } } }
	relu_shiftx_buf_V_0 { ap_memory {  { relu_shiftx_buf_V_0_address0 mem_address 1 1 }  { relu_shiftx_buf_V_0_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_0_we0 mem_we 1 1 }  { relu_shiftx_buf_V_0_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_0 { ap_memory {  { relu_shifty_buf_V_0_address0 mem_address 1 1 }  { relu_shifty_buf_V_0_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_0_we0 mem_we 1 1 }  { relu_shifty_buf_V_0_d0 mem_din 1 11 } } }
	relu_weight_buf_V_0 { ap_memory {  { relu_weight_buf_V_0_address0 mem_address 1 1 }  { relu_weight_buf_V_0_ce0 mem_ce 1 1 }  { relu_weight_buf_V_0_we0 mem_we 1 1 }  { relu_weight_buf_V_0_d0 mem_din 1 11 } } }
	bn_weight_buf_V_0 { ap_memory {  { bn_weight_buf_V_0_address0 mem_address 1 2 }  { bn_weight_buf_V_0_ce0 mem_ce 1 1 }  { bn_weight_buf_V_0_we0 mem_we 1 1 }  { bn_weight_buf_V_0_d0 mem_din 1 11 } } }
	bn_bias_buf_V_0 { ap_memory {  { bn_bias_buf_V_0_address0 mem_address 1 2 }  { bn_bias_buf_V_0_ce0 mem_ce 1 1 }  { bn_bias_buf_V_0_we0 mem_we 1 1 }  { bn_bias_buf_V_0_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_1 { ap_memory {  { relu_shiftx_buf_V_1_address0 mem_address 1 1 }  { relu_shiftx_buf_V_1_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_1_we0 mem_we 1 1 }  { relu_shiftx_buf_V_1_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_1 { ap_memory {  { relu_shifty_buf_V_1_address0 mem_address 1 1 }  { relu_shifty_buf_V_1_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_1_we0 mem_we 1 1 }  { relu_shifty_buf_V_1_d0 mem_din 1 11 } } }
	relu_weight_buf_V_1 { ap_memory {  { relu_weight_buf_V_1_address0 mem_address 1 1 }  { relu_weight_buf_V_1_ce0 mem_ce 1 1 }  { relu_weight_buf_V_1_we0 mem_we 1 1 }  { relu_weight_buf_V_1_d0 mem_din 1 11 } } }
	bn_weight_buf_V_1 { ap_memory {  { bn_weight_buf_V_1_address0 mem_address 1 2 }  { bn_weight_buf_V_1_ce0 mem_ce 1 1 }  { bn_weight_buf_V_1_we0 mem_we 1 1 }  { bn_weight_buf_V_1_d0 mem_din 1 11 } } }
	bn_bias_buf_V_1 { ap_memory {  { bn_bias_buf_V_1_address0 mem_address 1 2 }  { bn_bias_buf_V_1_ce0 mem_ce 1 1 }  { bn_bias_buf_V_1_we0 mem_we 1 1 }  { bn_bias_buf_V_1_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_2 { ap_memory {  { relu_shiftx_buf_V_2_address0 mem_address 1 1 }  { relu_shiftx_buf_V_2_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_2_we0 mem_we 1 1 }  { relu_shiftx_buf_V_2_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_2 { ap_memory {  { relu_shifty_buf_V_2_address0 mem_address 1 1 }  { relu_shifty_buf_V_2_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_2_we0 mem_we 1 1 }  { relu_shifty_buf_V_2_d0 mem_din 1 11 } } }
	relu_weight_buf_V_2 { ap_memory {  { relu_weight_buf_V_2_address0 mem_address 1 1 }  { relu_weight_buf_V_2_ce0 mem_ce 1 1 }  { relu_weight_buf_V_2_we0 mem_we 1 1 }  { relu_weight_buf_V_2_d0 mem_din 1 11 } } }
	bn_weight_buf_V_2 { ap_memory {  { bn_weight_buf_V_2_address0 mem_address 1 2 }  { bn_weight_buf_V_2_ce0 mem_ce 1 1 }  { bn_weight_buf_V_2_we0 mem_we 1 1 }  { bn_weight_buf_V_2_d0 mem_din 1 11 } } }
	bn_bias_buf_V_2 { ap_memory {  { bn_bias_buf_V_2_address0 mem_address 1 2 }  { bn_bias_buf_V_2_ce0 mem_ce 1 1 }  { bn_bias_buf_V_2_we0 mem_we 1 1 }  { bn_bias_buf_V_2_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_3 { ap_memory {  { relu_shiftx_buf_V_3_address0 mem_address 1 1 }  { relu_shiftx_buf_V_3_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_3_we0 mem_we 1 1 }  { relu_shiftx_buf_V_3_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_3 { ap_memory {  { relu_shifty_buf_V_3_address0 mem_address 1 1 }  { relu_shifty_buf_V_3_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_3_we0 mem_we 1 1 }  { relu_shifty_buf_V_3_d0 mem_din 1 11 } } }
	relu_weight_buf_V_3 { ap_memory {  { relu_weight_buf_V_3_address0 mem_address 1 1 }  { relu_weight_buf_V_3_ce0 mem_ce 1 1 }  { relu_weight_buf_V_3_we0 mem_we 1 1 }  { relu_weight_buf_V_3_d0 mem_din 1 11 } } }
	bn_weight_buf_V_3 { ap_memory {  { bn_weight_buf_V_3_address0 mem_address 1 2 }  { bn_weight_buf_V_3_ce0 mem_ce 1 1 }  { bn_weight_buf_V_3_we0 mem_we 1 1 }  { bn_weight_buf_V_3_d0 mem_din 1 11 } } }
	bn_bias_buf_V_3 { ap_memory {  { bn_bias_buf_V_3_address0 mem_address 1 2 }  { bn_bias_buf_V_3_ce0 mem_ce 1 1 }  { bn_bias_buf_V_3_we0 mem_we 1 1 }  { bn_bias_buf_V_3_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_4 { ap_memory {  { relu_shiftx_buf_V_4_address0 mem_address 1 1 }  { relu_shiftx_buf_V_4_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_4_we0 mem_we 1 1 }  { relu_shiftx_buf_V_4_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_4 { ap_memory {  { relu_shifty_buf_V_4_address0 mem_address 1 1 }  { relu_shifty_buf_V_4_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_4_we0 mem_we 1 1 }  { relu_shifty_buf_V_4_d0 mem_din 1 11 } } }
	relu_weight_buf_V_4 { ap_memory {  { relu_weight_buf_V_4_address0 mem_address 1 1 }  { relu_weight_buf_V_4_ce0 mem_ce 1 1 }  { relu_weight_buf_V_4_we0 mem_we 1 1 }  { relu_weight_buf_V_4_d0 mem_din 1 11 } } }
	bn_weight_buf_V_4 { ap_memory {  { bn_weight_buf_V_4_address0 mem_address 1 2 }  { bn_weight_buf_V_4_ce0 mem_ce 1 1 }  { bn_weight_buf_V_4_we0 mem_we 1 1 }  { bn_weight_buf_V_4_d0 mem_din 1 11 } } }
	bn_bias_buf_V_4 { ap_memory {  { bn_bias_buf_V_4_address0 mem_address 1 2 }  { bn_bias_buf_V_4_ce0 mem_ce 1 1 }  { bn_bias_buf_V_4_we0 mem_we 1 1 }  { bn_bias_buf_V_4_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_5 { ap_memory {  { relu_shiftx_buf_V_5_address0 mem_address 1 1 }  { relu_shiftx_buf_V_5_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_5_we0 mem_we 1 1 }  { relu_shiftx_buf_V_5_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_5 { ap_memory {  { relu_shifty_buf_V_5_address0 mem_address 1 1 }  { relu_shifty_buf_V_5_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_5_we0 mem_we 1 1 }  { relu_shifty_buf_V_5_d0 mem_din 1 11 } } }
	relu_weight_buf_V_5 { ap_memory {  { relu_weight_buf_V_5_address0 mem_address 1 1 }  { relu_weight_buf_V_5_ce0 mem_ce 1 1 }  { relu_weight_buf_V_5_we0 mem_we 1 1 }  { relu_weight_buf_V_5_d0 mem_din 1 11 } } }
	bn_weight_buf_V_5 { ap_memory {  { bn_weight_buf_V_5_address0 mem_address 1 2 }  { bn_weight_buf_V_5_ce0 mem_ce 1 1 }  { bn_weight_buf_V_5_we0 mem_we 1 1 }  { bn_weight_buf_V_5_d0 mem_din 1 11 } } }
	bn_bias_buf_V_5 { ap_memory {  { bn_bias_buf_V_5_address0 mem_address 1 2 }  { bn_bias_buf_V_5_ce0 mem_ce 1 1 }  { bn_bias_buf_V_5_we0 mem_we 1 1 }  { bn_bias_buf_V_5_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_6 { ap_memory {  { relu_shiftx_buf_V_6_address0 mem_address 1 1 }  { relu_shiftx_buf_V_6_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_6_we0 mem_we 1 1 }  { relu_shiftx_buf_V_6_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_6 { ap_memory {  { relu_shifty_buf_V_6_address0 mem_address 1 1 }  { relu_shifty_buf_V_6_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_6_we0 mem_we 1 1 }  { relu_shifty_buf_V_6_d0 mem_din 1 11 } } }
	relu_weight_buf_V_6 { ap_memory {  { relu_weight_buf_V_6_address0 mem_address 1 1 }  { relu_weight_buf_V_6_ce0 mem_ce 1 1 }  { relu_weight_buf_V_6_we0 mem_we 1 1 }  { relu_weight_buf_V_6_d0 mem_din 1 11 } } }
	bn_weight_buf_V_6 { ap_memory {  { bn_weight_buf_V_6_address0 mem_address 1 2 }  { bn_weight_buf_V_6_ce0 mem_ce 1 1 }  { bn_weight_buf_V_6_we0 mem_we 1 1 }  { bn_weight_buf_V_6_d0 mem_din 1 11 } } }
	bn_bias_buf_V_6 { ap_memory {  { bn_bias_buf_V_6_address0 mem_address 1 2 }  { bn_bias_buf_V_6_ce0 mem_ce 1 1 }  { bn_bias_buf_V_6_we0 mem_we 1 1 }  { bn_bias_buf_V_6_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_7 { ap_memory {  { relu_shiftx_buf_V_7_address0 mem_address 1 1 }  { relu_shiftx_buf_V_7_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_7_we0 mem_we 1 1 }  { relu_shiftx_buf_V_7_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_7 { ap_memory {  { relu_shifty_buf_V_7_address0 mem_address 1 1 }  { relu_shifty_buf_V_7_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_7_we0 mem_we 1 1 }  { relu_shifty_buf_V_7_d0 mem_din 1 11 } } }
	relu_weight_buf_V_7 { ap_memory {  { relu_weight_buf_V_7_address0 mem_address 1 1 }  { relu_weight_buf_V_7_ce0 mem_ce 1 1 }  { relu_weight_buf_V_7_we0 mem_we 1 1 }  { relu_weight_buf_V_7_d0 mem_din 1 11 } } }
	bn_weight_buf_V_7 { ap_memory {  { bn_weight_buf_V_7_address0 mem_address 1 2 }  { bn_weight_buf_V_7_ce0 mem_ce 1 1 }  { bn_weight_buf_V_7_we0 mem_we 1 1 }  { bn_weight_buf_V_7_d0 mem_din 1 11 } } }
	bn_bias_buf_V_7 { ap_memory {  { bn_bias_buf_V_7_address0 mem_address 1 2 }  { bn_bias_buf_V_7_ce0 mem_ce 1 1 }  { bn_bias_buf_V_7_we0 mem_we 1 1 }  { bn_bias_buf_V_7_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_8 { ap_memory {  { relu_shiftx_buf_V_8_address0 mem_address 1 1 }  { relu_shiftx_buf_V_8_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_8_we0 mem_we 1 1 }  { relu_shiftx_buf_V_8_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_8 { ap_memory {  { relu_shifty_buf_V_8_address0 mem_address 1 1 }  { relu_shifty_buf_V_8_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_8_we0 mem_we 1 1 }  { relu_shifty_buf_V_8_d0 mem_din 1 11 } } }
	relu_weight_buf_V_8 { ap_memory {  { relu_weight_buf_V_8_address0 mem_address 1 1 }  { relu_weight_buf_V_8_ce0 mem_ce 1 1 }  { relu_weight_buf_V_8_we0 mem_we 1 1 }  { relu_weight_buf_V_8_d0 mem_din 1 11 } } }
	bn_weight_buf_V_8 { ap_memory {  { bn_weight_buf_V_8_address0 mem_address 1 2 }  { bn_weight_buf_V_8_ce0 mem_ce 1 1 }  { bn_weight_buf_V_8_we0 mem_we 1 1 }  { bn_weight_buf_V_8_d0 mem_din 1 11 } } }
	bn_bias_buf_V_8 { ap_memory {  { bn_bias_buf_V_8_address0 mem_address 1 2 }  { bn_bias_buf_V_8_ce0 mem_ce 1 1 }  { bn_bias_buf_V_8_we0 mem_we 1 1 }  { bn_bias_buf_V_8_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_9 { ap_memory {  { relu_shiftx_buf_V_9_address0 mem_address 1 1 }  { relu_shiftx_buf_V_9_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_9_we0 mem_we 1 1 }  { relu_shiftx_buf_V_9_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_9 { ap_memory {  { relu_shifty_buf_V_9_address0 mem_address 1 1 }  { relu_shifty_buf_V_9_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_9_we0 mem_we 1 1 }  { relu_shifty_buf_V_9_d0 mem_din 1 11 } } }
	relu_weight_buf_V_9 { ap_memory {  { relu_weight_buf_V_9_address0 mem_address 1 1 }  { relu_weight_buf_V_9_ce0 mem_ce 1 1 }  { relu_weight_buf_V_9_we0 mem_we 1 1 }  { relu_weight_buf_V_9_d0 mem_din 1 11 } } }
	bn_weight_buf_V_9 { ap_memory {  { bn_weight_buf_V_9_address0 mem_address 1 2 }  { bn_weight_buf_V_9_ce0 mem_ce 1 1 }  { bn_weight_buf_V_9_we0 mem_we 1 1 }  { bn_weight_buf_V_9_d0 mem_din 1 11 } } }
	bn_bias_buf_V_9 { ap_memory {  { bn_bias_buf_V_9_address0 mem_address 1 2 }  { bn_bias_buf_V_9_ce0 mem_ce 1 1 }  { bn_bias_buf_V_9_we0 mem_we 1 1 }  { bn_bias_buf_V_9_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_10 { ap_memory {  { relu_shiftx_buf_V_10_address0 mem_address 1 1 }  { relu_shiftx_buf_V_10_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_10_we0 mem_we 1 1 }  { relu_shiftx_buf_V_10_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_10 { ap_memory {  { relu_shifty_buf_V_10_address0 mem_address 1 1 }  { relu_shifty_buf_V_10_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_10_we0 mem_we 1 1 }  { relu_shifty_buf_V_10_d0 mem_din 1 11 } } }
	relu_weight_buf_V_10 { ap_memory {  { relu_weight_buf_V_10_address0 mem_address 1 1 }  { relu_weight_buf_V_10_ce0 mem_ce 1 1 }  { relu_weight_buf_V_10_we0 mem_we 1 1 }  { relu_weight_buf_V_10_d0 mem_din 1 11 } } }
	bn_weight_buf_V_10 { ap_memory {  { bn_weight_buf_V_10_address0 mem_address 1 2 }  { bn_weight_buf_V_10_ce0 mem_ce 1 1 }  { bn_weight_buf_V_10_we0 mem_we 1 1 }  { bn_weight_buf_V_10_d0 mem_din 1 11 } } }
	bn_bias_buf_V_10 { ap_memory {  { bn_bias_buf_V_10_address0 mem_address 1 2 }  { bn_bias_buf_V_10_ce0 mem_ce 1 1 }  { bn_bias_buf_V_10_we0 mem_we 1 1 }  { bn_bias_buf_V_10_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_11 { ap_memory {  { relu_shiftx_buf_V_11_address0 mem_address 1 1 }  { relu_shiftx_buf_V_11_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_11_we0 mem_we 1 1 }  { relu_shiftx_buf_V_11_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_11 { ap_memory {  { relu_shifty_buf_V_11_address0 mem_address 1 1 }  { relu_shifty_buf_V_11_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_11_we0 mem_we 1 1 }  { relu_shifty_buf_V_11_d0 mem_din 1 11 } } }
	relu_weight_buf_V_11 { ap_memory {  { relu_weight_buf_V_11_address0 mem_address 1 1 }  { relu_weight_buf_V_11_ce0 mem_ce 1 1 }  { relu_weight_buf_V_11_we0 mem_we 1 1 }  { relu_weight_buf_V_11_d0 mem_din 1 11 } } }
	bn_weight_buf_V_11 { ap_memory {  { bn_weight_buf_V_11_address0 mem_address 1 2 }  { bn_weight_buf_V_11_ce0 mem_ce 1 1 }  { bn_weight_buf_V_11_we0 mem_we 1 1 }  { bn_weight_buf_V_11_d0 mem_din 1 11 } } }
	bn_bias_buf_V_11 { ap_memory {  { bn_bias_buf_V_11_address0 mem_address 1 2 }  { bn_bias_buf_V_11_ce0 mem_ce 1 1 }  { bn_bias_buf_V_11_we0 mem_we 1 1 }  { bn_bias_buf_V_11_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_12 { ap_memory {  { relu_shiftx_buf_V_12_address0 mem_address 1 1 }  { relu_shiftx_buf_V_12_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_12_we0 mem_we 1 1 }  { relu_shiftx_buf_V_12_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_12 { ap_memory {  { relu_shifty_buf_V_12_address0 mem_address 1 1 }  { relu_shifty_buf_V_12_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_12_we0 mem_we 1 1 }  { relu_shifty_buf_V_12_d0 mem_din 1 11 } } }
	relu_weight_buf_V_12 { ap_memory {  { relu_weight_buf_V_12_address0 mem_address 1 1 }  { relu_weight_buf_V_12_ce0 mem_ce 1 1 }  { relu_weight_buf_V_12_we0 mem_we 1 1 }  { relu_weight_buf_V_12_d0 mem_din 1 11 } } }
	bn_weight_buf_V_12 { ap_memory {  { bn_weight_buf_V_12_address0 mem_address 1 2 }  { bn_weight_buf_V_12_ce0 mem_ce 1 1 }  { bn_weight_buf_V_12_we0 mem_we 1 1 }  { bn_weight_buf_V_12_d0 mem_din 1 11 } } }
	bn_bias_buf_V_12 { ap_memory {  { bn_bias_buf_V_12_address0 mem_address 1 2 }  { bn_bias_buf_V_12_ce0 mem_ce 1 1 }  { bn_bias_buf_V_12_we0 mem_we 1 1 }  { bn_bias_buf_V_12_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_13 { ap_memory {  { relu_shiftx_buf_V_13_address0 mem_address 1 1 }  { relu_shiftx_buf_V_13_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_13_we0 mem_we 1 1 }  { relu_shiftx_buf_V_13_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_13 { ap_memory {  { relu_shifty_buf_V_13_address0 mem_address 1 1 }  { relu_shifty_buf_V_13_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_13_we0 mem_we 1 1 }  { relu_shifty_buf_V_13_d0 mem_din 1 11 } } }
	relu_weight_buf_V_13 { ap_memory {  { relu_weight_buf_V_13_address0 mem_address 1 1 }  { relu_weight_buf_V_13_ce0 mem_ce 1 1 }  { relu_weight_buf_V_13_we0 mem_we 1 1 }  { relu_weight_buf_V_13_d0 mem_din 1 11 } } }
	bn_weight_buf_V_13 { ap_memory {  { bn_weight_buf_V_13_address0 mem_address 1 2 }  { bn_weight_buf_V_13_ce0 mem_ce 1 1 }  { bn_weight_buf_V_13_we0 mem_we 1 1 }  { bn_weight_buf_V_13_d0 mem_din 1 11 } } }
	bn_bias_buf_V_13 { ap_memory {  { bn_bias_buf_V_13_address0 mem_address 1 2 }  { bn_bias_buf_V_13_ce0 mem_ce 1 1 }  { bn_bias_buf_V_13_we0 mem_we 1 1 }  { bn_bias_buf_V_13_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_14 { ap_memory {  { relu_shiftx_buf_V_14_address0 mem_address 1 1 }  { relu_shiftx_buf_V_14_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_14_we0 mem_we 1 1 }  { relu_shiftx_buf_V_14_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_14 { ap_memory {  { relu_shifty_buf_V_14_address0 mem_address 1 1 }  { relu_shifty_buf_V_14_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_14_we0 mem_we 1 1 }  { relu_shifty_buf_V_14_d0 mem_din 1 11 } } }
	relu_weight_buf_V_14 { ap_memory {  { relu_weight_buf_V_14_address0 mem_address 1 1 }  { relu_weight_buf_V_14_ce0 mem_ce 1 1 }  { relu_weight_buf_V_14_we0 mem_we 1 1 }  { relu_weight_buf_V_14_d0 mem_din 1 11 } } }
	bn_weight_buf_V_14 { ap_memory {  { bn_weight_buf_V_14_address0 mem_address 1 2 }  { bn_weight_buf_V_14_ce0 mem_ce 1 1 }  { bn_weight_buf_V_14_we0 mem_we 1 1 }  { bn_weight_buf_V_14_d0 mem_din 1 11 } } }
	bn_bias_buf_V_14 { ap_memory {  { bn_bias_buf_V_14_address0 mem_address 1 2 }  { bn_bias_buf_V_14_ce0 mem_ce 1 1 }  { bn_bias_buf_V_14_we0 mem_we 1 1 }  { bn_bias_buf_V_14_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_15 { ap_memory {  { relu_shiftx_buf_V_15_address0 mem_address 1 1 }  { relu_shiftx_buf_V_15_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_15_we0 mem_we 1 1 }  { relu_shiftx_buf_V_15_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_15 { ap_memory {  { relu_shifty_buf_V_15_address0 mem_address 1 1 }  { relu_shifty_buf_V_15_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_15_we0 mem_we 1 1 }  { relu_shifty_buf_V_15_d0 mem_din 1 11 } } }
	relu_weight_buf_V_15 { ap_memory {  { relu_weight_buf_V_15_address0 mem_address 1 1 }  { relu_weight_buf_V_15_ce0 mem_ce 1 1 }  { relu_weight_buf_V_15_we0 mem_we 1 1 }  { relu_weight_buf_V_15_d0 mem_din 1 11 } } }
	bn_weight_buf_V_15 { ap_memory {  { bn_weight_buf_V_15_address0 mem_address 1 2 }  { bn_weight_buf_V_15_ce0 mem_ce 1 1 }  { bn_weight_buf_V_15_we0 mem_we 1 1 }  { bn_weight_buf_V_15_d0 mem_din 1 11 } } }
	bn_bias_buf_V_15 { ap_memory {  { bn_bias_buf_V_15_address0 mem_address 1 2 }  { bn_bias_buf_V_15_ce0 mem_ce 1 1 }  { bn_bias_buf_V_15_we0 mem_we 1 1 }  { bn_bias_buf_V_15_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_16 { ap_memory {  { relu_shiftx_buf_V_16_address0 mem_address 1 1 }  { relu_shiftx_buf_V_16_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_16_we0 mem_we 1 1 }  { relu_shiftx_buf_V_16_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_16 { ap_memory {  { relu_shifty_buf_V_16_address0 mem_address 1 1 }  { relu_shifty_buf_V_16_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_16_we0 mem_we 1 1 }  { relu_shifty_buf_V_16_d0 mem_din 1 11 } } }
	relu_weight_buf_V_16 { ap_memory {  { relu_weight_buf_V_16_address0 mem_address 1 1 }  { relu_weight_buf_V_16_ce0 mem_ce 1 1 }  { relu_weight_buf_V_16_we0 mem_we 1 1 }  { relu_weight_buf_V_16_d0 mem_din 1 11 } } }
	bn_weight_buf_V_16 { ap_memory {  { bn_weight_buf_V_16_address0 mem_address 1 2 }  { bn_weight_buf_V_16_ce0 mem_ce 1 1 }  { bn_weight_buf_V_16_we0 mem_we 1 1 }  { bn_weight_buf_V_16_d0 mem_din 1 11 } } }
	bn_bias_buf_V_16 { ap_memory {  { bn_bias_buf_V_16_address0 mem_address 1 2 }  { bn_bias_buf_V_16_ce0 mem_ce 1 1 }  { bn_bias_buf_V_16_we0 mem_we 1 1 }  { bn_bias_buf_V_16_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_17 { ap_memory {  { relu_shiftx_buf_V_17_address0 mem_address 1 1 }  { relu_shiftx_buf_V_17_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_17_we0 mem_we 1 1 }  { relu_shiftx_buf_V_17_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_17 { ap_memory {  { relu_shifty_buf_V_17_address0 mem_address 1 1 }  { relu_shifty_buf_V_17_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_17_we0 mem_we 1 1 }  { relu_shifty_buf_V_17_d0 mem_din 1 11 } } }
	relu_weight_buf_V_17 { ap_memory {  { relu_weight_buf_V_17_address0 mem_address 1 1 }  { relu_weight_buf_V_17_ce0 mem_ce 1 1 }  { relu_weight_buf_V_17_we0 mem_we 1 1 }  { relu_weight_buf_V_17_d0 mem_din 1 11 } } }
	bn_weight_buf_V_17 { ap_memory {  { bn_weight_buf_V_17_address0 mem_address 1 2 }  { bn_weight_buf_V_17_ce0 mem_ce 1 1 }  { bn_weight_buf_V_17_we0 mem_we 1 1 }  { bn_weight_buf_V_17_d0 mem_din 1 11 } } }
	bn_bias_buf_V_17 { ap_memory {  { bn_bias_buf_V_17_address0 mem_address 1 2 }  { bn_bias_buf_V_17_ce0 mem_ce 1 1 }  { bn_bias_buf_V_17_we0 mem_we 1 1 }  { bn_bias_buf_V_17_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_18 { ap_memory {  { relu_shiftx_buf_V_18_address0 mem_address 1 1 }  { relu_shiftx_buf_V_18_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_18_we0 mem_we 1 1 }  { relu_shiftx_buf_V_18_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_18 { ap_memory {  { relu_shifty_buf_V_18_address0 mem_address 1 1 }  { relu_shifty_buf_V_18_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_18_we0 mem_we 1 1 }  { relu_shifty_buf_V_18_d0 mem_din 1 11 } } }
	relu_weight_buf_V_18 { ap_memory {  { relu_weight_buf_V_18_address0 mem_address 1 1 }  { relu_weight_buf_V_18_ce0 mem_ce 1 1 }  { relu_weight_buf_V_18_we0 mem_we 1 1 }  { relu_weight_buf_V_18_d0 mem_din 1 11 } } }
	bn_weight_buf_V_18 { ap_memory {  { bn_weight_buf_V_18_address0 mem_address 1 2 }  { bn_weight_buf_V_18_ce0 mem_ce 1 1 }  { bn_weight_buf_V_18_we0 mem_we 1 1 }  { bn_weight_buf_V_18_d0 mem_din 1 11 } } }
	bn_bias_buf_V_18 { ap_memory {  { bn_bias_buf_V_18_address0 mem_address 1 2 }  { bn_bias_buf_V_18_ce0 mem_ce 1 1 }  { bn_bias_buf_V_18_we0 mem_we 1 1 }  { bn_bias_buf_V_18_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_19 { ap_memory {  { relu_shiftx_buf_V_19_address0 mem_address 1 1 }  { relu_shiftx_buf_V_19_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_19_we0 mem_we 1 1 }  { relu_shiftx_buf_V_19_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_19 { ap_memory {  { relu_shifty_buf_V_19_address0 mem_address 1 1 }  { relu_shifty_buf_V_19_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_19_we0 mem_we 1 1 }  { relu_shifty_buf_V_19_d0 mem_din 1 11 } } }
	relu_weight_buf_V_19 { ap_memory {  { relu_weight_buf_V_19_address0 mem_address 1 1 }  { relu_weight_buf_V_19_ce0 mem_ce 1 1 }  { relu_weight_buf_V_19_we0 mem_we 1 1 }  { relu_weight_buf_V_19_d0 mem_din 1 11 } } }
	bn_weight_buf_V_19 { ap_memory {  { bn_weight_buf_V_19_address0 mem_address 1 2 }  { bn_weight_buf_V_19_ce0 mem_ce 1 1 }  { bn_weight_buf_V_19_we0 mem_we 1 1 }  { bn_weight_buf_V_19_d0 mem_din 1 11 } } }
	bn_bias_buf_V_19 { ap_memory {  { bn_bias_buf_V_19_address0 mem_address 1 2 }  { bn_bias_buf_V_19_ce0 mem_ce 1 1 }  { bn_bias_buf_V_19_we0 mem_we 1 1 }  { bn_bias_buf_V_19_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_20 { ap_memory {  { relu_shiftx_buf_V_20_address0 mem_address 1 1 }  { relu_shiftx_buf_V_20_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_20_we0 mem_we 1 1 }  { relu_shiftx_buf_V_20_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_20 { ap_memory {  { relu_shifty_buf_V_20_address0 mem_address 1 1 }  { relu_shifty_buf_V_20_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_20_we0 mem_we 1 1 }  { relu_shifty_buf_V_20_d0 mem_din 1 11 } } }
	relu_weight_buf_V_20 { ap_memory {  { relu_weight_buf_V_20_address0 mem_address 1 1 }  { relu_weight_buf_V_20_ce0 mem_ce 1 1 }  { relu_weight_buf_V_20_we0 mem_we 1 1 }  { relu_weight_buf_V_20_d0 mem_din 1 11 } } }
	bn_weight_buf_V_20 { ap_memory {  { bn_weight_buf_V_20_address0 mem_address 1 2 }  { bn_weight_buf_V_20_ce0 mem_ce 1 1 }  { bn_weight_buf_V_20_we0 mem_we 1 1 }  { bn_weight_buf_V_20_d0 mem_din 1 11 } } }
	bn_bias_buf_V_20 { ap_memory {  { bn_bias_buf_V_20_address0 mem_address 1 2 }  { bn_bias_buf_V_20_ce0 mem_ce 1 1 }  { bn_bias_buf_V_20_we0 mem_we 1 1 }  { bn_bias_buf_V_20_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_21 { ap_memory {  { relu_shiftx_buf_V_21_address0 mem_address 1 1 }  { relu_shiftx_buf_V_21_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_21_we0 mem_we 1 1 }  { relu_shiftx_buf_V_21_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_21 { ap_memory {  { relu_shifty_buf_V_21_address0 mem_address 1 1 }  { relu_shifty_buf_V_21_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_21_we0 mem_we 1 1 }  { relu_shifty_buf_V_21_d0 mem_din 1 11 } } }
	relu_weight_buf_V_21 { ap_memory {  { relu_weight_buf_V_21_address0 mem_address 1 1 }  { relu_weight_buf_V_21_ce0 mem_ce 1 1 }  { relu_weight_buf_V_21_we0 mem_we 1 1 }  { relu_weight_buf_V_21_d0 mem_din 1 11 } } }
	bn_weight_buf_V_21 { ap_memory {  { bn_weight_buf_V_21_address0 mem_address 1 2 }  { bn_weight_buf_V_21_ce0 mem_ce 1 1 }  { bn_weight_buf_V_21_we0 mem_we 1 1 }  { bn_weight_buf_V_21_d0 mem_din 1 11 } } }
	bn_bias_buf_V_21 { ap_memory {  { bn_bias_buf_V_21_address0 mem_address 1 2 }  { bn_bias_buf_V_21_ce0 mem_ce 1 1 }  { bn_bias_buf_V_21_we0 mem_we 1 1 }  { bn_bias_buf_V_21_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_22 { ap_memory {  { relu_shiftx_buf_V_22_address0 mem_address 1 1 }  { relu_shiftx_buf_V_22_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_22_we0 mem_we 1 1 }  { relu_shiftx_buf_V_22_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_22 { ap_memory {  { relu_shifty_buf_V_22_address0 mem_address 1 1 }  { relu_shifty_buf_V_22_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_22_we0 mem_we 1 1 }  { relu_shifty_buf_V_22_d0 mem_din 1 11 } } }
	relu_weight_buf_V_22 { ap_memory {  { relu_weight_buf_V_22_address0 mem_address 1 1 }  { relu_weight_buf_V_22_ce0 mem_ce 1 1 }  { relu_weight_buf_V_22_we0 mem_we 1 1 }  { relu_weight_buf_V_22_d0 mem_din 1 11 } } }
	bn_weight_buf_V_22 { ap_memory {  { bn_weight_buf_V_22_address0 mem_address 1 2 }  { bn_weight_buf_V_22_ce0 mem_ce 1 1 }  { bn_weight_buf_V_22_we0 mem_we 1 1 }  { bn_weight_buf_V_22_d0 mem_din 1 11 } } }
	bn_bias_buf_V_22 { ap_memory {  { bn_bias_buf_V_22_address0 mem_address 1 2 }  { bn_bias_buf_V_22_ce0 mem_ce 1 1 }  { bn_bias_buf_V_22_we0 mem_we 1 1 }  { bn_bias_buf_V_22_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_23 { ap_memory {  { relu_shiftx_buf_V_23_address0 mem_address 1 1 }  { relu_shiftx_buf_V_23_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_23_we0 mem_we 1 1 }  { relu_shiftx_buf_V_23_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_23 { ap_memory {  { relu_shifty_buf_V_23_address0 mem_address 1 1 }  { relu_shifty_buf_V_23_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_23_we0 mem_we 1 1 }  { relu_shifty_buf_V_23_d0 mem_din 1 11 } } }
	relu_weight_buf_V_23 { ap_memory {  { relu_weight_buf_V_23_address0 mem_address 1 1 }  { relu_weight_buf_V_23_ce0 mem_ce 1 1 }  { relu_weight_buf_V_23_we0 mem_we 1 1 }  { relu_weight_buf_V_23_d0 mem_din 1 11 } } }
	bn_weight_buf_V_23 { ap_memory {  { bn_weight_buf_V_23_address0 mem_address 1 2 }  { bn_weight_buf_V_23_ce0 mem_ce 1 1 }  { bn_weight_buf_V_23_we0 mem_we 1 1 }  { bn_weight_buf_V_23_d0 mem_din 1 11 } } }
	bn_bias_buf_V_23 { ap_memory {  { bn_bias_buf_V_23_address0 mem_address 1 2 }  { bn_bias_buf_V_23_ce0 mem_ce 1 1 }  { bn_bias_buf_V_23_we0 mem_we 1 1 }  { bn_bias_buf_V_23_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_24 { ap_memory {  { relu_shiftx_buf_V_24_address0 mem_address 1 1 }  { relu_shiftx_buf_V_24_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_24_we0 mem_we 1 1 }  { relu_shiftx_buf_V_24_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_24 { ap_memory {  { relu_shifty_buf_V_24_address0 mem_address 1 1 }  { relu_shifty_buf_V_24_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_24_we0 mem_we 1 1 }  { relu_shifty_buf_V_24_d0 mem_din 1 11 } } }
	relu_weight_buf_V_24 { ap_memory {  { relu_weight_buf_V_24_address0 mem_address 1 1 }  { relu_weight_buf_V_24_ce0 mem_ce 1 1 }  { relu_weight_buf_V_24_we0 mem_we 1 1 }  { relu_weight_buf_V_24_d0 mem_din 1 11 } } }
	bn_weight_buf_V_24 { ap_memory {  { bn_weight_buf_V_24_address0 mem_address 1 2 }  { bn_weight_buf_V_24_ce0 mem_ce 1 1 }  { bn_weight_buf_V_24_we0 mem_we 1 1 }  { bn_weight_buf_V_24_d0 mem_din 1 11 } } }
	bn_bias_buf_V_24 { ap_memory {  { bn_bias_buf_V_24_address0 mem_address 1 2 }  { bn_bias_buf_V_24_ce0 mem_ce 1 1 }  { bn_bias_buf_V_24_we0 mem_we 1 1 }  { bn_bias_buf_V_24_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_25 { ap_memory {  { relu_shiftx_buf_V_25_address0 mem_address 1 1 }  { relu_shiftx_buf_V_25_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_25_we0 mem_we 1 1 }  { relu_shiftx_buf_V_25_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_25 { ap_memory {  { relu_shifty_buf_V_25_address0 mem_address 1 1 }  { relu_shifty_buf_V_25_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_25_we0 mem_we 1 1 }  { relu_shifty_buf_V_25_d0 mem_din 1 11 } } }
	relu_weight_buf_V_25 { ap_memory {  { relu_weight_buf_V_25_address0 mem_address 1 1 }  { relu_weight_buf_V_25_ce0 mem_ce 1 1 }  { relu_weight_buf_V_25_we0 mem_we 1 1 }  { relu_weight_buf_V_25_d0 mem_din 1 11 } } }
	bn_weight_buf_V_25 { ap_memory {  { bn_weight_buf_V_25_address0 mem_address 1 2 }  { bn_weight_buf_V_25_ce0 mem_ce 1 1 }  { bn_weight_buf_V_25_we0 mem_we 1 1 }  { bn_weight_buf_V_25_d0 mem_din 1 11 } } }
	bn_bias_buf_V_25 { ap_memory {  { bn_bias_buf_V_25_address0 mem_address 1 2 }  { bn_bias_buf_V_25_ce0 mem_ce 1 1 }  { bn_bias_buf_V_25_we0 mem_we 1 1 }  { bn_bias_buf_V_25_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_26 { ap_memory {  { relu_shiftx_buf_V_26_address0 mem_address 1 1 }  { relu_shiftx_buf_V_26_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_26_we0 mem_we 1 1 }  { relu_shiftx_buf_V_26_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_26 { ap_memory {  { relu_shifty_buf_V_26_address0 mem_address 1 1 }  { relu_shifty_buf_V_26_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_26_we0 mem_we 1 1 }  { relu_shifty_buf_V_26_d0 mem_din 1 11 } } }
	relu_weight_buf_V_26 { ap_memory {  { relu_weight_buf_V_26_address0 mem_address 1 1 }  { relu_weight_buf_V_26_ce0 mem_ce 1 1 }  { relu_weight_buf_V_26_we0 mem_we 1 1 }  { relu_weight_buf_V_26_d0 mem_din 1 11 } } }
	bn_weight_buf_V_26 { ap_memory {  { bn_weight_buf_V_26_address0 mem_address 1 2 }  { bn_weight_buf_V_26_ce0 mem_ce 1 1 }  { bn_weight_buf_V_26_we0 mem_we 1 1 }  { bn_weight_buf_V_26_d0 mem_din 1 11 } } }
	bn_bias_buf_V_26 { ap_memory {  { bn_bias_buf_V_26_address0 mem_address 1 2 }  { bn_bias_buf_V_26_ce0 mem_ce 1 1 }  { bn_bias_buf_V_26_we0 mem_we 1 1 }  { bn_bias_buf_V_26_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_27 { ap_memory {  { relu_shiftx_buf_V_27_address0 mem_address 1 1 }  { relu_shiftx_buf_V_27_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_27_we0 mem_we 1 1 }  { relu_shiftx_buf_V_27_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_27 { ap_memory {  { relu_shifty_buf_V_27_address0 mem_address 1 1 }  { relu_shifty_buf_V_27_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_27_we0 mem_we 1 1 }  { relu_shifty_buf_V_27_d0 mem_din 1 11 } } }
	relu_weight_buf_V_27 { ap_memory {  { relu_weight_buf_V_27_address0 mem_address 1 1 }  { relu_weight_buf_V_27_ce0 mem_ce 1 1 }  { relu_weight_buf_V_27_we0 mem_we 1 1 }  { relu_weight_buf_V_27_d0 mem_din 1 11 } } }
	bn_weight_buf_V_27 { ap_memory {  { bn_weight_buf_V_27_address0 mem_address 1 2 }  { bn_weight_buf_V_27_ce0 mem_ce 1 1 }  { bn_weight_buf_V_27_we0 mem_we 1 1 }  { bn_weight_buf_V_27_d0 mem_din 1 11 } } }
	bn_bias_buf_V_27 { ap_memory {  { bn_bias_buf_V_27_address0 mem_address 1 2 }  { bn_bias_buf_V_27_ce0 mem_ce 1 1 }  { bn_bias_buf_V_27_we0 mem_we 1 1 }  { bn_bias_buf_V_27_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_28 { ap_memory {  { relu_shiftx_buf_V_28_address0 mem_address 1 1 }  { relu_shiftx_buf_V_28_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_28_we0 mem_we 1 1 }  { relu_shiftx_buf_V_28_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_28 { ap_memory {  { relu_shifty_buf_V_28_address0 mem_address 1 1 }  { relu_shifty_buf_V_28_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_28_we0 mem_we 1 1 }  { relu_shifty_buf_V_28_d0 mem_din 1 11 } } }
	relu_weight_buf_V_28 { ap_memory {  { relu_weight_buf_V_28_address0 mem_address 1 1 }  { relu_weight_buf_V_28_ce0 mem_ce 1 1 }  { relu_weight_buf_V_28_we0 mem_we 1 1 }  { relu_weight_buf_V_28_d0 mem_din 1 11 } } }
	bn_weight_buf_V_28 { ap_memory {  { bn_weight_buf_V_28_address0 mem_address 1 2 }  { bn_weight_buf_V_28_ce0 mem_ce 1 1 }  { bn_weight_buf_V_28_we0 mem_we 1 1 }  { bn_weight_buf_V_28_d0 mem_din 1 11 } } }
	bn_bias_buf_V_28 { ap_memory {  { bn_bias_buf_V_28_address0 mem_address 1 2 }  { bn_bias_buf_V_28_ce0 mem_ce 1 1 }  { bn_bias_buf_V_28_we0 mem_we 1 1 }  { bn_bias_buf_V_28_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_29 { ap_memory {  { relu_shiftx_buf_V_29_address0 mem_address 1 1 }  { relu_shiftx_buf_V_29_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_29_we0 mem_we 1 1 }  { relu_shiftx_buf_V_29_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_29 { ap_memory {  { relu_shifty_buf_V_29_address0 mem_address 1 1 }  { relu_shifty_buf_V_29_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_29_we0 mem_we 1 1 }  { relu_shifty_buf_V_29_d0 mem_din 1 11 } } }
	relu_weight_buf_V_29 { ap_memory {  { relu_weight_buf_V_29_address0 mem_address 1 1 }  { relu_weight_buf_V_29_ce0 mem_ce 1 1 }  { relu_weight_buf_V_29_we0 mem_we 1 1 }  { relu_weight_buf_V_29_d0 mem_din 1 11 } } }
	bn_weight_buf_V_29 { ap_memory {  { bn_weight_buf_V_29_address0 mem_address 1 2 }  { bn_weight_buf_V_29_ce0 mem_ce 1 1 }  { bn_weight_buf_V_29_we0 mem_we 1 1 }  { bn_weight_buf_V_29_d0 mem_din 1 11 } } }
	bn_bias_buf_V_29 { ap_memory {  { bn_bias_buf_V_29_address0 mem_address 1 2 }  { bn_bias_buf_V_29_ce0 mem_ce 1 1 }  { bn_bias_buf_V_29_we0 mem_we 1 1 }  { bn_bias_buf_V_29_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_30 { ap_memory {  { relu_shiftx_buf_V_30_address0 mem_address 1 1 }  { relu_shiftx_buf_V_30_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_30_we0 mem_we 1 1 }  { relu_shiftx_buf_V_30_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_30 { ap_memory {  { relu_shifty_buf_V_30_address0 mem_address 1 1 }  { relu_shifty_buf_V_30_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_30_we0 mem_we 1 1 }  { relu_shifty_buf_V_30_d0 mem_din 1 11 } } }
	relu_weight_buf_V_30 { ap_memory {  { relu_weight_buf_V_30_address0 mem_address 1 1 }  { relu_weight_buf_V_30_ce0 mem_ce 1 1 }  { relu_weight_buf_V_30_we0 mem_we 1 1 }  { relu_weight_buf_V_30_d0 mem_din 1 11 } } }
	bn_weight_buf_V_30 { ap_memory {  { bn_weight_buf_V_30_address0 mem_address 1 2 }  { bn_weight_buf_V_30_ce0 mem_ce 1 1 }  { bn_weight_buf_V_30_we0 mem_we 1 1 }  { bn_weight_buf_V_30_d0 mem_din 1 11 } } }
	bn_bias_buf_V_30 { ap_memory {  { bn_bias_buf_V_30_address0 mem_address 1 2 }  { bn_bias_buf_V_30_ce0 mem_ce 1 1 }  { bn_bias_buf_V_30_we0 mem_we 1 1 }  { bn_bias_buf_V_30_d0 mem_din 1 11 } } }
	relu_shiftx_buf_V_31 { ap_memory {  { relu_shiftx_buf_V_31_address0 mem_address 1 1 }  { relu_shiftx_buf_V_31_ce0 mem_ce 1 1 }  { relu_shiftx_buf_V_31_we0 mem_we 1 1 }  { relu_shiftx_buf_V_31_d0 mem_din 1 11 } } }
	relu_shifty_buf_V_31 { ap_memory {  { relu_shifty_buf_V_31_address0 mem_address 1 1 }  { relu_shifty_buf_V_31_ce0 mem_ce 1 1 }  { relu_shifty_buf_V_31_we0 mem_we 1 1 }  { relu_shifty_buf_V_31_d0 mem_din 1 11 } } }
	relu_weight_buf_V_31 { ap_memory {  { relu_weight_buf_V_31_address0 mem_address 1 1 }  { relu_weight_buf_V_31_ce0 mem_ce 1 1 }  { relu_weight_buf_V_31_we0 mem_we 1 1 }  { relu_weight_buf_V_31_d0 mem_din 1 11 } } }
	bn_weight_buf_V_31 { ap_memory {  { bn_weight_buf_V_31_address0 mem_address 1 2 }  { bn_weight_buf_V_31_ce0 mem_ce 1 1 }  { bn_weight_buf_V_31_we0 mem_we 1 1 }  { bn_weight_buf_V_31_d0 mem_din 1 11 } } }
	bn_bias_buf_V_31 { ap_memory {  { bn_bias_buf_V_31_address0 mem_address 1 2 }  { bn_bias_buf_V_31_ce0 mem_ce 1 1 }  { bn_bias_buf_V_31_we0 mem_we 1 1 }  { bn_bias_buf_V_31_d0 mem_din 1 11 } } }
}
