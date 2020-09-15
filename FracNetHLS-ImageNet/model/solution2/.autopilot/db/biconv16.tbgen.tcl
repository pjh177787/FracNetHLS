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
	{ bottom_V int 16 regular {array 81 { 1 1 } 1 1 }  }
	{ weights_0_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_1_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_2_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_3_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_4_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_5_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_6_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_7_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_8_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_9_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_10_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_11_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_12_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_13_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_14_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_15_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_16_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_17_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_18_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_19_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_20_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_21_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_22_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_23_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_24_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_25_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_26_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_27_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_28_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_29_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_30_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_31_V int 16 regular {array 54 { 1 1 } 1 1 }  }
	{ weights_V_offset int 3 regular  }
	{ bn_weight_V int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V32 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V33 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V34 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V35 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V36 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V37 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V38 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V39 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V40 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V41 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V42 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V43 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V44 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V45 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V46 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V47 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V48 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V49 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V50 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V51 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V52 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V53 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V54 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V55 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V56 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V57 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V58 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V59 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V60 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V61 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V62 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weight_V_offset int 3 regular  }
	{ bn_bias_V int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V63 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V64 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V65 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V66 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V67 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V68 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V69 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V70 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V71 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V72 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V73 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V74 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V75 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V76 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V77 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V78 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V79 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V80 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V81 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V82 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V83 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V84 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V85 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V86 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V87 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V88 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V89 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V90 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V91 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V92 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V93 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V_offset int 3 regular  }
	{ top_0_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_1_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_2_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_3_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_4_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_5_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_6_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_7_V int 14 regular {array 81 { 1 0 } 1 1 }  }
	{ top_8_V int 14 regular {array 81 { 1 0 } 1 1 }  }
	{ top_9_V int 14 regular {array 81 { 1 0 } 1 1 }  }
	{ top_10_V int 14 regular {array 81 { 1 0 } 1 1 }  }
	{ top_11_V int 14 regular {array 81 { 1 0 } 1 1 }  }
	{ top_12_V int 14 regular {array 81 { 1 0 } 1 1 }  }
	{ top_13_V int 14 regular {array 81 { 1 0 } 1 1 }  }
	{ top_14_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_15_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_16_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_17_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_18_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_19_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_20_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_21_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_22_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_23_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_24_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_25_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_26_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_27_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_28_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_29_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_30_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_31_V int 14 regular {array 81 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "bottom_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_10_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_11_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_12_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_13_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_14_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_15_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_16_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_17_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_18_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_19_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_20_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_21_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_22_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_23_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_24_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_25_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_26_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_27_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_28_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_29_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_30_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_31_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weights_V_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V32", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V33", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V34", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V35", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V36", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V37", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V38", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V39", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V40", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V41", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V42", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V43", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V44", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V45", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V46", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V47", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V48", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V49", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V50", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V51", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V52", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V53", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V54", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V55", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V56", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V57", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V58", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V59", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V60", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V61", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V62", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_V_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V63", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V64", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V65", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V66", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V67", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V68", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V69", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V70", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V71", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V72", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V73", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V74", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V75", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V76", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V77", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V78", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V79", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V80", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V81", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V82", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V83", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V84", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V85", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V86", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V87", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V88", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V89", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V90", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V91", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V92", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V93", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "top_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_2_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_3_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_4_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_5_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_6_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_7_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_8_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_9_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_10_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_11_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_12_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_13_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_14_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_15_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_16_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_17_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_18_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_19_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_20_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_21_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_22_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_23_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_24_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_25_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_26_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_27_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_28_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_29_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_30_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "top_31_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 573
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ bottom_V_address0 sc_out sc_lv 7 signal 0 } 
	{ bottom_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ bottom_V_q0 sc_in sc_lv 16 signal 0 } 
	{ bottom_V_address1 sc_out sc_lv 7 signal 0 } 
	{ bottom_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ bottom_V_q1 sc_in sc_lv 16 signal 0 } 
	{ weights_0_V_address0 sc_out sc_lv 6 signal 1 } 
	{ weights_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ weights_0_V_q0 sc_in sc_lv 16 signal 1 } 
	{ weights_0_V_address1 sc_out sc_lv 6 signal 1 } 
	{ weights_0_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ weights_0_V_q1 sc_in sc_lv 16 signal 1 } 
	{ weights_1_V_address0 sc_out sc_lv 6 signal 2 } 
	{ weights_1_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ weights_1_V_q0 sc_in sc_lv 16 signal 2 } 
	{ weights_1_V_address1 sc_out sc_lv 6 signal 2 } 
	{ weights_1_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ weights_1_V_q1 sc_in sc_lv 16 signal 2 } 
	{ weights_2_V_address0 sc_out sc_lv 6 signal 3 } 
	{ weights_2_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ weights_2_V_q0 sc_in sc_lv 16 signal 3 } 
	{ weights_2_V_address1 sc_out sc_lv 6 signal 3 } 
	{ weights_2_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ weights_2_V_q1 sc_in sc_lv 16 signal 3 } 
	{ weights_3_V_address0 sc_out sc_lv 6 signal 4 } 
	{ weights_3_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ weights_3_V_q0 sc_in sc_lv 16 signal 4 } 
	{ weights_3_V_address1 sc_out sc_lv 6 signal 4 } 
	{ weights_3_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ weights_3_V_q1 sc_in sc_lv 16 signal 4 } 
	{ weights_4_V_address0 sc_out sc_lv 6 signal 5 } 
	{ weights_4_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ weights_4_V_q0 sc_in sc_lv 16 signal 5 } 
	{ weights_4_V_address1 sc_out sc_lv 6 signal 5 } 
	{ weights_4_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ weights_4_V_q1 sc_in sc_lv 16 signal 5 } 
	{ weights_5_V_address0 sc_out sc_lv 6 signal 6 } 
	{ weights_5_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ weights_5_V_q0 sc_in sc_lv 16 signal 6 } 
	{ weights_5_V_address1 sc_out sc_lv 6 signal 6 } 
	{ weights_5_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ weights_5_V_q1 sc_in sc_lv 16 signal 6 } 
	{ weights_6_V_address0 sc_out sc_lv 6 signal 7 } 
	{ weights_6_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ weights_6_V_q0 sc_in sc_lv 16 signal 7 } 
	{ weights_6_V_address1 sc_out sc_lv 6 signal 7 } 
	{ weights_6_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ weights_6_V_q1 sc_in sc_lv 16 signal 7 } 
	{ weights_7_V_address0 sc_out sc_lv 6 signal 8 } 
	{ weights_7_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ weights_7_V_q0 sc_in sc_lv 16 signal 8 } 
	{ weights_7_V_address1 sc_out sc_lv 6 signal 8 } 
	{ weights_7_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ weights_7_V_q1 sc_in sc_lv 16 signal 8 } 
	{ weights_8_V_address0 sc_out sc_lv 6 signal 9 } 
	{ weights_8_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ weights_8_V_q0 sc_in sc_lv 16 signal 9 } 
	{ weights_8_V_address1 sc_out sc_lv 6 signal 9 } 
	{ weights_8_V_ce1 sc_out sc_logic 1 signal 9 } 
	{ weights_8_V_q1 sc_in sc_lv 16 signal 9 } 
	{ weights_9_V_address0 sc_out sc_lv 6 signal 10 } 
	{ weights_9_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ weights_9_V_q0 sc_in sc_lv 16 signal 10 } 
	{ weights_9_V_address1 sc_out sc_lv 6 signal 10 } 
	{ weights_9_V_ce1 sc_out sc_logic 1 signal 10 } 
	{ weights_9_V_q1 sc_in sc_lv 16 signal 10 } 
	{ weights_10_V_address0 sc_out sc_lv 6 signal 11 } 
	{ weights_10_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ weights_10_V_q0 sc_in sc_lv 16 signal 11 } 
	{ weights_10_V_address1 sc_out sc_lv 6 signal 11 } 
	{ weights_10_V_ce1 sc_out sc_logic 1 signal 11 } 
	{ weights_10_V_q1 sc_in sc_lv 16 signal 11 } 
	{ weights_11_V_address0 sc_out sc_lv 6 signal 12 } 
	{ weights_11_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ weights_11_V_q0 sc_in sc_lv 16 signal 12 } 
	{ weights_11_V_address1 sc_out sc_lv 6 signal 12 } 
	{ weights_11_V_ce1 sc_out sc_logic 1 signal 12 } 
	{ weights_11_V_q1 sc_in sc_lv 16 signal 12 } 
	{ weights_12_V_address0 sc_out sc_lv 6 signal 13 } 
	{ weights_12_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ weights_12_V_q0 sc_in sc_lv 16 signal 13 } 
	{ weights_12_V_address1 sc_out sc_lv 6 signal 13 } 
	{ weights_12_V_ce1 sc_out sc_logic 1 signal 13 } 
	{ weights_12_V_q1 sc_in sc_lv 16 signal 13 } 
	{ weights_13_V_address0 sc_out sc_lv 6 signal 14 } 
	{ weights_13_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ weights_13_V_q0 sc_in sc_lv 16 signal 14 } 
	{ weights_13_V_address1 sc_out sc_lv 6 signal 14 } 
	{ weights_13_V_ce1 sc_out sc_logic 1 signal 14 } 
	{ weights_13_V_q1 sc_in sc_lv 16 signal 14 } 
	{ weights_14_V_address0 sc_out sc_lv 6 signal 15 } 
	{ weights_14_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ weights_14_V_q0 sc_in sc_lv 16 signal 15 } 
	{ weights_14_V_address1 sc_out sc_lv 6 signal 15 } 
	{ weights_14_V_ce1 sc_out sc_logic 1 signal 15 } 
	{ weights_14_V_q1 sc_in sc_lv 16 signal 15 } 
	{ weights_15_V_address0 sc_out sc_lv 6 signal 16 } 
	{ weights_15_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ weights_15_V_q0 sc_in sc_lv 16 signal 16 } 
	{ weights_15_V_address1 sc_out sc_lv 6 signal 16 } 
	{ weights_15_V_ce1 sc_out sc_logic 1 signal 16 } 
	{ weights_15_V_q1 sc_in sc_lv 16 signal 16 } 
	{ weights_16_V_address0 sc_out sc_lv 6 signal 17 } 
	{ weights_16_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ weights_16_V_q0 sc_in sc_lv 16 signal 17 } 
	{ weights_16_V_address1 sc_out sc_lv 6 signal 17 } 
	{ weights_16_V_ce1 sc_out sc_logic 1 signal 17 } 
	{ weights_16_V_q1 sc_in sc_lv 16 signal 17 } 
	{ weights_17_V_address0 sc_out sc_lv 6 signal 18 } 
	{ weights_17_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ weights_17_V_q0 sc_in sc_lv 16 signal 18 } 
	{ weights_17_V_address1 sc_out sc_lv 6 signal 18 } 
	{ weights_17_V_ce1 sc_out sc_logic 1 signal 18 } 
	{ weights_17_V_q1 sc_in sc_lv 16 signal 18 } 
	{ weights_18_V_address0 sc_out sc_lv 6 signal 19 } 
	{ weights_18_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ weights_18_V_q0 sc_in sc_lv 16 signal 19 } 
	{ weights_18_V_address1 sc_out sc_lv 6 signal 19 } 
	{ weights_18_V_ce1 sc_out sc_logic 1 signal 19 } 
	{ weights_18_V_q1 sc_in sc_lv 16 signal 19 } 
	{ weights_19_V_address0 sc_out sc_lv 6 signal 20 } 
	{ weights_19_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ weights_19_V_q0 sc_in sc_lv 16 signal 20 } 
	{ weights_19_V_address1 sc_out sc_lv 6 signal 20 } 
	{ weights_19_V_ce1 sc_out sc_logic 1 signal 20 } 
	{ weights_19_V_q1 sc_in sc_lv 16 signal 20 } 
	{ weights_20_V_address0 sc_out sc_lv 6 signal 21 } 
	{ weights_20_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ weights_20_V_q0 sc_in sc_lv 16 signal 21 } 
	{ weights_20_V_address1 sc_out sc_lv 6 signal 21 } 
	{ weights_20_V_ce1 sc_out sc_logic 1 signal 21 } 
	{ weights_20_V_q1 sc_in sc_lv 16 signal 21 } 
	{ weights_21_V_address0 sc_out sc_lv 6 signal 22 } 
	{ weights_21_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ weights_21_V_q0 sc_in sc_lv 16 signal 22 } 
	{ weights_21_V_address1 sc_out sc_lv 6 signal 22 } 
	{ weights_21_V_ce1 sc_out sc_logic 1 signal 22 } 
	{ weights_21_V_q1 sc_in sc_lv 16 signal 22 } 
	{ weights_22_V_address0 sc_out sc_lv 6 signal 23 } 
	{ weights_22_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ weights_22_V_q0 sc_in sc_lv 16 signal 23 } 
	{ weights_22_V_address1 sc_out sc_lv 6 signal 23 } 
	{ weights_22_V_ce1 sc_out sc_logic 1 signal 23 } 
	{ weights_22_V_q1 sc_in sc_lv 16 signal 23 } 
	{ weights_23_V_address0 sc_out sc_lv 6 signal 24 } 
	{ weights_23_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ weights_23_V_q0 sc_in sc_lv 16 signal 24 } 
	{ weights_23_V_address1 sc_out sc_lv 6 signal 24 } 
	{ weights_23_V_ce1 sc_out sc_logic 1 signal 24 } 
	{ weights_23_V_q1 sc_in sc_lv 16 signal 24 } 
	{ weights_24_V_address0 sc_out sc_lv 6 signal 25 } 
	{ weights_24_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ weights_24_V_q0 sc_in sc_lv 16 signal 25 } 
	{ weights_24_V_address1 sc_out sc_lv 6 signal 25 } 
	{ weights_24_V_ce1 sc_out sc_logic 1 signal 25 } 
	{ weights_24_V_q1 sc_in sc_lv 16 signal 25 } 
	{ weights_25_V_address0 sc_out sc_lv 6 signal 26 } 
	{ weights_25_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ weights_25_V_q0 sc_in sc_lv 16 signal 26 } 
	{ weights_25_V_address1 sc_out sc_lv 6 signal 26 } 
	{ weights_25_V_ce1 sc_out sc_logic 1 signal 26 } 
	{ weights_25_V_q1 sc_in sc_lv 16 signal 26 } 
	{ weights_26_V_address0 sc_out sc_lv 6 signal 27 } 
	{ weights_26_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ weights_26_V_q0 sc_in sc_lv 16 signal 27 } 
	{ weights_26_V_address1 sc_out sc_lv 6 signal 27 } 
	{ weights_26_V_ce1 sc_out sc_logic 1 signal 27 } 
	{ weights_26_V_q1 sc_in sc_lv 16 signal 27 } 
	{ weights_27_V_address0 sc_out sc_lv 6 signal 28 } 
	{ weights_27_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ weights_27_V_q0 sc_in sc_lv 16 signal 28 } 
	{ weights_27_V_address1 sc_out sc_lv 6 signal 28 } 
	{ weights_27_V_ce1 sc_out sc_logic 1 signal 28 } 
	{ weights_27_V_q1 sc_in sc_lv 16 signal 28 } 
	{ weights_28_V_address0 sc_out sc_lv 6 signal 29 } 
	{ weights_28_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ weights_28_V_q0 sc_in sc_lv 16 signal 29 } 
	{ weights_28_V_address1 sc_out sc_lv 6 signal 29 } 
	{ weights_28_V_ce1 sc_out sc_logic 1 signal 29 } 
	{ weights_28_V_q1 sc_in sc_lv 16 signal 29 } 
	{ weights_29_V_address0 sc_out sc_lv 6 signal 30 } 
	{ weights_29_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ weights_29_V_q0 sc_in sc_lv 16 signal 30 } 
	{ weights_29_V_address1 sc_out sc_lv 6 signal 30 } 
	{ weights_29_V_ce1 sc_out sc_logic 1 signal 30 } 
	{ weights_29_V_q1 sc_in sc_lv 16 signal 30 } 
	{ weights_30_V_address0 sc_out sc_lv 6 signal 31 } 
	{ weights_30_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ weights_30_V_q0 sc_in sc_lv 16 signal 31 } 
	{ weights_30_V_address1 sc_out sc_lv 6 signal 31 } 
	{ weights_30_V_ce1 sc_out sc_logic 1 signal 31 } 
	{ weights_30_V_q1 sc_in sc_lv 16 signal 31 } 
	{ weights_31_V_address0 sc_out sc_lv 6 signal 32 } 
	{ weights_31_V_ce0 sc_out sc_logic 1 signal 32 } 
	{ weights_31_V_q0 sc_in sc_lv 16 signal 32 } 
	{ weights_31_V_address1 sc_out sc_lv 6 signal 32 } 
	{ weights_31_V_ce1 sc_out sc_logic 1 signal 32 } 
	{ weights_31_V_q1 sc_in sc_lv 16 signal 32 } 
	{ weights_V_offset sc_in sc_lv 3 signal 33 } 
	{ bn_weight_V_address0 sc_out sc_lv 2 signal 34 } 
	{ bn_weight_V_ce0 sc_out sc_logic 1 signal 34 } 
	{ bn_weight_V_q0 sc_in sc_lv 11 signal 34 } 
	{ bn_weight_V32_address0 sc_out sc_lv 2 signal 35 } 
	{ bn_weight_V32_ce0 sc_out sc_logic 1 signal 35 } 
	{ bn_weight_V32_q0 sc_in sc_lv 11 signal 35 } 
	{ bn_weight_V33_address0 sc_out sc_lv 2 signal 36 } 
	{ bn_weight_V33_ce0 sc_out sc_logic 1 signal 36 } 
	{ bn_weight_V33_q0 sc_in sc_lv 11 signal 36 } 
	{ bn_weight_V34_address0 sc_out sc_lv 2 signal 37 } 
	{ bn_weight_V34_ce0 sc_out sc_logic 1 signal 37 } 
	{ bn_weight_V34_q0 sc_in sc_lv 11 signal 37 } 
	{ bn_weight_V35_address0 sc_out sc_lv 2 signal 38 } 
	{ bn_weight_V35_ce0 sc_out sc_logic 1 signal 38 } 
	{ bn_weight_V35_q0 sc_in sc_lv 11 signal 38 } 
	{ bn_weight_V36_address0 sc_out sc_lv 2 signal 39 } 
	{ bn_weight_V36_ce0 sc_out sc_logic 1 signal 39 } 
	{ bn_weight_V36_q0 sc_in sc_lv 11 signal 39 } 
	{ bn_weight_V37_address0 sc_out sc_lv 2 signal 40 } 
	{ bn_weight_V37_ce0 sc_out sc_logic 1 signal 40 } 
	{ bn_weight_V37_q0 sc_in sc_lv 11 signal 40 } 
	{ bn_weight_V38_address0 sc_out sc_lv 2 signal 41 } 
	{ bn_weight_V38_ce0 sc_out sc_logic 1 signal 41 } 
	{ bn_weight_V38_q0 sc_in sc_lv 11 signal 41 } 
	{ bn_weight_V39_address0 sc_out sc_lv 2 signal 42 } 
	{ bn_weight_V39_ce0 sc_out sc_logic 1 signal 42 } 
	{ bn_weight_V39_q0 sc_in sc_lv 11 signal 42 } 
	{ bn_weight_V40_address0 sc_out sc_lv 2 signal 43 } 
	{ bn_weight_V40_ce0 sc_out sc_logic 1 signal 43 } 
	{ bn_weight_V40_q0 sc_in sc_lv 11 signal 43 } 
	{ bn_weight_V41_address0 sc_out sc_lv 2 signal 44 } 
	{ bn_weight_V41_ce0 sc_out sc_logic 1 signal 44 } 
	{ bn_weight_V41_q0 sc_in sc_lv 11 signal 44 } 
	{ bn_weight_V42_address0 sc_out sc_lv 2 signal 45 } 
	{ bn_weight_V42_ce0 sc_out sc_logic 1 signal 45 } 
	{ bn_weight_V42_q0 sc_in sc_lv 11 signal 45 } 
	{ bn_weight_V43_address0 sc_out sc_lv 2 signal 46 } 
	{ bn_weight_V43_ce0 sc_out sc_logic 1 signal 46 } 
	{ bn_weight_V43_q0 sc_in sc_lv 11 signal 46 } 
	{ bn_weight_V44_address0 sc_out sc_lv 2 signal 47 } 
	{ bn_weight_V44_ce0 sc_out sc_logic 1 signal 47 } 
	{ bn_weight_V44_q0 sc_in sc_lv 11 signal 47 } 
	{ bn_weight_V45_address0 sc_out sc_lv 2 signal 48 } 
	{ bn_weight_V45_ce0 sc_out sc_logic 1 signal 48 } 
	{ bn_weight_V45_q0 sc_in sc_lv 11 signal 48 } 
	{ bn_weight_V46_address0 sc_out sc_lv 2 signal 49 } 
	{ bn_weight_V46_ce0 sc_out sc_logic 1 signal 49 } 
	{ bn_weight_V46_q0 sc_in sc_lv 11 signal 49 } 
	{ bn_weight_V47_address0 sc_out sc_lv 2 signal 50 } 
	{ bn_weight_V47_ce0 sc_out sc_logic 1 signal 50 } 
	{ bn_weight_V47_q0 sc_in sc_lv 11 signal 50 } 
	{ bn_weight_V48_address0 sc_out sc_lv 2 signal 51 } 
	{ bn_weight_V48_ce0 sc_out sc_logic 1 signal 51 } 
	{ bn_weight_V48_q0 sc_in sc_lv 11 signal 51 } 
	{ bn_weight_V49_address0 sc_out sc_lv 2 signal 52 } 
	{ bn_weight_V49_ce0 sc_out sc_logic 1 signal 52 } 
	{ bn_weight_V49_q0 sc_in sc_lv 11 signal 52 } 
	{ bn_weight_V50_address0 sc_out sc_lv 2 signal 53 } 
	{ bn_weight_V50_ce0 sc_out sc_logic 1 signal 53 } 
	{ bn_weight_V50_q0 sc_in sc_lv 11 signal 53 } 
	{ bn_weight_V51_address0 sc_out sc_lv 2 signal 54 } 
	{ bn_weight_V51_ce0 sc_out sc_logic 1 signal 54 } 
	{ bn_weight_V51_q0 sc_in sc_lv 11 signal 54 } 
	{ bn_weight_V52_address0 sc_out sc_lv 2 signal 55 } 
	{ bn_weight_V52_ce0 sc_out sc_logic 1 signal 55 } 
	{ bn_weight_V52_q0 sc_in sc_lv 11 signal 55 } 
	{ bn_weight_V53_address0 sc_out sc_lv 2 signal 56 } 
	{ bn_weight_V53_ce0 sc_out sc_logic 1 signal 56 } 
	{ bn_weight_V53_q0 sc_in sc_lv 11 signal 56 } 
	{ bn_weight_V54_address0 sc_out sc_lv 2 signal 57 } 
	{ bn_weight_V54_ce0 sc_out sc_logic 1 signal 57 } 
	{ bn_weight_V54_q0 sc_in sc_lv 11 signal 57 } 
	{ bn_weight_V55_address0 sc_out sc_lv 2 signal 58 } 
	{ bn_weight_V55_ce0 sc_out sc_logic 1 signal 58 } 
	{ bn_weight_V55_q0 sc_in sc_lv 11 signal 58 } 
	{ bn_weight_V56_address0 sc_out sc_lv 2 signal 59 } 
	{ bn_weight_V56_ce0 sc_out sc_logic 1 signal 59 } 
	{ bn_weight_V56_q0 sc_in sc_lv 11 signal 59 } 
	{ bn_weight_V57_address0 sc_out sc_lv 2 signal 60 } 
	{ bn_weight_V57_ce0 sc_out sc_logic 1 signal 60 } 
	{ bn_weight_V57_q0 sc_in sc_lv 11 signal 60 } 
	{ bn_weight_V58_address0 sc_out sc_lv 2 signal 61 } 
	{ bn_weight_V58_ce0 sc_out sc_logic 1 signal 61 } 
	{ bn_weight_V58_q0 sc_in sc_lv 11 signal 61 } 
	{ bn_weight_V59_address0 sc_out sc_lv 2 signal 62 } 
	{ bn_weight_V59_ce0 sc_out sc_logic 1 signal 62 } 
	{ bn_weight_V59_q0 sc_in sc_lv 11 signal 62 } 
	{ bn_weight_V60_address0 sc_out sc_lv 2 signal 63 } 
	{ bn_weight_V60_ce0 sc_out sc_logic 1 signal 63 } 
	{ bn_weight_V60_q0 sc_in sc_lv 11 signal 63 } 
	{ bn_weight_V61_address0 sc_out sc_lv 2 signal 64 } 
	{ bn_weight_V61_ce0 sc_out sc_logic 1 signal 64 } 
	{ bn_weight_V61_q0 sc_in sc_lv 11 signal 64 } 
	{ bn_weight_V62_address0 sc_out sc_lv 2 signal 65 } 
	{ bn_weight_V62_ce0 sc_out sc_logic 1 signal 65 } 
	{ bn_weight_V62_q0 sc_in sc_lv 11 signal 65 } 
	{ bn_weight_V_offset sc_in sc_lv 3 signal 66 } 
	{ bn_bias_V_address0 sc_out sc_lv 2 signal 67 } 
	{ bn_bias_V_ce0 sc_out sc_logic 1 signal 67 } 
	{ bn_bias_V_q0 sc_in sc_lv 11 signal 67 } 
	{ bn_bias_V63_address0 sc_out sc_lv 2 signal 68 } 
	{ bn_bias_V63_ce0 sc_out sc_logic 1 signal 68 } 
	{ bn_bias_V63_q0 sc_in sc_lv 11 signal 68 } 
	{ bn_bias_V64_address0 sc_out sc_lv 2 signal 69 } 
	{ bn_bias_V64_ce0 sc_out sc_logic 1 signal 69 } 
	{ bn_bias_V64_q0 sc_in sc_lv 11 signal 69 } 
	{ bn_bias_V65_address0 sc_out sc_lv 2 signal 70 } 
	{ bn_bias_V65_ce0 sc_out sc_logic 1 signal 70 } 
	{ bn_bias_V65_q0 sc_in sc_lv 11 signal 70 } 
	{ bn_bias_V66_address0 sc_out sc_lv 2 signal 71 } 
	{ bn_bias_V66_ce0 sc_out sc_logic 1 signal 71 } 
	{ bn_bias_V66_q0 sc_in sc_lv 11 signal 71 } 
	{ bn_bias_V67_address0 sc_out sc_lv 2 signal 72 } 
	{ bn_bias_V67_ce0 sc_out sc_logic 1 signal 72 } 
	{ bn_bias_V67_q0 sc_in sc_lv 11 signal 72 } 
	{ bn_bias_V68_address0 sc_out sc_lv 2 signal 73 } 
	{ bn_bias_V68_ce0 sc_out sc_logic 1 signal 73 } 
	{ bn_bias_V68_q0 sc_in sc_lv 11 signal 73 } 
	{ bn_bias_V69_address0 sc_out sc_lv 2 signal 74 } 
	{ bn_bias_V69_ce0 sc_out sc_logic 1 signal 74 } 
	{ bn_bias_V69_q0 sc_in sc_lv 11 signal 74 } 
	{ bn_bias_V70_address0 sc_out sc_lv 2 signal 75 } 
	{ bn_bias_V70_ce0 sc_out sc_logic 1 signal 75 } 
	{ bn_bias_V70_q0 sc_in sc_lv 11 signal 75 } 
	{ bn_bias_V71_address0 sc_out sc_lv 2 signal 76 } 
	{ bn_bias_V71_ce0 sc_out sc_logic 1 signal 76 } 
	{ bn_bias_V71_q0 sc_in sc_lv 11 signal 76 } 
	{ bn_bias_V72_address0 sc_out sc_lv 2 signal 77 } 
	{ bn_bias_V72_ce0 sc_out sc_logic 1 signal 77 } 
	{ bn_bias_V72_q0 sc_in sc_lv 11 signal 77 } 
	{ bn_bias_V73_address0 sc_out sc_lv 2 signal 78 } 
	{ bn_bias_V73_ce0 sc_out sc_logic 1 signal 78 } 
	{ bn_bias_V73_q0 sc_in sc_lv 11 signal 78 } 
	{ bn_bias_V74_address0 sc_out sc_lv 2 signal 79 } 
	{ bn_bias_V74_ce0 sc_out sc_logic 1 signal 79 } 
	{ bn_bias_V74_q0 sc_in sc_lv 11 signal 79 } 
	{ bn_bias_V75_address0 sc_out sc_lv 2 signal 80 } 
	{ bn_bias_V75_ce0 sc_out sc_logic 1 signal 80 } 
	{ bn_bias_V75_q0 sc_in sc_lv 11 signal 80 } 
	{ bn_bias_V76_address0 sc_out sc_lv 2 signal 81 } 
	{ bn_bias_V76_ce0 sc_out sc_logic 1 signal 81 } 
	{ bn_bias_V76_q0 sc_in sc_lv 11 signal 81 } 
	{ bn_bias_V77_address0 sc_out sc_lv 2 signal 82 } 
	{ bn_bias_V77_ce0 sc_out sc_logic 1 signal 82 } 
	{ bn_bias_V77_q0 sc_in sc_lv 11 signal 82 } 
	{ bn_bias_V78_address0 sc_out sc_lv 2 signal 83 } 
	{ bn_bias_V78_ce0 sc_out sc_logic 1 signal 83 } 
	{ bn_bias_V78_q0 sc_in sc_lv 11 signal 83 } 
	{ bn_bias_V79_address0 sc_out sc_lv 2 signal 84 } 
	{ bn_bias_V79_ce0 sc_out sc_logic 1 signal 84 } 
	{ bn_bias_V79_q0 sc_in sc_lv 11 signal 84 } 
	{ bn_bias_V80_address0 sc_out sc_lv 2 signal 85 } 
	{ bn_bias_V80_ce0 sc_out sc_logic 1 signal 85 } 
	{ bn_bias_V80_q0 sc_in sc_lv 11 signal 85 } 
	{ bn_bias_V81_address0 sc_out sc_lv 2 signal 86 } 
	{ bn_bias_V81_ce0 sc_out sc_logic 1 signal 86 } 
	{ bn_bias_V81_q0 sc_in sc_lv 11 signal 86 } 
	{ bn_bias_V82_address0 sc_out sc_lv 2 signal 87 } 
	{ bn_bias_V82_ce0 sc_out sc_logic 1 signal 87 } 
	{ bn_bias_V82_q0 sc_in sc_lv 11 signal 87 } 
	{ bn_bias_V83_address0 sc_out sc_lv 2 signal 88 } 
	{ bn_bias_V83_ce0 sc_out sc_logic 1 signal 88 } 
	{ bn_bias_V83_q0 sc_in sc_lv 11 signal 88 } 
	{ bn_bias_V84_address0 sc_out sc_lv 2 signal 89 } 
	{ bn_bias_V84_ce0 sc_out sc_logic 1 signal 89 } 
	{ bn_bias_V84_q0 sc_in sc_lv 11 signal 89 } 
	{ bn_bias_V85_address0 sc_out sc_lv 2 signal 90 } 
	{ bn_bias_V85_ce0 sc_out sc_logic 1 signal 90 } 
	{ bn_bias_V85_q0 sc_in sc_lv 11 signal 90 } 
	{ bn_bias_V86_address0 sc_out sc_lv 2 signal 91 } 
	{ bn_bias_V86_ce0 sc_out sc_logic 1 signal 91 } 
	{ bn_bias_V86_q0 sc_in sc_lv 11 signal 91 } 
	{ bn_bias_V87_address0 sc_out sc_lv 2 signal 92 } 
	{ bn_bias_V87_ce0 sc_out sc_logic 1 signal 92 } 
	{ bn_bias_V87_q0 sc_in sc_lv 11 signal 92 } 
	{ bn_bias_V88_address0 sc_out sc_lv 2 signal 93 } 
	{ bn_bias_V88_ce0 sc_out sc_logic 1 signal 93 } 
	{ bn_bias_V88_q0 sc_in sc_lv 11 signal 93 } 
	{ bn_bias_V89_address0 sc_out sc_lv 2 signal 94 } 
	{ bn_bias_V89_ce0 sc_out sc_logic 1 signal 94 } 
	{ bn_bias_V89_q0 sc_in sc_lv 11 signal 94 } 
	{ bn_bias_V90_address0 sc_out sc_lv 2 signal 95 } 
	{ bn_bias_V90_ce0 sc_out sc_logic 1 signal 95 } 
	{ bn_bias_V90_q0 sc_in sc_lv 11 signal 95 } 
	{ bn_bias_V91_address0 sc_out sc_lv 2 signal 96 } 
	{ bn_bias_V91_ce0 sc_out sc_logic 1 signal 96 } 
	{ bn_bias_V91_q0 sc_in sc_lv 11 signal 96 } 
	{ bn_bias_V92_address0 sc_out sc_lv 2 signal 97 } 
	{ bn_bias_V92_ce0 sc_out sc_logic 1 signal 97 } 
	{ bn_bias_V92_q0 sc_in sc_lv 11 signal 97 } 
	{ bn_bias_V93_address0 sc_out sc_lv 2 signal 98 } 
	{ bn_bias_V93_ce0 sc_out sc_logic 1 signal 98 } 
	{ bn_bias_V93_q0 sc_in sc_lv 11 signal 98 } 
	{ bn_bias_V_offset sc_in sc_lv 3 signal 99 } 
	{ top_0_V_address0 sc_out sc_lv 7 signal 100 } 
	{ top_0_V_ce0 sc_out sc_logic 1 signal 100 } 
	{ top_0_V_we0 sc_out sc_logic 1 signal 100 } 
	{ top_0_V_d0 sc_out sc_lv 14 signal 100 } 
	{ top_0_V_q0 sc_in sc_lv 14 signal 100 } 
	{ top_1_V_address0 sc_out sc_lv 7 signal 101 } 
	{ top_1_V_ce0 sc_out sc_logic 1 signal 101 } 
	{ top_1_V_we0 sc_out sc_logic 1 signal 101 } 
	{ top_1_V_d0 sc_out sc_lv 14 signal 101 } 
	{ top_1_V_q0 sc_in sc_lv 14 signal 101 } 
	{ top_2_V_address0 sc_out sc_lv 7 signal 102 } 
	{ top_2_V_ce0 sc_out sc_logic 1 signal 102 } 
	{ top_2_V_we0 sc_out sc_logic 1 signal 102 } 
	{ top_2_V_d0 sc_out sc_lv 14 signal 102 } 
	{ top_2_V_q0 sc_in sc_lv 14 signal 102 } 
	{ top_3_V_address0 sc_out sc_lv 7 signal 103 } 
	{ top_3_V_ce0 sc_out sc_logic 1 signal 103 } 
	{ top_3_V_we0 sc_out sc_logic 1 signal 103 } 
	{ top_3_V_d0 sc_out sc_lv 14 signal 103 } 
	{ top_3_V_q0 sc_in sc_lv 14 signal 103 } 
	{ top_4_V_address0 sc_out sc_lv 7 signal 104 } 
	{ top_4_V_ce0 sc_out sc_logic 1 signal 104 } 
	{ top_4_V_we0 sc_out sc_logic 1 signal 104 } 
	{ top_4_V_d0 sc_out sc_lv 14 signal 104 } 
	{ top_4_V_q0 sc_in sc_lv 14 signal 104 } 
	{ top_5_V_address0 sc_out sc_lv 7 signal 105 } 
	{ top_5_V_ce0 sc_out sc_logic 1 signal 105 } 
	{ top_5_V_we0 sc_out sc_logic 1 signal 105 } 
	{ top_5_V_d0 sc_out sc_lv 14 signal 105 } 
	{ top_5_V_q0 sc_in sc_lv 14 signal 105 } 
	{ top_6_V_address0 sc_out sc_lv 7 signal 106 } 
	{ top_6_V_ce0 sc_out sc_logic 1 signal 106 } 
	{ top_6_V_we0 sc_out sc_logic 1 signal 106 } 
	{ top_6_V_d0 sc_out sc_lv 14 signal 106 } 
	{ top_6_V_q0 sc_in sc_lv 14 signal 106 } 
	{ top_7_V_address0 sc_out sc_lv 7 signal 107 } 
	{ top_7_V_ce0 sc_out sc_logic 1 signal 107 } 
	{ top_7_V_q0 sc_in sc_lv 14 signal 107 } 
	{ top_7_V_address1 sc_out sc_lv 7 signal 107 } 
	{ top_7_V_ce1 sc_out sc_logic 1 signal 107 } 
	{ top_7_V_we1 sc_out sc_logic 1 signal 107 } 
	{ top_7_V_d1 sc_out sc_lv 14 signal 107 } 
	{ top_8_V_address0 sc_out sc_lv 7 signal 108 } 
	{ top_8_V_ce0 sc_out sc_logic 1 signal 108 } 
	{ top_8_V_q0 sc_in sc_lv 14 signal 108 } 
	{ top_8_V_address1 sc_out sc_lv 7 signal 108 } 
	{ top_8_V_ce1 sc_out sc_logic 1 signal 108 } 
	{ top_8_V_we1 sc_out sc_logic 1 signal 108 } 
	{ top_8_V_d1 sc_out sc_lv 14 signal 108 } 
	{ top_9_V_address0 sc_out sc_lv 7 signal 109 } 
	{ top_9_V_ce0 sc_out sc_logic 1 signal 109 } 
	{ top_9_V_q0 sc_in sc_lv 14 signal 109 } 
	{ top_9_V_address1 sc_out sc_lv 7 signal 109 } 
	{ top_9_V_ce1 sc_out sc_logic 1 signal 109 } 
	{ top_9_V_we1 sc_out sc_logic 1 signal 109 } 
	{ top_9_V_d1 sc_out sc_lv 14 signal 109 } 
	{ top_10_V_address0 sc_out sc_lv 7 signal 110 } 
	{ top_10_V_ce0 sc_out sc_logic 1 signal 110 } 
	{ top_10_V_q0 sc_in sc_lv 14 signal 110 } 
	{ top_10_V_address1 sc_out sc_lv 7 signal 110 } 
	{ top_10_V_ce1 sc_out sc_logic 1 signal 110 } 
	{ top_10_V_we1 sc_out sc_logic 1 signal 110 } 
	{ top_10_V_d1 sc_out sc_lv 14 signal 110 } 
	{ top_11_V_address0 sc_out sc_lv 7 signal 111 } 
	{ top_11_V_ce0 sc_out sc_logic 1 signal 111 } 
	{ top_11_V_q0 sc_in sc_lv 14 signal 111 } 
	{ top_11_V_address1 sc_out sc_lv 7 signal 111 } 
	{ top_11_V_ce1 sc_out sc_logic 1 signal 111 } 
	{ top_11_V_we1 sc_out sc_logic 1 signal 111 } 
	{ top_11_V_d1 sc_out sc_lv 14 signal 111 } 
	{ top_12_V_address0 sc_out sc_lv 7 signal 112 } 
	{ top_12_V_ce0 sc_out sc_logic 1 signal 112 } 
	{ top_12_V_q0 sc_in sc_lv 14 signal 112 } 
	{ top_12_V_address1 sc_out sc_lv 7 signal 112 } 
	{ top_12_V_ce1 sc_out sc_logic 1 signal 112 } 
	{ top_12_V_we1 sc_out sc_logic 1 signal 112 } 
	{ top_12_V_d1 sc_out sc_lv 14 signal 112 } 
	{ top_13_V_address0 sc_out sc_lv 7 signal 113 } 
	{ top_13_V_ce0 sc_out sc_logic 1 signal 113 } 
	{ top_13_V_q0 sc_in sc_lv 14 signal 113 } 
	{ top_13_V_address1 sc_out sc_lv 7 signal 113 } 
	{ top_13_V_ce1 sc_out sc_logic 1 signal 113 } 
	{ top_13_V_we1 sc_out sc_logic 1 signal 113 } 
	{ top_13_V_d1 sc_out sc_lv 14 signal 113 } 
	{ top_14_V_address0 sc_out sc_lv 7 signal 114 } 
	{ top_14_V_ce0 sc_out sc_logic 1 signal 114 } 
	{ top_14_V_we0 sc_out sc_logic 1 signal 114 } 
	{ top_14_V_d0 sc_out sc_lv 14 signal 114 } 
	{ top_14_V_q0 sc_in sc_lv 14 signal 114 } 
	{ top_15_V_address0 sc_out sc_lv 7 signal 115 } 
	{ top_15_V_ce0 sc_out sc_logic 1 signal 115 } 
	{ top_15_V_we0 sc_out sc_logic 1 signal 115 } 
	{ top_15_V_d0 sc_out sc_lv 14 signal 115 } 
	{ top_15_V_q0 sc_in sc_lv 14 signal 115 } 
	{ top_16_V_address0 sc_out sc_lv 7 signal 116 } 
	{ top_16_V_ce0 sc_out sc_logic 1 signal 116 } 
	{ top_16_V_we0 sc_out sc_logic 1 signal 116 } 
	{ top_16_V_d0 sc_out sc_lv 14 signal 116 } 
	{ top_16_V_q0 sc_in sc_lv 14 signal 116 } 
	{ top_17_V_address0 sc_out sc_lv 7 signal 117 } 
	{ top_17_V_ce0 sc_out sc_logic 1 signal 117 } 
	{ top_17_V_we0 sc_out sc_logic 1 signal 117 } 
	{ top_17_V_d0 sc_out sc_lv 14 signal 117 } 
	{ top_17_V_q0 sc_in sc_lv 14 signal 117 } 
	{ top_18_V_address0 sc_out sc_lv 7 signal 118 } 
	{ top_18_V_ce0 sc_out sc_logic 1 signal 118 } 
	{ top_18_V_we0 sc_out sc_logic 1 signal 118 } 
	{ top_18_V_d0 sc_out sc_lv 14 signal 118 } 
	{ top_18_V_q0 sc_in sc_lv 14 signal 118 } 
	{ top_19_V_address0 sc_out sc_lv 7 signal 119 } 
	{ top_19_V_ce0 sc_out sc_logic 1 signal 119 } 
	{ top_19_V_we0 sc_out sc_logic 1 signal 119 } 
	{ top_19_V_d0 sc_out sc_lv 14 signal 119 } 
	{ top_19_V_q0 sc_in sc_lv 14 signal 119 } 
	{ top_20_V_address0 sc_out sc_lv 7 signal 120 } 
	{ top_20_V_ce0 sc_out sc_logic 1 signal 120 } 
	{ top_20_V_we0 sc_out sc_logic 1 signal 120 } 
	{ top_20_V_d0 sc_out sc_lv 14 signal 120 } 
	{ top_20_V_q0 sc_in sc_lv 14 signal 120 } 
	{ top_21_V_address0 sc_out sc_lv 7 signal 121 } 
	{ top_21_V_ce0 sc_out sc_logic 1 signal 121 } 
	{ top_21_V_we0 sc_out sc_logic 1 signal 121 } 
	{ top_21_V_d0 sc_out sc_lv 14 signal 121 } 
	{ top_21_V_q0 sc_in sc_lv 14 signal 121 } 
	{ top_22_V_address0 sc_out sc_lv 7 signal 122 } 
	{ top_22_V_ce0 sc_out sc_logic 1 signal 122 } 
	{ top_22_V_we0 sc_out sc_logic 1 signal 122 } 
	{ top_22_V_d0 sc_out sc_lv 14 signal 122 } 
	{ top_22_V_q0 sc_in sc_lv 14 signal 122 } 
	{ top_23_V_address0 sc_out sc_lv 7 signal 123 } 
	{ top_23_V_ce0 sc_out sc_logic 1 signal 123 } 
	{ top_23_V_we0 sc_out sc_logic 1 signal 123 } 
	{ top_23_V_d0 sc_out sc_lv 14 signal 123 } 
	{ top_23_V_q0 sc_in sc_lv 14 signal 123 } 
	{ top_24_V_address0 sc_out sc_lv 7 signal 124 } 
	{ top_24_V_ce0 sc_out sc_logic 1 signal 124 } 
	{ top_24_V_we0 sc_out sc_logic 1 signal 124 } 
	{ top_24_V_d0 sc_out sc_lv 14 signal 124 } 
	{ top_24_V_q0 sc_in sc_lv 14 signal 124 } 
	{ top_25_V_address0 sc_out sc_lv 7 signal 125 } 
	{ top_25_V_ce0 sc_out sc_logic 1 signal 125 } 
	{ top_25_V_we0 sc_out sc_logic 1 signal 125 } 
	{ top_25_V_d0 sc_out sc_lv 14 signal 125 } 
	{ top_25_V_q0 sc_in sc_lv 14 signal 125 } 
	{ top_26_V_address0 sc_out sc_lv 7 signal 126 } 
	{ top_26_V_ce0 sc_out sc_logic 1 signal 126 } 
	{ top_26_V_we0 sc_out sc_logic 1 signal 126 } 
	{ top_26_V_d0 sc_out sc_lv 14 signal 126 } 
	{ top_26_V_q0 sc_in sc_lv 14 signal 126 } 
	{ top_27_V_address0 sc_out sc_lv 7 signal 127 } 
	{ top_27_V_ce0 sc_out sc_logic 1 signal 127 } 
	{ top_27_V_we0 sc_out sc_logic 1 signal 127 } 
	{ top_27_V_d0 sc_out sc_lv 14 signal 127 } 
	{ top_27_V_q0 sc_in sc_lv 14 signal 127 } 
	{ top_28_V_address0 sc_out sc_lv 7 signal 128 } 
	{ top_28_V_ce0 sc_out sc_logic 1 signal 128 } 
	{ top_28_V_we0 sc_out sc_logic 1 signal 128 } 
	{ top_28_V_d0 sc_out sc_lv 14 signal 128 } 
	{ top_28_V_q0 sc_in sc_lv 14 signal 128 } 
	{ top_29_V_address0 sc_out sc_lv 7 signal 129 } 
	{ top_29_V_ce0 sc_out sc_logic 1 signal 129 } 
	{ top_29_V_we0 sc_out sc_logic 1 signal 129 } 
	{ top_29_V_d0 sc_out sc_lv 14 signal 129 } 
	{ top_29_V_q0 sc_in sc_lv 14 signal 129 } 
	{ top_30_V_address0 sc_out sc_lv 7 signal 130 } 
	{ top_30_V_ce0 sc_out sc_logic 1 signal 130 } 
	{ top_30_V_we0 sc_out sc_logic 1 signal 130 } 
	{ top_30_V_d0 sc_out sc_lv 14 signal 130 } 
	{ top_30_V_q0 sc_in sc_lv 14 signal 130 } 
	{ top_31_V_address0 sc_out sc_lv 7 signal 131 } 
	{ top_31_V_ce0 sc_out sc_logic 1 signal 131 } 
	{ top_31_V_we0 sc_out sc_logic 1 signal 131 } 
	{ top_31_V_d0 sc_out sc_lv 14 signal 131 } 
	{ top_31_V_q0 sc_in sc_lv 14 signal 131 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "bottom_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bottom_V", "role": "address0" }} , 
 	{ "name": "bottom_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_V", "role": "ce0" }} , 
 	{ "name": "bottom_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_V", "role": "q0" }} , 
 	{ "name": "bottom_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bottom_V", "role": "address1" }} , 
 	{ "name": "bottom_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_V", "role": "ce1" }} , 
 	{ "name": "bottom_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_V", "role": "q1" }} , 
 	{ "name": "weights_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_0_V", "role": "address0" }} , 
 	{ "name": "weights_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_0_V", "role": "ce0" }} , 
 	{ "name": "weights_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_0_V", "role": "q0" }} , 
 	{ "name": "weights_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_0_V", "role": "address1" }} , 
 	{ "name": "weights_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_0_V", "role": "ce1" }} , 
 	{ "name": "weights_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_0_V", "role": "q1" }} , 
 	{ "name": "weights_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_1_V", "role": "address0" }} , 
 	{ "name": "weights_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_1_V", "role": "ce0" }} , 
 	{ "name": "weights_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_1_V", "role": "q0" }} , 
 	{ "name": "weights_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_1_V", "role": "address1" }} , 
 	{ "name": "weights_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_1_V", "role": "ce1" }} , 
 	{ "name": "weights_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_1_V", "role": "q1" }} , 
 	{ "name": "weights_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_2_V", "role": "address0" }} , 
 	{ "name": "weights_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_2_V", "role": "ce0" }} , 
 	{ "name": "weights_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_2_V", "role": "q0" }} , 
 	{ "name": "weights_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_2_V", "role": "address1" }} , 
 	{ "name": "weights_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_2_V", "role": "ce1" }} , 
 	{ "name": "weights_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_2_V", "role": "q1" }} , 
 	{ "name": "weights_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_3_V", "role": "address0" }} , 
 	{ "name": "weights_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_3_V", "role": "ce0" }} , 
 	{ "name": "weights_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_3_V", "role": "q0" }} , 
 	{ "name": "weights_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_3_V", "role": "address1" }} , 
 	{ "name": "weights_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_3_V", "role": "ce1" }} , 
 	{ "name": "weights_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_3_V", "role": "q1" }} , 
 	{ "name": "weights_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_4_V", "role": "address0" }} , 
 	{ "name": "weights_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_4_V", "role": "ce0" }} , 
 	{ "name": "weights_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_4_V", "role": "q0" }} , 
 	{ "name": "weights_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_4_V", "role": "address1" }} , 
 	{ "name": "weights_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_4_V", "role": "ce1" }} , 
 	{ "name": "weights_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_4_V", "role": "q1" }} , 
 	{ "name": "weights_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_5_V", "role": "address0" }} , 
 	{ "name": "weights_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_5_V", "role": "ce0" }} , 
 	{ "name": "weights_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_5_V", "role": "q0" }} , 
 	{ "name": "weights_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_5_V", "role": "address1" }} , 
 	{ "name": "weights_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_5_V", "role": "ce1" }} , 
 	{ "name": "weights_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_5_V", "role": "q1" }} , 
 	{ "name": "weights_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_6_V", "role": "address0" }} , 
 	{ "name": "weights_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_6_V", "role": "ce0" }} , 
 	{ "name": "weights_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_6_V", "role": "q0" }} , 
 	{ "name": "weights_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_6_V", "role": "address1" }} , 
 	{ "name": "weights_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_6_V", "role": "ce1" }} , 
 	{ "name": "weights_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_6_V", "role": "q1" }} , 
 	{ "name": "weights_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_7_V", "role": "address0" }} , 
 	{ "name": "weights_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_7_V", "role": "ce0" }} , 
 	{ "name": "weights_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_7_V", "role": "q0" }} , 
 	{ "name": "weights_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_7_V", "role": "address1" }} , 
 	{ "name": "weights_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_7_V", "role": "ce1" }} , 
 	{ "name": "weights_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_7_V", "role": "q1" }} , 
 	{ "name": "weights_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_8_V", "role": "address0" }} , 
 	{ "name": "weights_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_8_V", "role": "ce0" }} , 
 	{ "name": "weights_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_8_V", "role": "q0" }} , 
 	{ "name": "weights_8_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_8_V", "role": "address1" }} , 
 	{ "name": "weights_8_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_8_V", "role": "ce1" }} , 
 	{ "name": "weights_8_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_8_V", "role": "q1" }} , 
 	{ "name": "weights_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_9_V", "role": "address0" }} , 
 	{ "name": "weights_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_9_V", "role": "ce0" }} , 
 	{ "name": "weights_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_9_V", "role": "q0" }} , 
 	{ "name": "weights_9_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_9_V", "role": "address1" }} , 
 	{ "name": "weights_9_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_9_V", "role": "ce1" }} , 
 	{ "name": "weights_9_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_9_V", "role": "q1" }} , 
 	{ "name": "weights_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_10_V", "role": "address0" }} , 
 	{ "name": "weights_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_10_V", "role": "ce0" }} , 
 	{ "name": "weights_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_10_V", "role": "q0" }} , 
 	{ "name": "weights_10_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_10_V", "role": "address1" }} , 
 	{ "name": "weights_10_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_10_V", "role": "ce1" }} , 
 	{ "name": "weights_10_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_10_V", "role": "q1" }} , 
 	{ "name": "weights_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_11_V", "role": "address0" }} , 
 	{ "name": "weights_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_11_V", "role": "ce0" }} , 
 	{ "name": "weights_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_11_V", "role": "q0" }} , 
 	{ "name": "weights_11_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_11_V", "role": "address1" }} , 
 	{ "name": "weights_11_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_11_V", "role": "ce1" }} , 
 	{ "name": "weights_11_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_11_V", "role": "q1" }} , 
 	{ "name": "weights_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_12_V", "role": "address0" }} , 
 	{ "name": "weights_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_12_V", "role": "ce0" }} , 
 	{ "name": "weights_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_12_V", "role": "q0" }} , 
 	{ "name": "weights_12_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_12_V", "role": "address1" }} , 
 	{ "name": "weights_12_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_12_V", "role": "ce1" }} , 
 	{ "name": "weights_12_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_12_V", "role": "q1" }} , 
 	{ "name": "weights_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_13_V", "role": "address0" }} , 
 	{ "name": "weights_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_13_V", "role": "ce0" }} , 
 	{ "name": "weights_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_13_V", "role": "q0" }} , 
 	{ "name": "weights_13_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_13_V", "role": "address1" }} , 
 	{ "name": "weights_13_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_13_V", "role": "ce1" }} , 
 	{ "name": "weights_13_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_13_V", "role": "q1" }} , 
 	{ "name": "weights_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_14_V", "role": "address0" }} , 
 	{ "name": "weights_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_14_V", "role": "ce0" }} , 
 	{ "name": "weights_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_14_V", "role": "q0" }} , 
 	{ "name": "weights_14_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_14_V", "role": "address1" }} , 
 	{ "name": "weights_14_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_14_V", "role": "ce1" }} , 
 	{ "name": "weights_14_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_14_V", "role": "q1" }} , 
 	{ "name": "weights_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_15_V", "role": "address0" }} , 
 	{ "name": "weights_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_15_V", "role": "ce0" }} , 
 	{ "name": "weights_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_15_V", "role": "q0" }} , 
 	{ "name": "weights_15_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_15_V", "role": "address1" }} , 
 	{ "name": "weights_15_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_15_V", "role": "ce1" }} , 
 	{ "name": "weights_15_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_15_V", "role": "q1" }} , 
 	{ "name": "weights_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_16_V", "role": "address0" }} , 
 	{ "name": "weights_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_16_V", "role": "ce0" }} , 
 	{ "name": "weights_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_16_V", "role": "q0" }} , 
 	{ "name": "weights_16_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_16_V", "role": "address1" }} , 
 	{ "name": "weights_16_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_16_V", "role": "ce1" }} , 
 	{ "name": "weights_16_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_16_V", "role": "q1" }} , 
 	{ "name": "weights_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_17_V", "role": "address0" }} , 
 	{ "name": "weights_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_17_V", "role": "ce0" }} , 
 	{ "name": "weights_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_17_V", "role": "q0" }} , 
 	{ "name": "weights_17_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_17_V", "role": "address1" }} , 
 	{ "name": "weights_17_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_17_V", "role": "ce1" }} , 
 	{ "name": "weights_17_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_17_V", "role": "q1" }} , 
 	{ "name": "weights_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_18_V", "role": "address0" }} , 
 	{ "name": "weights_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_18_V", "role": "ce0" }} , 
 	{ "name": "weights_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_18_V", "role": "q0" }} , 
 	{ "name": "weights_18_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_18_V", "role": "address1" }} , 
 	{ "name": "weights_18_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_18_V", "role": "ce1" }} , 
 	{ "name": "weights_18_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_18_V", "role": "q1" }} , 
 	{ "name": "weights_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_19_V", "role": "address0" }} , 
 	{ "name": "weights_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_19_V", "role": "ce0" }} , 
 	{ "name": "weights_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_19_V", "role": "q0" }} , 
 	{ "name": "weights_19_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_19_V", "role": "address1" }} , 
 	{ "name": "weights_19_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_19_V", "role": "ce1" }} , 
 	{ "name": "weights_19_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_19_V", "role": "q1" }} , 
 	{ "name": "weights_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_20_V", "role": "address0" }} , 
 	{ "name": "weights_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_20_V", "role": "ce0" }} , 
 	{ "name": "weights_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_20_V", "role": "q0" }} , 
 	{ "name": "weights_20_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_20_V", "role": "address1" }} , 
 	{ "name": "weights_20_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_20_V", "role": "ce1" }} , 
 	{ "name": "weights_20_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_20_V", "role": "q1" }} , 
 	{ "name": "weights_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_21_V", "role": "address0" }} , 
 	{ "name": "weights_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_21_V", "role": "ce0" }} , 
 	{ "name": "weights_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_21_V", "role": "q0" }} , 
 	{ "name": "weights_21_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_21_V", "role": "address1" }} , 
 	{ "name": "weights_21_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_21_V", "role": "ce1" }} , 
 	{ "name": "weights_21_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_21_V", "role": "q1" }} , 
 	{ "name": "weights_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_22_V", "role": "address0" }} , 
 	{ "name": "weights_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_22_V", "role": "ce0" }} , 
 	{ "name": "weights_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_22_V", "role": "q0" }} , 
 	{ "name": "weights_22_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_22_V", "role": "address1" }} , 
 	{ "name": "weights_22_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_22_V", "role": "ce1" }} , 
 	{ "name": "weights_22_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_22_V", "role": "q1" }} , 
 	{ "name": "weights_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_23_V", "role": "address0" }} , 
 	{ "name": "weights_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_23_V", "role": "ce0" }} , 
 	{ "name": "weights_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_23_V", "role": "q0" }} , 
 	{ "name": "weights_23_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_23_V", "role": "address1" }} , 
 	{ "name": "weights_23_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_23_V", "role": "ce1" }} , 
 	{ "name": "weights_23_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_23_V", "role": "q1" }} , 
 	{ "name": "weights_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_24_V", "role": "address0" }} , 
 	{ "name": "weights_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_24_V", "role": "ce0" }} , 
 	{ "name": "weights_24_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_24_V", "role": "q0" }} , 
 	{ "name": "weights_24_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_24_V", "role": "address1" }} , 
 	{ "name": "weights_24_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_24_V", "role": "ce1" }} , 
 	{ "name": "weights_24_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_24_V", "role": "q1" }} , 
 	{ "name": "weights_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_25_V", "role": "address0" }} , 
 	{ "name": "weights_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_25_V", "role": "ce0" }} , 
 	{ "name": "weights_25_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_25_V", "role": "q0" }} , 
 	{ "name": "weights_25_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_25_V", "role": "address1" }} , 
 	{ "name": "weights_25_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_25_V", "role": "ce1" }} , 
 	{ "name": "weights_25_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_25_V", "role": "q1" }} , 
 	{ "name": "weights_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_26_V", "role": "address0" }} , 
 	{ "name": "weights_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_26_V", "role": "ce0" }} , 
 	{ "name": "weights_26_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_26_V", "role": "q0" }} , 
 	{ "name": "weights_26_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_26_V", "role": "address1" }} , 
 	{ "name": "weights_26_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_26_V", "role": "ce1" }} , 
 	{ "name": "weights_26_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_26_V", "role": "q1" }} , 
 	{ "name": "weights_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_27_V", "role": "address0" }} , 
 	{ "name": "weights_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_27_V", "role": "ce0" }} , 
 	{ "name": "weights_27_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_27_V", "role": "q0" }} , 
 	{ "name": "weights_27_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_27_V", "role": "address1" }} , 
 	{ "name": "weights_27_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_27_V", "role": "ce1" }} , 
 	{ "name": "weights_27_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_27_V", "role": "q1" }} , 
 	{ "name": "weights_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_28_V", "role": "address0" }} , 
 	{ "name": "weights_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_28_V", "role": "ce0" }} , 
 	{ "name": "weights_28_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_28_V", "role": "q0" }} , 
 	{ "name": "weights_28_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_28_V", "role": "address1" }} , 
 	{ "name": "weights_28_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_28_V", "role": "ce1" }} , 
 	{ "name": "weights_28_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_28_V", "role": "q1" }} , 
 	{ "name": "weights_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_29_V", "role": "address0" }} , 
 	{ "name": "weights_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_29_V", "role": "ce0" }} , 
 	{ "name": "weights_29_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_29_V", "role": "q0" }} , 
 	{ "name": "weights_29_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_29_V", "role": "address1" }} , 
 	{ "name": "weights_29_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_29_V", "role": "ce1" }} , 
 	{ "name": "weights_29_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_29_V", "role": "q1" }} , 
 	{ "name": "weights_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_30_V", "role": "address0" }} , 
 	{ "name": "weights_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_30_V", "role": "ce0" }} , 
 	{ "name": "weights_30_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_30_V", "role": "q0" }} , 
 	{ "name": "weights_30_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_30_V", "role": "address1" }} , 
 	{ "name": "weights_30_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_30_V", "role": "ce1" }} , 
 	{ "name": "weights_30_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_30_V", "role": "q1" }} , 
 	{ "name": "weights_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_31_V", "role": "address0" }} , 
 	{ "name": "weights_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_31_V", "role": "ce0" }} , 
 	{ "name": "weights_31_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_31_V", "role": "q0" }} , 
 	{ "name": "weights_31_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weights_31_V", "role": "address1" }} , 
 	{ "name": "weights_31_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_31_V", "role": "ce1" }} , 
 	{ "name": "weights_31_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weights_31_V", "role": "q1" }} , 
 	{ "name": "weights_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weights_V_offset", "role": "default" }} , 
 	{ "name": "bn_weight_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V", "role": "address0" }} , 
 	{ "name": "bn_weight_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V", "role": "ce0" }} , 
 	{ "name": "bn_weight_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V", "role": "q0" }} , 
 	{ "name": "bn_weight_V32_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V32", "role": "address0" }} , 
 	{ "name": "bn_weight_V32_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V32", "role": "ce0" }} , 
 	{ "name": "bn_weight_V32_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V32", "role": "q0" }} , 
 	{ "name": "bn_weight_V33_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V33", "role": "address0" }} , 
 	{ "name": "bn_weight_V33_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V33", "role": "ce0" }} , 
 	{ "name": "bn_weight_V33_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V33", "role": "q0" }} , 
 	{ "name": "bn_weight_V34_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V34", "role": "address0" }} , 
 	{ "name": "bn_weight_V34_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V34", "role": "ce0" }} , 
 	{ "name": "bn_weight_V34_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V34", "role": "q0" }} , 
 	{ "name": "bn_weight_V35_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V35", "role": "address0" }} , 
 	{ "name": "bn_weight_V35_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V35", "role": "ce0" }} , 
 	{ "name": "bn_weight_V35_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V35", "role": "q0" }} , 
 	{ "name": "bn_weight_V36_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V36", "role": "address0" }} , 
 	{ "name": "bn_weight_V36_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V36", "role": "ce0" }} , 
 	{ "name": "bn_weight_V36_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V36", "role": "q0" }} , 
 	{ "name": "bn_weight_V37_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V37", "role": "address0" }} , 
 	{ "name": "bn_weight_V37_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V37", "role": "ce0" }} , 
 	{ "name": "bn_weight_V37_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V37", "role": "q0" }} , 
 	{ "name": "bn_weight_V38_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V38", "role": "address0" }} , 
 	{ "name": "bn_weight_V38_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V38", "role": "ce0" }} , 
 	{ "name": "bn_weight_V38_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V38", "role": "q0" }} , 
 	{ "name": "bn_weight_V39_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V39", "role": "address0" }} , 
 	{ "name": "bn_weight_V39_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V39", "role": "ce0" }} , 
 	{ "name": "bn_weight_V39_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V39", "role": "q0" }} , 
 	{ "name": "bn_weight_V40_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V40", "role": "address0" }} , 
 	{ "name": "bn_weight_V40_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V40", "role": "ce0" }} , 
 	{ "name": "bn_weight_V40_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V40", "role": "q0" }} , 
 	{ "name": "bn_weight_V41_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V41", "role": "address0" }} , 
 	{ "name": "bn_weight_V41_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V41", "role": "ce0" }} , 
 	{ "name": "bn_weight_V41_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V41", "role": "q0" }} , 
 	{ "name": "bn_weight_V42_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V42", "role": "address0" }} , 
 	{ "name": "bn_weight_V42_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V42", "role": "ce0" }} , 
 	{ "name": "bn_weight_V42_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V42", "role": "q0" }} , 
 	{ "name": "bn_weight_V43_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V43", "role": "address0" }} , 
 	{ "name": "bn_weight_V43_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V43", "role": "ce0" }} , 
 	{ "name": "bn_weight_V43_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V43", "role": "q0" }} , 
 	{ "name": "bn_weight_V44_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V44", "role": "address0" }} , 
 	{ "name": "bn_weight_V44_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V44", "role": "ce0" }} , 
 	{ "name": "bn_weight_V44_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V44", "role": "q0" }} , 
 	{ "name": "bn_weight_V45_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V45", "role": "address0" }} , 
 	{ "name": "bn_weight_V45_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V45", "role": "ce0" }} , 
 	{ "name": "bn_weight_V45_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V45", "role": "q0" }} , 
 	{ "name": "bn_weight_V46_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V46", "role": "address0" }} , 
 	{ "name": "bn_weight_V46_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V46", "role": "ce0" }} , 
 	{ "name": "bn_weight_V46_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V46", "role": "q0" }} , 
 	{ "name": "bn_weight_V47_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V47", "role": "address0" }} , 
 	{ "name": "bn_weight_V47_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V47", "role": "ce0" }} , 
 	{ "name": "bn_weight_V47_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V47", "role": "q0" }} , 
 	{ "name": "bn_weight_V48_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V48", "role": "address0" }} , 
 	{ "name": "bn_weight_V48_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V48", "role": "ce0" }} , 
 	{ "name": "bn_weight_V48_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V48", "role": "q0" }} , 
 	{ "name": "bn_weight_V49_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V49", "role": "address0" }} , 
 	{ "name": "bn_weight_V49_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V49", "role": "ce0" }} , 
 	{ "name": "bn_weight_V49_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V49", "role": "q0" }} , 
 	{ "name": "bn_weight_V50_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V50", "role": "address0" }} , 
 	{ "name": "bn_weight_V50_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V50", "role": "ce0" }} , 
 	{ "name": "bn_weight_V50_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V50", "role": "q0" }} , 
 	{ "name": "bn_weight_V51_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V51", "role": "address0" }} , 
 	{ "name": "bn_weight_V51_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V51", "role": "ce0" }} , 
 	{ "name": "bn_weight_V51_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V51", "role": "q0" }} , 
 	{ "name": "bn_weight_V52_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V52", "role": "address0" }} , 
 	{ "name": "bn_weight_V52_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V52", "role": "ce0" }} , 
 	{ "name": "bn_weight_V52_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V52", "role": "q0" }} , 
 	{ "name": "bn_weight_V53_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V53", "role": "address0" }} , 
 	{ "name": "bn_weight_V53_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V53", "role": "ce0" }} , 
 	{ "name": "bn_weight_V53_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V53", "role": "q0" }} , 
 	{ "name": "bn_weight_V54_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V54", "role": "address0" }} , 
 	{ "name": "bn_weight_V54_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V54", "role": "ce0" }} , 
 	{ "name": "bn_weight_V54_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V54", "role": "q0" }} , 
 	{ "name": "bn_weight_V55_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V55", "role": "address0" }} , 
 	{ "name": "bn_weight_V55_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V55", "role": "ce0" }} , 
 	{ "name": "bn_weight_V55_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V55", "role": "q0" }} , 
 	{ "name": "bn_weight_V56_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V56", "role": "address0" }} , 
 	{ "name": "bn_weight_V56_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V56", "role": "ce0" }} , 
 	{ "name": "bn_weight_V56_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V56", "role": "q0" }} , 
 	{ "name": "bn_weight_V57_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V57", "role": "address0" }} , 
 	{ "name": "bn_weight_V57_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V57", "role": "ce0" }} , 
 	{ "name": "bn_weight_V57_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V57", "role": "q0" }} , 
 	{ "name": "bn_weight_V58_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V58", "role": "address0" }} , 
 	{ "name": "bn_weight_V58_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V58", "role": "ce0" }} , 
 	{ "name": "bn_weight_V58_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V58", "role": "q0" }} , 
 	{ "name": "bn_weight_V59_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V59", "role": "address0" }} , 
 	{ "name": "bn_weight_V59_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V59", "role": "ce0" }} , 
 	{ "name": "bn_weight_V59_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V59", "role": "q0" }} , 
 	{ "name": "bn_weight_V60_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V60", "role": "address0" }} , 
 	{ "name": "bn_weight_V60_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V60", "role": "ce0" }} , 
 	{ "name": "bn_weight_V60_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V60", "role": "q0" }} , 
 	{ "name": "bn_weight_V61_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V61", "role": "address0" }} , 
 	{ "name": "bn_weight_V61_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V61", "role": "ce0" }} , 
 	{ "name": "bn_weight_V61_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V61", "role": "q0" }} , 
 	{ "name": "bn_weight_V62_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weight_V62", "role": "address0" }} , 
 	{ "name": "bn_weight_V62_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weight_V62", "role": "ce0" }} , 
 	{ "name": "bn_weight_V62_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weight_V62", "role": "q0" }} , 
 	{ "name": "bn_weight_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "bn_weight_V_offset", "role": "default" }} , 
 	{ "name": "bn_bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V", "role": "address0" }} , 
 	{ "name": "bn_bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V", "role": "ce0" }} , 
 	{ "name": "bn_bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V", "role": "q0" }} , 
 	{ "name": "bn_bias_V63_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V63", "role": "address0" }} , 
 	{ "name": "bn_bias_V63_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V63", "role": "ce0" }} , 
 	{ "name": "bn_bias_V63_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V63", "role": "q0" }} , 
 	{ "name": "bn_bias_V64_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V64", "role": "address0" }} , 
 	{ "name": "bn_bias_V64_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V64", "role": "ce0" }} , 
 	{ "name": "bn_bias_V64_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V64", "role": "q0" }} , 
 	{ "name": "bn_bias_V65_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V65", "role": "address0" }} , 
 	{ "name": "bn_bias_V65_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V65", "role": "ce0" }} , 
 	{ "name": "bn_bias_V65_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V65", "role": "q0" }} , 
 	{ "name": "bn_bias_V66_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V66", "role": "address0" }} , 
 	{ "name": "bn_bias_V66_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V66", "role": "ce0" }} , 
 	{ "name": "bn_bias_V66_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V66", "role": "q0" }} , 
 	{ "name": "bn_bias_V67_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V67", "role": "address0" }} , 
 	{ "name": "bn_bias_V67_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V67", "role": "ce0" }} , 
 	{ "name": "bn_bias_V67_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V67", "role": "q0" }} , 
 	{ "name": "bn_bias_V68_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V68", "role": "address0" }} , 
 	{ "name": "bn_bias_V68_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V68", "role": "ce0" }} , 
 	{ "name": "bn_bias_V68_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V68", "role": "q0" }} , 
 	{ "name": "bn_bias_V69_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V69", "role": "address0" }} , 
 	{ "name": "bn_bias_V69_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V69", "role": "ce0" }} , 
 	{ "name": "bn_bias_V69_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V69", "role": "q0" }} , 
 	{ "name": "bn_bias_V70_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V70", "role": "address0" }} , 
 	{ "name": "bn_bias_V70_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V70", "role": "ce0" }} , 
 	{ "name": "bn_bias_V70_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V70", "role": "q0" }} , 
 	{ "name": "bn_bias_V71_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V71", "role": "address0" }} , 
 	{ "name": "bn_bias_V71_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V71", "role": "ce0" }} , 
 	{ "name": "bn_bias_V71_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V71", "role": "q0" }} , 
 	{ "name": "bn_bias_V72_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V72", "role": "address0" }} , 
 	{ "name": "bn_bias_V72_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V72", "role": "ce0" }} , 
 	{ "name": "bn_bias_V72_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V72", "role": "q0" }} , 
 	{ "name": "bn_bias_V73_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V73", "role": "address0" }} , 
 	{ "name": "bn_bias_V73_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V73", "role": "ce0" }} , 
 	{ "name": "bn_bias_V73_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V73", "role": "q0" }} , 
 	{ "name": "bn_bias_V74_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V74", "role": "address0" }} , 
 	{ "name": "bn_bias_V74_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V74", "role": "ce0" }} , 
 	{ "name": "bn_bias_V74_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V74", "role": "q0" }} , 
 	{ "name": "bn_bias_V75_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V75", "role": "address0" }} , 
 	{ "name": "bn_bias_V75_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V75", "role": "ce0" }} , 
 	{ "name": "bn_bias_V75_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V75", "role": "q0" }} , 
 	{ "name": "bn_bias_V76_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V76", "role": "address0" }} , 
 	{ "name": "bn_bias_V76_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V76", "role": "ce0" }} , 
 	{ "name": "bn_bias_V76_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V76", "role": "q0" }} , 
 	{ "name": "bn_bias_V77_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V77", "role": "address0" }} , 
 	{ "name": "bn_bias_V77_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V77", "role": "ce0" }} , 
 	{ "name": "bn_bias_V77_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V77", "role": "q0" }} , 
 	{ "name": "bn_bias_V78_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V78", "role": "address0" }} , 
 	{ "name": "bn_bias_V78_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V78", "role": "ce0" }} , 
 	{ "name": "bn_bias_V78_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V78", "role": "q0" }} , 
 	{ "name": "bn_bias_V79_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V79", "role": "address0" }} , 
 	{ "name": "bn_bias_V79_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V79", "role": "ce0" }} , 
 	{ "name": "bn_bias_V79_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V79", "role": "q0" }} , 
 	{ "name": "bn_bias_V80_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V80", "role": "address0" }} , 
 	{ "name": "bn_bias_V80_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V80", "role": "ce0" }} , 
 	{ "name": "bn_bias_V80_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V80", "role": "q0" }} , 
 	{ "name": "bn_bias_V81_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V81", "role": "address0" }} , 
 	{ "name": "bn_bias_V81_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V81", "role": "ce0" }} , 
 	{ "name": "bn_bias_V81_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V81", "role": "q0" }} , 
 	{ "name": "bn_bias_V82_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V82", "role": "address0" }} , 
 	{ "name": "bn_bias_V82_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V82", "role": "ce0" }} , 
 	{ "name": "bn_bias_V82_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V82", "role": "q0" }} , 
 	{ "name": "bn_bias_V83_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V83", "role": "address0" }} , 
 	{ "name": "bn_bias_V83_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V83", "role": "ce0" }} , 
 	{ "name": "bn_bias_V83_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V83", "role": "q0" }} , 
 	{ "name": "bn_bias_V84_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V84", "role": "address0" }} , 
 	{ "name": "bn_bias_V84_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V84", "role": "ce0" }} , 
 	{ "name": "bn_bias_V84_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V84", "role": "q0" }} , 
 	{ "name": "bn_bias_V85_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V85", "role": "address0" }} , 
 	{ "name": "bn_bias_V85_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V85", "role": "ce0" }} , 
 	{ "name": "bn_bias_V85_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V85", "role": "q0" }} , 
 	{ "name": "bn_bias_V86_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V86", "role": "address0" }} , 
 	{ "name": "bn_bias_V86_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V86", "role": "ce0" }} , 
 	{ "name": "bn_bias_V86_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V86", "role": "q0" }} , 
 	{ "name": "bn_bias_V87_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V87", "role": "address0" }} , 
 	{ "name": "bn_bias_V87_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V87", "role": "ce0" }} , 
 	{ "name": "bn_bias_V87_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V87", "role": "q0" }} , 
 	{ "name": "bn_bias_V88_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V88", "role": "address0" }} , 
 	{ "name": "bn_bias_V88_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V88", "role": "ce0" }} , 
 	{ "name": "bn_bias_V88_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V88", "role": "q0" }} , 
 	{ "name": "bn_bias_V89_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V89", "role": "address0" }} , 
 	{ "name": "bn_bias_V89_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V89", "role": "ce0" }} , 
 	{ "name": "bn_bias_V89_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V89", "role": "q0" }} , 
 	{ "name": "bn_bias_V90_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V90", "role": "address0" }} , 
 	{ "name": "bn_bias_V90_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V90", "role": "ce0" }} , 
 	{ "name": "bn_bias_V90_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V90", "role": "q0" }} , 
 	{ "name": "bn_bias_V91_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V91", "role": "address0" }} , 
 	{ "name": "bn_bias_V91_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V91", "role": "ce0" }} , 
 	{ "name": "bn_bias_V91_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V91", "role": "q0" }} , 
 	{ "name": "bn_bias_V92_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V92", "role": "address0" }} , 
 	{ "name": "bn_bias_V92_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V92", "role": "ce0" }} , 
 	{ "name": "bn_bias_V92_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V92", "role": "q0" }} , 
 	{ "name": "bn_bias_V93_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V93", "role": "address0" }} , 
 	{ "name": "bn_bias_V93_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V93", "role": "ce0" }} , 
 	{ "name": "bn_bias_V93_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V93", "role": "q0" }} , 
 	{ "name": "bn_bias_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "bn_bias_V_offset", "role": "default" }} , 
 	{ "name": "top_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_0_V", "role": "address0" }} , 
 	{ "name": "top_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_0_V", "role": "ce0" }} , 
 	{ "name": "top_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_0_V", "role": "we0" }} , 
 	{ "name": "top_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_0_V", "role": "d0" }} , 
 	{ "name": "top_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_0_V", "role": "q0" }} , 
 	{ "name": "top_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_1_V", "role": "address0" }} , 
 	{ "name": "top_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_1_V", "role": "ce0" }} , 
 	{ "name": "top_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_1_V", "role": "we0" }} , 
 	{ "name": "top_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_1_V", "role": "d0" }} , 
 	{ "name": "top_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_1_V", "role": "q0" }} , 
 	{ "name": "top_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_2_V", "role": "address0" }} , 
 	{ "name": "top_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_2_V", "role": "ce0" }} , 
 	{ "name": "top_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_2_V", "role": "we0" }} , 
 	{ "name": "top_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_2_V", "role": "d0" }} , 
 	{ "name": "top_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_2_V", "role": "q0" }} , 
 	{ "name": "top_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_3_V", "role": "address0" }} , 
 	{ "name": "top_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_3_V", "role": "ce0" }} , 
 	{ "name": "top_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_3_V", "role": "we0" }} , 
 	{ "name": "top_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_3_V", "role": "d0" }} , 
 	{ "name": "top_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_3_V", "role": "q0" }} , 
 	{ "name": "top_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_4_V", "role": "address0" }} , 
 	{ "name": "top_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_4_V", "role": "ce0" }} , 
 	{ "name": "top_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_4_V", "role": "we0" }} , 
 	{ "name": "top_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_4_V", "role": "d0" }} , 
 	{ "name": "top_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_4_V", "role": "q0" }} , 
 	{ "name": "top_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_5_V", "role": "address0" }} , 
 	{ "name": "top_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_5_V", "role": "ce0" }} , 
 	{ "name": "top_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_5_V", "role": "we0" }} , 
 	{ "name": "top_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_5_V", "role": "d0" }} , 
 	{ "name": "top_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_5_V", "role": "q0" }} , 
 	{ "name": "top_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_6_V", "role": "address0" }} , 
 	{ "name": "top_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_6_V", "role": "ce0" }} , 
 	{ "name": "top_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_6_V", "role": "we0" }} , 
 	{ "name": "top_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_6_V", "role": "d0" }} , 
 	{ "name": "top_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_6_V", "role": "q0" }} , 
 	{ "name": "top_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_7_V", "role": "address0" }} , 
 	{ "name": "top_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "ce0" }} , 
 	{ "name": "top_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_7_V", "role": "q0" }} , 
 	{ "name": "top_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_7_V", "role": "address1" }} , 
 	{ "name": "top_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "ce1" }} , 
 	{ "name": "top_7_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "we1" }} , 
 	{ "name": "top_7_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_7_V", "role": "d1" }} , 
 	{ "name": "top_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_8_V", "role": "address0" }} , 
 	{ "name": "top_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "ce0" }} , 
 	{ "name": "top_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_8_V", "role": "q0" }} , 
 	{ "name": "top_8_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_8_V", "role": "address1" }} , 
 	{ "name": "top_8_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "ce1" }} , 
 	{ "name": "top_8_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "we1" }} , 
 	{ "name": "top_8_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_8_V", "role": "d1" }} , 
 	{ "name": "top_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_9_V", "role": "address0" }} , 
 	{ "name": "top_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "ce0" }} , 
 	{ "name": "top_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_9_V", "role": "q0" }} , 
 	{ "name": "top_9_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_9_V", "role": "address1" }} , 
 	{ "name": "top_9_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "ce1" }} , 
 	{ "name": "top_9_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "we1" }} , 
 	{ "name": "top_9_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_9_V", "role": "d1" }} , 
 	{ "name": "top_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_10_V", "role": "address0" }} , 
 	{ "name": "top_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "ce0" }} , 
 	{ "name": "top_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_10_V", "role": "q0" }} , 
 	{ "name": "top_10_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_10_V", "role": "address1" }} , 
 	{ "name": "top_10_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "ce1" }} , 
 	{ "name": "top_10_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "we1" }} , 
 	{ "name": "top_10_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_10_V", "role": "d1" }} , 
 	{ "name": "top_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_11_V", "role": "address0" }} , 
 	{ "name": "top_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "ce0" }} , 
 	{ "name": "top_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_11_V", "role": "q0" }} , 
 	{ "name": "top_11_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_11_V", "role": "address1" }} , 
 	{ "name": "top_11_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "ce1" }} , 
 	{ "name": "top_11_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "we1" }} , 
 	{ "name": "top_11_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_11_V", "role": "d1" }} , 
 	{ "name": "top_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_12_V", "role": "address0" }} , 
 	{ "name": "top_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "ce0" }} , 
 	{ "name": "top_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_12_V", "role": "q0" }} , 
 	{ "name": "top_12_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_12_V", "role": "address1" }} , 
 	{ "name": "top_12_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "ce1" }} , 
 	{ "name": "top_12_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "we1" }} , 
 	{ "name": "top_12_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_12_V", "role": "d1" }} , 
 	{ "name": "top_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_13_V", "role": "address0" }} , 
 	{ "name": "top_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "ce0" }} , 
 	{ "name": "top_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_13_V", "role": "q0" }} , 
 	{ "name": "top_13_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_13_V", "role": "address1" }} , 
 	{ "name": "top_13_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "ce1" }} , 
 	{ "name": "top_13_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "we1" }} , 
 	{ "name": "top_13_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_13_V", "role": "d1" }} , 
 	{ "name": "top_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_14_V", "role": "address0" }} , 
 	{ "name": "top_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_14_V", "role": "ce0" }} , 
 	{ "name": "top_14_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_14_V", "role": "we0" }} , 
 	{ "name": "top_14_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_14_V", "role": "d0" }} , 
 	{ "name": "top_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_14_V", "role": "q0" }} , 
 	{ "name": "top_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_15_V", "role": "address0" }} , 
 	{ "name": "top_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_15_V", "role": "ce0" }} , 
 	{ "name": "top_15_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_15_V", "role": "we0" }} , 
 	{ "name": "top_15_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_15_V", "role": "d0" }} , 
 	{ "name": "top_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_15_V", "role": "q0" }} , 
 	{ "name": "top_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_16_V", "role": "address0" }} , 
 	{ "name": "top_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_16_V", "role": "ce0" }} , 
 	{ "name": "top_16_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_16_V", "role": "we0" }} , 
 	{ "name": "top_16_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_16_V", "role": "d0" }} , 
 	{ "name": "top_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_16_V", "role": "q0" }} , 
 	{ "name": "top_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_17_V", "role": "address0" }} , 
 	{ "name": "top_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_17_V", "role": "ce0" }} , 
 	{ "name": "top_17_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_17_V", "role": "we0" }} , 
 	{ "name": "top_17_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_17_V", "role": "d0" }} , 
 	{ "name": "top_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_17_V", "role": "q0" }} , 
 	{ "name": "top_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_18_V", "role": "address0" }} , 
 	{ "name": "top_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_18_V", "role": "ce0" }} , 
 	{ "name": "top_18_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_18_V", "role": "we0" }} , 
 	{ "name": "top_18_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_18_V", "role": "d0" }} , 
 	{ "name": "top_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_18_V", "role": "q0" }} , 
 	{ "name": "top_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_19_V", "role": "address0" }} , 
 	{ "name": "top_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_19_V", "role": "ce0" }} , 
 	{ "name": "top_19_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_19_V", "role": "we0" }} , 
 	{ "name": "top_19_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_19_V", "role": "d0" }} , 
 	{ "name": "top_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_19_V", "role": "q0" }} , 
 	{ "name": "top_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_20_V", "role": "address0" }} , 
 	{ "name": "top_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_20_V", "role": "ce0" }} , 
 	{ "name": "top_20_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_20_V", "role": "we0" }} , 
 	{ "name": "top_20_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_20_V", "role": "d0" }} , 
 	{ "name": "top_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_20_V", "role": "q0" }} , 
 	{ "name": "top_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_21_V", "role": "address0" }} , 
 	{ "name": "top_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_21_V", "role": "ce0" }} , 
 	{ "name": "top_21_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_21_V", "role": "we0" }} , 
 	{ "name": "top_21_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_21_V", "role": "d0" }} , 
 	{ "name": "top_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_21_V", "role": "q0" }} , 
 	{ "name": "top_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_22_V", "role": "address0" }} , 
 	{ "name": "top_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_22_V", "role": "ce0" }} , 
 	{ "name": "top_22_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_22_V", "role": "we0" }} , 
 	{ "name": "top_22_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_22_V", "role": "d0" }} , 
 	{ "name": "top_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_22_V", "role": "q0" }} , 
 	{ "name": "top_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_23_V", "role": "address0" }} , 
 	{ "name": "top_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_23_V", "role": "ce0" }} , 
 	{ "name": "top_23_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_23_V", "role": "we0" }} , 
 	{ "name": "top_23_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_23_V", "role": "d0" }} , 
 	{ "name": "top_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_23_V", "role": "q0" }} , 
 	{ "name": "top_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_24_V", "role": "address0" }} , 
 	{ "name": "top_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_24_V", "role": "ce0" }} , 
 	{ "name": "top_24_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_24_V", "role": "we0" }} , 
 	{ "name": "top_24_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_24_V", "role": "d0" }} , 
 	{ "name": "top_24_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_24_V", "role": "q0" }} , 
 	{ "name": "top_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_25_V", "role": "address0" }} , 
 	{ "name": "top_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_25_V", "role": "ce0" }} , 
 	{ "name": "top_25_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_25_V", "role": "we0" }} , 
 	{ "name": "top_25_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_25_V", "role": "d0" }} , 
 	{ "name": "top_25_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_25_V", "role": "q0" }} , 
 	{ "name": "top_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_26_V", "role": "address0" }} , 
 	{ "name": "top_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_26_V", "role": "ce0" }} , 
 	{ "name": "top_26_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_26_V", "role": "we0" }} , 
 	{ "name": "top_26_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_26_V", "role": "d0" }} , 
 	{ "name": "top_26_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_26_V", "role": "q0" }} , 
 	{ "name": "top_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_27_V", "role": "address0" }} , 
 	{ "name": "top_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_27_V", "role": "ce0" }} , 
 	{ "name": "top_27_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_27_V", "role": "we0" }} , 
 	{ "name": "top_27_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_27_V", "role": "d0" }} , 
 	{ "name": "top_27_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_27_V", "role": "q0" }} , 
 	{ "name": "top_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_28_V", "role": "address0" }} , 
 	{ "name": "top_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_28_V", "role": "ce0" }} , 
 	{ "name": "top_28_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_28_V", "role": "we0" }} , 
 	{ "name": "top_28_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_28_V", "role": "d0" }} , 
 	{ "name": "top_28_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_28_V", "role": "q0" }} , 
 	{ "name": "top_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_29_V", "role": "address0" }} , 
 	{ "name": "top_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_29_V", "role": "ce0" }} , 
 	{ "name": "top_29_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_29_V", "role": "we0" }} , 
 	{ "name": "top_29_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_29_V", "role": "d0" }} , 
 	{ "name": "top_29_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_29_V", "role": "q0" }} , 
 	{ "name": "top_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_30_V", "role": "address0" }} , 
 	{ "name": "top_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_30_V", "role": "ce0" }} , 
 	{ "name": "top_30_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_30_V", "role": "we0" }} , 
 	{ "name": "top_30_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_30_V", "role": "d0" }} , 
 	{ "name": "top_30_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_30_V", "role": "q0" }} , 
 	{ "name": "top_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_31_V", "role": "address0" }} , 
 	{ "name": "top_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_31_V", "role": "ce0" }} , 
 	{ "name": "top_31_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_31_V", "role": "we0" }} , 
 	{ "name": "top_31_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_31_V", "role": "d0" }} , 
 	{ "name": "top_31_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_31_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "5", "7", "9", "11", "13", "15", "16", "17", "18", "19", "20", "21", "22", "24", "26", "28", "30", "32", "34", "36", "38", "40", "42", "44", "46", "48", "50", "52", "54", "56", "58", "60", "62", "64", "66", "68", "70", "72", "74", "76", "78", "80", "82", "84", "86", "88", "90", "92", "94", "96", "98", "100", "102", "104", "106", "108", "110", "112", "114", "116", "118", "120", "122", "124", "126", "128", "130", "132", "134", "136"],
		"CDFG" : "biconv16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "95", "EstimateLatencyMax" : "95",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom_V", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "weights_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V64", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V65", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V66", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V67", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V68", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V69", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V70", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V_offset", "Type" : "None", "Direction" : "I"},
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
			{"Name" : "top_16_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_17_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_18_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_19_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_20_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_21_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_22_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_23_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_24_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_25_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_26_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_27_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_28_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_29_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_30_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_31_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_compute_engine_16_fu_4160", "Port" : "lut16_V_1"},
					{"ID" : "22", "SubInstance" : "grp_compute_engine_16_fu_4142", "Port" : "lut16_V_1"},
					{"ID" : "28", "SubInstance" : "grp_compute_engine_16_fu_4169", "Port" : "lut16_V_1"},
					{"ID" : "34", "SubInstance" : "grp_compute_engine_16_fu_4196", "Port" : "lut16_V_1"},
					{"ID" : "30", "SubInstance" : "grp_compute_engine_16_fu_4178", "Port" : "lut16_V_1"},
					{"ID" : "24", "SubInstance" : "grp_compute_engine_16_fu_4151", "Port" : "lut16_V_1"},
					{"ID" : "32", "SubInstance" : "grp_compute_engine_16_fu_4187", "Port" : "lut16_V_1"},
					{"ID" : "40", "SubInstance" : "grp_compute_engine_16_fu_4223", "Port" : "lut16_V_1"},
					{"ID" : "42", "SubInstance" : "grp_compute_engine_16_fu_4232", "Port" : "lut16_V_1"},
					{"ID" : "44", "SubInstance" : "grp_compute_engine_16_fu_4241", "Port" : "lut16_V_1"},
					{"ID" : "36", "SubInstance" : "grp_compute_engine_16_fu_4205", "Port" : "lut16_V_1"},
					{"ID" : "38", "SubInstance" : "grp_compute_engine_16_fu_4214", "Port" : "lut16_V_1"},
					{"ID" : "82", "SubInstance" : "grp_compute_engine_16_fu_4412", "Port" : "lut16_V_1"},
					{"ID" : "132", "SubInstance" : "grp_compute_engine_16_fu_4637", "Port" : "lut16_V_1"},
					{"ID" : "88", "SubInstance" : "grp_compute_engine_16_fu_4439", "Port" : "lut16_V_1"},
					{"ID" : "52", "SubInstance" : "grp_compute_engine_16_fu_4277", "Port" : "lut16_V_1"},
					{"ID" : "110", "SubInstance" : "grp_compute_engine_16_fu_4538", "Port" : "lut16_V_1"},
					{"ID" : "126", "SubInstance" : "grp_compute_engine_16_fu_4610", "Port" : "lut16_V_1"},
					{"ID" : "54", "SubInstance" : "grp_compute_engine_16_fu_4286", "Port" : "lut16_V_1"},
					{"ID" : "72", "SubInstance" : "grp_compute_engine_16_fu_4367", "Port" : "lut16_V_1"},
					{"ID" : "106", "SubInstance" : "grp_compute_engine_16_fu_4520", "Port" : "lut16_V_1"},
					{"ID" : "58", "SubInstance" : "grp_compute_engine_16_fu_4304", "Port" : "lut16_V_1"},
					{"ID" : "84", "SubInstance" : "grp_compute_engine_16_fu_4421", "Port" : "lut16_V_1"},
					{"ID" : "48", "SubInstance" : "grp_compute_engine_16_fu_4259", "Port" : "lut16_V_1"},
					{"ID" : "46", "SubInstance" : "grp_compute_engine_16_fu_4250", "Port" : "lut16_V_1"},
					{"ID" : "116", "SubInstance" : "grp_compute_engine_16_fu_4565", "Port" : "lut16_V_1"},
					{"ID" : "90", "SubInstance" : "grp_compute_engine_16_fu_4448", "Port" : "lut16_V_1"},
					{"ID" : "100", "SubInstance" : "grp_compute_engine_16_fu_4493", "Port" : "lut16_V_1"},
					{"ID" : "96", "SubInstance" : "grp_compute_engine_16_fu_4475", "Port" : "lut16_V_1"},
					{"ID" : "122", "SubInstance" : "grp_compute_engine_16_fu_4592", "Port" : "lut16_V_1"},
					{"ID" : "124", "SubInstance" : "grp_compute_engine_16_fu_4601", "Port" : "lut16_V_1"},
					{"ID" : "74", "SubInstance" : "grp_compute_engine_16_fu_4376", "Port" : "lut16_V_1"},
					{"ID" : "118", "SubInstance" : "grp_compute_engine_16_fu_4574", "Port" : "lut16_V_1"},
					{"ID" : "50", "SubInstance" : "grp_compute_engine_16_fu_4268", "Port" : "lut16_V_1"},
					{"ID" : "76", "SubInstance" : "grp_compute_engine_16_fu_4385", "Port" : "lut16_V_1"},
					{"ID" : "64", "SubInstance" : "grp_compute_engine_16_fu_4331", "Port" : "lut16_V_1"},
					{"ID" : "86", "SubInstance" : "grp_compute_engine_16_fu_4430", "Port" : "lut16_V_1"},
					{"ID" : "70", "SubInstance" : "grp_compute_engine_16_fu_4358", "Port" : "lut16_V_1"},
					{"ID" : "92", "SubInstance" : "grp_compute_engine_16_fu_4457", "Port" : "lut16_V_1"},
					{"ID" : "98", "SubInstance" : "grp_compute_engine_16_fu_4484", "Port" : "lut16_V_1"},
					{"ID" : "66", "SubInstance" : "grp_compute_engine_16_fu_4340", "Port" : "lut16_V_1"},
					{"ID" : "102", "SubInstance" : "grp_compute_engine_16_fu_4502", "Port" : "lut16_V_1"},
					{"ID" : "114", "SubInstance" : "grp_compute_engine_16_fu_4556", "Port" : "lut16_V_1"},
					{"ID" : "120", "SubInstance" : "grp_compute_engine_16_fu_4583", "Port" : "lut16_V_1"},
					{"ID" : "128", "SubInstance" : "grp_compute_engine_16_fu_4619", "Port" : "lut16_V_1"},
					{"ID" : "130", "SubInstance" : "grp_compute_engine_16_fu_4628", "Port" : "lut16_V_1"},
					{"ID" : "78", "SubInstance" : "grp_compute_engine_16_fu_4394", "Port" : "lut16_V_1"},
					{"ID" : "136", "SubInstance" : "grp_compute_engine_16_fu_4655", "Port" : "lut16_V_1"},
					{"ID" : "68", "SubInstance" : "grp_compute_engine_16_fu_4349", "Port" : "lut16_V_1"},
					{"ID" : "94", "SubInstance" : "grp_compute_engine_16_fu_4466", "Port" : "lut16_V_1"},
					{"ID" : "104", "SubInstance" : "grp_compute_engine_16_fu_4511", "Port" : "lut16_V_1"},
					{"ID" : "108", "SubInstance" : "grp_compute_engine_16_fu_4529", "Port" : "lut16_V_1"},
					{"ID" : "134", "SubInstance" : "grp_compute_engine_16_fu_4646", "Port" : "lut16_V_1"},
					{"ID" : "80", "SubInstance" : "grp_compute_engine_16_fu_4403", "Port" : "lut16_V_1"},
					{"ID" : "112", "SubInstance" : "grp_compute_engine_16_fu_4547", "Port" : "lut16_V_1"},
					{"ID" : "56", "SubInstance" : "grp_compute_engine_16_fu_4295", "Port" : "lut16_V_1"},
					{"ID" : "60", "SubInstance" : "grp_compute_engine_16_fu_4313", "Port" : "lut16_V_1"},
					{"ID" : "62", "SubInstance" : "grp_compute_engine_16_fu_4322", "Port" : "lut16_V_1"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4002", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4002.FracNet_mul_mul_8fYi_U25", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4009", "Parent" : "0", "Child" : ["4"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4009.FracNet_mul_mul_8fYi_U25", "Parent" : "3"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4016", "Parent" : "0", "Child" : ["6"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4016.FracNet_mul_mul_8fYi_U25", "Parent" : "5"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4023", "Parent" : "0", "Child" : ["8"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4023.FracNet_mul_mul_8fYi_U25", "Parent" : "7"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4030", "Parent" : "0", "Child" : ["10"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4030.FracNet_mul_mul_8fYi_U25", "Parent" : "9"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4037", "Parent" : "0", "Child" : ["12"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4037.FracNet_mul_mul_8fYi_U25", "Parent" : "11"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4044", "Parent" : "0", "Child" : ["14"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_4044.FracNet_mul_mul_8fYi_U25", "Parent" : "13"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_4051", "Parent" : "0",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
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
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_4064", "Parent" : "0",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
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
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_4077", "Parent" : "0",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
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
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_4090", "Parent" : "0",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
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
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_4103", "Parent" : "0",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
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
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_4116", "Parent" : "0",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
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
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_4129", "Parent" : "0",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
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
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4142", "Parent" : "0", "Child" : ["23"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4142.lut16_V_1_U", "Parent" : "22"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4151", "Parent" : "0", "Child" : ["25"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4151.lut16_V_1_U", "Parent" : "24"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4160", "Parent" : "0", "Child" : ["27"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4160.lut16_V_1_U", "Parent" : "26"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4169", "Parent" : "0", "Child" : ["29"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4169.lut16_V_1_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4178", "Parent" : "0", "Child" : ["31"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4178.lut16_V_1_U", "Parent" : "30"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4187", "Parent" : "0", "Child" : ["33"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4187.lut16_V_1_U", "Parent" : "32"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4196", "Parent" : "0", "Child" : ["35"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4196.lut16_V_1_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4205", "Parent" : "0", "Child" : ["37"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4205.lut16_V_1_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4214", "Parent" : "0", "Child" : ["39"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4214.lut16_V_1_U", "Parent" : "38"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4223", "Parent" : "0", "Child" : ["41"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4223.lut16_V_1_U", "Parent" : "40"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4232", "Parent" : "0", "Child" : ["43"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4232.lut16_V_1_U", "Parent" : "42"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4241", "Parent" : "0", "Child" : ["45"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4241.lut16_V_1_U", "Parent" : "44"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4250", "Parent" : "0", "Child" : ["47"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4250.lut16_V_1_U", "Parent" : "46"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4259", "Parent" : "0", "Child" : ["49"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4259.lut16_V_1_U", "Parent" : "48"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4268", "Parent" : "0", "Child" : ["51"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4268.lut16_V_1_U", "Parent" : "50"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4277", "Parent" : "0", "Child" : ["53"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4277.lut16_V_1_U", "Parent" : "52"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4286", "Parent" : "0", "Child" : ["55"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4286.lut16_V_1_U", "Parent" : "54"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4295", "Parent" : "0", "Child" : ["57"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4295.lut16_V_1_U", "Parent" : "56"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4304", "Parent" : "0", "Child" : ["59"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4304.lut16_V_1_U", "Parent" : "58"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4313", "Parent" : "0", "Child" : ["61"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4313.lut16_V_1_U", "Parent" : "60"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4322", "Parent" : "0", "Child" : ["63"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4322.lut16_V_1_U", "Parent" : "62"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4331", "Parent" : "0", "Child" : ["65"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4331.lut16_V_1_U", "Parent" : "64"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4340", "Parent" : "0", "Child" : ["67"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4340.lut16_V_1_U", "Parent" : "66"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4349", "Parent" : "0", "Child" : ["69"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4349.lut16_V_1_U", "Parent" : "68"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4358", "Parent" : "0", "Child" : ["71"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4358.lut16_V_1_U", "Parent" : "70"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4367", "Parent" : "0", "Child" : ["73"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4367.lut16_V_1_U", "Parent" : "72"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4376", "Parent" : "0", "Child" : ["75"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4376.lut16_V_1_U", "Parent" : "74"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4385", "Parent" : "0", "Child" : ["77"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4385.lut16_V_1_U", "Parent" : "76"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4394", "Parent" : "0", "Child" : ["79"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4394.lut16_V_1_U", "Parent" : "78"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4403", "Parent" : "0", "Child" : ["81"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4403.lut16_V_1_U", "Parent" : "80"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4412", "Parent" : "0", "Child" : ["83"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4412.lut16_V_1_U", "Parent" : "82"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4421", "Parent" : "0", "Child" : ["85"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4421.lut16_V_1_U", "Parent" : "84"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4430", "Parent" : "0", "Child" : ["87"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4430.lut16_V_1_U", "Parent" : "86"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4439", "Parent" : "0", "Child" : ["89"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4439.lut16_V_1_U", "Parent" : "88"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4448", "Parent" : "0", "Child" : ["91"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4448.lut16_V_1_U", "Parent" : "90"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4457", "Parent" : "0", "Child" : ["93"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4457.lut16_V_1_U", "Parent" : "92"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4466", "Parent" : "0", "Child" : ["95"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4466.lut16_V_1_U", "Parent" : "94"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4475", "Parent" : "0", "Child" : ["97"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4475.lut16_V_1_U", "Parent" : "96"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4484", "Parent" : "0", "Child" : ["99"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4484.lut16_V_1_U", "Parent" : "98"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4493", "Parent" : "0", "Child" : ["101"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4493.lut16_V_1_U", "Parent" : "100"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4502", "Parent" : "0", "Child" : ["103"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4502.lut16_V_1_U", "Parent" : "102"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4511", "Parent" : "0", "Child" : ["105"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4511.lut16_V_1_U", "Parent" : "104"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4520", "Parent" : "0", "Child" : ["107"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4520.lut16_V_1_U", "Parent" : "106"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4529", "Parent" : "0", "Child" : ["109"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4529.lut16_V_1_U", "Parent" : "108"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4538", "Parent" : "0", "Child" : ["111"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4538.lut16_V_1_U", "Parent" : "110"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4547", "Parent" : "0", "Child" : ["113"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4547.lut16_V_1_U", "Parent" : "112"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4556", "Parent" : "0", "Child" : ["115"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4556.lut16_V_1_U", "Parent" : "114"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4565", "Parent" : "0", "Child" : ["117"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4565.lut16_V_1_U", "Parent" : "116"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4574", "Parent" : "0", "Child" : ["119"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4574.lut16_V_1_U", "Parent" : "118"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4583", "Parent" : "0", "Child" : ["121"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4583.lut16_V_1_U", "Parent" : "120"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4592", "Parent" : "0", "Child" : ["123"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4592.lut16_V_1_U", "Parent" : "122"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4601", "Parent" : "0", "Child" : ["125"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4601.lut16_V_1_U", "Parent" : "124"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4610", "Parent" : "0", "Child" : ["127"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4610.lut16_V_1_U", "Parent" : "126"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4619", "Parent" : "0", "Child" : ["129"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4619.lut16_V_1_U", "Parent" : "128"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4628", "Parent" : "0", "Child" : ["131"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4628.lut16_V_1_U", "Parent" : "130"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4637", "Parent" : "0", "Child" : ["133"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4637.lut16_V_1_U", "Parent" : "132"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4646", "Parent" : "0", "Child" : ["135"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4646.lut16_V_1_U", "Parent" : "134"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4655", "Parent" : "0", "Child" : ["137"],
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_4655.lut16_V_1_U", "Parent" : "136"}]}


set ArgLastReadFirstWriteLatency {
	biconv16 {
		bottom_V {Type I LastRead 7 FirstWrite -1}
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
		weights_16_V {Type I LastRead 6 FirstWrite -1}
		weights_17_V {Type I LastRead 6 FirstWrite -1}
		weights_18_V {Type I LastRead 6 FirstWrite -1}
		weights_19_V {Type I LastRead 6 FirstWrite -1}
		weights_20_V {Type I LastRead 6 FirstWrite -1}
		weights_21_V {Type I LastRead 6 FirstWrite -1}
		weights_22_V {Type I LastRead 6 FirstWrite -1}
		weights_23_V {Type I LastRead 6 FirstWrite -1}
		weights_24_V {Type I LastRead 6 FirstWrite -1}
		weights_25_V {Type I LastRead 6 FirstWrite -1}
		weights_26_V {Type I LastRead 6 FirstWrite -1}
		weights_27_V {Type I LastRead 6 FirstWrite -1}
		weights_28_V {Type I LastRead 6 FirstWrite -1}
		weights_29_V {Type I LastRead 7 FirstWrite -1}
		weights_30_V {Type I LastRead 7 FirstWrite -1}
		weights_31_V {Type I LastRead 7 FirstWrite -1}
		weights_V_offset {Type I LastRead 0 FirstWrite -1}
		bn_weight_V {Type I LastRead 6 FirstWrite -1}
		bn_weight_V32 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V33 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V34 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V35 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V36 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V37 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V38 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V39 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V40 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V41 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V42 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V43 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V44 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V45 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V46 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V47 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V48 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V49 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V50 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V51 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V52 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V53 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V54 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V55 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V56 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V57 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V58 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V59 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V60 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V61 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V62 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V_offset {Type I LastRead 0 FirstWrite -1}
		bn_bias_V {Type I LastRead 6 FirstWrite -1}
		bn_bias_V63 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V64 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V65 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V66 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V67 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V68 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V69 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V70 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V71 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V72 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V73 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V74 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V75 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V76 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V77 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V78 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V79 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V80 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V81 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V82 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V83 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V84 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V85 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V86 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V87 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V88 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V89 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V90 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V91 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V92 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V93 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V_offset {Type I LastRead 0 FirstWrite -1}
		top_0_V {Type IO LastRead 11 FirstWrite 15}
		top_1_V {Type IO LastRead 11 FirstWrite 15}
		top_2_V {Type IO LastRead 11 FirstWrite 15}
		top_3_V {Type IO LastRead 11 FirstWrite 15}
		top_4_V {Type IO LastRead 11 FirstWrite 15}
		top_5_V {Type IO LastRead 11 FirstWrite 15}
		top_6_V {Type IO LastRead 11 FirstWrite 15}
		top_7_V {Type IO LastRead 11 FirstWrite 16}
		top_8_V {Type IO LastRead 11 FirstWrite 16}
		top_9_V {Type IO LastRead 11 FirstWrite 16}
		top_10_V {Type IO LastRead 11 FirstWrite 16}
		top_11_V {Type IO LastRead 11 FirstWrite 16}
		top_12_V {Type IO LastRead 11 FirstWrite 16}
		top_13_V {Type IO LastRead 11 FirstWrite 16}
		top_14_V {Type IO LastRead 11 FirstWrite 17}
		top_15_V {Type IO LastRead 11 FirstWrite 17}
		top_16_V {Type IO LastRead 11 FirstWrite 17}
		top_17_V {Type IO LastRead 11 FirstWrite 17}
		top_18_V {Type IO LastRead 11 FirstWrite 17}
		top_19_V {Type IO LastRead 11 FirstWrite 17}
		top_20_V {Type IO LastRead 11 FirstWrite 17}
		top_21_V {Type IO LastRead 16 FirstWrite 18}
		top_22_V {Type IO LastRead 16 FirstWrite 18}
		top_23_V {Type IO LastRead 16 FirstWrite 18}
		top_24_V {Type IO LastRead 16 FirstWrite 18}
		top_25_V {Type IO LastRead 16 FirstWrite 18}
		top_26_V {Type IO LastRead 16 FirstWrite 18}
		top_27_V {Type IO LastRead 16 FirstWrite 18}
		top_28_V {Type IO LastRead 16 FirstWrite 19}
		top_29_V {Type IO LastRead 16 FirstWrite 19}
		top_30_V {Type IO LastRead 16 FirstWrite 19}
		top_31_V {Type IO LastRead 16 FirstWrite 19}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
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
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "95", "Max" : "95"}
	, {"Name" : "Interval", "Min" : "95", "Max" : "95"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	bottom_V { ap_memory {  { bottom_V_address0 mem_address 1 7 }  { bottom_V_ce0 mem_ce 1 1 }  { bottom_V_q0 mem_dout 0 16 }  { bottom_V_address1 MemPortADDR2 1 7 }  { bottom_V_ce1 MemPortCE2 1 1 }  { bottom_V_q1 MemPortDOUT2 0 16 } } }
	weights_0_V { ap_memory {  { weights_0_V_address0 mem_address 1 6 }  { weights_0_V_ce0 mem_ce 1 1 }  { weights_0_V_q0 mem_dout 0 16 }  { weights_0_V_address1 MemPortADDR2 1 6 }  { weights_0_V_ce1 MemPortCE2 1 1 }  { weights_0_V_q1 MemPortDOUT2 0 16 } } }
	weights_1_V { ap_memory {  { weights_1_V_address0 mem_address 1 6 }  { weights_1_V_ce0 mem_ce 1 1 }  { weights_1_V_q0 mem_dout 0 16 }  { weights_1_V_address1 MemPortADDR2 1 6 }  { weights_1_V_ce1 MemPortCE2 1 1 }  { weights_1_V_q1 MemPortDOUT2 0 16 } } }
	weights_2_V { ap_memory {  { weights_2_V_address0 mem_address 1 6 }  { weights_2_V_ce0 mem_ce 1 1 }  { weights_2_V_q0 mem_dout 0 16 }  { weights_2_V_address1 MemPortADDR2 1 6 }  { weights_2_V_ce1 MemPortCE2 1 1 }  { weights_2_V_q1 MemPortDOUT2 0 16 } } }
	weights_3_V { ap_memory {  { weights_3_V_address0 mem_address 1 6 }  { weights_3_V_ce0 mem_ce 1 1 }  { weights_3_V_q0 mem_dout 0 16 }  { weights_3_V_address1 MemPortADDR2 1 6 }  { weights_3_V_ce1 MemPortCE2 1 1 }  { weights_3_V_q1 MemPortDOUT2 0 16 } } }
	weights_4_V { ap_memory {  { weights_4_V_address0 mem_address 1 6 }  { weights_4_V_ce0 mem_ce 1 1 }  { weights_4_V_q0 mem_dout 0 16 }  { weights_4_V_address1 MemPortADDR2 1 6 }  { weights_4_V_ce1 MemPortCE2 1 1 }  { weights_4_V_q1 MemPortDOUT2 0 16 } } }
	weights_5_V { ap_memory {  { weights_5_V_address0 mem_address 1 6 }  { weights_5_V_ce0 mem_ce 1 1 }  { weights_5_V_q0 mem_dout 0 16 }  { weights_5_V_address1 MemPortADDR2 1 6 }  { weights_5_V_ce1 MemPortCE2 1 1 }  { weights_5_V_q1 MemPortDOUT2 0 16 } } }
	weights_6_V { ap_memory {  { weights_6_V_address0 mem_address 1 6 }  { weights_6_V_ce0 mem_ce 1 1 }  { weights_6_V_q0 mem_dout 0 16 }  { weights_6_V_address1 MemPortADDR2 1 6 }  { weights_6_V_ce1 MemPortCE2 1 1 }  { weights_6_V_q1 MemPortDOUT2 0 16 } } }
	weights_7_V { ap_memory {  { weights_7_V_address0 mem_address 1 6 }  { weights_7_V_ce0 mem_ce 1 1 }  { weights_7_V_q0 mem_dout 0 16 }  { weights_7_V_address1 MemPortADDR2 1 6 }  { weights_7_V_ce1 MemPortCE2 1 1 }  { weights_7_V_q1 MemPortDOUT2 0 16 } } }
	weights_8_V { ap_memory {  { weights_8_V_address0 mem_address 1 6 }  { weights_8_V_ce0 mem_ce 1 1 }  { weights_8_V_q0 mem_dout 0 16 }  { weights_8_V_address1 MemPortADDR2 1 6 }  { weights_8_V_ce1 MemPortCE2 1 1 }  { weights_8_V_q1 MemPortDOUT2 0 16 } } }
	weights_9_V { ap_memory {  { weights_9_V_address0 mem_address 1 6 }  { weights_9_V_ce0 mem_ce 1 1 }  { weights_9_V_q0 mem_dout 0 16 }  { weights_9_V_address1 MemPortADDR2 1 6 }  { weights_9_V_ce1 MemPortCE2 1 1 }  { weights_9_V_q1 MemPortDOUT2 0 16 } } }
	weights_10_V { ap_memory {  { weights_10_V_address0 mem_address 1 6 }  { weights_10_V_ce0 mem_ce 1 1 }  { weights_10_V_q0 mem_dout 0 16 }  { weights_10_V_address1 MemPortADDR2 1 6 }  { weights_10_V_ce1 MemPortCE2 1 1 }  { weights_10_V_q1 MemPortDOUT2 0 16 } } }
	weights_11_V { ap_memory {  { weights_11_V_address0 mem_address 1 6 }  { weights_11_V_ce0 mem_ce 1 1 }  { weights_11_V_q0 mem_dout 0 16 }  { weights_11_V_address1 MemPortADDR2 1 6 }  { weights_11_V_ce1 MemPortCE2 1 1 }  { weights_11_V_q1 MemPortDOUT2 0 16 } } }
	weights_12_V { ap_memory {  { weights_12_V_address0 mem_address 1 6 }  { weights_12_V_ce0 mem_ce 1 1 }  { weights_12_V_q0 mem_dout 0 16 }  { weights_12_V_address1 MemPortADDR2 1 6 }  { weights_12_V_ce1 MemPortCE2 1 1 }  { weights_12_V_q1 MemPortDOUT2 0 16 } } }
	weights_13_V { ap_memory {  { weights_13_V_address0 mem_address 1 6 }  { weights_13_V_ce0 mem_ce 1 1 }  { weights_13_V_q0 mem_dout 0 16 }  { weights_13_V_address1 MemPortADDR2 1 6 }  { weights_13_V_ce1 MemPortCE2 1 1 }  { weights_13_V_q1 MemPortDOUT2 0 16 } } }
	weights_14_V { ap_memory {  { weights_14_V_address0 mem_address 1 6 }  { weights_14_V_ce0 mem_ce 1 1 }  { weights_14_V_q0 mem_dout 0 16 }  { weights_14_V_address1 MemPortADDR2 1 6 }  { weights_14_V_ce1 MemPortCE2 1 1 }  { weights_14_V_q1 MemPortDOUT2 0 16 } } }
	weights_15_V { ap_memory {  { weights_15_V_address0 mem_address 1 6 }  { weights_15_V_ce0 mem_ce 1 1 }  { weights_15_V_q0 mem_dout 0 16 }  { weights_15_V_address1 MemPortADDR2 1 6 }  { weights_15_V_ce1 MemPortCE2 1 1 }  { weights_15_V_q1 MemPortDOUT2 0 16 } } }
	weights_16_V { ap_memory {  { weights_16_V_address0 mem_address 1 6 }  { weights_16_V_ce0 mem_ce 1 1 }  { weights_16_V_q0 mem_dout 0 16 }  { weights_16_V_address1 MemPortADDR2 1 6 }  { weights_16_V_ce1 MemPortCE2 1 1 }  { weights_16_V_q1 MemPortDOUT2 0 16 } } }
	weights_17_V { ap_memory {  { weights_17_V_address0 mem_address 1 6 }  { weights_17_V_ce0 mem_ce 1 1 }  { weights_17_V_q0 mem_dout 0 16 }  { weights_17_V_address1 MemPortADDR2 1 6 }  { weights_17_V_ce1 MemPortCE2 1 1 }  { weights_17_V_q1 MemPortDOUT2 0 16 } } }
	weights_18_V { ap_memory {  { weights_18_V_address0 mem_address 1 6 }  { weights_18_V_ce0 mem_ce 1 1 }  { weights_18_V_q0 mem_dout 0 16 }  { weights_18_V_address1 MemPortADDR2 1 6 }  { weights_18_V_ce1 MemPortCE2 1 1 }  { weights_18_V_q1 MemPortDOUT2 0 16 } } }
	weights_19_V { ap_memory {  { weights_19_V_address0 mem_address 1 6 }  { weights_19_V_ce0 mem_ce 1 1 }  { weights_19_V_q0 mem_dout 0 16 }  { weights_19_V_address1 MemPortADDR2 1 6 }  { weights_19_V_ce1 MemPortCE2 1 1 }  { weights_19_V_q1 MemPortDOUT2 0 16 } } }
	weights_20_V { ap_memory {  { weights_20_V_address0 mem_address 1 6 }  { weights_20_V_ce0 mem_ce 1 1 }  { weights_20_V_q0 mem_dout 0 16 }  { weights_20_V_address1 MemPortADDR2 1 6 }  { weights_20_V_ce1 MemPortCE2 1 1 }  { weights_20_V_q1 MemPortDOUT2 0 16 } } }
	weights_21_V { ap_memory {  { weights_21_V_address0 mem_address 1 6 }  { weights_21_V_ce0 mem_ce 1 1 }  { weights_21_V_q0 mem_dout 0 16 }  { weights_21_V_address1 MemPortADDR2 1 6 }  { weights_21_V_ce1 MemPortCE2 1 1 }  { weights_21_V_q1 MemPortDOUT2 0 16 } } }
	weights_22_V { ap_memory {  { weights_22_V_address0 mem_address 1 6 }  { weights_22_V_ce0 mem_ce 1 1 }  { weights_22_V_q0 mem_dout 0 16 }  { weights_22_V_address1 MemPortADDR2 1 6 }  { weights_22_V_ce1 MemPortCE2 1 1 }  { weights_22_V_q1 MemPortDOUT2 0 16 } } }
	weights_23_V { ap_memory {  { weights_23_V_address0 mem_address 1 6 }  { weights_23_V_ce0 mem_ce 1 1 }  { weights_23_V_q0 mem_dout 0 16 }  { weights_23_V_address1 MemPortADDR2 1 6 }  { weights_23_V_ce1 MemPortCE2 1 1 }  { weights_23_V_q1 MemPortDOUT2 0 16 } } }
	weights_24_V { ap_memory {  { weights_24_V_address0 mem_address 1 6 }  { weights_24_V_ce0 mem_ce 1 1 }  { weights_24_V_q0 mem_dout 0 16 }  { weights_24_V_address1 MemPortADDR2 1 6 }  { weights_24_V_ce1 MemPortCE2 1 1 }  { weights_24_V_q1 MemPortDOUT2 0 16 } } }
	weights_25_V { ap_memory {  { weights_25_V_address0 mem_address 1 6 }  { weights_25_V_ce0 mem_ce 1 1 }  { weights_25_V_q0 mem_dout 0 16 }  { weights_25_V_address1 MemPortADDR2 1 6 }  { weights_25_V_ce1 MemPortCE2 1 1 }  { weights_25_V_q1 MemPortDOUT2 0 16 } } }
	weights_26_V { ap_memory {  { weights_26_V_address0 mem_address 1 6 }  { weights_26_V_ce0 mem_ce 1 1 }  { weights_26_V_q0 mem_dout 0 16 }  { weights_26_V_address1 MemPortADDR2 1 6 }  { weights_26_V_ce1 MemPortCE2 1 1 }  { weights_26_V_q1 MemPortDOUT2 0 16 } } }
	weights_27_V { ap_memory {  { weights_27_V_address0 mem_address 1 6 }  { weights_27_V_ce0 mem_ce 1 1 }  { weights_27_V_q0 mem_dout 0 16 }  { weights_27_V_address1 MemPortADDR2 1 6 }  { weights_27_V_ce1 MemPortCE2 1 1 }  { weights_27_V_q1 MemPortDOUT2 0 16 } } }
	weights_28_V { ap_memory {  { weights_28_V_address0 mem_address 1 6 }  { weights_28_V_ce0 mem_ce 1 1 }  { weights_28_V_q0 mem_dout 0 16 }  { weights_28_V_address1 MemPortADDR2 1 6 }  { weights_28_V_ce1 MemPortCE2 1 1 }  { weights_28_V_q1 MemPortDOUT2 0 16 } } }
	weights_29_V { ap_memory {  { weights_29_V_address0 mem_address 1 6 }  { weights_29_V_ce0 mem_ce 1 1 }  { weights_29_V_q0 mem_dout 0 16 }  { weights_29_V_address1 MemPortADDR2 1 6 }  { weights_29_V_ce1 MemPortCE2 1 1 }  { weights_29_V_q1 MemPortDOUT2 0 16 } } }
	weights_30_V { ap_memory {  { weights_30_V_address0 mem_address 1 6 }  { weights_30_V_ce0 mem_ce 1 1 }  { weights_30_V_q0 mem_dout 0 16 }  { weights_30_V_address1 MemPortADDR2 1 6 }  { weights_30_V_ce1 MemPortCE2 1 1 }  { weights_30_V_q1 MemPortDOUT2 0 16 } } }
	weights_31_V { ap_memory {  { weights_31_V_address0 mem_address 1 6 }  { weights_31_V_ce0 mem_ce 1 1 }  { weights_31_V_q0 mem_dout 0 16 }  { weights_31_V_address1 MemPortADDR2 1 6 }  { weights_31_V_ce1 MemPortCE2 1 1 }  { weights_31_V_q1 MemPortDOUT2 0 16 } } }
	weights_V_offset { ap_none {  { weights_V_offset in_data 0 3 } } }
	bn_weight_V { ap_memory {  { bn_weight_V_address0 mem_address 1 2 }  { bn_weight_V_ce0 mem_ce 1 1 }  { bn_weight_V_q0 mem_dout 0 11 } } }
	bn_weight_V32 { ap_memory {  { bn_weight_V32_address0 mem_address 1 2 }  { bn_weight_V32_ce0 mem_ce 1 1 }  { bn_weight_V32_q0 mem_dout 0 11 } } }
	bn_weight_V33 { ap_memory {  { bn_weight_V33_address0 mem_address 1 2 }  { bn_weight_V33_ce0 mem_ce 1 1 }  { bn_weight_V33_q0 mem_dout 0 11 } } }
	bn_weight_V34 { ap_memory {  { bn_weight_V34_address0 mem_address 1 2 }  { bn_weight_V34_ce0 mem_ce 1 1 }  { bn_weight_V34_q0 mem_dout 0 11 } } }
	bn_weight_V35 { ap_memory {  { bn_weight_V35_address0 mem_address 1 2 }  { bn_weight_V35_ce0 mem_ce 1 1 }  { bn_weight_V35_q0 mem_dout 0 11 } } }
	bn_weight_V36 { ap_memory {  { bn_weight_V36_address0 mem_address 1 2 }  { bn_weight_V36_ce0 mem_ce 1 1 }  { bn_weight_V36_q0 mem_dout 0 11 } } }
	bn_weight_V37 { ap_memory {  { bn_weight_V37_address0 mem_address 1 2 }  { bn_weight_V37_ce0 mem_ce 1 1 }  { bn_weight_V37_q0 mem_dout 0 11 } } }
	bn_weight_V38 { ap_memory {  { bn_weight_V38_address0 mem_address 1 2 }  { bn_weight_V38_ce0 mem_ce 1 1 }  { bn_weight_V38_q0 mem_dout 0 11 } } }
	bn_weight_V39 { ap_memory {  { bn_weight_V39_address0 mem_address 1 2 }  { bn_weight_V39_ce0 mem_ce 1 1 }  { bn_weight_V39_q0 mem_dout 0 11 } } }
	bn_weight_V40 { ap_memory {  { bn_weight_V40_address0 mem_address 1 2 }  { bn_weight_V40_ce0 mem_ce 1 1 }  { bn_weight_V40_q0 mem_dout 0 11 } } }
	bn_weight_V41 { ap_memory {  { bn_weight_V41_address0 mem_address 1 2 }  { bn_weight_V41_ce0 mem_ce 1 1 }  { bn_weight_V41_q0 mem_dout 0 11 } } }
	bn_weight_V42 { ap_memory {  { bn_weight_V42_address0 mem_address 1 2 }  { bn_weight_V42_ce0 mem_ce 1 1 }  { bn_weight_V42_q0 mem_dout 0 11 } } }
	bn_weight_V43 { ap_memory {  { bn_weight_V43_address0 mem_address 1 2 }  { bn_weight_V43_ce0 mem_ce 1 1 }  { bn_weight_V43_q0 mem_dout 0 11 } } }
	bn_weight_V44 { ap_memory {  { bn_weight_V44_address0 mem_address 1 2 }  { bn_weight_V44_ce0 mem_ce 1 1 }  { bn_weight_V44_q0 mem_dout 0 11 } } }
	bn_weight_V45 { ap_memory {  { bn_weight_V45_address0 mem_address 1 2 }  { bn_weight_V45_ce0 mem_ce 1 1 }  { bn_weight_V45_q0 mem_dout 0 11 } } }
	bn_weight_V46 { ap_memory {  { bn_weight_V46_address0 mem_address 1 2 }  { bn_weight_V46_ce0 mem_ce 1 1 }  { bn_weight_V46_q0 mem_dout 0 11 } } }
	bn_weight_V47 { ap_memory {  { bn_weight_V47_address0 mem_address 1 2 }  { bn_weight_V47_ce0 mem_ce 1 1 }  { bn_weight_V47_q0 mem_dout 0 11 } } }
	bn_weight_V48 { ap_memory {  { bn_weight_V48_address0 mem_address 1 2 }  { bn_weight_V48_ce0 mem_ce 1 1 }  { bn_weight_V48_q0 mem_dout 0 11 } } }
	bn_weight_V49 { ap_memory {  { bn_weight_V49_address0 mem_address 1 2 }  { bn_weight_V49_ce0 mem_ce 1 1 }  { bn_weight_V49_q0 mem_dout 0 11 } } }
	bn_weight_V50 { ap_memory {  { bn_weight_V50_address0 mem_address 1 2 }  { bn_weight_V50_ce0 mem_ce 1 1 }  { bn_weight_V50_q0 mem_dout 0 11 } } }
	bn_weight_V51 { ap_memory {  { bn_weight_V51_address0 mem_address 1 2 }  { bn_weight_V51_ce0 mem_ce 1 1 }  { bn_weight_V51_q0 mem_dout 0 11 } } }
	bn_weight_V52 { ap_memory {  { bn_weight_V52_address0 mem_address 1 2 }  { bn_weight_V52_ce0 mem_ce 1 1 }  { bn_weight_V52_q0 mem_dout 0 11 } } }
	bn_weight_V53 { ap_memory {  { bn_weight_V53_address0 mem_address 1 2 }  { bn_weight_V53_ce0 mem_ce 1 1 }  { bn_weight_V53_q0 mem_dout 0 11 } } }
	bn_weight_V54 { ap_memory {  { bn_weight_V54_address0 mem_address 1 2 }  { bn_weight_V54_ce0 mem_ce 1 1 }  { bn_weight_V54_q0 mem_dout 0 11 } } }
	bn_weight_V55 { ap_memory {  { bn_weight_V55_address0 mem_address 1 2 }  { bn_weight_V55_ce0 mem_ce 1 1 }  { bn_weight_V55_q0 mem_dout 0 11 } } }
	bn_weight_V56 { ap_memory {  { bn_weight_V56_address0 mem_address 1 2 }  { bn_weight_V56_ce0 mem_ce 1 1 }  { bn_weight_V56_q0 mem_dout 0 11 } } }
	bn_weight_V57 { ap_memory {  { bn_weight_V57_address0 mem_address 1 2 }  { bn_weight_V57_ce0 mem_ce 1 1 }  { bn_weight_V57_q0 mem_dout 0 11 } } }
	bn_weight_V58 { ap_memory {  { bn_weight_V58_address0 mem_address 1 2 }  { bn_weight_V58_ce0 mem_ce 1 1 }  { bn_weight_V58_q0 mem_dout 0 11 } } }
	bn_weight_V59 { ap_memory {  { bn_weight_V59_address0 mem_address 1 2 }  { bn_weight_V59_ce0 mem_ce 1 1 }  { bn_weight_V59_q0 mem_dout 0 11 } } }
	bn_weight_V60 { ap_memory {  { bn_weight_V60_address0 mem_address 1 2 }  { bn_weight_V60_ce0 mem_ce 1 1 }  { bn_weight_V60_q0 mem_dout 0 11 } } }
	bn_weight_V61 { ap_memory {  { bn_weight_V61_address0 mem_address 1 2 }  { bn_weight_V61_ce0 mem_ce 1 1 }  { bn_weight_V61_q0 mem_dout 0 11 } } }
	bn_weight_V62 { ap_memory {  { bn_weight_V62_address0 mem_address 1 2 }  { bn_weight_V62_ce0 mem_ce 1 1 }  { bn_weight_V62_q0 mem_dout 0 11 } } }
	bn_weight_V_offset { ap_none {  { bn_weight_V_offset in_data 0 3 } } }
	bn_bias_V { ap_memory {  { bn_bias_V_address0 mem_address 1 2 }  { bn_bias_V_ce0 mem_ce 1 1 }  { bn_bias_V_q0 mem_dout 0 11 } } }
	bn_bias_V63 { ap_memory {  { bn_bias_V63_address0 mem_address 1 2 }  { bn_bias_V63_ce0 mem_ce 1 1 }  { bn_bias_V63_q0 mem_dout 0 11 } } }
	bn_bias_V64 { ap_memory {  { bn_bias_V64_address0 mem_address 1 2 }  { bn_bias_V64_ce0 mem_ce 1 1 }  { bn_bias_V64_q0 mem_dout 0 11 } } }
	bn_bias_V65 { ap_memory {  { bn_bias_V65_address0 mem_address 1 2 }  { bn_bias_V65_ce0 mem_ce 1 1 }  { bn_bias_V65_q0 mem_dout 0 11 } } }
	bn_bias_V66 { ap_memory {  { bn_bias_V66_address0 mem_address 1 2 }  { bn_bias_V66_ce0 mem_ce 1 1 }  { bn_bias_V66_q0 mem_dout 0 11 } } }
	bn_bias_V67 { ap_memory {  { bn_bias_V67_address0 mem_address 1 2 }  { bn_bias_V67_ce0 mem_ce 1 1 }  { bn_bias_V67_q0 mem_dout 0 11 } } }
	bn_bias_V68 { ap_memory {  { bn_bias_V68_address0 mem_address 1 2 }  { bn_bias_V68_ce0 mem_ce 1 1 }  { bn_bias_V68_q0 mem_dout 0 11 } } }
	bn_bias_V69 { ap_memory {  { bn_bias_V69_address0 mem_address 1 2 }  { bn_bias_V69_ce0 mem_ce 1 1 }  { bn_bias_V69_q0 mem_dout 0 11 } } }
	bn_bias_V70 { ap_memory {  { bn_bias_V70_address0 mem_address 1 2 }  { bn_bias_V70_ce0 mem_ce 1 1 }  { bn_bias_V70_q0 mem_dout 0 11 } } }
	bn_bias_V71 { ap_memory {  { bn_bias_V71_address0 mem_address 1 2 }  { bn_bias_V71_ce0 mem_ce 1 1 }  { bn_bias_V71_q0 mem_dout 0 11 } } }
	bn_bias_V72 { ap_memory {  { bn_bias_V72_address0 mem_address 1 2 }  { bn_bias_V72_ce0 mem_ce 1 1 }  { bn_bias_V72_q0 mem_dout 0 11 } } }
	bn_bias_V73 { ap_memory {  { bn_bias_V73_address0 mem_address 1 2 }  { bn_bias_V73_ce0 mem_ce 1 1 }  { bn_bias_V73_q0 mem_dout 0 11 } } }
	bn_bias_V74 { ap_memory {  { bn_bias_V74_address0 mem_address 1 2 }  { bn_bias_V74_ce0 mem_ce 1 1 }  { bn_bias_V74_q0 mem_dout 0 11 } } }
	bn_bias_V75 { ap_memory {  { bn_bias_V75_address0 mem_address 1 2 }  { bn_bias_V75_ce0 mem_ce 1 1 }  { bn_bias_V75_q0 mem_dout 0 11 } } }
	bn_bias_V76 { ap_memory {  { bn_bias_V76_address0 mem_address 1 2 }  { bn_bias_V76_ce0 mem_ce 1 1 }  { bn_bias_V76_q0 mem_dout 0 11 } } }
	bn_bias_V77 { ap_memory {  { bn_bias_V77_address0 mem_address 1 2 }  { bn_bias_V77_ce0 mem_ce 1 1 }  { bn_bias_V77_q0 mem_dout 0 11 } } }
	bn_bias_V78 { ap_memory {  { bn_bias_V78_address0 mem_address 1 2 }  { bn_bias_V78_ce0 mem_ce 1 1 }  { bn_bias_V78_q0 mem_dout 0 11 } } }
	bn_bias_V79 { ap_memory {  { bn_bias_V79_address0 mem_address 1 2 }  { bn_bias_V79_ce0 mem_ce 1 1 }  { bn_bias_V79_q0 mem_dout 0 11 } } }
	bn_bias_V80 { ap_memory {  { bn_bias_V80_address0 mem_address 1 2 }  { bn_bias_V80_ce0 mem_ce 1 1 }  { bn_bias_V80_q0 mem_dout 0 11 } } }
	bn_bias_V81 { ap_memory {  { bn_bias_V81_address0 mem_address 1 2 }  { bn_bias_V81_ce0 mem_ce 1 1 }  { bn_bias_V81_q0 mem_dout 0 11 } } }
	bn_bias_V82 { ap_memory {  { bn_bias_V82_address0 mem_address 1 2 }  { bn_bias_V82_ce0 mem_ce 1 1 }  { bn_bias_V82_q0 mem_dout 0 11 } } }
	bn_bias_V83 { ap_memory {  { bn_bias_V83_address0 mem_address 1 2 }  { bn_bias_V83_ce0 mem_ce 1 1 }  { bn_bias_V83_q0 mem_dout 0 11 } } }
	bn_bias_V84 { ap_memory {  { bn_bias_V84_address0 mem_address 1 2 }  { bn_bias_V84_ce0 mem_ce 1 1 }  { bn_bias_V84_q0 mem_dout 0 11 } } }
	bn_bias_V85 { ap_memory {  { bn_bias_V85_address0 mem_address 1 2 }  { bn_bias_V85_ce0 mem_ce 1 1 }  { bn_bias_V85_q0 mem_dout 0 11 } } }
	bn_bias_V86 { ap_memory {  { bn_bias_V86_address0 mem_address 1 2 }  { bn_bias_V86_ce0 mem_ce 1 1 }  { bn_bias_V86_q0 mem_dout 0 11 } } }
	bn_bias_V87 { ap_memory {  { bn_bias_V87_address0 mem_address 1 2 }  { bn_bias_V87_ce0 mem_ce 1 1 }  { bn_bias_V87_q0 mem_dout 0 11 } } }
	bn_bias_V88 { ap_memory {  { bn_bias_V88_address0 mem_address 1 2 }  { bn_bias_V88_ce0 mem_ce 1 1 }  { bn_bias_V88_q0 mem_dout 0 11 } } }
	bn_bias_V89 { ap_memory {  { bn_bias_V89_address0 mem_address 1 2 }  { bn_bias_V89_ce0 mem_ce 1 1 }  { bn_bias_V89_q0 mem_dout 0 11 } } }
	bn_bias_V90 { ap_memory {  { bn_bias_V90_address0 mem_address 1 2 }  { bn_bias_V90_ce0 mem_ce 1 1 }  { bn_bias_V90_q0 mem_dout 0 11 } } }
	bn_bias_V91 { ap_memory {  { bn_bias_V91_address0 mem_address 1 2 }  { bn_bias_V91_ce0 mem_ce 1 1 }  { bn_bias_V91_q0 mem_dout 0 11 } } }
	bn_bias_V92 { ap_memory {  { bn_bias_V92_address0 mem_address 1 2 }  { bn_bias_V92_ce0 mem_ce 1 1 }  { bn_bias_V92_q0 mem_dout 0 11 } } }
	bn_bias_V93 { ap_memory {  { bn_bias_V93_address0 mem_address 1 2 }  { bn_bias_V93_ce0 mem_ce 1 1 }  { bn_bias_V93_q0 mem_dout 0 11 } } }
	bn_bias_V_offset { ap_none {  { bn_bias_V_offset in_data 0 3 } } }
	top_0_V { ap_memory {  { top_0_V_address0 mem_address 1 7 }  { top_0_V_ce0 mem_ce 1 1 }  { top_0_V_we0 mem_we 1 1 }  { top_0_V_d0 mem_din 1 14 }  { top_0_V_q0 mem_dout 0 14 } } }
	top_1_V { ap_memory {  { top_1_V_address0 mem_address 1 7 }  { top_1_V_ce0 mem_ce 1 1 }  { top_1_V_we0 mem_we 1 1 }  { top_1_V_d0 mem_din 1 14 }  { top_1_V_q0 mem_dout 0 14 } } }
	top_2_V { ap_memory {  { top_2_V_address0 mem_address 1 7 }  { top_2_V_ce0 mem_ce 1 1 }  { top_2_V_we0 mem_we 1 1 }  { top_2_V_d0 mem_din 1 14 }  { top_2_V_q0 mem_dout 0 14 } } }
	top_3_V { ap_memory {  { top_3_V_address0 mem_address 1 7 }  { top_3_V_ce0 mem_ce 1 1 }  { top_3_V_we0 mem_we 1 1 }  { top_3_V_d0 mem_din 1 14 }  { top_3_V_q0 mem_dout 0 14 } } }
	top_4_V { ap_memory {  { top_4_V_address0 mem_address 1 7 }  { top_4_V_ce0 mem_ce 1 1 }  { top_4_V_we0 mem_we 1 1 }  { top_4_V_d0 mem_din 1 14 }  { top_4_V_q0 mem_dout 0 14 } } }
	top_5_V { ap_memory {  { top_5_V_address0 mem_address 1 7 }  { top_5_V_ce0 mem_ce 1 1 }  { top_5_V_we0 mem_we 1 1 }  { top_5_V_d0 mem_din 1 14 }  { top_5_V_q0 mem_dout 0 14 } } }
	top_6_V { ap_memory {  { top_6_V_address0 mem_address 1 7 }  { top_6_V_ce0 mem_ce 1 1 }  { top_6_V_we0 mem_we 1 1 }  { top_6_V_d0 mem_din 1 14 }  { top_6_V_q0 mem_dout 0 14 } } }
	top_7_V { ap_memory {  { top_7_V_address0 mem_address 1 7 }  { top_7_V_ce0 mem_ce 1 1 }  { top_7_V_q0 mem_dout 0 14 }  { top_7_V_address1 MemPortADDR2 1 7 }  { top_7_V_ce1 MemPortCE2 1 1 }  { top_7_V_we1 MemPortWE2 1 1 }  { top_7_V_d1 MemPortDIN2 1 14 } } }
	top_8_V { ap_memory {  { top_8_V_address0 mem_address 1 7 }  { top_8_V_ce0 mem_ce 1 1 }  { top_8_V_q0 mem_dout 0 14 }  { top_8_V_address1 MemPortADDR2 1 7 }  { top_8_V_ce1 MemPortCE2 1 1 }  { top_8_V_we1 MemPortWE2 1 1 }  { top_8_V_d1 MemPortDIN2 1 14 } } }
	top_9_V { ap_memory {  { top_9_V_address0 mem_address 1 7 }  { top_9_V_ce0 mem_ce 1 1 }  { top_9_V_q0 mem_dout 0 14 }  { top_9_V_address1 MemPortADDR2 1 7 }  { top_9_V_ce1 MemPortCE2 1 1 }  { top_9_V_we1 MemPortWE2 1 1 }  { top_9_V_d1 MemPortDIN2 1 14 } } }
	top_10_V { ap_memory {  { top_10_V_address0 mem_address 1 7 }  { top_10_V_ce0 mem_ce 1 1 }  { top_10_V_q0 mem_dout 0 14 }  { top_10_V_address1 MemPortADDR2 1 7 }  { top_10_V_ce1 MemPortCE2 1 1 }  { top_10_V_we1 MemPortWE2 1 1 }  { top_10_V_d1 MemPortDIN2 1 14 } } }
	top_11_V { ap_memory {  { top_11_V_address0 mem_address 1 7 }  { top_11_V_ce0 mem_ce 1 1 }  { top_11_V_q0 mem_dout 0 14 }  { top_11_V_address1 MemPortADDR2 1 7 }  { top_11_V_ce1 MemPortCE2 1 1 }  { top_11_V_we1 MemPortWE2 1 1 }  { top_11_V_d1 MemPortDIN2 1 14 } } }
	top_12_V { ap_memory {  { top_12_V_address0 mem_address 1 7 }  { top_12_V_ce0 mem_ce 1 1 }  { top_12_V_q0 mem_dout 0 14 }  { top_12_V_address1 MemPortADDR2 1 7 }  { top_12_V_ce1 MemPortCE2 1 1 }  { top_12_V_we1 MemPortWE2 1 1 }  { top_12_V_d1 MemPortDIN2 1 14 } } }
	top_13_V { ap_memory {  { top_13_V_address0 mem_address 1 7 }  { top_13_V_ce0 mem_ce 1 1 }  { top_13_V_q0 mem_dout 0 14 }  { top_13_V_address1 MemPortADDR2 1 7 }  { top_13_V_ce1 MemPortCE2 1 1 }  { top_13_V_we1 MemPortWE2 1 1 }  { top_13_V_d1 MemPortDIN2 1 14 } } }
	top_14_V { ap_memory {  { top_14_V_address0 mem_address 1 7 }  { top_14_V_ce0 mem_ce 1 1 }  { top_14_V_we0 mem_we 1 1 }  { top_14_V_d0 mem_din 1 14 }  { top_14_V_q0 mem_dout 0 14 } } }
	top_15_V { ap_memory {  { top_15_V_address0 mem_address 1 7 }  { top_15_V_ce0 mem_ce 1 1 }  { top_15_V_we0 mem_we 1 1 }  { top_15_V_d0 mem_din 1 14 }  { top_15_V_q0 mem_dout 0 14 } } }
	top_16_V { ap_memory {  { top_16_V_address0 mem_address 1 7 }  { top_16_V_ce0 mem_ce 1 1 }  { top_16_V_we0 mem_we 1 1 }  { top_16_V_d0 mem_din 1 14 }  { top_16_V_q0 mem_dout 0 14 } } }
	top_17_V { ap_memory {  { top_17_V_address0 mem_address 1 7 }  { top_17_V_ce0 mem_ce 1 1 }  { top_17_V_we0 mem_we 1 1 }  { top_17_V_d0 mem_din 1 14 }  { top_17_V_q0 mem_dout 0 14 } } }
	top_18_V { ap_memory {  { top_18_V_address0 mem_address 1 7 }  { top_18_V_ce0 mem_ce 1 1 }  { top_18_V_we0 mem_we 1 1 }  { top_18_V_d0 mem_din 1 14 }  { top_18_V_q0 mem_dout 0 14 } } }
	top_19_V { ap_memory {  { top_19_V_address0 mem_address 1 7 }  { top_19_V_ce0 mem_ce 1 1 }  { top_19_V_we0 mem_we 1 1 }  { top_19_V_d0 mem_din 1 14 }  { top_19_V_q0 mem_dout 0 14 } } }
	top_20_V { ap_memory {  { top_20_V_address0 mem_address 1 7 }  { top_20_V_ce0 mem_ce 1 1 }  { top_20_V_we0 mem_we 1 1 }  { top_20_V_d0 mem_din 1 14 }  { top_20_V_q0 mem_dout 0 14 } } }
	top_21_V { ap_memory {  { top_21_V_address0 mem_address 1 7 }  { top_21_V_ce0 mem_ce 1 1 }  { top_21_V_we0 mem_we 1 1 }  { top_21_V_d0 mem_din 1 14 }  { top_21_V_q0 mem_dout 0 14 } } }
	top_22_V { ap_memory {  { top_22_V_address0 mem_address 1 7 }  { top_22_V_ce0 mem_ce 1 1 }  { top_22_V_we0 mem_we 1 1 }  { top_22_V_d0 mem_din 1 14 }  { top_22_V_q0 mem_dout 0 14 } } }
	top_23_V { ap_memory {  { top_23_V_address0 mem_address 1 7 }  { top_23_V_ce0 mem_ce 1 1 }  { top_23_V_we0 mem_we 1 1 }  { top_23_V_d0 mem_din 1 14 }  { top_23_V_q0 mem_dout 0 14 } } }
	top_24_V { ap_memory {  { top_24_V_address0 mem_address 1 7 }  { top_24_V_ce0 mem_ce 1 1 }  { top_24_V_we0 mem_we 1 1 }  { top_24_V_d0 mem_din 1 14 }  { top_24_V_q0 mem_dout 0 14 } } }
	top_25_V { ap_memory {  { top_25_V_address0 mem_address 1 7 }  { top_25_V_ce0 mem_ce 1 1 }  { top_25_V_we0 mem_we 1 1 }  { top_25_V_d0 mem_din 1 14 }  { top_25_V_q0 mem_dout 0 14 } } }
	top_26_V { ap_memory {  { top_26_V_address0 mem_address 1 7 }  { top_26_V_ce0 mem_ce 1 1 }  { top_26_V_we0 mem_we 1 1 }  { top_26_V_d0 mem_din 1 14 }  { top_26_V_q0 mem_dout 0 14 } } }
	top_27_V { ap_memory {  { top_27_V_address0 mem_address 1 7 }  { top_27_V_ce0 mem_ce 1 1 }  { top_27_V_we0 mem_we 1 1 }  { top_27_V_d0 mem_din 1 14 }  { top_27_V_q0 mem_dout 0 14 } } }
	top_28_V { ap_memory {  { top_28_V_address0 mem_address 1 7 }  { top_28_V_ce0 mem_ce 1 1 }  { top_28_V_we0 mem_we 1 1 }  { top_28_V_d0 mem_din 1 14 }  { top_28_V_q0 mem_dout 0 14 } } }
	top_29_V { ap_memory {  { top_29_V_address0 mem_address 1 7 }  { top_29_V_ce0 mem_ce 1 1 }  { top_29_V_we0 mem_we 1 1 }  { top_29_V_d0 mem_din 1 14 }  { top_29_V_q0 mem_dout 0 14 } } }
	top_30_V { ap_memory {  { top_30_V_address0 mem_address 1 7 }  { top_30_V_ce0 mem_ce 1 1 }  { top_30_V_we0 mem_we 1 1 }  { top_30_V_d0 mem_din 1 14 }  { top_30_V_q0 mem_dout 0 14 } } }
	top_31_V { ap_memory {  { top_31_V_address0 mem_address 1 7 }  { top_31_V_ce0 mem_ce 1 1 }  { top_31_V_we0 mem_we 1 1 }  { top_31_V_d0 mem_din 1 14 }  { top_31_V_q0 mem_dout 0 14 } } }
}
