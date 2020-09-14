set moduleName pgconv64_1bit
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
set C_modelName {pgconv64_1bit}
set C_modelType { void 0 }
set C_modelArgList {
	{ bottom_0_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_1_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_2_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_3_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_4_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_5_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_6_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_7_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bottom_8_V int 64 regular {array 9 { 1 1 } 1 1 }  }
	{ bn_weights_V int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V71 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V72 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V73 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V74 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V75 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V76 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V77 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V78 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V79 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V80 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V81 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V82 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V83 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V84 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V85 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V86 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V87 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V88 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V89 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V90 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V91 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V92 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V93 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V94 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V95 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V96 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V97 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V98 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V99 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V100 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_weights_V101 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V102 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V103 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V104 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V105 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V106 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V107 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V108 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V109 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V110 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V111 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V112 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V113 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V114 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V115 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V116 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V117 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V118 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V119 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V120 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V121 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V122 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V123 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V124 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V125 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V126 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V127 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V128 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V129 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V130 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V131 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ bn_bias_V132 int 11 regular {array 4 { 1 3 } 1 1 }  }
	{ relu_shiftx_V int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V133 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V134 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V135 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V136 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V137 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V138 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V139 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V140 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V141 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V142 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V143 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V144 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V145 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V146 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V147 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V148 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V149 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V150 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V151 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V152 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V153 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V154 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V155 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V156 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V157 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V158 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V159 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V160 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V161 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V162 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shiftx_V163 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V164 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V165 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V166 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V167 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V168 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V169 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V170 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V171 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V172 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V173 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V174 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V175 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V176 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V177 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V178 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V179 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V180 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V181 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V182 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V183 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V184 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V185 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V186 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V187 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V188 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V189 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V190 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V191 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V192 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V193 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_shifty_V194 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V195 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V196 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V197 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V198 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V199 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V200 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V201 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V202 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V203 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V204 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V205 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V206 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V207 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V208 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V209 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V210 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V211 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V212 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V213 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V214 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V215 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V216 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V217 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V218 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V219 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V220 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V221 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V222 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V223 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V224 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ relu_weights_V225 int 11 regular {array 2 { 1 3 } 1 1 }  }
	{ top_0_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_1_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_2_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_3_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_4_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_5_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_6_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_7_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_8_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_9_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_10_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_11_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_12_V int 14 regular {array 81 { 2 3 } 1 1 }  }
	{ top_13_V int 14 regular {array 81 { 2 3 } 1 1 }  }
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
	{ stride int 4 regular  }
	{ weight_buf_3x3_V_0 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_1 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_2 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_3 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_4 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_5 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_6 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_7 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_8 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_9 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_10 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_11 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_12 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_13 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_14 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_15 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_16 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_17 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_18 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_19 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_20 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_21 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_22 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_23 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_24 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_25 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_26 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_27 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_28 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_29 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_30 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
	{ weight_buf_3x3_V_31 int 64 regular {array 36 { 1 1 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "bottom_0_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_1_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_2_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_3_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_4_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_5_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_6_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_7_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_8_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V71", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V72", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V73", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V74", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V75", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V76", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V77", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V78", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V79", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V80", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V81", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V82", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V83", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V84", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V85", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V86", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V87", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V88", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V89", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V90", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V91", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V92", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V93", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V94", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V95", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V96", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V97", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V98", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V99", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V100", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weights_V101", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V102", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V103", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V104", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V105", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V106", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V107", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V108", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V109", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V110", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V111", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V112", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V113", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V114", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V115", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V116", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V117", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V118", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V119", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V120", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V121", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V122", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V123", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V124", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V125", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V126", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V127", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V128", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V129", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V130", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V131", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_V132", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V133", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V134", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V135", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V136", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V137", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V138", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V139", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V140", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V141", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V142", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V143", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V144", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V145", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V146", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V147", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V148", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V149", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V150", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V151", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V152", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V153", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V154", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V155", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V156", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V157", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V158", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V159", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V160", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V161", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V162", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shiftx_V163", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V164", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V165", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V166", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V167", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V168", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V169", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V170", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V171", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V172", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V173", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V174", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V175", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V176", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V177", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V178", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V179", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V180", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V181", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V182", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V183", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V184", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V185", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V186", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V187", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V188", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V189", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V190", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V191", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V192", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V193", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shifty_V194", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V195", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V196", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V197", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V198", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V199", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V200", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V201", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V202", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V203", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V204", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V205", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V206", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V207", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V208", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V209", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V210", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V211", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V212", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V213", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V214", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V215", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V216", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V217", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V218", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V219", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V220", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V221", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V222", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V223", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V224", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weights_V225", "interface" : "memory", "bitwidth" : 11, "direction" : "READONLY"} , 
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
 	{ "Name" : "top_31_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READWRITE"} , 
 	{ "Name" : "stride", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "weight_buf_3x3_V_0", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_1", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_2", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_3", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_4", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_5", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_6", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_7", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_8", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_9", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_10", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_11", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_12", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_13", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_14", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_15", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_16", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_17", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_18", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_19", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_20", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_21", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_22", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_23", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_24", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 24,"up" : 24,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_25", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 25,"up" : 25,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_26", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 26,"up" : 26,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_27", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 27,"up" : 27,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_28", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 28,"up" : 28,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_29", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 29,"up" : 29,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_30", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 30,"up" : 30,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "weight_buf_3x3_V_31", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "weight_buf_3x3.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 31,"up" : 31,"step" : 2},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 893
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ bottom_0_V_address0 sc_out sc_lv 4 signal 0 } 
	{ bottom_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ bottom_0_V_q0 sc_in sc_lv 64 signal 0 } 
	{ bottom_0_V_address1 sc_out sc_lv 4 signal 0 } 
	{ bottom_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ bottom_0_V_q1 sc_in sc_lv 64 signal 0 } 
	{ bottom_1_V_address0 sc_out sc_lv 4 signal 1 } 
	{ bottom_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ bottom_1_V_q0 sc_in sc_lv 64 signal 1 } 
	{ bottom_1_V_address1 sc_out sc_lv 4 signal 1 } 
	{ bottom_1_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ bottom_1_V_q1 sc_in sc_lv 64 signal 1 } 
	{ bottom_2_V_address0 sc_out sc_lv 4 signal 2 } 
	{ bottom_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ bottom_2_V_q0 sc_in sc_lv 64 signal 2 } 
	{ bottom_2_V_address1 sc_out sc_lv 4 signal 2 } 
	{ bottom_2_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ bottom_2_V_q1 sc_in sc_lv 64 signal 2 } 
	{ bottom_3_V_address0 sc_out sc_lv 4 signal 3 } 
	{ bottom_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ bottom_3_V_q0 sc_in sc_lv 64 signal 3 } 
	{ bottom_3_V_address1 sc_out sc_lv 4 signal 3 } 
	{ bottom_3_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ bottom_3_V_q1 sc_in sc_lv 64 signal 3 } 
	{ bottom_4_V_address0 sc_out sc_lv 4 signal 4 } 
	{ bottom_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ bottom_4_V_q0 sc_in sc_lv 64 signal 4 } 
	{ bottom_4_V_address1 sc_out sc_lv 4 signal 4 } 
	{ bottom_4_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ bottom_4_V_q1 sc_in sc_lv 64 signal 4 } 
	{ bottom_5_V_address0 sc_out sc_lv 4 signal 5 } 
	{ bottom_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ bottom_5_V_q0 sc_in sc_lv 64 signal 5 } 
	{ bottom_5_V_address1 sc_out sc_lv 4 signal 5 } 
	{ bottom_5_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ bottom_5_V_q1 sc_in sc_lv 64 signal 5 } 
	{ bottom_6_V_address0 sc_out sc_lv 4 signal 6 } 
	{ bottom_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ bottom_6_V_q0 sc_in sc_lv 64 signal 6 } 
	{ bottom_6_V_address1 sc_out sc_lv 4 signal 6 } 
	{ bottom_6_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ bottom_6_V_q1 sc_in sc_lv 64 signal 6 } 
	{ bottom_7_V_address0 sc_out sc_lv 4 signal 7 } 
	{ bottom_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ bottom_7_V_q0 sc_in sc_lv 64 signal 7 } 
	{ bottom_7_V_address1 sc_out sc_lv 4 signal 7 } 
	{ bottom_7_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ bottom_7_V_q1 sc_in sc_lv 64 signal 7 } 
	{ bottom_8_V_address0 sc_out sc_lv 4 signal 8 } 
	{ bottom_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ bottom_8_V_q0 sc_in sc_lv 64 signal 8 } 
	{ bottom_8_V_address1 sc_out sc_lv 4 signal 8 } 
	{ bottom_8_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ bottom_8_V_q1 sc_in sc_lv 64 signal 8 } 
	{ bn_weights_V_address0 sc_out sc_lv 2 signal 9 } 
	{ bn_weights_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ bn_weights_V_q0 sc_in sc_lv 11 signal 9 } 
	{ bn_weights_V71_address0 sc_out sc_lv 2 signal 10 } 
	{ bn_weights_V71_ce0 sc_out sc_logic 1 signal 10 } 
	{ bn_weights_V71_q0 sc_in sc_lv 11 signal 10 } 
	{ bn_weights_V72_address0 sc_out sc_lv 2 signal 11 } 
	{ bn_weights_V72_ce0 sc_out sc_logic 1 signal 11 } 
	{ bn_weights_V72_q0 sc_in sc_lv 11 signal 11 } 
	{ bn_weights_V73_address0 sc_out sc_lv 2 signal 12 } 
	{ bn_weights_V73_ce0 sc_out sc_logic 1 signal 12 } 
	{ bn_weights_V73_q0 sc_in sc_lv 11 signal 12 } 
	{ bn_weights_V74_address0 sc_out sc_lv 2 signal 13 } 
	{ bn_weights_V74_ce0 sc_out sc_logic 1 signal 13 } 
	{ bn_weights_V74_q0 sc_in sc_lv 11 signal 13 } 
	{ bn_weights_V75_address0 sc_out sc_lv 2 signal 14 } 
	{ bn_weights_V75_ce0 sc_out sc_logic 1 signal 14 } 
	{ bn_weights_V75_q0 sc_in sc_lv 11 signal 14 } 
	{ bn_weights_V76_address0 sc_out sc_lv 2 signal 15 } 
	{ bn_weights_V76_ce0 sc_out sc_logic 1 signal 15 } 
	{ bn_weights_V76_q0 sc_in sc_lv 11 signal 15 } 
	{ bn_weights_V77_address0 sc_out sc_lv 2 signal 16 } 
	{ bn_weights_V77_ce0 sc_out sc_logic 1 signal 16 } 
	{ bn_weights_V77_q0 sc_in sc_lv 11 signal 16 } 
	{ bn_weights_V78_address0 sc_out sc_lv 2 signal 17 } 
	{ bn_weights_V78_ce0 sc_out sc_logic 1 signal 17 } 
	{ bn_weights_V78_q0 sc_in sc_lv 11 signal 17 } 
	{ bn_weights_V79_address0 sc_out sc_lv 2 signal 18 } 
	{ bn_weights_V79_ce0 sc_out sc_logic 1 signal 18 } 
	{ bn_weights_V79_q0 sc_in sc_lv 11 signal 18 } 
	{ bn_weights_V80_address0 sc_out sc_lv 2 signal 19 } 
	{ bn_weights_V80_ce0 sc_out sc_logic 1 signal 19 } 
	{ bn_weights_V80_q0 sc_in sc_lv 11 signal 19 } 
	{ bn_weights_V81_address0 sc_out sc_lv 2 signal 20 } 
	{ bn_weights_V81_ce0 sc_out sc_logic 1 signal 20 } 
	{ bn_weights_V81_q0 sc_in sc_lv 11 signal 20 } 
	{ bn_weights_V82_address0 sc_out sc_lv 2 signal 21 } 
	{ bn_weights_V82_ce0 sc_out sc_logic 1 signal 21 } 
	{ bn_weights_V82_q0 sc_in sc_lv 11 signal 21 } 
	{ bn_weights_V83_address0 sc_out sc_lv 2 signal 22 } 
	{ bn_weights_V83_ce0 sc_out sc_logic 1 signal 22 } 
	{ bn_weights_V83_q0 sc_in sc_lv 11 signal 22 } 
	{ bn_weights_V84_address0 sc_out sc_lv 2 signal 23 } 
	{ bn_weights_V84_ce0 sc_out sc_logic 1 signal 23 } 
	{ bn_weights_V84_q0 sc_in sc_lv 11 signal 23 } 
	{ bn_weights_V85_address0 sc_out sc_lv 2 signal 24 } 
	{ bn_weights_V85_ce0 sc_out sc_logic 1 signal 24 } 
	{ bn_weights_V85_q0 sc_in sc_lv 11 signal 24 } 
	{ bn_weights_V86_address0 sc_out sc_lv 2 signal 25 } 
	{ bn_weights_V86_ce0 sc_out sc_logic 1 signal 25 } 
	{ bn_weights_V86_q0 sc_in sc_lv 11 signal 25 } 
	{ bn_weights_V87_address0 sc_out sc_lv 2 signal 26 } 
	{ bn_weights_V87_ce0 sc_out sc_logic 1 signal 26 } 
	{ bn_weights_V87_q0 sc_in sc_lv 11 signal 26 } 
	{ bn_weights_V88_address0 sc_out sc_lv 2 signal 27 } 
	{ bn_weights_V88_ce0 sc_out sc_logic 1 signal 27 } 
	{ bn_weights_V88_q0 sc_in sc_lv 11 signal 27 } 
	{ bn_weights_V89_address0 sc_out sc_lv 2 signal 28 } 
	{ bn_weights_V89_ce0 sc_out sc_logic 1 signal 28 } 
	{ bn_weights_V89_q0 sc_in sc_lv 11 signal 28 } 
	{ bn_weights_V90_address0 sc_out sc_lv 2 signal 29 } 
	{ bn_weights_V90_ce0 sc_out sc_logic 1 signal 29 } 
	{ bn_weights_V90_q0 sc_in sc_lv 11 signal 29 } 
	{ bn_weights_V91_address0 sc_out sc_lv 2 signal 30 } 
	{ bn_weights_V91_ce0 sc_out sc_logic 1 signal 30 } 
	{ bn_weights_V91_q0 sc_in sc_lv 11 signal 30 } 
	{ bn_weights_V92_address0 sc_out sc_lv 2 signal 31 } 
	{ bn_weights_V92_ce0 sc_out sc_logic 1 signal 31 } 
	{ bn_weights_V92_q0 sc_in sc_lv 11 signal 31 } 
	{ bn_weights_V93_address0 sc_out sc_lv 2 signal 32 } 
	{ bn_weights_V93_ce0 sc_out sc_logic 1 signal 32 } 
	{ bn_weights_V93_q0 sc_in sc_lv 11 signal 32 } 
	{ bn_weights_V94_address0 sc_out sc_lv 2 signal 33 } 
	{ bn_weights_V94_ce0 sc_out sc_logic 1 signal 33 } 
	{ bn_weights_V94_q0 sc_in sc_lv 11 signal 33 } 
	{ bn_weights_V95_address0 sc_out sc_lv 2 signal 34 } 
	{ bn_weights_V95_ce0 sc_out sc_logic 1 signal 34 } 
	{ bn_weights_V95_q0 sc_in sc_lv 11 signal 34 } 
	{ bn_weights_V96_address0 sc_out sc_lv 2 signal 35 } 
	{ bn_weights_V96_ce0 sc_out sc_logic 1 signal 35 } 
	{ bn_weights_V96_q0 sc_in sc_lv 11 signal 35 } 
	{ bn_weights_V97_address0 sc_out sc_lv 2 signal 36 } 
	{ bn_weights_V97_ce0 sc_out sc_logic 1 signal 36 } 
	{ bn_weights_V97_q0 sc_in sc_lv 11 signal 36 } 
	{ bn_weights_V98_address0 sc_out sc_lv 2 signal 37 } 
	{ bn_weights_V98_ce0 sc_out sc_logic 1 signal 37 } 
	{ bn_weights_V98_q0 sc_in sc_lv 11 signal 37 } 
	{ bn_weights_V99_address0 sc_out sc_lv 2 signal 38 } 
	{ bn_weights_V99_ce0 sc_out sc_logic 1 signal 38 } 
	{ bn_weights_V99_q0 sc_in sc_lv 11 signal 38 } 
	{ bn_weights_V100_address0 sc_out sc_lv 2 signal 39 } 
	{ bn_weights_V100_ce0 sc_out sc_logic 1 signal 39 } 
	{ bn_weights_V100_q0 sc_in sc_lv 11 signal 39 } 
	{ bn_weights_V101_address0 sc_out sc_lv 2 signal 40 } 
	{ bn_weights_V101_ce0 sc_out sc_logic 1 signal 40 } 
	{ bn_weights_V101_q0 sc_in sc_lv 11 signal 40 } 
	{ bn_bias_V_address0 sc_out sc_lv 2 signal 41 } 
	{ bn_bias_V_ce0 sc_out sc_logic 1 signal 41 } 
	{ bn_bias_V_q0 sc_in sc_lv 11 signal 41 } 
	{ bn_bias_V102_address0 sc_out sc_lv 2 signal 42 } 
	{ bn_bias_V102_ce0 sc_out sc_logic 1 signal 42 } 
	{ bn_bias_V102_q0 sc_in sc_lv 11 signal 42 } 
	{ bn_bias_V103_address0 sc_out sc_lv 2 signal 43 } 
	{ bn_bias_V103_ce0 sc_out sc_logic 1 signal 43 } 
	{ bn_bias_V103_q0 sc_in sc_lv 11 signal 43 } 
	{ bn_bias_V104_address0 sc_out sc_lv 2 signal 44 } 
	{ bn_bias_V104_ce0 sc_out sc_logic 1 signal 44 } 
	{ bn_bias_V104_q0 sc_in sc_lv 11 signal 44 } 
	{ bn_bias_V105_address0 sc_out sc_lv 2 signal 45 } 
	{ bn_bias_V105_ce0 sc_out sc_logic 1 signal 45 } 
	{ bn_bias_V105_q0 sc_in sc_lv 11 signal 45 } 
	{ bn_bias_V106_address0 sc_out sc_lv 2 signal 46 } 
	{ bn_bias_V106_ce0 sc_out sc_logic 1 signal 46 } 
	{ bn_bias_V106_q0 sc_in sc_lv 11 signal 46 } 
	{ bn_bias_V107_address0 sc_out sc_lv 2 signal 47 } 
	{ bn_bias_V107_ce0 sc_out sc_logic 1 signal 47 } 
	{ bn_bias_V107_q0 sc_in sc_lv 11 signal 47 } 
	{ bn_bias_V108_address0 sc_out sc_lv 2 signal 48 } 
	{ bn_bias_V108_ce0 sc_out sc_logic 1 signal 48 } 
	{ bn_bias_V108_q0 sc_in sc_lv 11 signal 48 } 
	{ bn_bias_V109_address0 sc_out sc_lv 2 signal 49 } 
	{ bn_bias_V109_ce0 sc_out sc_logic 1 signal 49 } 
	{ bn_bias_V109_q0 sc_in sc_lv 11 signal 49 } 
	{ bn_bias_V110_address0 sc_out sc_lv 2 signal 50 } 
	{ bn_bias_V110_ce0 sc_out sc_logic 1 signal 50 } 
	{ bn_bias_V110_q0 sc_in sc_lv 11 signal 50 } 
	{ bn_bias_V111_address0 sc_out sc_lv 2 signal 51 } 
	{ bn_bias_V111_ce0 sc_out sc_logic 1 signal 51 } 
	{ bn_bias_V111_q0 sc_in sc_lv 11 signal 51 } 
	{ bn_bias_V112_address0 sc_out sc_lv 2 signal 52 } 
	{ bn_bias_V112_ce0 sc_out sc_logic 1 signal 52 } 
	{ bn_bias_V112_q0 sc_in sc_lv 11 signal 52 } 
	{ bn_bias_V113_address0 sc_out sc_lv 2 signal 53 } 
	{ bn_bias_V113_ce0 sc_out sc_logic 1 signal 53 } 
	{ bn_bias_V113_q0 sc_in sc_lv 11 signal 53 } 
	{ bn_bias_V114_address0 sc_out sc_lv 2 signal 54 } 
	{ bn_bias_V114_ce0 sc_out sc_logic 1 signal 54 } 
	{ bn_bias_V114_q0 sc_in sc_lv 11 signal 54 } 
	{ bn_bias_V115_address0 sc_out sc_lv 2 signal 55 } 
	{ bn_bias_V115_ce0 sc_out sc_logic 1 signal 55 } 
	{ bn_bias_V115_q0 sc_in sc_lv 11 signal 55 } 
	{ bn_bias_V116_address0 sc_out sc_lv 2 signal 56 } 
	{ bn_bias_V116_ce0 sc_out sc_logic 1 signal 56 } 
	{ bn_bias_V116_q0 sc_in sc_lv 11 signal 56 } 
	{ bn_bias_V117_address0 sc_out sc_lv 2 signal 57 } 
	{ bn_bias_V117_ce0 sc_out sc_logic 1 signal 57 } 
	{ bn_bias_V117_q0 sc_in sc_lv 11 signal 57 } 
	{ bn_bias_V118_address0 sc_out sc_lv 2 signal 58 } 
	{ bn_bias_V118_ce0 sc_out sc_logic 1 signal 58 } 
	{ bn_bias_V118_q0 sc_in sc_lv 11 signal 58 } 
	{ bn_bias_V119_address0 sc_out sc_lv 2 signal 59 } 
	{ bn_bias_V119_ce0 sc_out sc_logic 1 signal 59 } 
	{ bn_bias_V119_q0 sc_in sc_lv 11 signal 59 } 
	{ bn_bias_V120_address0 sc_out sc_lv 2 signal 60 } 
	{ bn_bias_V120_ce0 sc_out sc_logic 1 signal 60 } 
	{ bn_bias_V120_q0 sc_in sc_lv 11 signal 60 } 
	{ bn_bias_V121_address0 sc_out sc_lv 2 signal 61 } 
	{ bn_bias_V121_ce0 sc_out sc_logic 1 signal 61 } 
	{ bn_bias_V121_q0 sc_in sc_lv 11 signal 61 } 
	{ bn_bias_V122_address0 sc_out sc_lv 2 signal 62 } 
	{ bn_bias_V122_ce0 sc_out sc_logic 1 signal 62 } 
	{ bn_bias_V122_q0 sc_in sc_lv 11 signal 62 } 
	{ bn_bias_V123_address0 sc_out sc_lv 2 signal 63 } 
	{ bn_bias_V123_ce0 sc_out sc_logic 1 signal 63 } 
	{ bn_bias_V123_q0 sc_in sc_lv 11 signal 63 } 
	{ bn_bias_V124_address0 sc_out sc_lv 2 signal 64 } 
	{ bn_bias_V124_ce0 sc_out sc_logic 1 signal 64 } 
	{ bn_bias_V124_q0 sc_in sc_lv 11 signal 64 } 
	{ bn_bias_V125_address0 sc_out sc_lv 2 signal 65 } 
	{ bn_bias_V125_ce0 sc_out sc_logic 1 signal 65 } 
	{ bn_bias_V125_q0 sc_in sc_lv 11 signal 65 } 
	{ bn_bias_V126_address0 sc_out sc_lv 2 signal 66 } 
	{ bn_bias_V126_ce0 sc_out sc_logic 1 signal 66 } 
	{ bn_bias_V126_q0 sc_in sc_lv 11 signal 66 } 
	{ bn_bias_V127_address0 sc_out sc_lv 2 signal 67 } 
	{ bn_bias_V127_ce0 sc_out sc_logic 1 signal 67 } 
	{ bn_bias_V127_q0 sc_in sc_lv 11 signal 67 } 
	{ bn_bias_V128_address0 sc_out sc_lv 2 signal 68 } 
	{ bn_bias_V128_ce0 sc_out sc_logic 1 signal 68 } 
	{ bn_bias_V128_q0 sc_in sc_lv 11 signal 68 } 
	{ bn_bias_V129_address0 sc_out sc_lv 2 signal 69 } 
	{ bn_bias_V129_ce0 sc_out sc_logic 1 signal 69 } 
	{ bn_bias_V129_q0 sc_in sc_lv 11 signal 69 } 
	{ bn_bias_V130_address0 sc_out sc_lv 2 signal 70 } 
	{ bn_bias_V130_ce0 sc_out sc_logic 1 signal 70 } 
	{ bn_bias_V130_q0 sc_in sc_lv 11 signal 70 } 
	{ bn_bias_V131_address0 sc_out sc_lv 2 signal 71 } 
	{ bn_bias_V131_ce0 sc_out sc_logic 1 signal 71 } 
	{ bn_bias_V131_q0 sc_in sc_lv 11 signal 71 } 
	{ bn_bias_V132_address0 sc_out sc_lv 2 signal 72 } 
	{ bn_bias_V132_ce0 sc_out sc_logic 1 signal 72 } 
	{ bn_bias_V132_q0 sc_in sc_lv 11 signal 72 } 
	{ relu_shiftx_V_address0 sc_out sc_lv 1 signal 73 } 
	{ relu_shiftx_V_ce0 sc_out sc_logic 1 signal 73 } 
	{ relu_shiftx_V_q0 sc_in sc_lv 11 signal 73 } 
	{ relu_shiftx_V133_address0 sc_out sc_lv 1 signal 74 } 
	{ relu_shiftx_V133_ce0 sc_out sc_logic 1 signal 74 } 
	{ relu_shiftx_V133_q0 sc_in sc_lv 11 signal 74 } 
	{ relu_shiftx_V134_address0 sc_out sc_lv 1 signal 75 } 
	{ relu_shiftx_V134_ce0 sc_out sc_logic 1 signal 75 } 
	{ relu_shiftx_V134_q0 sc_in sc_lv 11 signal 75 } 
	{ relu_shiftx_V135_address0 sc_out sc_lv 1 signal 76 } 
	{ relu_shiftx_V135_ce0 sc_out sc_logic 1 signal 76 } 
	{ relu_shiftx_V135_q0 sc_in sc_lv 11 signal 76 } 
	{ relu_shiftx_V136_address0 sc_out sc_lv 1 signal 77 } 
	{ relu_shiftx_V136_ce0 sc_out sc_logic 1 signal 77 } 
	{ relu_shiftx_V136_q0 sc_in sc_lv 11 signal 77 } 
	{ relu_shiftx_V137_address0 sc_out sc_lv 1 signal 78 } 
	{ relu_shiftx_V137_ce0 sc_out sc_logic 1 signal 78 } 
	{ relu_shiftx_V137_q0 sc_in sc_lv 11 signal 78 } 
	{ relu_shiftx_V138_address0 sc_out sc_lv 1 signal 79 } 
	{ relu_shiftx_V138_ce0 sc_out sc_logic 1 signal 79 } 
	{ relu_shiftx_V138_q0 sc_in sc_lv 11 signal 79 } 
	{ relu_shiftx_V139_address0 sc_out sc_lv 1 signal 80 } 
	{ relu_shiftx_V139_ce0 sc_out sc_logic 1 signal 80 } 
	{ relu_shiftx_V139_q0 sc_in sc_lv 11 signal 80 } 
	{ relu_shiftx_V140_address0 sc_out sc_lv 1 signal 81 } 
	{ relu_shiftx_V140_ce0 sc_out sc_logic 1 signal 81 } 
	{ relu_shiftx_V140_q0 sc_in sc_lv 11 signal 81 } 
	{ relu_shiftx_V141_address0 sc_out sc_lv 1 signal 82 } 
	{ relu_shiftx_V141_ce0 sc_out sc_logic 1 signal 82 } 
	{ relu_shiftx_V141_q0 sc_in sc_lv 11 signal 82 } 
	{ relu_shiftx_V142_address0 sc_out sc_lv 1 signal 83 } 
	{ relu_shiftx_V142_ce0 sc_out sc_logic 1 signal 83 } 
	{ relu_shiftx_V142_q0 sc_in sc_lv 11 signal 83 } 
	{ relu_shiftx_V143_address0 sc_out sc_lv 1 signal 84 } 
	{ relu_shiftx_V143_ce0 sc_out sc_logic 1 signal 84 } 
	{ relu_shiftx_V143_q0 sc_in sc_lv 11 signal 84 } 
	{ relu_shiftx_V144_address0 sc_out sc_lv 1 signal 85 } 
	{ relu_shiftx_V144_ce0 sc_out sc_logic 1 signal 85 } 
	{ relu_shiftx_V144_q0 sc_in sc_lv 11 signal 85 } 
	{ relu_shiftx_V145_address0 sc_out sc_lv 1 signal 86 } 
	{ relu_shiftx_V145_ce0 sc_out sc_logic 1 signal 86 } 
	{ relu_shiftx_V145_q0 sc_in sc_lv 11 signal 86 } 
	{ relu_shiftx_V146_address0 sc_out sc_lv 1 signal 87 } 
	{ relu_shiftx_V146_ce0 sc_out sc_logic 1 signal 87 } 
	{ relu_shiftx_V146_q0 sc_in sc_lv 11 signal 87 } 
	{ relu_shiftx_V147_address0 sc_out sc_lv 1 signal 88 } 
	{ relu_shiftx_V147_ce0 sc_out sc_logic 1 signal 88 } 
	{ relu_shiftx_V147_q0 sc_in sc_lv 11 signal 88 } 
	{ relu_shiftx_V148_address0 sc_out sc_lv 1 signal 89 } 
	{ relu_shiftx_V148_ce0 sc_out sc_logic 1 signal 89 } 
	{ relu_shiftx_V148_q0 sc_in sc_lv 11 signal 89 } 
	{ relu_shiftx_V149_address0 sc_out sc_lv 1 signal 90 } 
	{ relu_shiftx_V149_ce0 sc_out sc_logic 1 signal 90 } 
	{ relu_shiftx_V149_q0 sc_in sc_lv 11 signal 90 } 
	{ relu_shiftx_V150_address0 sc_out sc_lv 1 signal 91 } 
	{ relu_shiftx_V150_ce0 sc_out sc_logic 1 signal 91 } 
	{ relu_shiftx_V150_q0 sc_in sc_lv 11 signal 91 } 
	{ relu_shiftx_V151_address0 sc_out sc_lv 1 signal 92 } 
	{ relu_shiftx_V151_ce0 sc_out sc_logic 1 signal 92 } 
	{ relu_shiftx_V151_q0 sc_in sc_lv 11 signal 92 } 
	{ relu_shiftx_V152_address0 sc_out sc_lv 1 signal 93 } 
	{ relu_shiftx_V152_ce0 sc_out sc_logic 1 signal 93 } 
	{ relu_shiftx_V152_q0 sc_in sc_lv 11 signal 93 } 
	{ relu_shiftx_V153_address0 sc_out sc_lv 1 signal 94 } 
	{ relu_shiftx_V153_ce0 sc_out sc_logic 1 signal 94 } 
	{ relu_shiftx_V153_q0 sc_in sc_lv 11 signal 94 } 
	{ relu_shiftx_V154_address0 sc_out sc_lv 1 signal 95 } 
	{ relu_shiftx_V154_ce0 sc_out sc_logic 1 signal 95 } 
	{ relu_shiftx_V154_q0 sc_in sc_lv 11 signal 95 } 
	{ relu_shiftx_V155_address0 sc_out sc_lv 1 signal 96 } 
	{ relu_shiftx_V155_ce0 sc_out sc_logic 1 signal 96 } 
	{ relu_shiftx_V155_q0 sc_in sc_lv 11 signal 96 } 
	{ relu_shiftx_V156_address0 sc_out sc_lv 1 signal 97 } 
	{ relu_shiftx_V156_ce0 sc_out sc_logic 1 signal 97 } 
	{ relu_shiftx_V156_q0 sc_in sc_lv 11 signal 97 } 
	{ relu_shiftx_V157_address0 sc_out sc_lv 1 signal 98 } 
	{ relu_shiftx_V157_ce0 sc_out sc_logic 1 signal 98 } 
	{ relu_shiftx_V157_q0 sc_in sc_lv 11 signal 98 } 
	{ relu_shiftx_V158_address0 sc_out sc_lv 1 signal 99 } 
	{ relu_shiftx_V158_ce0 sc_out sc_logic 1 signal 99 } 
	{ relu_shiftx_V158_q0 sc_in sc_lv 11 signal 99 } 
	{ relu_shiftx_V159_address0 sc_out sc_lv 1 signal 100 } 
	{ relu_shiftx_V159_ce0 sc_out sc_logic 1 signal 100 } 
	{ relu_shiftx_V159_q0 sc_in sc_lv 11 signal 100 } 
	{ relu_shiftx_V160_address0 sc_out sc_lv 1 signal 101 } 
	{ relu_shiftx_V160_ce0 sc_out sc_logic 1 signal 101 } 
	{ relu_shiftx_V160_q0 sc_in sc_lv 11 signal 101 } 
	{ relu_shiftx_V161_address0 sc_out sc_lv 1 signal 102 } 
	{ relu_shiftx_V161_ce0 sc_out sc_logic 1 signal 102 } 
	{ relu_shiftx_V161_q0 sc_in sc_lv 11 signal 102 } 
	{ relu_shiftx_V162_address0 sc_out sc_lv 1 signal 103 } 
	{ relu_shiftx_V162_ce0 sc_out sc_logic 1 signal 103 } 
	{ relu_shiftx_V162_q0 sc_in sc_lv 11 signal 103 } 
	{ relu_shiftx_V163_address0 sc_out sc_lv 1 signal 104 } 
	{ relu_shiftx_V163_ce0 sc_out sc_logic 1 signal 104 } 
	{ relu_shiftx_V163_q0 sc_in sc_lv 11 signal 104 } 
	{ relu_shifty_V_address0 sc_out sc_lv 1 signal 105 } 
	{ relu_shifty_V_ce0 sc_out sc_logic 1 signal 105 } 
	{ relu_shifty_V_q0 sc_in sc_lv 11 signal 105 } 
	{ relu_shifty_V164_address0 sc_out sc_lv 1 signal 106 } 
	{ relu_shifty_V164_ce0 sc_out sc_logic 1 signal 106 } 
	{ relu_shifty_V164_q0 sc_in sc_lv 11 signal 106 } 
	{ relu_shifty_V165_address0 sc_out sc_lv 1 signal 107 } 
	{ relu_shifty_V165_ce0 sc_out sc_logic 1 signal 107 } 
	{ relu_shifty_V165_q0 sc_in sc_lv 11 signal 107 } 
	{ relu_shifty_V166_address0 sc_out sc_lv 1 signal 108 } 
	{ relu_shifty_V166_ce0 sc_out sc_logic 1 signal 108 } 
	{ relu_shifty_V166_q0 sc_in sc_lv 11 signal 108 } 
	{ relu_shifty_V167_address0 sc_out sc_lv 1 signal 109 } 
	{ relu_shifty_V167_ce0 sc_out sc_logic 1 signal 109 } 
	{ relu_shifty_V167_q0 sc_in sc_lv 11 signal 109 } 
	{ relu_shifty_V168_address0 sc_out sc_lv 1 signal 110 } 
	{ relu_shifty_V168_ce0 sc_out sc_logic 1 signal 110 } 
	{ relu_shifty_V168_q0 sc_in sc_lv 11 signal 110 } 
	{ relu_shifty_V169_address0 sc_out sc_lv 1 signal 111 } 
	{ relu_shifty_V169_ce0 sc_out sc_logic 1 signal 111 } 
	{ relu_shifty_V169_q0 sc_in sc_lv 11 signal 111 } 
	{ relu_shifty_V170_address0 sc_out sc_lv 1 signal 112 } 
	{ relu_shifty_V170_ce0 sc_out sc_logic 1 signal 112 } 
	{ relu_shifty_V170_q0 sc_in sc_lv 11 signal 112 } 
	{ relu_shifty_V171_address0 sc_out sc_lv 1 signal 113 } 
	{ relu_shifty_V171_ce0 sc_out sc_logic 1 signal 113 } 
	{ relu_shifty_V171_q0 sc_in sc_lv 11 signal 113 } 
	{ relu_shifty_V172_address0 sc_out sc_lv 1 signal 114 } 
	{ relu_shifty_V172_ce0 sc_out sc_logic 1 signal 114 } 
	{ relu_shifty_V172_q0 sc_in sc_lv 11 signal 114 } 
	{ relu_shifty_V173_address0 sc_out sc_lv 1 signal 115 } 
	{ relu_shifty_V173_ce0 sc_out sc_logic 1 signal 115 } 
	{ relu_shifty_V173_q0 sc_in sc_lv 11 signal 115 } 
	{ relu_shifty_V174_address0 sc_out sc_lv 1 signal 116 } 
	{ relu_shifty_V174_ce0 sc_out sc_logic 1 signal 116 } 
	{ relu_shifty_V174_q0 sc_in sc_lv 11 signal 116 } 
	{ relu_shifty_V175_address0 sc_out sc_lv 1 signal 117 } 
	{ relu_shifty_V175_ce0 sc_out sc_logic 1 signal 117 } 
	{ relu_shifty_V175_q0 sc_in sc_lv 11 signal 117 } 
	{ relu_shifty_V176_address0 sc_out sc_lv 1 signal 118 } 
	{ relu_shifty_V176_ce0 sc_out sc_logic 1 signal 118 } 
	{ relu_shifty_V176_q0 sc_in sc_lv 11 signal 118 } 
	{ relu_shifty_V177_address0 sc_out sc_lv 1 signal 119 } 
	{ relu_shifty_V177_ce0 sc_out sc_logic 1 signal 119 } 
	{ relu_shifty_V177_q0 sc_in sc_lv 11 signal 119 } 
	{ relu_shifty_V178_address0 sc_out sc_lv 1 signal 120 } 
	{ relu_shifty_V178_ce0 sc_out sc_logic 1 signal 120 } 
	{ relu_shifty_V178_q0 sc_in sc_lv 11 signal 120 } 
	{ relu_shifty_V179_address0 sc_out sc_lv 1 signal 121 } 
	{ relu_shifty_V179_ce0 sc_out sc_logic 1 signal 121 } 
	{ relu_shifty_V179_q0 sc_in sc_lv 11 signal 121 } 
	{ relu_shifty_V180_address0 sc_out sc_lv 1 signal 122 } 
	{ relu_shifty_V180_ce0 sc_out sc_logic 1 signal 122 } 
	{ relu_shifty_V180_q0 sc_in sc_lv 11 signal 122 } 
	{ relu_shifty_V181_address0 sc_out sc_lv 1 signal 123 } 
	{ relu_shifty_V181_ce0 sc_out sc_logic 1 signal 123 } 
	{ relu_shifty_V181_q0 sc_in sc_lv 11 signal 123 } 
	{ relu_shifty_V182_address0 sc_out sc_lv 1 signal 124 } 
	{ relu_shifty_V182_ce0 sc_out sc_logic 1 signal 124 } 
	{ relu_shifty_V182_q0 sc_in sc_lv 11 signal 124 } 
	{ relu_shifty_V183_address0 sc_out sc_lv 1 signal 125 } 
	{ relu_shifty_V183_ce0 sc_out sc_logic 1 signal 125 } 
	{ relu_shifty_V183_q0 sc_in sc_lv 11 signal 125 } 
	{ relu_shifty_V184_address0 sc_out sc_lv 1 signal 126 } 
	{ relu_shifty_V184_ce0 sc_out sc_logic 1 signal 126 } 
	{ relu_shifty_V184_q0 sc_in sc_lv 11 signal 126 } 
	{ relu_shifty_V185_address0 sc_out sc_lv 1 signal 127 } 
	{ relu_shifty_V185_ce0 sc_out sc_logic 1 signal 127 } 
	{ relu_shifty_V185_q0 sc_in sc_lv 11 signal 127 } 
	{ relu_shifty_V186_address0 sc_out sc_lv 1 signal 128 } 
	{ relu_shifty_V186_ce0 sc_out sc_logic 1 signal 128 } 
	{ relu_shifty_V186_q0 sc_in sc_lv 11 signal 128 } 
	{ relu_shifty_V187_address0 sc_out sc_lv 1 signal 129 } 
	{ relu_shifty_V187_ce0 sc_out sc_logic 1 signal 129 } 
	{ relu_shifty_V187_q0 sc_in sc_lv 11 signal 129 } 
	{ relu_shifty_V188_address0 sc_out sc_lv 1 signal 130 } 
	{ relu_shifty_V188_ce0 sc_out sc_logic 1 signal 130 } 
	{ relu_shifty_V188_q0 sc_in sc_lv 11 signal 130 } 
	{ relu_shifty_V189_address0 sc_out sc_lv 1 signal 131 } 
	{ relu_shifty_V189_ce0 sc_out sc_logic 1 signal 131 } 
	{ relu_shifty_V189_q0 sc_in sc_lv 11 signal 131 } 
	{ relu_shifty_V190_address0 sc_out sc_lv 1 signal 132 } 
	{ relu_shifty_V190_ce0 sc_out sc_logic 1 signal 132 } 
	{ relu_shifty_V190_q0 sc_in sc_lv 11 signal 132 } 
	{ relu_shifty_V191_address0 sc_out sc_lv 1 signal 133 } 
	{ relu_shifty_V191_ce0 sc_out sc_logic 1 signal 133 } 
	{ relu_shifty_V191_q0 sc_in sc_lv 11 signal 133 } 
	{ relu_shifty_V192_address0 sc_out sc_lv 1 signal 134 } 
	{ relu_shifty_V192_ce0 sc_out sc_logic 1 signal 134 } 
	{ relu_shifty_V192_q0 sc_in sc_lv 11 signal 134 } 
	{ relu_shifty_V193_address0 sc_out sc_lv 1 signal 135 } 
	{ relu_shifty_V193_ce0 sc_out sc_logic 1 signal 135 } 
	{ relu_shifty_V193_q0 sc_in sc_lv 11 signal 135 } 
	{ relu_shifty_V194_address0 sc_out sc_lv 1 signal 136 } 
	{ relu_shifty_V194_ce0 sc_out sc_logic 1 signal 136 } 
	{ relu_shifty_V194_q0 sc_in sc_lv 11 signal 136 } 
	{ relu_weights_V_address0 sc_out sc_lv 1 signal 137 } 
	{ relu_weights_V_ce0 sc_out sc_logic 1 signal 137 } 
	{ relu_weights_V_q0 sc_in sc_lv 11 signal 137 } 
	{ relu_weights_V195_address0 sc_out sc_lv 1 signal 138 } 
	{ relu_weights_V195_ce0 sc_out sc_logic 1 signal 138 } 
	{ relu_weights_V195_q0 sc_in sc_lv 11 signal 138 } 
	{ relu_weights_V196_address0 sc_out sc_lv 1 signal 139 } 
	{ relu_weights_V196_ce0 sc_out sc_logic 1 signal 139 } 
	{ relu_weights_V196_q0 sc_in sc_lv 11 signal 139 } 
	{ relu_weights_V197_address0 sc_out sc_lv 1 signal 140 } 
	{ relu_weights_V197_ce0 sc_out sc_logic 1 signal 140 } 
	{ relu_weights_V197_q0 sc_in sc_lv 11 signal 140 } 
	{ relu_weights_V198_address0 sc_out sc_lv 1 signal 141 } 
	{ relu_weights_V198_ce0 sc_out sc_logic 1 signal 141 } 
	{ relu_weights_V198_q0 sc_in sc_lv 11 signal 141 } 
	{ relu_weights_V199_address0 sc_out sc_lv 1 signal 142 } 
	{ relu_weights_V199_ce0 sc_out sc_logic 1 signal 142 } 
	{ relu_weights_V199_q0 sc_in sc_lv 11 signal 142 } 
	{ relu_weights_V200_address0 sc_out sc_lv 1 signal 143 } 
	{ relu_weights_V200_ce0 sc_out sc_logic 1 signal 143 } 
	{ relu_weights_V200_q0 sc_in sc_lv 11 signal 143 } 
	{ relu_weights_V201_address0 sc_out sc_lv 1 signal 144 } 
	{ relu_weights_V201_ce0 sc_out sc_logic 1 signal 144 } 
	{ relu_weights_V201_q0 sc_in sc_lv 11 signal 144 } 
	{ relu_weights_V202_address0 sc_out sc_lv 1 signal 145 } 
	{ relu_weights_V202_ce0 sc_out sc_logic 1 signal 145 } 
	{ relu_weights_V202_q0 sc_in sc_lv 11 signal 145 } 
	{ relu_weights_V203_address0 sc_out sc_lv 1 signal 146 } 
	{ relu_weights_V203_ce0 sc_out sc_logic 1 signal 146 } 
	{ relu_weights_V203_q0 sc_in sc_lv 11 signal 146 } 
	{ relu_weights_V204_address0 sc_out sc_lv 1 signal 147 } 
	{ relu_weights_V204_ce0 sc_out sc_logic 1 signal 147 } 
	{ relu_weights_V204_q0 sc_in sc_lv 11 signal 147 } 
	{ relu_weights_V205_address0 sc_out sc_lv 1 signal 148 } 
	{ relu_weights_V205_ce0 sc_out sc_logic 1 signal 148 } 
	{ relu_weights_V205_q0 sc_in sc_lv 11 signal 148 } 
	{ relu_weights_V206_address0 sc_out sc_lv 1 signal 149 } 
	{ relu_weights_V206_ce0 sc_out sc_logic 1 signal 149 } 
	{ relu_weights_V206_q0 sc_in sc_lv 11 signal 149 } 
	{ relu_weights_V207_address0 sc_out sc_lv 1 signal 150 } 
	{ relu_weights_V207_ce0 sc_out sc_logic 1 signal 150 } 
	{ relu_weights_V207_q0 sc_in sc_lv 11 signal 150 } 
	{ relu_weights_V208_address0 sc_out sc_lv 1 signal 151 } 
	{ relu_weights_V208_ce0 sc_out sc_logic 1 signal 151 } 
	{ relu_weights_V208_q0 sc_in sc_lv 11 signal 151 } 
	{ relu_weights_V209_address0 sc_out sc_lv 1 signal 152 } 
	{ relu_weights_V209_ce0 sc_out sc_logic 1 signal 152 } 
	{ relu_weights_V209_q0 sc_in sc_lv 11 signal 152 } 
	{ relu_weights_V210_address0 sc_out sc_lv 1 signal 153 } 
	{ relu_weights_V210_ce0 sc_out sc_logic 1 signal 153 } 
	{ relu_weights_V210_q0 sc_in sc_lv 11 signal 153 } 
	{ relu_weights_V211_address0 sc_out sc_lv 1 signal 154 } 
	{ relu_weights_V211_ce0 sc_out sc_logic 1 signal 154 } 
	{ relu_weights_V211_q0 sc_in sc_lv 11 signal 154 } 
	{ relu_weights_V212_address0 sc_out sc_lv 1 signal 155 } 
	{ relu_weights_V212_ce0 sc_out sc_logic 1 signal 155 } 
	{ relu_weights_V212_q0 sc_in sc_lv 11 signal 155 } 
	{ relu_weights_V213_address0 sc_out sc_lv 1 signal 156 } 
	{ relu_weights_V213_ce0 sc_out sc_logic 1 signal 156 } 
	{ relu_weights_V213_q0 sc_in sc_lv 11 signal 156 } 
	{ relu_weights_V214_address0 sc_out sc_lv 1 signal 157 } 
	{ relu_weights_V214_ce0 sc_out sc_logic 1 signal 157 } 
	{ relu_weights_V214_q0 sc_in sc_lv 11 signal 157 } 
	{ relu_weights_V215_address0 sc_out sc_lv 1 signal 158 } 
	{ relu_weights_V215_ce0 sc_out sc_logic 1 signal 158 } 
	{ relu_weights_V215_q0 sc_in sc_lv 11 signal 158 } 
	{ relu_weights_V216_address0 sc_out sc_lv 1 signal 159 } 
	{ relu_weights_V216_ce0 sc_out sc_logic 1 signal 159 } 
	{ relu_weights_V216_q0 sc_in sc_lv 11 signal 159 } 
	{ relu_weights_V217_address0 sc_out sc_lv 1 signal 160 } 
	{ relu_weights_V217_ce0 sc_out sc_logic 1 signal 160 } 
	{ relu_weights_V217_q0 sc_in sc_lv 11 signal 160 } 
	{ relu_weights_V218_address0 sc_out sc_lv 1 signal 161 } 
	{ relu_weights_V218_ce0 sc_out sc_logic 1 signal 161 } 
	{ relu_weights_V218_q0 sc_in sc_lv 11 signal 161 } 
	{ relu_weights_V219_address0 sc_out sc_lv 1 signal 162 } 
	{ relu_weights_V219_ce0 sc_out sc_logic 1 signal 162 } 
	{ relu_weights_V219_q0 sc_in sc_lv 11 signal 162 } 
	{ relu_weights_V220_address0 sc_out sc_lv 1 signal 163 } 
	{ relu_weights_V220_ce0 sc_out sc_logic 1 signal 163 } 
	{ relu_weights_V220_q0 sc_in sc_lv 11 signal 163 } 
	{ relu_weights_V221_address0 sc_out sc_lv 1 signal 164 } 
	{ relu_weights_V221_ce0 sc_out sc_logic 1 signal 164 } 
	{ relu_weights_V221_q0 sc_in sc_lv 11 signal 164 } 
	{ relu_weights_V222_address0 sc_out sc_lv 1 signal 165 } 
	{ relu_weights_V222_ce0 sc_out sc_logic 1 signal 165 } 
	{ relu_weights_V222_q0 sc_in sc_lv 11 signal 165 } 
	{ relu_weights_V223_address0 sc_out sc_lv 1 signal 166 } 
	{ relu_weights_V223_ce0 sc_out sc_logic 1 signal 166 } 
	{ relu_weights_V223_q0 sc_in sc_lv 11 signal 166 } 
	{ relu_weights_V224_address0 sc_out sc_lv 1 signal 167 } 
	{ relu_weights_V224_ce0 sc_out sc_logic 1 signal 167 } 
	{ relu_weights_V224_q0 sc_in sc_lv 11 signal 167 } 
	{ relu_weights_V225_address0 sc_out sc_lv 1 signal 168 } 
	{ relu_weights_V225_ce0 sc_out sc_logic 1 signal 168 } 
	{ relu_weights_V225_q0 sc_in sc_lv 11 signal 168 } 
	{ top_0_V_address0 sc_out sc_lv 7 signal 169 } 
	{ top_0_V_ce0 sc_out sc_logic 1 signal 169 } 
	{ top_0_V_we0 sc_out sc_logic 1 signal 169 } 
	{ top_0_V_d0 sc_out sc_lv 14 signal 169 } 
	{ top_0_V_q0 sc_in sc_lv 14 signal 169 } 
	{ top_1_V_address0 sc_out sc_lv 7 signal 170 } 
	{ top_1_V_ce0 sc_out sc_logic 1 signal 170 } 
	{ top_1_V_we0 sc_out sc_logic 1 signal 170 } 
	{ top_1_V_d0 sc_out sc_lv 14 signal 170 } 
	{ top_1_V_q0 sc_in sc_lv 14 signal 170 } 
	{ top_2_V_address0 sc_out sc_lv 7 signal 171 } 
	{ top_2_V_ce0 sc_out sc_logic 1 signal 171 } 
	{ top_2_V_we0 sc_out sc_logic 1 signal 171 } 
	{ top_2_V_d0 sc_out sc_lv 14 signal 171 } 
	{ top_2_V_q0 sc_in sc_lv 14 signal 171 } 
	{ top_3_V_address0 sc_out sc_lv 7 signal 172 } 
	{ top_3_V_ce0 sc_out sc_logic 1 signal 172 } 
	{ top_3_V_we0 sc_out sc_logic 1 signal 172 } 
	{ top_3_V_d0 sc_out sc_lv 14 signal 172 } 
	{ top_3_V_q0 sc_in sc_lv 14 signal 172 } 
	{ top_4_V_address0 sc_out sc_lv 7 signal 173 } 
	{ top_4_V_ce0 sc_out sc_logic 1 signal 173 } 
	{ top_4_V_we0 sc_out sc_logic 1 signal 173 } 
	{ top_4_V_d0 sc_out sc_lv 14 signal 173 } 
	{ top_4_V_q0 sc_in sc_lv 14 signal 173 } 
	{ top_5_V_address0 sc_out sc_lv 7 signal 174 } 
	{ top_5_V_ce0 sc_out sc_logic 1 signal 174 } 
	{ top_5_V_we0 sc_out sc_logic 1 signal 174 } 
	{ top_5_V_d0 sc_out sc_lv 14 signal 174 } 
	{ top_5_V_q0 sc_in sc_lv 14 signal 174 } 
	{ top_6_V_address0 sc_out sc_lv 7 signal 175 } 
	{ top_6_V_ce0 sc_out sc_logic 1 signal 175 } 
	{ top_6_V_we0 sc_out sc_logic 1 signal 175 } 
	{ top_6_V_d0 sc_out sc_lv 14 signal 175 } 
	{ top_6_V_q0 sc_in sc_lv 14 signal 175 } 
	{ top_7_V_address0 sc_out sc_lv 7 signal 176 } 
	{ top_7_V_ce0 sc_out sc_logic 1 signal 176 } 
	{ top_7_V_we0 sc_out sc_logic 1 signal 176 } 
	{ top_7_V_d0 sc_out sc_lv 14 signal 176 } 
	{ top_7_V_q0 sc_in sc_lv 14 signal 176 } 
	{ top_8_V_address0 sc_out sc_lv 7 signal 177 } 
	{ top_8_V_ce0 sc_out sc_logic 1 signal 177 } 
	{ top_8_V_we0 sc_out sc_logic 1 signal 177 } 
	{ top_8_V_d0 sc_out sc_lv 14 signal 177 } 
	{ top_8_V_q0 sc_in sc_lv 14 signal 177 } 
	{ top_9_V_address0 sc_out sc_lv 7 signal 178 } 
	{ top_9_V_ce0 sc_out sc_logic 1 signal 178 } 
	{ top_9_V_we0 sc_out sc_logic 1 signal 178 } 
	{ top_9_V_d0 sc_out sc_lv 14 signal 178 } 
	{ top_9_V_q0 sc_in sc_lv 14 signal 178 } 
	{ top_10_V_address0 sc_out sc_lv 7 signal 179 } 
	{ top_10_V_ce0 sc_out sc_logic 1 signal 179 } 
	{ top_10_V_we0 sc_out sc_logic 1 signal 179 } 
	{ top_10_V_d0 sc_out sc_lv 14 signal 179 } 
	{ top_10_V_q0 sc_in sc_lv 14 signal 179 } 
	{ top_11_V_address0 sc_out sc_lv 7 signal 180 } 
	{ top_11_V_ce0 sc_out sc_logic 1 signal 180 } 
	{ top_11_V_we0 sc_out sc_logic 1 signal 180 } 
	{ top_11_V_d0 sc_out sc_lv 14 signal 180 } 
	{ top_11_V_q0 sc_in sc_lv 14 signal 180 } 
	{ top_12_V_address0 sc_out sc_lv 7 signal 181 } 
	{ top_12_V_ce0 sc_out sc_logic 1 signal 181 } 
	{ top_12_V_we0 sc_out sc_logic 1 signal 181 } 
	{ top_12_V_d0 sc_out sc_lv 14 signal 181 } 
	{ top_12_V_q0 sc_in sc_lv 14 signal 181 } 
	{ top_13_V_address0 sc_out sc_lv 7 signal 182 } 
	{ top_13_V_ce0 sc_out sc_logic 1 signal 182 } 
	{ top_13_V_we0 sc_out sc_logic 1 signal 182 } 
	{ top_13_V_d0 sc_out sc_lv 14 signal 182 } 
	{ top_13_V_q0 sc_in sc_lv 14 signal 182 } 
	{ top_14_V_address0 sc_out sc_lv 7 signal 183 } 
	{ top_14_V_ce0 sc_out sc_logic 1 signal 183 } 
	{ top_14_V_we0 sc_out sc_logic 1 signal 183 } 
	{ top_14_V_d0 sc_out sc_lv 14 signal 183 } 
	{ top_14_V_q0 sc_in sc_lv 14 signal 183 } 
	{ top_15_V_address0 sc_out sc_lv 7 signal 184 } 
	{ top_15_V_ce0 sc_out sc_logic 1 signal 184 } 
	{ top_15_V_we0 sc_out sc_logic 1 signal 184 } 
	{ top_15_V_d0 sc_out sc_lv 14 signal 184 } 
	{ top_15_V_q0 sc_in sc_lv 14 signal 184 } 
	{ top_16_V_address0 sc_out sc_lv 7 signal 185 } 
	{ top_16_V_ce0 sc_out sc_logic 1 signal 185 } 
	{ top_16_V_we0 sc_out sc_logic 1 signal 185 } 
	{ top_16_V_d0 sc_out sc_lv 14 signal 185 } 
	{ top_16_V_q0 sc_in sc_lv 14 signal 185 } 
	{ top_17_V_address0 sc_out sc_lv 7 signal 186 } 
	{ top_17_V_ce0 sc_out sc_logic 1 signal 186 } 
	{ top_17_V_we0 sc_out sc_logic 1 signal 186 } 
	{ top_17_V_d0 sc_out sc_lv 14 signal 186 } 
	{ top_17_V_q0 sc_in sc_lv 14 signal 186 } 
	{ top_18_V_address0 sc_out sc_lv 7 signal 187 } 
	{ top_18_V_ce0 sc_out sc_logic 1 signal 187 } 
	{ top_18_V_we0 sc_out sc_logic 1 signal 187 } 
	{ top_18_V_d0 sc_out sc_lv 14 signal 187 } 
	{ top_18_V_q0 sc_in sc_lv 14 signal 187 } 
	{ top_19_V_address0 sc_out sc_lv 7 signal 188 } 
	{ top_19_V_ce0 sc_out sc_logic 1 signal 188 } 
	{ top_19_V_we0 sc_out sc_logic 1 signal 188 } 
	{ top_19_V_d0 sc_out sc_lv 14 signal 188 } 
	{ top_19_V_q0 sc_in sc_lv 14 signal 188 } 
	{ top_20_V_address0 sc_out sc_lv 7 signal 189 } 
	{ top_20_V_ce0 sc_out sc_logic 1 signal 189 } 
	{ top_20_V_we0 sc_out sc_logic 1 signal 189 } 
	{ top_20_V_d0 sc_out sc_lv 14 signal 189 } 
	{ top_20_V_q0 sc_in sc_lv 14 signal 189 } 
	{ top_21_V_address0 sc_out sc_lv 7 signal 190 } 
	{ top_21_V_ce0 sc_out sc_logic 1 signal 190 } 
	{ top_21_V_we0 sc_out sc_logic 1 signal 190 } 
	{ top_21_V_d0 sc_out sc_lv 14 signal 190 } 
	{ top_21_V_q0 sc_in sc_lv 14 signal 190 } 
	{ top_22_V_address0 sc_out sc_lv 7 signal 191 } 
	{ top_22_V_ce0 sc_out sc_logic 1 signal 191 } 
	{ top_22_V_we0 sc_out sc_logic 1 signal 191 } 
	{ top_22_V_d0 sc_out sc_lv 14 signal 191 } 
	{ top_22_V_q0 sc_in sc_lv 14 signal 191 } 
	{ top_23_V_address0 sc_out sc_lv 7 signal 192 } 
	{ top_23_V_ce0 sc_out sc_logic 1 signal 192 } 
	{ top_23_V_we0 sc_out sc_logic 1 signal 192 } 
	{ top_23_V_d0 sc_out sc_lv 14 signal 192 } 
	{ top_23_V_q0 sc_in sc_lv 14 signal 192 } 
	{ top_24_V_address0 sc_out sc_lv 7 signal 193 } 
	{ top_24_V_ce0 sc_out sc_logic 1 signal 193 } 
	{ top_24_V_we0 sc_out sc_logic 1 signal 193 } 
	{ top_24_V_d0 sc_out sc_lv 14 signal 193 } 
	{ top_24_V_q0 sc_in sc_lv 14 signal 193 } 
	{ top_25_V_address0 sc_out sc_lv 7 signal 194 } 
	{ top_25_V_ce0 sc_out sc_logic 1 signal 194 } 
	{ top_25_V_we0 sc_out sc_logic 1 signal 194 } 
	{ top_25_V_d0 sc_out sc_lv 14 signal 194 } 
	{ top_25_V_q0 sc_in sc_lv 14 signal 194 } 
	{ top_26_V_address0 sc_out sc_lv 7 signal 195 } 
	{ top_26_V_ce0 sc_out sc_logic 1 signal 195 } 
	{ top_26_V_we0 sc_out sc_logic 1 signal 195 } 
	{ top_26_V_d0 sc_out sc_lv 14 signal 195 } 
	{ top_26_V_q0 sc_in sc_lv 14 signal 195 } 
	{ top_27_V_address0 sc_out sc_lv 7 signal 196 } 
	{ top_27_V_ce0 sc_out sc_logic 1 signal 196 } 
	{ top_27_V_we0 sc_out sc_logic 1 signal 196 } 
	{ top_27_V_d0 sc_out sc_lv 14 signal 196 } 
	{ top_27_V_q0 sc_in sc_lv 14 signal 196 } 
	{ top_28_V_address0 sc_out sc_lv 7 signal 197 } 
	{ top_28_V_ce0 sc_out sc_logic 1 signal 197 } 
	{ top_28_V_we0 sc_out sc_logic 1 signal 197 } 
	{ top_28_V_d0 sc_out sc_lv 14 signal 197 } 
	{ top_28_V_q0 sc_in sc_lv 14 signal 197 } 
	{ top_29_V_address0 sc_out sc_lv 7 signal 198 } 
	{ top_29_V_ce0 sc_out sc_logic 1 signal 198 } 
	{ top_29_V_we0 sc_out sc_logic 1 signal 198 } 
	{ top_29_V_d0 sc_out sc_lv 14 signal 198 } 
	{ top_29_V_q0 sc_in sc_lv 14 signal 198 } 
	{ top_30_V_address0 sc_out sc_lv 7 signal 199 } 
	{ top_30_V_ce0 sc_out sc_logic 1 signal 199 } 
	{ top_30_V_we0 sc_out sc_logic 1 signal 199 } 
	{ top_30_V_d0 sc_out sc_lv 14 signal 199 } 
	{ top_30_V_q0 sc_in sc_lv 14 signal 199 } 
	{ top_31_V_address0 sc_out sc_lv 7 signal 200 } 
	{ top_31_V_ce0 sc_out sc_logic 1 signal 200 } 
	{ top_31_V_we0 sc_out sc_logic 1 signal 200 } 
	{ top_31_V_d0 sc_out sc_lv 14 signal 200 } 
	{ top_31_V_q0 sc_in sc_lv 14 signal 200 } 
	{ stride sc_in sc_lv 4 signal 201 } 
	{ weight_buf_3x3_V_0_address0 sc_out sc_lv 6 signal 202 } 
	{ weight_buf_3x3_V_0_ce0 sc_out sc_logic 1 signal 202 } 
	{ weight_buf_3x3_V_0_q0 sc_in sc_lv 64 signal 202 } 
	{ weight_buf_3x3_V_0_address1 sc_out sc_lv 6 signal 202 } 
	{ weight_buf_3x3_V_0_ce1 sc_out sc_logic 1 signal 202 } 
	{ weight_buf_3x3_V_0_q1 sc_in sc_lv 64 signal 202 } 
	{ weight_buf_3x3_V_1_address0 sc_out sc_lv 6 signal 203 } 
	{ weight_buf_3x3_V_1_ce0 sc_out sc_logic 1 signal 203 } 
	{ weight_buf_3x3_V_1_q0 sc_in sc_lv 64 signal 203 } 
	{ weight_buf_3x3_V_1_address1 sc_out sc_lv 6 signal 203 } 
	{ weight_buf_3x3_V_1_ce1 sc_out sc_logic 1 signal 203 } 
	{ weight_buf_3x3_V_1_q1 sc_in sc_lv 64 signal 203 } 
	{ weight_buf_3x3_V_2_address0 sc_out sc_lv 6 signal 204 } 
	{ weight_buf_3x3_V_2_ce0 sc_out sc_logic 1 signal 204 } 
	{ weight_buf_3x3_V_2_q0 sc_in sc_lv 64 signal 204 } 
	{ weight_buf_3x3_V_2_address1 sc_out sc_lv 6 signal 204 } 
	{ weight_buf_3x3_V_2_ce1 sc_out sc_logic 1 signal 204 } 
	{ weight_buf_3x3_V_2_q1 sc_in sc_lv 64 signal 204 } 
	{ weight_buf_3x3_V_3_address0 sc_out sc_lv 6 signal 205 } 
	{ weight_buf_3x3_V_3_ce0 sc_out sc_logic 1 signal 205 } 
	{ weight_buf_3x3_V_3_q0 sc_in sc_lv 64 signal 205 } 
	{ weight_buf_3x3_V_3_address1 sc_out sc_lv 6 signal 205 } 
	{ weight_buf_3x3_V_3_ce1 sc_out sc_logic 1 signal 205 } 
	{ weight_buf_3x3_V_3_q1 sc_in sc_lv 64 signal 205 } 
	{ weight_buf_3x3_V_4_address0 sc_out sc_lv 6 signal 206 } 
	{ weight_buf_3x3_V_4_ce0 sc_out sc_logic 1 signal 206 } 
	{ weight_buf_3x3_V_4_q0 sc_in sc_lv 64 signal 206 } 
	{ weight_buf_3x3_V_4_address1 sc_out sc_lv 6 signal 206 } 
	{ weight_buf_3x3_V_4_ce1 sc_out sc_logic 1 signal 206 } 
	{ weight_buf_3x3_V_4_q1 sc_in sc_lv 64 signal 206 } 
	{ weight_buf_3x3_V_5_address0 sc_out sc_lv 6 signal 207 } 
	{ weight_buf_3x3_V_5_ce0 sc_out sc_logic 1 signal 207 } 
	{ weight_buf_3x3_V_5_q0 sc_in sc_lv 64 signal 207 } 
	{ weight_buf_3x3_V_5_address1 sc_out sc_lv 6 signal 207 } 
	{ weight_buf_3x3_V_5_ce1 sc_out sc_logic 1 signal 207 } 
	{ weight_buf_3x3_V_5_q1 sc_in sc_lv 64 signal 207 } 
	{ weight_buf_3x3_V_6_address0 sc_out sc_lv 6 signal 208 } 
	{ weight_buf_3x3_V_6_ce0 sc_out sc_logic 1 signal 208 } 
	{ weight_buf_3x3_V_6_q0 sc_in sc_lv 64 signal 208 } 
	{ weight_buf_3x3_V_6_address1 sc_out sc_lv 6 signal 208 } 
	{ weight_buf_3x3_V_6_ce1 sc_out sc_logic 1 signal 208 } 
	{ weight_buf_3x3_V_6_q1 sc_in sc_lv 64 signal 208 } 
	{ weight_buf_3x3_V_7_address0 sc_out sc_lv 6 signal 209 } 
	{ weight_buf_3x3_V_7_ce0 sc_out sc_logic 1 signal 209 } 
	{ weight_buf_3x3_V_7_q0 sc_in sc_lv 64 signal 209 } 
	{ weight_buf_3x3_V_7_address1 sc_out sc_lv 6 signal 209 } 
	{ weight_buf_3x3_V_7_ce1 sc_out sc_logic 1 signal 209 } 
	{ weight_buf_3x3_V_7_q1 sc_in sc_lv 64 signal 209 } 
	{ weight_buf_3x3_V_8_address0 sc_out sc_lv 6 signal 210 } 
	{ weight_buf_3x3_V_8_ce0 sc_out sc_logic 1 signal 210 } 
	{ weight_buf_3x3_V_8_q0 sc_in sc_lv 64 signal 210 } 
	{ weight_buf_3x3_V_8_address1 sc_out sc_lv 6 signal 210 } 
	{ weight_buf_3x3_V_8_ce1 sc_out sc_logic 1 signal 210 } 
	{ weight_buf_3x3_V_8_q1 sc_in sc_lv 64 signal 210 } 
	{ weight_buf_3x3_V_9_address0 sc_out sc_lv 6 signal 211 } 
	{ weight_buf_3x3_V_9_ce0 sc_out sc_logic 1 signal 211 } 
	{ weight_buf_3x3_V_9_q0 sc_in sc_lv 64 signal 211 } 
	{ weight_buf_3x3_V_9_address1 sc_out sc_lv 6 signal 211 } 
	{ weight_buf_3x3_V_9_ce1 sc_out sc_logic 1 signal 211 } 
	{ weight_buf_3x3_V_9_q1 sc_in sc_lv 64 signal 211 } 
	{ weight_buf_3x3_V_10_address0 sc_out sc_lv 6 signal 212 } 
	{ weight_buf_3x3_V_10_ce0 sc_out sc_logic 1 signal 212 } 
	{ weight_buf_3x3_V_10_q0 sc_in sc_lv 64 signal 212 } 
	{ weight_buf_3x3_V_10_address1 sc_out sc_lv 6 signal 212 } 
	{ weight_buf_3x3_V_10_ce1 sc_out sc_logic 1 signal 212 } 
	{ weight_buf_3x3_V_10_q1 sc_in sc_lv 64 signal 212 } 
	{ weight_buf_3x3_V_11_address0 sc_out sc_lv 6 signal 213 } 
	{ weight_buf_3x3_V_11_ce0 sc_out sc_logic 1 signal 213 } 
	{ weight_buf_3x3_V_11_q0 sc_in sc_lv 64 signal 213 } 
	{ weight_buf_3x3_V_11_address1 sc_out sc_lv 6 signal 213 } 
	{ weight_buf_3x3_V_11_ce1 sc_out sc_logic 1 signal 213 } 
	{ weight_buf_3x3_V_11_q1 sc_in sc_lv 64 signal 213 } 
	{ weight_buf_3x3_V_12_address0 sc_out sc_lv 6 signal 214 } 
	{ weight_buf_3x3_V_12_ce0 sc_out sc_logic 1 signal 214 } 
	{ weight_buf_3x3_V_12_q0 sc_in sc_lv 64 signal 214 } 
	{ weight_buf_3x3_V_12_address1 sc_out sc_lv 6 signal 214 } 
	{ weight_buf_3x3_V_12_ce1 sc_out sc_logic 1 signal 214 } 
	{ weight_buf_3x3_V_12_q1 sc_in sc_lv 64 signal 214 } 
	{ weight_buf_3x3_V_13_address0 sc_out sc_lv 6 signal 215 } 
	{ weight_buf_3x3_V_13_ce0 sc_out sc_logic 1 signal 215 } 
	{ weight_buf_3x3_V_13_q0 sc_in sc_lv 64 signal 215 } 
	{ weight_buf_3x3_V_13_address1 sc_out sc_lv 6 signal 215 } 
	{ weight_buf_3x3_V_13_ce1 sc_out sc_logic 1 signal 215 } 
	{ weight_buf_3x3_V_13_q1 sc_in sc_lv 64 signal 215 } 
	{ weight_buf_3x3_V_14_address0 sc_out sc_lv 6 signal 216 } 
	{ weight_buf_3x3_V_14_ce0 sc_out sc_logic 1 signal 216 } 
	{ weight_buf_3x3_V_14_q0 sc_in sc_lv 64 signal 216 } 
	{ weight_buf_3x3_V_14_address1 sc_out sc_lv 6 signal 216 } 
	{ weight_buf_3x3_V_14_ce1 sc_out sc_logic 1 signal 216 } 
	{ weight_buf_3x3_V_14_q1 sc_in sc_lv 64 signal 216 } 
	{ weight_buf_3x3_V_15_address0 sc_out sc_lv 6 signal 217 } 
	{ weight_buf_3x3_V_15_ce0 sc_out sc_logic 1 signal 217 } 
	{ weight_buf_3x3_V_15_q0 sc_in sc_lv 64 signal 217 } 
	{ weight_buf_3x3_V_15_address1 sc_out sc_lv 6 signal 217 } 
	{ weight_buf_3x3_V_15_ce1 sc_out sc_logic 1 signal 217 } 
	{ weight_buf_3x3_V_15_q1 sc_in sc_lv 64 signal 217 } 
	{ weight_buf_3x3_V_16_address0 sc_out sc_lv 6 signal 218 } 
	{ weight_buf_3x3_V_16_ce0 sc_out sc_logic 1 signal 218 } 
	{ weight_buf_3x3_V_16_q0 sc_in sc_lv 64 signal 218 } 
	{ weight_buf_3x3_V_16_address1 sc_out sc_lv 6 signal 218 } 
	{ weight_buf_3x3_V_16_ce1 sc_out sc_logic 1 signal 218 } 
	{ weight_buf_3x3_V_16_q1 sc_in sc_lv 64 signal 218 } 
	{ weight_buf_3x3_V_17_address0 sc_out sc_lv 6 signal 219 } 
	{ weight_buf_3x3_V_17_ce0 sc_out sc_logic 1 signal 219 } 
	{ weight_buf_3x3_V_17_q0 sc_in sc_lv 64 signal 219 } 
	{ weight_buf_3x3_V_17_address1 sc_out sc_lv 6 signal 219 } 
	{ weight_buf_3x3_V_17_ce1 sc_out sc_logic 1 signal 219 } 
	{ weight_buf_3x3_V_17_q1 sc_in sc_lv 64 signal 219 } 
	{ weight_buf_3x3_V_18_address0 sc_out sc_lv 6 signal 220 } 
	{ weight_buf_3x3_V_18_ce0 sc_out sc_logic 1 signal 220 } 
	{ weight_buf_3x3_V_18_q0 sc_in sc_lv 64 signal 220 } 
	{ weight_buf_3x3_V_18_address1 sc_out sc_lv 6 signal 220 } 
	{ weight_buf_3x3_V_18_ce1 sc_out sc_logic 1 signal 220 } 
	{ weight_buf_3x3_V_18_q1 sc_in sc_lv 64 signal 220 } 
	{ weight_buf_3x3_V_19_address0 sc_out sc_lv 6 signal 221 } 
	{ weight_buf_3x3_V_19_ce0 sc_out sc_logic 1 signal 221 } 
	{ weight_buf_3x3_V_19_q0 sc_in sc_lv 64 signal 221 } 
	{ weight_buf_3x3_V_19_address1 sc_out sc_lv 6 signal 221 } 
	{ weight_buf_3x3_V_19_ce1 sc_out sc_logic 1 signal 221 } 
	{ weight_buf_3x3_V_19_q1 sc_in sc_lv 64 signal 221 } 
	{ weight_buf_3x3_V_20_address0 sc_out sc_lv 6 signal 222 } 
	{ weight_buf_3x3_V_20_ce0 sc_out sc_logic 1 signal 222 } 
	{ weight_buf_3x3_V_20_q0 sc_in sc_lv 64 signal 222 } 
	{ weight_buf_3x3_V_20_address1 sc_out sc_lv 6 signal 222 } 
	{ weight_buf_3x3_V_20_ce1 sc_out sc_logic 1 signal 222 } 
	{ weight_buf_3x3_V_20_q1 sc_in sc_lv 64 signal 222 } 
	{ weight_buf_3x3_V_21_address0 sc_out sc_lv 6 signal 223 } 
	{ weight_buf_3x3_V_21_ce0 sc_out sc_logic 1 signal 223 } 
	{ weight_buf_3x3_V_21_q0 sc_in sc_lv 64 signal 223 } 
	{ weight_buf_3x3_V_21_address1 sc_out sc_lv 6 signal 223 } 
	{ weight_buf_3x3_V_21_ce1 sc_out sc_logic 1 signal 223 } 
	{ weight_buf_3x3_V_21_q1 sc_in sc_lv 64 signal 223 } 
	{ weight_buf_3x3_V_22_address0 sc_out sc_lv 6 signal 224 } 
	{ weight_buf_3x3_V_22_ce0 sc_out sc_logic 1 signal 224 } 
	{ weight_buf_3x3_V_22_q0 sc_in sc_lv 64 signal 224 } 
	{ weight_buf_3x3_V_22_address1 sc_out sc_lv 6 signal 224 } 
	{ weight_buf_3x3_V_22_ce1 sc_out sc_logic 1 signal 224 } 
	{ weight_buf_3x3_V_22_q1 sc_in sc_lv 64 signal 224 } 
	{ weight_buf_3x3_V_23_address0 sc_out sc_lv 6 signal 225 } 
	{ weight_buf_3x3_V_23_ce0 sc_out sc_logic 1 signal 225 } 
	{ weight_buf_3x3_V_23_q0 sc_in sc_lv 64 signal 225 } 
	{ weight_buf_3x3_V_23_address1 sc_out sc_lv 6 signal 225 } 
	{ weight_buf_3x3_V_23_ce1 sc_out sc_logic 1 signal 225 } 
	{ weight_buf_3x3_V_23_q1 sc_in sc_lv 64 signal 225 } 
	{ weight_buf_3x3_V_24_address0 sc_out sc_lv 6 signal 226 } 
	{ weight_buf_3x3_V_24_ce0 sc_out sc_logic 1 signal 226 } 
	{ weight_buf_3x3_V_24_q0 sc_in sc_lv 64 signal 226 } 
	{ weight_buf_3x3_V_24_address1 sc_out sc_lv 6 signal 226 } 
	{ weight_buf_3x3_V_24_ce1 sc_out sc_logic 1 signal 226 } 
	{ weight_buf_3x3_V_24_q1 sc_in sc_lv 64 signal 226 } 
	{ weight_buf_3x3_V_25_address0 sc_out sc_lv 6 signal 227 } 
	{ weight_buf_3x3_V_25_ce0 sc_out sc_logic 1 signal 227 } 
	{ weight_buf_3x3_V_25_q0 sc_in sc_lv 64 signal 227 } 
	{ weight_buf_3x3_V_25_address1 sc_out sc_lv 6 signal 227 } 
	{ weight_buf_3x3_V_25_ce1 sc_out sc_logic 1 signal 227 } 
	{ weight_buf_3x3_V_25_q1 sc_in sc_lv 64 signal 227 } 
	{ weight_buf_3x3_V_26_address0 sc_out sc_lv 6 signal 228 } 
	{ weight_buf_3x3_V_26_ce0 sc_out sc_logic 1 signal 228 } 
	{ weight_buf_3x3_V_26_q0 sc_in sc_lv 64 signal 228 } 
	{ weight_buf_3x3_V_26_address1 sc_out sc_lv 6 signal 228 } 
	{ weight_buf_3x3_V_26_ce1 sc_out sc_logic 1 signal 228 } 
	{ weight_buf_3x3_V_26_q1 sc_in sc_lv 64 signal 228 } 
	{ weight_buf_3x3_V_27_address0 sc_out sc_lv 6 signal 229 } 
	{ weight_buf_3x3_V_27_ce0 sc_out sc_logic 1 signal 229 } 
	{ weight_buf_3x3_V_27_q0 sc_in sc_lv 64 signal 229 } 
	{ weight_buf_3x3_V_27_address1 sc_out sc_lv 6 signal 229 } 
	{ weight_buf_3x3_V_27_ce1 sc_out sc_logic 1 signal 229 } 
	{ weight_buf_3x3_V_27_q1 sc_in sc_lv 64 signal 229 } 
	{ weight_buf_3x3_V_28_address0 sc_out sc_lv 6 signal 230 } 
	{ weight_buf_3x3_V_28_ce0 sc_out sc_logic 1 signal 230 } 
	{ weight_buf_3x3_V_28_q0 sc_in sc_lv 64 signal 230 } 
	{ weight_buf_3x3_V_28_address1 sc_out sc_lv 6 signal 230 } 
	{ weight_buf_3x3_V_28_ce1 sc_out sc_logic 1 signal 230 } 
	{ weight_buf_3x3_V_28_q1 sc_in sc_lv 64 signal 230 } 
	{ weight_buf_3x3_V_29_address0 sc_out sc_lv 6 signal 231 } 
	{ weight_buf_3x3_V_29_ce0 sc_out sc_logic 1 signal 231 } 
	{ weight_buf_3x3_V_29_q0 sc_in sc_lv 64 signal 231 } 
	{ weight_buf_3x3_V_29_address1 sc_out sc_lv 6 signal 231 } 
	{ weight_buf_3x3_V_29_ce1 sc_out sc_logic 1 signal 231 } 
	{ weight_buf_3x3_V_29_q1 sc_in sc_lv 64 signal 231 } 
	{ weight_buf_3x3_V_30_address0 sc_out sc_lv 6 signal 232 } 
	{ weight_buf_3x3_V_30_ce0 sc_out sc_logic 1 signal 232 } 
	{ weight_buf_3x3_V_30_q0 sc_in sc_lv 64 signal 232 } 
	{ weight_buf_3x3_V_30_address1 sc_out sc_lv 6 signal 232 } 
	{ weight_buf_3x3_V_30_ce1 sc_out sc_logic 1 signal 232 } 
	{ weight_buf_3x3_V_30_q1 sc_in sc_lv 64 signal 232 } 
	{ weight_buf_3x3_V_31_address0 sc_out sc_lv 6 signal 233 } 
	{ weight_buf_3x3_V_31_ce0 sc_out sc_logic 1 signal 233 } 
	{ weight_buf_3x3_V_31_q0 sc_in sc_lv 64 signal 233 } 
	{ weight_buf_3x3_V_31_address1 sc_out sc_lv 6 signal 233 } 
	{ weight_buf_3x3_V_31_ce1 sc_out sc_logic 1 signal 233 } 
	{ weight_buf_3x3_V_31_q1 sc_in sc_lv 64 signal 233 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "bottom_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "address0" }} , 
 	{ "name": "bottom_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "ce0" }} , 
 	{ "name": "bottom_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "q0" }} , 
 	{ "name": "bottom_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "address1" }} , 
 	{ "name": "bottom_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "ce1" }} , 
 	{ "name": "bottom_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "q1" }} , 
 	{ "name": "bottom_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "address0" }} , 
 	{ "name": "bottom_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "ce0" }} , 
 	{ "name": "bottom_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "q0" }} , 
 	{ "name": "bottom_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "address1" }} , 
 	{ "name": "bottom_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "ce1" }} , 
 	{ "name": "bottom_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "q1" }} , 
 	{ "name": "bottom_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "address0" }} , 
 	{ "name": "bottom_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "ce0" }} , 
 	{ "name": "bottom_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "q0" }} , 
 	{ "name": "bottom_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "address1" }} , 
 	{ "name": "bottom_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "ce1" }} , 
 	{ "name": "bottom_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "q1" }} , 
 	{ "name": "bottom_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "address0" }} , 
 	{ "name": "bottom_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "ce0" }} , 
 	{ "name": "bottom_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "q0" }} , 
 	{ "name": "bottom_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "address1" }} , 
 	{ "name": "bottom_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "ce1" }} , 
 	{ "name": "bottom_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "q1" }} , 
 	{ "name": "bottom_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "address0" }} , 
 	{ "name": "bottom_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "ce0" }} , 
 	{ "name": "bottom_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "q0" }} , 
 	{ "name": "bottom_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "address1" }} , 
 	{ "name": "bottom_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "ce1" }} , 
 	{ "name": "bottom_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "q1" }} , 
 	{ "name": "bottom_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "address0" }} , 
 	{ "name": "bottom_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "ce0" }} , 
 	{ "name": "bottom_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "q0" }} , 
 	{ "name": "bottom_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "address1" }} , 
 	{ "name": "bottom_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "ce1" }} , 
 	{ "name": "bottom_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "q1" }} , 
 	{ "name": "bottom_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_6_V", "role": "address0" }} , 
 	{ "name": "bottom_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_6_V", "role": "ce0" }} , 
 	{ "name": "bottom_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_6_V", "role": "q0" }} , 
 	{ "name": "bottom_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_6_V", "role": "address1" }} , 
 	{ "name": "bottom_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_6_V", "role": "ce1" }} , 
 	{ "name": "bottom_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_6_V", "role": "q1" }} , 
 	{ "name": "bottom_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_7_V", "role": "address0" }} , 
 	{ "name": "bottom_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_7_V", "role": "ce0" }} , 
 	{ "name": "bottom_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_7_V", "role": "q0" }} , 
 	{ "name": "bottom_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_7_V", "role": "address1" }} , 
 	{ "name": "bottom_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_7_V", "role": "ce1" }} , 
 	{ "name": "bottom_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_7_V", "role": "q1" }} , 
 	{ "name": "bottom_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_8_V", "role": "address0" }} , 
 	{ "name": "bottom_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_8_V", "role": "ce0" }} , 
 	{ "name": "bottom_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_8_V", "role": "q0" }} , 
 	{ "name": "bottom_8_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bottom_8_V", "role": "address1" }} , 
 	{ "name": "bottom_8_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_8_V", "role": "ce1" }} , 
 	{ "name": "bottom_8_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom_8_V", "role": "q1" }} , 
 	{ "name": "bn_weights_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V", "role": "address0" }} , 
 	{ "name": "bn_weights_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V", "role": "ce0" }} , 
 	{ "name": "bn_weights_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V", "role": "q0" }} , 
 	{ "name": "bn_weights_V71_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V71", "role": "address0" }} , 
 	{ "name": "bn_weights_V71_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V71", "role": "ce0" }} , 
 	{ "name": "bn_weights_V71_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V71", "role": "q0" }} , 
 	{ "name": "bn_weights_V72_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V72", "role": "address0" }} , 
 	{ "name": "bn_weights_V72_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V72", "role": "ce0" }} , 
 	{ "name": "bn_weights_V72_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V72", "role": "q0" }} , 
 	{ "name": "bn_weights_V73_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V73", "role": "address0" }} , 
 	{ "name": "bn_weights_V73_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V73", "role": "ce0" }} , 
 	{ "name": "bn_weights_V73_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V73", "role": "q0" }} , 
 	{ "name": "bn_weights_V74_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V74", "role": "address0" }} , 
 	{ "name": "bn_weights_V74_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V74", "role": "ce0" }} , 
 	{ "name": "bn_weights_V74_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V74", "role": "q0" }} , 
 	{ "name": "bn_weights_V75_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V75", "role": "address0" }} , 
 	{ "name": "bn_weights_V75_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V75", "role": "ce0" }} , 
 	{ "name": "bn_weights_V75_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V75", "role": "q0" }} , 
 	{ "name": "bn_weights_V76_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V76", "role": "address0" }} , 
 	{ "name": "bn_weights_V76_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V76", "role": "ce0" }} , 
 	{ "name": "bn_weights_V76_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V76", "role": "q0" }} , 
 	{ "name": "bn_weights_V77_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V77", "role": "address0" }} , 
 	{ "name": "bn_weights_V77_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V77", "role": "ce0" }} , 
 	{ "name": "bn_weights_V77_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V77", "role": "q0" }} , 
 	{ "name": "bn_weights_V78_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V78", "role": "address0" }} , 
 	{ "name": "bn_weights_V78_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V78", "role": "ce0" }} , 
 	{ "name": "bn_weights_V78_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V78", "role": "q0" }} , 
 	{ "name": "bn_weights_V79_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V79", "role": "address0" }} , 
 	{ "name": "bn_weights_V79_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V79", "role": "ce0" }} , 
 	{ "name": "bn_weights_V79_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V79", "role": "q0" }} , 
 	{ "name": "bn_weights_V80_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V80", "role": "address0" }} , 
 	{ "name": "bn_weights_V80_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V80", "role": "ce0" }} , 
 	{ "name": "bn_weights_V80_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V80", "role": "q0" }} , 
 	{ "name": "bn_weights_V81_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V81", "role": "address0" }} , 
 	{ "name": "bn_weights_V81_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V81", "role": "ce0" }} , 
 	{ "name": "bn_weights_V81_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V81", "role": "q0" }} , 
 	{ "name": "bn_weights_V82_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V82", "role": "address0" }} , 
 	{ "name": "bn_weights_V82_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V82", "role": "ce0" }} , 
 	{ "name": "bn_weights_V82_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V82", "role": "q0" }} , 
 	{ "name": "bn_weights_V83_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V83", "role": "address0" }} , 
 	{ "name": "bn_weights_V83_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V83", "role": "ce0" }} , 
 	{ "name": "bn_weights_V83_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V83", "role": "q0" }} , 
 	{ "name": "bn_weights_V84_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V84", "role": "address0" }} , 
 	{ "name": "bn_weights_V84_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V84", "role": "ce0" }} , 
 	{ "name": "bn_weights_V84_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V84", "role": "q0" }} , 
 	{ "name": "bn_weights_V85_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V85", "role": "address0" }} , 
 	{ "name": "bn_weights_V85_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V85", "role": "ce0" }} , 
 	{ "name": "bn_weights_V85_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V85", "role": "q0" }} , 
 	{ "name": "bn_weights_V86_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V86", "role": "address0" }} , 
 	{ "name": "bn_weights_V86_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V86", "role": "ce0" }} , 
 	{ "name": "bn_weights_V86_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V86", "role": "q0" }} , 
 	{ "name": "bn_weights_V87_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V87", "role": "address0" }} , 
 	{ "name": "bn_weights_V87_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V87", "role": "ce0" }} , 
 	{ "name": "bn_weights_V87_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V87", "role": "q0" }} , 
 	{ "name": "bn_weights_V88_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V88", "role": "address0" }} , 
 	{ "name": "bn_weights_V88_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V88", "role": "ce0" }} , 
 	{ "name": "bn_weights_V88_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V88", "role": "q0" }} , 
 	{ "name": "bn_weights_V89_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V89", "role": "address0" }} , 
 	{ "name": "bn_weights_V89_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V89", "role": "ce0" }} , 
 	{ "name": "bn_weights_V89_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V89", "role": "q0" }} , 
 	{ "name": "bn_weights_V90_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V90", "role": "address0" }} , 
 	{ "name": "bn_weights_V90_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V90", "role": "ce0" }} , 
 	{ "name": "bn_weights_V90_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V90", "role": "q0" }} , 
 	{ "name": "bn_weights_V91_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V91", "role": "address0" }} , 
 	{ "name": "bn_weights_V91_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V91", "role": "ce0" }} , 
 	{ "name": "bn_weights_V91_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V91", "role": "q0" }} , 
 	{ "name": "bn_weights_V92_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V92", "role": "address0" }} , 
 	{ "name": "bn_weights_V92_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V92", "role": "ce0" }} , 
 	{ "name": "bn_weights_V92_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V92", "role": "q0" }} , 
 	{ "name": "bn_weights_V93_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V93", "role": "address0" }} , 
 	{ "name": "bn_weights_V93_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V93", "role": "ce0" }} , 
 	{ "name": "bn_weights_V93_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V93", "role": "q0" }} , 
 	{ "name": "bn_weights_V94_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V94", "role": "address0" }} , 
 	{ "name": "bn_weights_V94_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V94", "role": "ce0" }} , 
 	{ "name": "bn_weights_V94_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V94", "role": "q0" }} , 
 	{ "name": "bn_weights_V95_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V95", "role": "address0" }} , 
 	{ "name": "bn_weights_V95_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V95", "role": "ce0" }} , 
 	{ "name": "bn_weights_V95_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V95", "role": "q0" }} , 
 	{ "name": "bn_weights_V96_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V96", "role": "address0" }} , 
 	{ "name": "bn_weights_V96_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V96", "role": "ce0" }} , 
 	{ "name": "bn_weights_V96_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V96", "role": "q0" }} , 
 	{ "name": "bn_weights_V97_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V97", "role": "address0" }} , 
 	{ "name": "bn_weights_V97_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V97", "role": "ce0" }} , 
 	{ "name": "bn_weights_V97_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V97", "role": "q0" }} , 
 	{ "name": "bn_weights_V98_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V98", "role": "address0" }} , 
 	{ "name": "bn_weights_V98_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V98", "role": "ce0" }} , 
 	{ "name": "bn_weights_V98_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V98", "role": "q0" }} , 
 	{ "name": "bn_weights_V99_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V99", "role": "address0" }} , 
 	{ "name": "bn_weights_V99_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V99", "role": "ce0" }} , 
 	{ "name": "bn_weights_V99_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V99", "role": "q0" }} , 
 	{ "name": "bn_weights_V100_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V100", "role": "address0" }} , 
 	{ "name": "bn_weights_V100_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V100", "role": "ce0" }} , 
 	{ "name": "bn_weights_V100_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V100", "role": "q0" }} , 
 	{ "name": "bn_weights_V101_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_weights_V101", "role": "address0" }} , 
 	{ "name": "bn_weights_V101_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_weights_V101", "role": "ce0" }} , 
 	{ "name": "bn_weights_V101_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_weights_V101", "role": "q0" }} , 
 	{ "name": "bn_bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V", "role": "address0" }} , 
 	{ "name": "bn_bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V", "role": "ce0" }} , 
 	{ "name": "bn_bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V", "role": "q0" }} , 
 	{ "name": "bn_bias_V102_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V102", "role": "address0" }} , 
 	{ "name": "bn_bias_V102_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V102", "role": "ce0" }} , 
 	{ "name": "bn_bias_V102_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V102", "role": "q0" }} , 
 	{ "name": "bn_bias_V103_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V103", "role": "address0" }} , 
 	{ "name": "bn_bias_V103_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V103", "role": "ce0" }} , 
 	{ "name": "bn_bias_V103_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V103", "role": "q0" }} , 
 	{ "name": "bn_bias_V104_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V104", "role": "address0" }} , 
 	{ "name": "bn_bias_V104_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V104", "role": "ce0" }} , 
 	{ "name": "bn_bias_V104_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V104", "role": "q0" }} , 
 	{ "name": "bn_bias_V105_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V105", "role": "address0" }} , 
 	{ "name": "bn_bias_V105_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V105", "role": "ce0" }} , 
 	{ "name": "bn_bias_V105_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V105", "role": "q0" }} , 
 	{ "name": "bn_bias_V106_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V106", "role": "address0" }} , 
 	{ "name": "bn_bias_V106_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V106", "role": "ce0" }} , 
 	{ "name": "bn_bias_V106_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V106", "role": "q0" }} , 
 	{ "name": "bn_bias_V107_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V107", "role": "address0" }} , 
 	{ "name": "bn_bias_V107_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V107", "role": "ce0" }} , 
 	{ "name": "bn_bias_V107_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V107", "role": "q0" }} , 
 	{ "name": "bn_bias_V108_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V108", "role": "address0" }} , 
 	{ "name": "bn_bias_V108_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V108", "role": "ce0" }} , 
 	{ "name": "bn_bias_V108_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V108", "role": "q0" }} , 
 	{ "name": "bn_bias_V109_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V109", "role": "address0" }} , 
 	{ "name": "bn_bias_V109_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V109", "role": "ce0" }} , 
 	{ "name": "bn_bias_V109_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V109", "role": "q0" }} , 
 	{ "name": "bn_bias_V110_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V110", "role": "address0" }} , 
 	{ "name": "bn_bias_V110_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V110", "role": "ce0" }} , 
 	{ "name": "bn_bias_V110_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V110", "role": "q0" }} , 
 	{ "name": "bn_bias_V111_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V111", "role": "address0" }} , 
 	{ "name": "bn_bias_V111_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V111", "role": "ce0" }} , 
 	{ "name": "bn_bias_V111_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V111", "role": "q0" }} , 
 	{ "name": "bn_bias_V112_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V112", "role": "address0" }} , 
 	{ "name": "bn_bias_V112_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V112", "role": "ce0" }} , 
 	{ "name": "bn_bias_V112_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V112", "role": "q0" }} , 
 	{ "name": "bn_bias_V113_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V113", "role": "address0" }} , 
 	{ "name": "bn_bias_V113_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V113", "role": "ce0" }} , 
 	{ "name": "bn_bias_V113_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V113", "role": "q0" }} , 
 	{ "name": "bn_bias_V114_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V114", "role": "address0" }} , 
 	{ "name": "bn_bias_V114_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V114", "role": "ce0" }} , 
 	{ "name": "bn_bias_V114_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V114", "role": "q0" }} , 
 	{ "name": "bn_bias_V115_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V115", "role": "address0" }} , 
 	{ "name": "bn_bias_V115_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V115", "role": "ce0" }} , 
 	{ "name": "bn_bias_V115_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V115", "role": "q0" }} , 
 	{ "name": "bn_bias_V116_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V116", "role": "address0" }} , 
 	{ "name": "bn_bias_V116_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V116", "role": "ce0" }} , 
 	{ "name": "bn_bias_V116_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V116", "role": "q0" }} , 
 	{ "name": "bn_bias_V117_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V117", "role": "address0" }} , 
 	{ "name": "bn_bias_V117_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V117", "role": "ce0" }} , 
 	{ "name": "bn_bias_V117_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V117", "role": "q0" }} , 
 	{ "name": "bn_bias_V118_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V118", "role": "address0" }} , 
 	{ "name": "bn_bias_V118_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V118", "role": "ce0" }} , 
 	{ "name": "bn_bias_V118_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V118", "role": "q0" }} , 
 	{ "name": "bn_bias_V119_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V119", "role": "address0" }} , 
 	{ "name": "bn_bias_V119_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V119", "role": "ce0" }} , 
 	{ "name": "bn_bias_V119_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V119", "role": "q0" }} , 
 	{ "name": "bn_bias_V120_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V120", "role": "address0" }} , 
 	{ "name": "bn_bias_V120_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V120", "role": "ce0" }} , 
 	{ "name": "bn_bias_V120_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V120", "role": "q0" }} , 
 	{ "name": "bn_bias_V121_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V121", "role": "address0" }} , 
 	{ "name": "bn_bias_V121_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V121", "role": "ce0" }} , 
 	{ "name": "bn_bias_V121_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V121", "role": "q0" }} , 
 	{ "name": "bn_bias_V122_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V122", "role": "address0" }} , 
 	{ "name": "bn_bias_V122_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V122", "role": "ce0" }} , 
 	{ "name": "bn_bias_V122_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V122", "role": "q0" }} , 
 	{ "name": "bn_bias_V123_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V123", "role": "address0" }} , 
 	{ "name": "bn_bias_V123_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V123", "role": "ce0" }} , 
 	{ "name": "bn_bias_V123_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V123", "role": "q0" }} , 
 	{ "name": "bn_bias_V124_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V124", "role": "address0" }} , 
 	{ "name": "bn_bias_V124_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V124", "role": "ce0" }} , 
 	{ "name": "bn_bias_V124_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V124", "role": "q0" }} , 
 	{ "name": "bn_bias_V125_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V125", "role": "address0" }} , 
 	{ "name": "bn_bias_V125_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V125", "role": "ce0" }} , 
 	{ "name": "bn_bias_V125_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V125", "role": "q0" }} , 
 	{ "name": "bn_bias_V126_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V126", "role": "address0" }} , 
 	{ "name": "bn_bias_V126_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V126", "role": "ce0" }} , 
 	{ "name": "bn_bias_V126_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V126", "role": "q0" }} , 
 	{ "name": "bn_bias_V127_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V127", "role": "address0" }} , 
 	{ "name": "bn_bias_V127_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V127", "role": "ce0" }} , 
 	{ "name": "bn_bias_V127_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V127", "role": "q0" }} , 
 	{ "name": "bn_bias_V128_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V128", "role": "address0" }} , 
 	{ "name": "bn_bias_V128_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V128", "role": "ce0" }} , 
 	{ "name": "bn_bias_V128_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V128", "role": "q0" }} , 
 	{ "name": "bn_bias_V129_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V129", "role": "address0" }} , 
 	{ "name": "bn_bias_V129_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V129", "role": "ce0" }} , 
 	{ "name": "bn_bias_V129_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V129", "role": "q0" }} , 
 	{ "name": "bn_bias_V130_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V130", "role": "address0" }} , 
 	{ "name": "bn_bias_V130_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V130", "role": "ce0" }} , 
 	{ "name": "bn_bias_V130_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V130", "role": "q0" }} , 
 	{ "name": "bn_bias_V131_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V131", "role": "address0" }} , 
 	{ "name": "bn_bias_V131_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V131", "role": "ce0" }} , 
 	{ "name": "bn_bias_V131_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V131", "role": "q0" }} , 
 	{ "name": "bn_bias_V132_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bn_bias_V132", "role": "address0" }} , 
 	{ "name": "bn_bias_V132_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bn_bias_V132", "role": "ce0" }} , 
 	{ "name": "bn_bias_V132_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "bn_bias_V132", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V133_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V133", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V133_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V133", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V133_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V133", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V134_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V134", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V134_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V134", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V134_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V134", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V135_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V135", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V135_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V135", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V135_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V135", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V136_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V136", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V136_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V136", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V136_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V136", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V137_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V137", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V137_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V137", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V137_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V137", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V138_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V138", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V138_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V138", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V138_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V138", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V139_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V139", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V139_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V139", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V139_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V139", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V140_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V140", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V140_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V140", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V140_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V140", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V141_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V141", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V141_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V141", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V141_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V141", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V142_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V142", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V142_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V142", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V142_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V142", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V143_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V143", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V143_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V143", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V143_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V143", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V144_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V144", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V144_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V144", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V144_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V144", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V145_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V145", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V145_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V145", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V145_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V145", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V146_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V146", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V146_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V146", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V146_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V146", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V147_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V147", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V147_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V147", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V147_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V147", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V148_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V148", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V148_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V148", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V148_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V148", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V149_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V149", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V149_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V149", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V149_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V149", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V150_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V150", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V150_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V150", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V150_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V150", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V151_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V151", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V151_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V151", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V151_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V151", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V152_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V152", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V152_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V152", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V152_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V152", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V153_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V153", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V153_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V153", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V153_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V153", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V154_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V154", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V154_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V154", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V154_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V154", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V155_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V155", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V155_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V155", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V155_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V155", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V156_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V156", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V156_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V156", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V156_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V156", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V157_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V157", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V157_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V157", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V157_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V157", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V158_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V158", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V158_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V158", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V158_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V158", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V159_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V159", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V159_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V159", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V159_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V159", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V160_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V160", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V160_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V160", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V160_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V160", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V161_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V161", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V161_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V161", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V161_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V161", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V162_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V162", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V162_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V162", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V162_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V162", "role": "q0" }} , 
 	{ "name": "relu_shiftx_V163_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V163", "role": "address0" }} , 
 	{ "name": "relu_shiftx_V163_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shiftx_V163", "role": "ce0" }} , 
 	{ "name": "relu_shiftx_V163_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shiftx_V163", "role": "q0" }} , 
 	{ "name": "relu_shifty_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V", "role": "address0" }} , 
 	{ "name": "relu_shifty_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V", "role": "q0" }} , 
 	{ "name": "relu_shifty_V164_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V164", "role": "address0" }} , 
 	{ "name": "relu_shifty_V164_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V164", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V164_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V164", "role": "q0" }} , 
 	{ "name": "relu_shifty_V165_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V165", "role": "address0" }} , 
 	{ "name": "relu_shifty_V165_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V165", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V165_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V165", "role": "q0" }} , 
 	{ "name": "relu_shifty_V166_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V166", "role": "address0" }} , 
 	{ "name": "relu_shifty_V166_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V166", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V166_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V166", "role": "q0" }} , 
 	{ "name": "relu_shifty_V167_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V167", "role": "address0" }} , 
 	{ "name": "relu_shifty_V167_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V167", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V167_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V167", "role": "q0" }} , 
 	{ "name": "relu_shifty_V168_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V168", "role": "address0" }} , 
 	{ "name": "relu_shifty_V168_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V168", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V168_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V168", "role": "q0" }} , 
 	{ "name": "relu_shifty_V169_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V169", "role": "address0" }} , 
 	{ "name": "relu_shifty_V169_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V169", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V169_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V169", "role": "q0" }} , 
 	{ "name": "relu_shifty_V170_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V170", "role": "address0" }} , 
 	{ "name": "relu_shifty_V170_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V170", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V170_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V170", "role": "q0" }} , 
 	{ "name": "relu_shifty_V171_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V171", "role": "address0" }} , 
 	{ "name": "relu_shifty_V171_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V171", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V171_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V171", "role": "q0" }} , 
 	{ "name": "relu_shifty_V172_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V172", "role": "address0" }} , 
 	{ "name": "relu_shifty_V172_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V172", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V172_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V172", "role": "q0" }} , 
 	{ "name": "relu_shifty_V173_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V173", "role": "address0" }} , 
 	{ "name": "relu_shifty_V173_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V173", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V173_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V173", "role": "q0" }} , 
 	{ "name": "relu_shifty_V174_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V174", "role": "address0" }} , 
 	{ "name": "relu_shifty_V174_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V174", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V174_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V174", "role": "q0" }} , 
 	{ "name": "relu_shifty_V175_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V175", "role": "address0" }} , 
 	{ "name": "relu_shifty_V175_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V175", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V175_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V175", "role": "q0" }} , 
 	{ "name": "relu_shifty_V176_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V176", "role": "address0" }} , 
 	{ "name": "relu_shifty_V176_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V176", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V176_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V176", "role": "q0" }} , 
 	{ "name": "relu_shifty_V177_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V177", "role": "address0" }} , 
 	{ "name": "relu_shifty_V177_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V177", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V177_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V177", "role": "q0" }} , 
 	{ "name": "relu_shifty_V178_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V178", "role": "address0" }} , 
 	{ "name": "relu_shifty_V178_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V178", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V178_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V178", "role": "q0" }} , 
 	{ "name": "relu_shifty_V179_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V179", "role": "address0" }} , 
 	{ "name": "relu_shifty_V179_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V179", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V179_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V179", "role": "q0" }} , 
 	{ "name": "relu_shifty_V180_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V180", "role": "address0" }} , 
 	{ "name": "relu_shifty_V180_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V180", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V180_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V180", "role": "q0" }} , 
 	{ "name": "relu_shifty_V181_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V181", "role": "address0" }} , 
 	{ "name": "relu_shifty_V181_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V181", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V181_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V181", "role": "q0" }} , 
 	{ "name": "relu_shifty_V182_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V182", "role": "address0" }} , 
 	{ "name": "relu_shifty_V182_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V182", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V182_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V182", "role": "q0" }} , 
 	{ "name": "relu_shifty_V183_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V183", "role": "address0" }} , 
 	{ "name": "relu_shifty_V183_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V183", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V183_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V183", "role": "q0" }} , 
 	{ "name": "relu_shifty_V184_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V184", "role": "address0" }} , 
 	{ "name": "relu_shifty_V184_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V184", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V184_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V184", "role": "q0" }} , 
 	{ "name": "relu_shifty_V185_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V185", "role": "address0" }} , 
 	{ "name": "relu_shifty_V185_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V185", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V185_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V185", "role": "q0" }} , 
 	{ "name": "relu_shifty_V186_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V186", "role": "address0" }} , 
 	{ "name": "relu_shifty_V186_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V186", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V186_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V186", "role": "q0" }} , 
 	{ "name": "relu_shifty_V187_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V187", "role": "address0" }} , 
 	{ "name": "relu_shifty_V187_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V187", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V187_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V187", "role": "q0" }} , 
 	{ "name": "relu_shifty_V188_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V188", "role": "address0" }} , 
 	{ "name": "relu_shifty_V188_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V188", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V188_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V188", "role": "q0" }} , 
 	{ "name": "relu_shifty_V189_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V189", "role": "address0" }} , 
 	{ "name": "relu_shifty_V189_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V189", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V189_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V189", "role": "q0" }} , 
 	{ "name": "relu_shifty_V190_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V190", "role": "address0" }} , 
 	{ "name": "relu_shifty_V190_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V190", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V190_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V190", "role": "q0" }} , 
 	{ "name": "relu_shifty_V191_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V191", "role": "address0" }} , 
 	{ "name": "relu_shifty_V191_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V191", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V191_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V191", "role": "q0" }} , 
 	{ "name": "relu_shifty_V192_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V192", "role": "address0" }} , 
 	{ "name": "relu_shifty_V192_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V192", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V192_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V192", "role": "q0" }} , 
 	{ "name": "relu_shifty_V193_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V193", "role": "address0" }} , 
 	{ "name": "relu_shifty_V193_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V193", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V193_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V193", "role": "q0" }} , 
 	{ "name": "relu_shifty_V194_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V194", "role": "address0" }} , 
 	{ "name": "relu_shifty_V194_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_shifty_V194", "role": "ce0" }} , 
 	{ "name": "relu_shifty_V194_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_shifty_V194", "role": "q0" }} , 
 	{ "name": "relu_weights_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V", "role": "address0" }} , 
 	{ "name": "relu_weights_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V", "role": "ce0" }} , 
 	{ "name": "relu_weights_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V", "role": "q0" }} , 
 	{ "name": "relu_weights_V195_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V195", "role": "address0" }} , 
 	{ "name": "relu_weights_V195_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V195", "role": "ce0" }} , 
 	{ "name": "relu_weights_V195_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V195", "role": "q0" }} , 
 	{ "name": "relu_weights_V196_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V196", "role": "address0" }} , 
 	{ "name": "relu_weights_V196_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V196", "role": "ce0" }} , 
 	{ "name": "relu_weights_V196_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V196", "role": "q0" }} , 
 	{ "name": "relu_weights_V197_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V197", "role": "address0" }} , 
 	{ "name": "relu_weights_V197_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V197", "role": "ce0" }} , 
 	{ "name": "relu_weights_V197_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V197", "role": "q0" }} , 
 	{ "name": "relu_weights_V198_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V198", "role": "address0" }} , 
 	{ "name": "relu_weights_V198_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V198", "role": "ce0" }} , 
 	{ "name": "relu_weights_V198_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V198", "role": "q0" }} , 
 	{ "name": "relu_weights_V199_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V199", "role": "address0" }} , 
 	{ "name": "relu_weights_V199_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V199", "role": "ce0" }} , 
 	{ "name": "relu_weights_V199_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V199", "role": "q0" }} , 
 	{ "name": "relu_weights_V200_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V200", "role": "address0" }} , 
 	{ "name": "relu_weights_V200_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V200", "role": "ce0" }} , 
 	{ "name": "relu_weights_V200_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V200", "role": "q0" }} , 
 	{ "name": "relu_weights_V201_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V201", "role": "address0" }} , 
 	{ "name": "relu_weights_V201_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V201", "role": "ce0" }} , 
 	{ "name": "relu_weights_V201_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V201", "role": "q0" }} , 
 	{ "name": "relu_weights_V202_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V202", "role": "address0" }} , 
 	{ "name": "relu_weights_V202_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V202", "role": "ce0" }} , 
 	{ "name": "relu_weights_V202_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V202", "role": "q0" }} , 
 	{ "name": "relu_weights_V203_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V203", "role": "address0" }} , 
 	{ "name": "relu_weights_V203_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V203", "role": "ce0" }} , 
 	{ "name": "relu_weights_V203_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V203", "role": "q0" }} , 
 	{ "name": "relu_weights_V204_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V204", "role": "address0" }} , 
 	{ "name": "relu_weights_V204_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V204", "role": "ce0" }} , 
 	{ "name": "relu_weights_V204_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V204", "role": "q0" }} , 
 	{ "name": "relu_weights_V205_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V205", "role": "address0" }} , 
 	{ "name": "relu_weights_V205_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V205", "role": "ce0" }} , 
 	{ "name": "relu_weights_V205_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V205", "role": "q0" }} , 
 	{ "name": "relu_weights_V206_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V206", "role": "address0" }} , 
 	{ "name": "relu_weights_V206_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V206", "role": "ce0" }} , 
 	{ "name": "relu_weights_V206_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V206", "role": "q0" }} , 
 	{ "name": "relu_weights_V207_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V207", "role": "address0" }} , 
 	{ "name": "relu_weights_V207_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V207", "role": "ce0" }} , 
 	{ "name": "relu_weights_V207_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V207", "role": "q0" }} , 
 	{ "name": "relu_weights_V208_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V208", "role": "address0" }} , 
 	{ "name": "relu_weights_V208_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V208", "role": "ce0" }} , 
 	{ "name": "relu_weights_V208_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V208", "role": "q0" }} , 
 	{ "name": "relu_weights_V209_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V209", "role": "address0" }} , 
 	{ "name": "relu_weights_V209_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V209", "role": "ce0" }} , 
 	{ "name": "relu_weights_V209_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V209", "role": "q0" }} , 
 	{ "name": "relu_weights_V210_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V210", "role": "address0" }} , 
 	{ "name": "relu_weights_V210_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V210", "role": "ce0" }} , 
 	{ "name": "relu_weights_V210_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V210", "role": "q0" }} , 
 	{ "name": "relu_weights_V211_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V211", "role": "address0" }} , 
 	{ "name": "relu_weights_V211_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V211", "role": "ce0" }} , 
 	{ "name": "relu_weights_V211_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V211", "role": "q0" }} , 
 	{ "name": "relu_weights_V212_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V212", "role": "address0" }} , 
 	{ "name": "relu_weights_V212_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V212", "role": "ce0" }} , 
 	{ "name": "relu_weights_V212_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V212", "role": "q0" }} , 
 	{ "name": "relu_weights_V213_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V213", "role": "address0" }} , 
 	{ "name": "relu_weights_V213_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V213", "role": "ce0" }} , 
 	{ "name": "relu_weights_V213_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V213", "role": "q0" }} , 
 	{ "name": "relu_weights_V214_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V214", "role": "address0" }} , 
 	{ "name": "relu_weights_V214_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V214", "role": "ce0" }} , 
 	{ "name": "relu_weights_V214_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V214", "role": "q0" }} , 
 	{ "name": "relu_weights_V215_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V215", "role": "address0" }} , 
 	{ "name": "relu_weights_V215_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V215", "role": "ce0" }} , 
 	{ "name": "relu_weights_V215_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V215", "role": "q0" }} , 
 	{ "name": "relu_weights_V216_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V216", "role": "address0" }} , 
 	{ "name": "relu_weights_V216_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V216", "role": "ce0" }} , 
 	{ "name": "relu_weights_V216_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V216", "role": "q0" }} , 
 	{ "name": "relu_weights_V217_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V217", "role": "address0" }} , 
 	{ "name": "relu_weights_V217_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V217", "role": "ce0" }} , 
 	{ "name": "relu_weights_V217_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V217", "role": "q0" }} , 
 	{ "name": "relu_weights_V218_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V218", "role": "address0" }} , 
 	{ "name": "relu_weights_V218_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V218", "role": "ce0" }} , 
 	{ "name": "relu_weights_V218_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V218", "role": "q0" }} , 
 	{ "name": "relu_weights_V219_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V219", "role": "address0" }} , 
 	{ "name": "relu_weights_V219_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V219", "role": "ce0" }} , 
 	{ "name": "relu_weights_V219_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V219", "role": "q0" }} , 
 	{ "name": "relu_weights_V220_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V220", "role": "address0" }} , 
 	{ "name": "relu_weights_V220_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V220", "role": "ce0" }} , 
 	{ "name": "relu_weights_V220_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V220", "role": "q0" }} , 
 	{ "name": "relu_weights_V221_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V221", "role": "address0" }} , 
 	{ "name": "relu_weights_V221_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V221", "role": "ce0" }} , 
 	{ "name": "relu_weights_V221_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V221", "role": "q0" }} , 
 	{ "name": "relu_weights_V222_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V222", "role": "address0" }} , 
 	{ "name": "relu_weights_V222_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V222", "role": "ce0" }} , 
 	{ "name": "relu_weights_V222_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V222", "role": "q0" }} , 
 	{ "name": "relu_weights_V223_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V223", "role": "address0" }} , 
 	{ "name": "relu_weights_V223_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V223", "role": "ce0" }} , 
 	{ "name": "relu_weights_V223_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V223", "role": "q0" }} , 
 	{ "name": "relu_weights_V224_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V224", "role": "address0" }} , 
 	{ "name": "relu_weights_V224_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V224", "role": "ce0" }} , 
 	{ "name": "relu_weights_V224_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V224", "role": "q0" }} , 
 	{ "name": "relu_weights_V225_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V225", "role": "address0" }} , 
 	{ "name": "relu_weights_V225_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu_weights_V225", "role": "ce0" }} , 
 	{ "name": "relu_weights_V225_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "relu_weights_V225", "role": "q0" }} , 
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
 	{ "name": "top_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "we0" }} , 
 	{ "name": "top_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_7_V", "role": "d0" }} , 
 	{ "name": "top_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_7_V", "role": "q0" }} , 
 	{ "name": "top_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_8_V", "role": "address0" }} , 
 	{ "name": "top_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "ce0" }} , 
 	{ "name": "top_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "we0" }} , 
 	{ "name": "top_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_8_V", "role": "d0" }} , 
 	{ "name": "top_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_8_V", "role": "q0" }} , 
 	{ "name": "top_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_9_V", "role": "address0" }} , 
 	{ "name": "top_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "ce0" }} , 
 	{ "name": "top_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "we0" }} , 
 	{ "name": "top_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_9_V", "role": "d0" }} , 
 	{ "name": "top_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_9_V", "role": "q0" }} , 
 	{ "name": "top_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_10_V", "role": "address0" }} , 
 	{ "name": "top_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "ce0" }} , 
 	{ "name": "top_10_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "we0" }} , 
 	{ "name": "top_10_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_10_V", "role": "d0" }} , 
 	{ "name": "top_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_10_V", "role": "q0" }} , 
 	{ "name": "top_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_11_V", "role": "address0" }} , 
 	{ "name": "top_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "ce0" }} , 
 	{ "name": "top_11_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "we0" }} , 
 	{ "name": "top_11_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_11_V", "role": "d0" }} , 
 	{ "name": "top_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_11_V", "role": "q0" }} , 
 	{ "name": "top_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_12_V", "role": "address0" }} , 
 	{ "name": "top_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "ce0" }} , 
 	{ "name": "top_12_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "we0" }} , 
 	{ "name": "top_12_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_12_V", "role": "d0" }} , 
 	{ "name": "top_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_12_V", "role": "q0" }} , 
 	{ "name": "top_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_13_V", "role": "address0" }} , 
 	{ "name": "top_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "ce0" }} , 
 	{ "name": "top_13_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "we0" }} , 
 	{ "name": "top_13_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_13_V", "role": "d0" }} , 
 	{ "name": "top_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_13_V", "role": "q0" }} , 
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
 	{ "name": "top_31_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "top_31_V", "role": "q0" }} , 
 	{ "name": "stride", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "stride", "role": "default" }} , 
 	{ "name": "weight_buf_3x3_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_0", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_1", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_2", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_3", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_4", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_5", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_6", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_7", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_8", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_9", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_10", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_11", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_12_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_12", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_13_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_13_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_13_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_13", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_14_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_14_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_14_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_14", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_15_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_15_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_15_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_15", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_16_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_16_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_16_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_16", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_17_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_17_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_17_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_17", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_18_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_18_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_18_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_18", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_19_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_19_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_19_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_19", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_20_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_20_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_20_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_20", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_21_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_21_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_21_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_21", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_22_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_22_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_22_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_22", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_23_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_23_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_23_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_23", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_24_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_24_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_24_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_24_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_24", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_25_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_25_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_25_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_25_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_25", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_26_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_26_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_26_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_26_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_26", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_27_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_27_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_27_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_27_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_27", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_28_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_28_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_28_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_28_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_28", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_29_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_29_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_29_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_29_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_29", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_30_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_30_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_30_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_30_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_30", "role": "q1" }} , 
 	{ "name": "weight_buf_3x3_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "address0" }} , 
 	{ "name": "weight_buf_3x3_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "ce0" }} , 
 	{ "name": "weight_buf_3x3_V_31_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "q0" }} , 
 	{ "name": "weight_buf_3x3_V_31_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "address1" }} , 
 	{ "name": "weight_buf_3x3_V_31_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "ce1" }} , 
 	{ "name": "weight_buf_3x3_V_31_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weight_buf_3x3_V_31", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "5", "7", "9", "11", "13", "15", "17", "19", "21", "23", "25", "27", "29", "31", "33", "35", "37", "39", "41", "43", "45", "47", "49", "51", "53", "55", "57", "59", "61", "63", "65", "67", "69", "71", "73", "75", "77", "79", "81", "83", "85", "87", "89", "91", "93", "95", "97", "99", "101", "103", "105", "107", "109", "111", "113", "115", "117", "119", "121", "123", "125", "127", "129", "131", "133", "135", "137", "139", "141", "143", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159"],
		"CDFG" : "pgconv64_1bit",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "103", "EstimateLatencyMax" : "268",
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
			{"Name" : "bottom_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V95", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V96", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V97", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V98", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V99", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V100", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V101", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V102", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V103", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V104", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V105", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V106", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V107", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V108", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V109", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V110", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V111", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V112", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V113", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V114", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V115", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V116", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V117", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V118", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V119", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V120", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V121", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V122", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V123", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V124", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V125", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V126", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V127", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V128", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V129", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V130", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V131", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V132", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V133", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V134", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V135", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V136", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V137", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V138", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V139", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V140", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V141", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V142", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V143", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V144", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V145", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V146", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V147", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V148", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V149", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V150", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V151", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V152", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V153", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V154", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V155", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V156", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V157", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V158", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V159", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V160", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V161", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V162", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V163", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V164", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V165", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V166", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V167", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V168", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V169", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V170", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V171", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V172", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V173", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V174", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V175", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V176", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V177", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V178", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V179", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V180", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V181", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V182", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V183", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V184", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V185", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V186", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V187", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V188", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V189", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V190", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V191", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V192", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V193", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V194", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V195", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V196", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V197", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V198", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V199", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V200", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V201", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V202", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V203", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V204", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V205", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V206", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V207", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V208", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V209", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V210", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V211", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V212", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V213", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V214", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V215", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V216", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V217", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V218", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V219", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V220", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V221", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V222", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V223", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V224", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V225", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "stride", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "grp_compute_engine_64_fu_4578", "Port" : "lut16_V_1"},
					{"ID" : "67", "SubInstance" : "grp_compute_engine_64_fu_4810", "Port" : "lut16_V_1"},
					{"ID" : "25", "SubInstance" : "grp_compute_engine_64_fu_4642", "Port" : "lut16_V_1"},
					{"ID" : "7", "SubInstance" : "grp_compute_engine_64_fu_4570", "Port" : "lut16_V_1"},
					{"ID" : "21", "SubInstance" : "grp_compute_engine_64_fu_4626", "Port" : "lut16_V_1"},
					{"ID" : "41", "SubInstance" : "grp_compute_engine_64_fu_4706", "Port" : "lut16_V_1"},
					{"ID" : "1", "SubInstance" : "grp_compute_engine_64_fu_4546", "Port" : "lut16_V_1"},
					{"ID" : "17", "SubInstance" : "grp_compute_engine_64_fu_4610", "Port" : "lut16_V_1"},
					{"ID" : "33", "SubInstance" : "grp_compute_engine_64_fu_4674", "Port" : "lut16_V_1"},
					{"ID" : "5", "SubInstance" : "grp_compute_engine_64_fu_4562", "Port" : "lut16_V_1"},
					{"ID" : "23", "SubInstance" : "grp_compute_engine_64_fu_4634", "Port" : "lut16_V_1"},
					{"ID" : "15", "SubInstance" : "grp_compute_engine_64_fu_4602", "Port" : "lut16_V_1"},
					{"ID" : "27", "SubInstance" : "grp_compute_engine_64_fu_4650", "Port" : "lut16_V_1"},
					{"ID" : "31", "SubInstance" : "grp_compute_engine_64_fu_4666", "Port" : "lut16_V_1"},
					{"ID" : "29", "SubInstance" : "grp_compute_engine_64_fu_4658", "Port" : "lut16_V_1"},
					{"ID" : "39", "SubInstance" : "grp_compute_engine_64_fu_4698", "Port" : "lut16_V_1"},
					{"ID" : "43", "SubInstance" : "grp_compute_engine_64_fu_4714", "Port" : "lut16_V_1"},
					{"ID" : "13", "SubInstance" : "grp_compute_engine_64_fu_4594", "Port" : "lut16_V_1"},
					{"ID" : "45", "SubInstance" : "grp_compute_engine_64_fu_4722", "Port" : "lut16_V_1"},
					{"ID" : "35", "SubInstance" : "grp_compute_engine_64_fu_4682", "Port" : "lut16_V_1"},
					{"ID" : "55", "SubInstance" : "grp_compute_engine_64_fu_4762", "Port" : "lut16_V_1"},
					{"ID" : "57", "SubInstance" : "grp_compute_engine_64_fu_4770", "Port" : "lut16_V_1"},
					{"ID" : "61", "SubInstance" : "grp_compute_engine_64_fu_4786", "Port" : "lut16_V_1"},
					{"ID" : "53", "SubInstance" : "grp_compute_engine_64_fu_4754", "Port" : "lut16_V_1"},
					{"ID" : "3", "SubInstance" : "grp_compute_engine_64_fu_4554", "Port" : "lut16_V_1"},
					{"ID" : "47", "SubInstance" : "grp_compute_engine_64_fu_4730", "Port" : "lut16_V_1"},
					{"ID" : "51", "SubInstance" : "grp_compute_engine_64_fu_4746", "Port" : "lut16_V_1"},
					{"ID" : "65", "SubInstance" : "grp_compute_engine_64_fu_4802", "Port" : "lut16_V_1"},
					{"ID" : "69", "SubInstance" : "grp_compute_engine_64_fu_4818", "Port" : "lut16_V_1"},
					{"ID" : "63", "SubInstance" : "grp_compute_engine_64_fu_4794", "Port" : "lut16_V_1"},
					{"ID" : "11", "SubInstance" : "grp_compute_engine_64_fu_4586", "Port" : "lut16_V_1"},
					{"ID" : "19", "SubInstance" : "grp_compute_engine_64_fu_4618", "Port" : "lut16_V_1"},
					{"ID" : "49", "SubInstance" : "grp_compute_engine_64_fu_4738", "Port" : "lut16_V_1"},
					{"ID" : "37", "SubInstance" : "grp_compute_engine_64_fu_4690", "Port" : "lut16_V_1"},
					{"ID" : "59", "SubInstance" : "grp_compute_engine_64_fu_4778", "Port" : "lut16_V_1"},
					{"ID" : "79", "SubInstance" : "grp_compute_engine_64_fu_4858", "Port" : "lut16_V_1"},
					{"ID" : "73", "SubInstance" : "grp_compute_engine_64_fu_4834", "Port" : "lut16_V_1"},
					{"ID" : "99", "SubInstance" : "grp_compute_engine_64_fu_4938", "Port" : "lut16_V_1"},
					{"ID" : "95", "SubInstance" : "grp_compute_engine_64_fu_4922", "Port" : "lut16_V_1"},
					{"ID" : "115", "SubInstance" : "grp_compute_engine_64_fu_5002", "Port" : "lut16_V_1"},
					{"ID" : "103", "SubInstance" : "grp_compute_engine_64_fu_4954", "Port" : "lut16_V_1"},
					{"ID" : "83", "SubInstance" : "grp_compute_engine_64_fu_4874", "Port" : "lut16_V_1"},
					{"ID" : "111", "SubInstance" : "grp_compute_engine_64_fu_4986", "Port" : "lut16_V_1"},
					{"ID" : "75", "SubInstance" : "grp_compute_engine_64_fu_4842", "Port" : "lut16_V_1"},
					{"ID" : "71", "SubInstance" : "grp_compute_engine_64_fu_4826", "Port" : "lut16_V_1"},
					{"ID" : "87", "SubInstance" : "grp_compute_engine_64_fu_4890", "Port" : "lut16_V_1"},
					{"ID" : "97", "SubInstance" : "grp_compute_engine_64_fu_4930", "Port" : "lut16_V_1"},
					{"ID" : "113", "SubInstance" : "grp_compute_engine_64_fu_4994", "Port" : "lut16_V_1"},
					{"ID" : "91", "SubInstance" : "grp_compute_engine_64_fu_4906", "Port" : "lut16_V_1"},
					{"ID" : "101", "SubInstance" : "grp_compute_engine_64_fu_4946", "Port" : "lut16_V_1"},
					{"ID" : "93", "SubInstance" : "grp_compute_engine_64_fu_4914", "Port" : "lut16_V_1"},
					{"ID" : "77", "SubInstance" : "grp_compute_engine_64_fu_4850", "Port" : "lut16_V_1"},
					{"ID" : "107", "SubInstance" : "grp_compute_engine_64_fu_4970", "Port" : "lut16_V_1"},
					{"ID" : "85", "SubInstance" : "grp_compute_engine_64_fu_4882", "Port" : "lut16_V_1"},
					{"ID" : "81", "SubInstance" : "grp_compute_engine_64_fu_4866", "Port" : "lut16_V_1"},
					{"ID" : "89", "SubInstance" : "grp_compute_engine_64_fu_4898", "Port" : "lut16_V_1"},
					{"ID" : "109", "SubInstance" : "grp_compute_engine_64_fu_4978", "Port" : "lut16_V_1"},
					{"ID" : "105", "SubInstance" : "grp_compute_engine_64_fu_4962", "Port" : "lut16_V_1"}]},
			{"Name" : "weight_buf_3x3_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4546", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4546.lut16_V_1_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4554", "Parent" : "0", "Child" : ["4"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4554.lut16_V_1_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4562", "Parent" : "0", "Child" : ["6"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4562.lut16_V_1_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4570", "Parent" : "0", "Child" : ["8"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4570.lut16_V_1_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4578", "Parent" : "0", "Child" : ["10"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4578.lut16_V_1_U", "Parent" : "9"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4586", "Parent" : "0", "Child" : ["12"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4586.lut16_V_1_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4594", "Parent" : "0", "Child" : ["14"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4594.lut16_V_1_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4602", "Parent" : "0", "Child" : ["16"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4602.lut16_V_1_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4610", "Parent" : "0", "Child" : ["18"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4610.lut16_V_1_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4618", "Parent" : "0", "Child" : ["20"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4618.lut16_V_1_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4626", "Parent" : "0", "Child" : ["22"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4626.lut16_V_1_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4634", "Parent" : "0", "Child" : ["24"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4634.lut16_V_1_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4642", "Parent" : "0", "Child" : ["26"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4642.lut16_V_1_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4650", "Parent" : "0", "Child" : ["28"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4650.lut16_V_1_U", "Parent" : "27"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4658", "Parent" : "0", "Child" : ["30"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4658.lut16_V_1_U", "Parent" : "29"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4666", "Parent" : "0", "Child" : ["32"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4666.lut16_V_1_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4674", "Parent" : "0", "Child" : ["34"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4674.lut16_V_1_U", "Parent" : "33"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4682", "Parent" : "0", "Child" : ["36"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4682.lut16_V_1_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4690", "Parent" : "0", "Child" : ["38"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4690.lut16_V_1_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4698", "Parent" : "0", "Child" : ["40"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4698.lut16_V_1_U", "Parent" : "39"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4706", "Parent" : "0", "Child" : ["42"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4706.lut16_V_1_U", "Parent" : "41"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4714", "Parent" : "0", "Child" : ["44"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4714.lut16_V_1_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4722", "Parent" : "0", "Child" : ["46"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4722.lut16_V_1_U", "Parent" : "45"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4730", "Parent" : "0", "Child" : ["48"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4730.lut16_V_1_U", "Parent" : "47"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4738", "Parent" : "0", "Child" : ["50"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4738.lut16_V_1_U", "Parent" : "49"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4746", "Parent" : "0", "Child" : ["52"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4746.lut16_V_1_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4754", "Parent" : "0", "Child" : ["54"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4754.lut16_V_1_U", "Parent" : "53"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4762", "Parent" : "0", "Child" : ["56"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4762.lut16_V_1_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4770", "Parent" : "0", "Child" : ["58"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4770.lut16_V_1_U", "Parent" : "57"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4778", "Parent" : "0", "Child" : ["60"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4778.lut16_V_1_U", "Parent" : "59"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4786", "Parent" : "0", "Child" : ["62"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4786.lut16_V_1_U", "Parent" : "61"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4794", "Parent" : "0", "Child" : ["64"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4794.lut16_V_1_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4802", "Parent" : "0", "Child" : ["66"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4802.lut16_V_1_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4810", "Parent" : "0", "Child" : ["68"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4810.lut16_V_1_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4818", "Parent" : "0", "Child" : ["70"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4818.lut16_V_1_U", "Parent" : "69"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4826", "Parent" : "0", "Child" : ["72"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4826.lut16_V_1_U", "Parent" : "71"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4834", "Parent" : "0", "Child" : ["74"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4834.lut16_V_1_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4842", "Parent" : "0", "Child" : ["76"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4842.lut16_V_1_U", "Parent" : "75"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4850", "Parent" : "0", "Child" : ["78"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4850.lut16_V_1_U", "Parent" : "77"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4858", "Parent" : "0", "Child" : ["80"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4858.lut16_V_1_U", "Parent" : "79"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4866", "Parent" : "0", "Child" : ["82"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4866.lut16_V_1_U", "Parent" : "81"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4874", "Parent" : "0", "Child" : ["84"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4874.lut16_V_1_U", "Parent" : "83"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4882", "Parent" : "0", "Child" : ["86"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4882.lut16_V_1_U", "Parent" : "85"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4890", "Parent" : "0", "Child" : ["88"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4890.lut16_V_1_U", "Parent" : "87"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4898", "Parent" : "0", "Child" : ["90"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4898.lut16_V_1_U", "Parent" : "89"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4906", "Parent" : "0", "Child" : ["92"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4906.lut16_V_1_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4914", "Parent" : "0", "Child" : ["94"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4914.lut16_V_1_U", "Parent" : "93"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4922", "Parent" : "0", "Child" : ["96"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4922.lut16_V_1_U", "Parent" : "95"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4930", "Parent" : "0", "Child" : ["98"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4930.lut16_V_1_U", "Parent" : "97"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4938", "Parent" : "0", "Child" : ["100"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4938.lut16_V_1_U", "Parent" : "99"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4946", "Parent" : "0", "Child" : ["102"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4946.lut16_V_1_U", "Parent" : "101"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4954", "Parent" : "0", "Child" : ["104"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4954.lut16_V_1_U", "Parent" : "103"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4962", "Parent" : "0", "Child" : ["106"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4962.lut16_V_1_U", "Parent" : "105"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4970", "Parent" : "0", "Child" : ["108"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4970.lut16_V_1_U", "Parent" : "107"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4978", "Parent" : "0", "Child" : ["110"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4978.lut16_V_1_U", "Parent" : "109"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4986", "Parent" : "0", "Child" : ["112"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4986.lut16_V_1_U", "Parent" : "111"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4994", "Parent" : "0", "Child" : ["114"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_4994.lut16_V_1_U", "Parent" : "113"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_5002", "Parent" : "0", "Child" : ["116"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
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
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_5002.lut16_V_1_U", "Parent" : "115"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5010", "Parent" : "0", "Child" : ["118"],
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
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5010.FracNet_mac_muladmb6_U555", "Parent" : "117"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5018", "Parent" : "0", "Child" : ["120"],
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
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5018.FracNet_mac_muladmb6_U555", "Parent" : "119"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5026", "Parent" : "0", "Child" : ["122"],
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
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5026.FracNet_mac_muladmb6_U555", "Parent" : "121"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5034", "Parent" : "0", "Child" : ["124"],
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
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5034.FracNet_mac_muladmb6_U555", "Parent" : "123"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5042", "Parent" : "0", "Child" : ["126"],
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
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5042.FracNet_mac_muladmb6_U555", "Parent" : "125"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5050", "Parent" : "0", "Child" : ["128"],
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
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5050.FracNet_mac_muladmb6_U555", "Parent" : "127"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5058", "Parent" : "0", "Child" : ["130"],
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
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_5058.FracNet_mac_muladmb6_U555", "Parent" : "129"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5066", "Parent" : "0", "Child" : ["132"],
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
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5066.FracNet_mul_mul_8fYi_U25", "Parent" : "131"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5073", "Parent" : "0", "Child" : ["134"],
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
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5073.FracNet_mul_mul_8fYi_U25", "Parent" : "133"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5080", "Parent" : "0", "Child" : ["136"],
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
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5080.FracNet_mul_mul_8fYi_U25", "Parent" : "135"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5087", "Parent" : "0", "Child" : ["138"],
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
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5087.FracNet_mul_mul_8fYi_U25", "Parent" : "137"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5094", "Parent" : "0", "Child" : ["140"],
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
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5094.FracNet_mul_mul_8fYi_U25", "Parent" : "139"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5101", "Parent" : "0", "Child" : ["142"],
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
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5101.FracNet_mul_mul_8fYi_U25", "Parent" : "141"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5108", "Parent" : "0", "Child" : ["144"],
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
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_batch_norm_fu_5108.FracNet_mul_mul_8fYi_U25", "Parent" : "143"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_5115", "Parent" : "0",
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
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_5128", "Parent" : "0",
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
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_5141", "Parent" : "0",
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
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_5154", "Parent" : "0",
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
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_5167", "Parent" : "0",
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
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_5180", "Parent" : "0",
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
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_5193", "Parent" : "0",
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
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U561", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U562", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U563", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U564", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U565", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U566", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U567", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_94_64ncg_U568", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	pgconv64_1bit {
		bottom_0_V {Type I LastRead 4 FirstWrite -1}
		bottom_1_V {Type I LastRead 4 FirstWrite -1}
		bottom_2_V {Type I LastRead 4 FirstWrite -1}
		bottom_3_V {Type I LastRead 4 FirstWrite -1}
		bottom_4_V {Type I LastRead 4 FirstWrite -1}
		bottom_5_V {Type I LastRead 4 FirstWrite -1}
		bottom_6_V {Type I LastRead 4 FirstWrite -1}
		bottom_7_V {Type I LastRead 4 FirstWrite -1}
		bottom_8_V {Type I LastRead 4 FirstWrite -1}
		bn_weights_V {Type I LastRead 11 FirstWrite -1}
		bn_weights_V71 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V72 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V73 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V74 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V75 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V76 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V77 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V78 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V79 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V80 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V81 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V82 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V83 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V84 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V85 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V86 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V87 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V88 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V89 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V90 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V91 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V92 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V93 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V94 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V95 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V96 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V97 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V98 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V99 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V100 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V101 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V {Type I LastRead 11 FirstWrite -1}
		bn_bias_V102 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V103 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V104 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V105 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V106 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V107 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V108 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V109 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V110 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V111 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V112 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V113 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V114 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V115 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V116 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V117 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V118 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V119 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V120 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V121 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V122 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V123 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V124 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V125 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V126 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V127 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V128 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V129 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V130 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V131 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V132 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V133 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V134 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V135 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V136 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V137 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V138 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V139 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V140 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V141 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V142 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V143 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V144 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V145 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V146 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V147 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V148 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V149 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V150 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V151 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V152 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V153 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V154 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V155 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V156 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V157 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V158 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V159 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V160 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V161 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V162 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V163 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V164 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V165 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V166 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V167 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V168 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V169 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V170 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V171 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V172 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V173 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V174 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V175 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V176 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V177 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V178 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V179 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V180 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V181 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V182 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V183 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V184 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V185 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V186 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V187 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V188 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V189 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V190 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V191 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V192 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V193 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V194 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V {Type I LastRead 11 FirstWrite -1}
		relu_weights_V195 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V196 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V197 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V198 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V199 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V200 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V201 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V202 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V203 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V204 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V205 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V206 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V207 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V208 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V209 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V210 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V211 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V212 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V213 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V214 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V215 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V216 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V217 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V218 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V219 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V220 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V221 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V222 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V223 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V224 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V225 {Type I LastRead 16 FirstWrite -1}
		top_0_V {Type IO LastRead 19 FirstWrite 23}
		top_1_V {Type IO LastRead 19 FirstWrite 23}
		top_2_V {Type IO LastRead 19 FirstWrite 23}
		top_3_V {Type IO LastRead 19 FirstWrite 23}
		top_4_V {Type IO LastRead 19 FirstWrite 23}
		top_5_V {Type IO LastRead 19 FirstWrite 23}
		top_6_V {Type IO LastRead 19 FirstWrite 23}
		top_7_V {Type IO LastRead 20 FirstWrite 24}
		top_8_V {Type IO LastRead 20 FirstWrite 24}
		top_9_V {Type IO LastRead 20 FirstWrite 24}
		top_10_V {Type IO LastRead 20 FirstWrite 24}
		top_11_V {Type IO LastRead 20 FirstWrite 24}
		top_12_V {Type IO LastRead 20 FirstWrite 24}
		top_13_V {Type IO LastRead 20 FirstWrite 24}
		top_14_V {Type IO LastRead 21 FirstWrite 25}
		top_15_V {Type IO LastRead 21 FirstWrite 25}
		top_16_V {Type IO LastRead 21 FirstWrite 25}
		top_17_V {Type IO LastRead 21 FirstWrite 25}
		top_18_V {Type IO LastRead 21 FirstWrite 25}
		top_19_V {Type IO LastRead 21 FirstWrite 25}
		top_20_V {Type IO LastRead 21 FirstWrite 25}
		top_21_V {Type IO LastRead 22 FirstWrite 26}
		top_22_V {Type IO LastRead 22 FirstWrite 26}
		top_23_V {Type IO LastRead 22 FirstWrite 26}
		top_24_V {Type IO LastRead 22 FirstWrite 26}
		top_25_V {Type IO LastRead 22 FirstWrite 26}
		top_26_V {Type IO LastRead 22 FirstWrite 26}
		top_27_V {Type IO LastRead 22 FirstWrite 26}
		top_28_V {Type IO LastRead 23 FirstWrite 27}
		top_29_V {Type IO LastRead 23 FirstWrite 27}
		top_30_V {Type IO LastRead 23 FirstWrite 27}
		top_31_V {Type IO LastRead 23 FirstWrite 27}
		stride {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_0 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_1 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_2 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_3 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_4 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_5 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_6 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_7 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_8 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_9 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_10 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_11 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_12 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_13 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_14 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_15 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_16 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_17 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_18 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_19 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_20 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_21 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_22 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_23 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_24 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_25 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_26 {Type I LastRead 7 FirstWrite -1}
		weight_buf_3x3_V_27 {Type I LastRead 7 FirstWrite -1}
		weight_buf_3x3_V_28 {Type I LastRead 7 FirstWrite -1}
		weight_buf_3x3_V_29 {Type I LastRead 7 FirstWrite -1}
		weight_buf_3x3_V_30 {Type I LastRead 7 FirstWrite -1}
		weight_buf_3x3_V_31 {Type I LastRead 7 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
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
		t8_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "103", "Max" : "268"}
	, {"Name" : "Interval", "Min" : "103", "Max" : "268"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	bottom_0_V { ap_memory {  { bottom_0_V_address0 mem_address 1 4 }  { bottom_0_V_ce0 mem_ce 1 1 }  { bottom_0_V_q0 mem_dout 0 64 }  { bottom_0_V_address1 MemPortADDR2 1 4 }  { bottom_0_V_ce1 MemPortCE2 1 1 }  { bottom_0_V_q1 MemPortDOUT2 0 64 } } }
	bottom_1_V { ap_memory {  { bottom_1_V_address0 mem_address 1 4 }  { bottom_1_V_ce0 mem_ce 1 1 }  { bottom_1_V_q0 mem_dout 0 64 }  { bottom_1_V_address1 MemPortADDR2 1 4 }  { bottom_1_V_ce1 MemPortCE2 1 1 }  { bottom_1_V_q1 MemPortDOUT2 0 64 } } }
	bottom_2_V { ap_memory {  { bottom_2_V_address0 mem_address 1 4 }  { bottom_2_V_ce0 mem_ce 1 1 }  { bottom_2_V_q0 mem_dout 0 64 }  { bottom_2_V_address1 MemPortADDR2 1 4 }  { bottom_2_V_ce1 MemPortCE2 1 1 }  { bottom_2_V_q1 MemPortDOUT2 0 64 } } }
	bottom_3_V { ap_memory {  { bottom_3_V_address0 mem_address 1 4 }  { bottom_3_V_ce0 mem_ce 1 1 }  { bottom_3_V_q0 mem_dout 0 64 }  { bottom_3_V_address1 MemPortADDR2 1 4 }  { bottom_3_V_ce1 MemPortCE2 1 1 }  { bottom_3_V_q1 MemPortDOUT2 0 64 } } }
	bottom_4_V { ap_memory {  { bottom_4_V_address0 mem_address 1 4 }  { bottom_4_V_ce0 mem_ce 1 1 }  { bottom_4_V_q0 mem_dout 0 64 }  { bottom_4_V_address1 MemPortADDR2 1 4 }  { bottom_4_V_ce1 MemPortCE2 1 1 }  { bottom_4_V_q1 MemPortDOUT2 0 64 } } }
	bottom_5_V { ap_memory {  { bottom_5_V_address0 mem_address 1 4 }  { bottom_5_V_ce0 mem_ce 1 1 }  { bottom_5_V_q0 mem_dout 0 64 }  { bottom_5_V_address1 MemPortADDR2 1 4 }  { bottom_5_V_ce1 MemPortCE2 1 1 }  { bottom_5_V_q1 MemPortDOUT2 0 64 } } }
	bottom_6_V { ap_memory {  { bottom_6_V_address0 mem_address 1 4 }  { bottom_6_V_ce0 mem_ce 1 1 }  { bottom_6_V_q0 mem_dout 0 64 }  { bottom_6_V_address1 MemPortADDR2 1 4 }  { bottom_6_V_ce1 MemPortCE2 1 1 }  { bottom_6_V_q1 MemPortDOUT2 0 64 } } }
	bottom_7_V { ap_memory {  { bottom_7_V_address0 mem_address 1 4 }  { bottom_7_V_ce0 mem_ce 1 1 }  { bottom_7_V_q0 mem_dout 0 64 }  { bottom_7_V_address1 MemPortADDR2 1 4 }  { bottom_7_V_ce1 MemPortCE2 1 1 }  { bottom_7_V_q1 MemPortDOUT2 0 64 } } }
	bottom_8_V { ap_memory {  { bottom_8_V_address0 mem_address 1 4 }  { bottom_8_V_ce0 mem_ce 1 1 }  { bottom_8_V_q0 mem_dout 0 64 }  { bottom_8_V_address1 MemPortADDR2 1 4 }  { bottom_8_V_ce1 MemPortCE2 1 1 }  { bottom_8_V_q1 MemPortDOUT2 0 64 } } }
	bn_weights_V { ap_memory {  { bn_weights_V_address0 mem_address 1 2 }  { bn_weights_V_ce0 mem_ce 1 1 }  { bn_weights_V_q0 mem_dout 0 11 } } }
	bn_weights_V71 { ap_memory {  { bn_weights_V71_address0 mem_address 1 2 }  { bn_weights_V71_ce0 mem_ce 1 1 }  { bn_weights_V71_q0 mem_dout 0 11 } } }
	bn_weights_V72 { ap_memory {  { bn_weights_V72_address0 mem_address 1 2 }  { bn_weights_V72_ce0 mem_ce 1 1 }  { bn_weights_V72_q0 mem_dout 0 11 } } }
	bn_weights_V73 { ap_memory {  { bn_weights_V73_address0 mem_address 1 2 }  { bn_weights_V73_ce0 mem_ce 1 1 }  { bn_weights_V73_q0 mem_dout 0 11 } } }
	bn_weights_V74 { ap_memory {  { bn_weights_V74_address0 mem_address 1 2 }  { bn_weights_V74_ce0 mem_ce 1 1 }  { bn_weights_V74_q0 mem_dout 0 11 } } }
	bn_weights_V75 { ap_memory {  { bn_weights_V75_address0 mem_address 1 2 }  { bn_weights_V75_ce0 mem_ce 1 1 }  { bn_weights_V75_q0 mem_dout 0 11 } } }
	bn_weights_V76 { ap_memory {  { bn_weights_V76_address0 mem_address 1 2 }  { bn_weights_V76_ce0 mem_ce 1 1 }  { bn_weights_V76_q0 mem_dout 0 11 } } }
	bn_weights_V77 { ap_memory {  { bn_weights_V77_address0 mem_address 1 2 }  { bn_weights_V77_ce0 mem_ce 1 1 }  { bn_weights_V77_q0 mem_dout 0 11 } } }
	bn_weights_V78 { ap_memory {  { bn_weights_V78_address0 mem_address 1 2 }  { bn_weights_V78_ce0 mem_ce 1 1 }  { bn_weights_V78_q0 mem_dout 0 11 } } }
	bn_weights_V79 { ap_memory {  { bn_weights_V79_address0 mem_address 1 2 }  { bn_weights_V79_ce0 mem_ce 1 1 }  { bn_weights_V79_q0 mem_dout 0 11 } } }
	bn_weights_V80 { ap_memory {  { bn_weights_V80_address0 mem_address 1 2 }  { bn_weights_V80_ce0 mem_ce 1 1 }  { bn_weights_V80_q0 mem_dout 0 11 } } }
	bn_weights_V81 { ap_memory {  { bn_weights_V81_address0 mem_address 1 2 }  { bn_weights_V81_ce0 mem_ce 1 1 }  { bn_weights_V81_q0 mem_dout 0 11 } } }
	bn_weights_V82 { ap_memory {  { bn_weights_V82_address0 mem_address 1 2 }  { bn_weights_V82_ce0 mem_ce 1 1 }  { bn_weights_V82_q0 mem_dout 0 11 } } }
	bn_weights_V83 { ap_memory {  { bn_weights_V83_address0 mem_address 1 2 }  { bn_weights_V83_ce0 mem_ce 1 1 }  { bn_weights_V83_q0 mem_dout 0 11 } } }
	bn_weights_V84 { ap_memory {  { bn_weights_V84_address0 mem_address 1 2 }  { bn_weights_V84_ce0 mem_ce 1 1 }  { bn_weights_V84_q0 mem_dout 0 11 } } }
	bn_weights_V85 { ap_memory {  { bn_weights_V85_address0 mem_address 1 2 }  { bn_weights_V85_ce0 mem_ce 1 1 }  { bn_weights_V85_q0 mem_dout 0 11 } } }
	bn_weights_V86 { ap_memory {  { bn_weights_V86_address0 mem_address 1 2 }  { bn_weights_V86_ce0 mem_ce 1 1 }  { bn_weights_V86_q0 mem_dout 0 11 } } }
	bn_weights_V87 { ap_memory {  { bn_weights_V87_address0 mem_address 1 2 }  { bn_weights_V87_ce0 mem_ce 1 1 }  { bn_weights_V87_q0 mem_dout 0 11 } } }
	bn_weights_V88 { ap_memory {  { bn_weights_V88_address0 mem_address 1 2 }  { bn_weights_V88_ce0 mem_ce 1 1 }  { bn_weights_V88_q0 mem_dout 0 11 } } }
	bn_weights_V89 { ap_memory {  { bn_weights_V89_address0 mem_address 1 2 }  { bn_weights_V89_ce0 mem_ce 1 1 }  { bn_weights_V89_q0 mem_dout 0 11 } } }
	bn_weights_V90 { ap_memory {  { bn_weights_V90_address0 mem_address 1 2 }  { bn_weights_V90_ce0 mem_ce 1 1 }  { bn_weights_V90_q0 mem_dout 0 11 } } }
	bn_weights_V91 { ap_memory {  { bn_weights_V91_address0 mem_address 1 2 }  { bn_weights_V91_ce0 mem_ce 1 1 }  { bn_weights_V91_q0 mem_dout 0 11 } } }
	bn_weights_V92 { ap_memory {  { bn_weights_V92_address0 mem_address 1 2 }  { bn_weights_V92_ce0 mem_ce 1 1 }  { bn_weights_V92_q0 mem_dout 0 11 } } }
	bn_weights_V93 { ap_memory {  { bn_weights_V93_address0 mem_address 1 2 }  { bn_weights_V93_ce0 mem_ce 1 1 }  { bn_weights_V93_q0 mem_dout 0 11 } } }
	bn_weights_V94 { ap_memory {  { bn_weights_V94_address0 mem_address 1 2 }  { bn_weights_V94_ce0 mem_ce 1 1 }  { bn_weights_V94_q0 mem_dout 0 11 } } }
	bn_weights_V95 { ap_memory {  { bn_weights_V95_address0 mem_address 1 2 }  { bn_weights_V95_ce0 mem_ce 1 1 }  { bn_weights_V95_q0 mem_dout 0 11 } } }
	bn_weights_V96 { ap_memory {  { bn_weights_V96_address0 mem_address 1 2 }  { bn_weights_V96_ce0 mem_ce 1 1 }  { bn_weights_V96_q0 mem_dout 0 11 } } }
	bn_weights_V97 { ap_memory {  { bn_weights_V97_address0 mem_address 1 2 }  { bn_weights_V97_ce0 mem_ce 1 1 }  { bn_weights_V97_q0 mem_dout 0 11 } } }
	bn_weights_V98 { ap_memory {  { bn_weights_V98_address0 mem_address 1 2 }  { bn_weights_V98_ce0 mem_ce 1 1 }  { bn_weights_V98_q0 mem_dout 0 11 } } }
	bn_weights_V99 { ap_memory {  { bn_weights_V99_address0 mem_address 1 2 }  { bn_weights_V99_ce0 mem_ce 1 1 }  { bn_weights_V99_q0 mem_dout 0 11 } } }
	bn_weights_V100 { ap_memory {  { bn_weights_V100_address0 mem_address 1 2 }  { bn_weights_V100_ce0 mem_ce 1 1 }  { bn_weights_V100_q0 mem_dout 0 11 } } }
	bn_weights_V101 { ap_memory {  { bn_weights_V101_address0 mem_address 1 2 }  { bn_weights_V101_ce0 mem_ce 1 1 }  { bn_weights_V101_q0 mem_dout 0 11 } } }
	bn_bias_V { ap_memory {  { bn_bias_V_address0 mem_address 1 2 }  { bn_bias_V_ce0 mem_ce 1 1 }  { bn_bias_V_q0 mem_dout 0 11 } } }
	bn_bias_V102 { ap_memory {  { bn_bias_V102_address0 mem_address 1 2 }  { bn_bias_V102_ce0 mem_ce 1 1 }  { bn_bias_V102_q0 mem_dout 0 11 } } }
	bn_bias_V103 { ap_memory {  { bn_bias_V103_address0 mem_address 1 2 }  { bn_bias_V103_ce0 mem_ce 1 1 }  { bn_bias_V103_q0 mem_dout 0 11 } } }
	bn_bias_V104 { ap_memory {  { bn_bias_V104_address0 mem_address 1 2 }  { bn_bias_V104_ce0 mem_ce 1 1 }  { bn_bias_V104_q0 mem_dout 0 11 } } }
	bn_bias_V105 { ap_memory {  { bn_bias_V105_address0 mem_address 1 2 }  { bn_bias_V105_ce0 mem_ce 1 1 }  { bn_bias_V105_q0 mem_dout 0 11 } } }
	bn_bias_V106 { ap_memory {  { bn_bias_V106_address0 mem_address 1 2 }  { bn_bias_V106_ce0 mem_ce 1 1 }  { bn_bias_V106_q0 mem_dout 0 11 } } }
	bn_bias_V107 { ap_memory {  { bn_bias_V107_address0 mem_address 1 2 }  { bn_bias_V107_ce0 mem_ce 1 1 }  { bn_bias_V107_q0 mem_dout 0 11 } } }
	bn_bias_V108 { ap_memory {  { bn_bias_V108_address0 mem_address 1 2 }  { bn_bias_V108_ce0 mem_ce 1 1 }  { bn_bias_V108_q0 mem_dout 0 11 } } }
	bn_bias_V109 { ap_memory {  { bn_bias_V109_address0 mem_address 1 2 }  { bn_bias_V109_ce0 mem_ce 1 1 }  { bn_bias_V109_q0 mem_dout 0 11 } } }
	bn_bias_V110 { ap_memory {  { bn_bias_V110_address0 mem_address 1 2 }  { bn_bias_V110_ce0 mem_ce 1 1 }  { bn_bias_V110_q0 mem_dout 0 11 } } }
	bn_bias_V111 { ap_memory {  { bn_bias_V111_address0 mem_address 1 2 }  { bn_bias_V111_ce0 mem_ce 1 1 }  { bn_bias_V111_q0 mem_dout 0 11 } } }
	bn_bias_V112 { ap_memory {  { bn_bias_V112_address0 mem_address 1 2 }  { bn_bias_V112_ce0 mem_ce 1 1 }  { bn_bias_V112_q0 mem_dout 0 11 } } }
	bn_bias_V113 { ap_memory {  { bn_bias_V113_address0 mem_address 1 2 }  { bn_bias_V113_ce0 mem_ce 1 1 }  { bn_bias_V113_q0 mem_dout 0 11 } } }
	bn_bias_V114 { ap_memory {  { bn_bias_V114_address0 mem_address 1 2 }  { bn_bias_V114_ce0 mem_ce 1 1 }  { bn_bias_V114_q0 mem_dout 0 11 } } }
	bn_bias_V115 { ap_memory {  { bn_bias_V115_address0 mem_address 1 2 }  { bn_bias_V115_ce0 mem_ce 1 1 }  { bn_bias_V115_q0 mem_dout 0 11 } } }
	bn_bias_V116 { ap_memory {  { bn_bias_V116_address0 mem_address 1 2 }  { bn_bias_V116_ce0 mem_ce 1 1 }  { bn_bias_V116_q0 mem_dout 0 11 } } }
	bn_bias_V117 { ap_memory {  { bn_bias_V117_address0 mem_address 1 2 }  { bn_bias_V117_ce0 mem_ce 1 1 }  { bn_bias_V117_q0 mem_dout 0 11 } } }
	bn_bias_V118 { ap_memory {  { bn_bias_V118_address0 mem_address 1 2 }  { bn_bias_V118_ce0 mem_ce 1 1 }  { bn_bias_V118_q0 mem_dout 0 11 } } }
	bn_bias_V119 { ap_memory {  { bn_bias_V119_address0 mem_address 1 2 }  { bn_bias_V119_ce0 mem_ce 1 1 }  { bn_bias_V119_q0 mem_dout 0 11 } } }
	bn_bias_V120 { ap_memory {  { bn_bias_V120_address0 mem_address 1 2 }  { bn_bias_V120_ce0 mem_ce 1 1 }  { bn_bias_V120_q0 mem_dout 0 11 } } }
	bn_bias_V121 { ap_memory {  { bn_bias_V121_address0 mem_address 1 2 }  { bn_bias_V121_ce0 mem_ce 1 1 }  { bn_bias_V121_q0 mem_dout 0 11 } } }
	bn_bias_V122 { ap_memory {  { bn_bias_V122_address0 mem_address 1 2 }  { bn_bias_V122_ce0 mem_ce 1 1 }  { bn_bias_V122_q0 mem_dout 0 11 } } }
	bn_bias_V123 { ap_memory {  { bn_bias_V123_address0 mem_address 1 2 }  { bn_bias_V123_ce0 mem_ce 1 1 }  { bn_bias_V123_q0 mem_dout 0 11 } } }
	bn_bias_V124 { ap_memory {  { bn_bias_V124_address0 mem_address 1 2 }  { bn_bias_V124_ce0 mem_ce 1 1 }  { bn_bias_V124_q0 mem_dout 0 11 } } }
	bn_bias_V125 { ap_memory {  { bn_bias_V125_address0 mem_address 1 2 }  { bn_bias_V125_ce0 mem_ce 1 1 }  { bn_bias_V125_q0 mem_dout 0 11 } } }
	bn_bias_V126 { ap_memory {  { bn_bias_V126_address0 mem_address 1 2 }  { bn_bias_V126_ce0 mem_ce 1 1 }  { bn_bias_V126_q0 mem_dout 0 11 } } }
	bn_bias_V127 { ap_memory {  { bn_bias_V127_address0 mem_address 1 2 }  { bn_bias_V127_ce0 mem_ce 1 1 }  { bn_bias_V127_q0 mem_dout 0 11 } } }
	bn_bias_V128 { ap_memory {  { bn_bias_V128_address0 mem_address 1 2 }  { bn_bias_V128_ce0 mem_ce 1 1 }  { bn_bias_V128_q0 mem_dout 0 11 } } }
	bn_bias_V129 { ap_memory {  { bn_bias_V129_address0 mem_address 1 2 }  { bn_bias_V129_ce0 mem_ce 1 1 }  { bn_bias_V129_q0 mem_dout 0 11 } } }
	bn_bias_V130 { ap_memory {  { bn_bias_V130_address0 mem_address 1 2 }  { bn_bias_V130_ce0 mem_ce 1 1 }  { bn_bias_V130_q0 mem_dout 0 11 } } }
	bn_bias_V131 { ap_memory {  { bn_bias_V131_address0 mem_address 1 2 }  { bn_bias_V131_ce0 mem_ce 1 1 }  { bn_bias_V131_q0 mem_dout 0 11 } } }
	bn_bias_V132 { ap_memory {  { bn_bias_V132_address0 mem_address 1 2 }  { bn_bias_V132_ce0 mem_ce 1 1 }  { bn_bias_V132_q0 mem_dout 0 11 } } }
	relu_shiftx_V { ap_memory {  { relu_shiftx_V_address0 mem_address 1 1 }  { relu_shiftx_V_ce0 mem_ce 1 1 }  { relu_shiftx_V_q0 mem_dout 0 11 } } }
	relu_shiftx_V133 { ap_memory {  { relu_shiftx_V133_address0 mem_address 1 1 }  { relu_shiftx_V133_ce0 mem_ce 1 1 }  { relu_shiftx_V133_q0 mem_dout 0 11 } } }
	relu_shiftx_V134 { ap_memory {  { relu_shiftx_V134_address0 mem_address 1 1 }  { relu_shiftx_V134_ce0 mem_ce 1 1 }  { relu_shiftx_V134_q0 mem_dout 0 11 } } }
	relu_shiftx_V135 { ap_memory {  { relu_shiftx_V135_address0 mem_address 1 1 }  { relu_shiftx_V135_ce0 mem_ce 1 1 }  { relu_shiftx_V135_q0 mem_dout 0 11 } } }
	relu_shiftx_V136 { ap_memory {  { relu_shiftx_V136_address0 mem_address 1 1 }  { relu_shiftx_V136_ce0 mem_ce 1 1 }  { relu_shiftx_V136_q0 mem_dout 0 11 } } }
	relu_shiftx_V137 { ap_memory {  { relu_shiftx_V137_address0 mem_address 1 1 }  { relu_shiftx_V137_ce0 mem_ce 1 1 }  { relu_shiftx_V137_q0 mem_dout 0 11 } } }
	relu_shiftx_V138 { ap_memory {  { relu_shiftx_V138_address0 mem_address 1 1 }  { relu_shiftx_V138_ce0 mem_ce 1 1 }  { relu_shiftx_V138_q0 mem_dout 0 11 } } }
	relu_shiftx_V139 { ap_memory {  { relu_shiftx_V139_address0 mem_address 1 1 }  { relu_shiftx_V139_ce0 mem_ce 1 1 }  { relu_shiftx_V139_q0 mem_dout 0 11 } } }
	relu_shiftx_V140 { ap_memory {  { relu_shiftx_V140_address0 mem_address 1 1 }  { relu_shiftx_V140_ce0 mem_ce 1 1 }  { relu_shiftx_V140_q0 mem_dout 0 11 } } }
	relu_shiftx_V141 { ap_memory {  { relu_shiftx_V141_address0 mem_address 1 1 }  { relu_shiftx_V141_ce0 mem_ce 1 1 }  { relu_shiftx_V141_q0 mem_dout 0 11 } } }
	relu_shiftx_V142 { ap_memory {  { relu_shiftx_V142_address0 mem_address 1 1 }  { relu_shiftx_V142_ce0 mem_ce 1 1 }  { relu_shiftx_V142_q0 mem_dout 0 11 } } }
	relu_shiftx_V143 { ap_memory {  { relu_shiftx_V143_address0 mem_address 1 1 }  { relu_shiftx_V143_ce0 mem_ce 1 1 }  { relu_shiftx_V143_q0 mem_dout 0 11 } } }
	relu_shiftx_V144 { ap_memory {  { relu_shiftx_V144_address0 mem_address 1 1 }  { relu_shiftx_V144_ce0 mem_ce 1 1 }  { relu_shiftx_V144_q0 mem_dout 0 11 } } }
	relu_shiftx_V145 { ap_memory {  { relu_shiftx_V145_address0 mem_address 1 1 }  { relu_shiftx_V145_ce0 mem_ce 1 1 }  { relu_shiftx_V145_q0 mem_dout 0 11 } } }
	relu_shiftx_V146 { ap_memory {  { relu_shiftx_V146_address0 mem_address 1 1 }  { relu_shiftx_V146_ce0 mem_ce 1 1 }  { relu_shiftx_V146_q0 mem_dout 0 11 } } }
	relu_shiftx_V147 { ap_memory {  { relu_shiftx_V147_address0 mem_address 1 1 }  { relu_shiftx_V147_ce0 mem_ce 1 1 }  { relu_shiftx_V147_q0 mem_dout 0 11 } } }
	relu_shiftx_V148 { ap_memory {  { relu_shiftx_V148_address0 mem_address 1 1 }  { relu_shiftx_V148_ce0 mem_ce 1 1 }  { relu_shiftx_V148_q0 mem_dout 0 11 } } }
	relu_shiftx_V149 { ap_memory {  { relu_shiftx_V149_address0 mem_address 1 1 }  { relu_shiftx_V149_ce0 mem_ce 1 1 }  { relu_shiftx_V149_q0 mem_dout 0 11 } } }
	relu_shiftx_V150 { ap_memory {  { relu_shiftx_V150_address0 mem_address 1 1 }  { relu_shiftx_V150_ce0 mem_ce 1 1 }  { relu_shiftx_V150_q0 mem_dout 0 11 } } }
	relu_shiftx_V151 { ap_memory {  { relu_shiftx_V151_address0 mem_address 1 1 }  { relu_shiftx_V151_ce0 mem_ce 1 1 }  { relu_shiftx_V151_q0 mem_dout 0 11 } } }
	relu_shiftx_V152 { ap_memory {  { relu_shiftx_V152_address0 mem_address 1 1 }  { relu_shiftx_V152_ce0 mem_ce 1 1 }  { relu_shiftx_V152_q0 mem_dout 0 11 } } }
	relu_shiftx_V153 { ap_memory {  { relu_shiftx_V153_address0 mem_address 1 1 }  { relu_shiftx_V153_ce0 mem_ce 1 1 }  { relu_shiftx_V153_q0 mem_dout 0 11 } } }
	relu_shiftx_V154 { ap_memory {  { relu_shiftx_V154_address0 mem_address 1 1 }  { relu_shiftx_V154_ce0 mem_ce 1 1 }  { relu_shiftx_V154_q0 mem_dout 0 11 } } }
	relu_shiftx_V155 { ap_memory {  { relu_shiftx_V155_address0 mem_address 1 1 }  { relu_shiftx_V155_ce0 mem_ce 1 1 }  { relu_shiftx_V155_q0 mem_dout 0 11 } } }
	relu_shiftx_V156 { ap_memory {  { relu_shiftx_V156_address0 mem_address 1 1 }  { relu_shiftx_V156_ce0 mem_ce 1 1 }  { relu_shiftx_V156_q0 mem_dout 0 11 } } }
	relu_shiftx_V157 { ap_memory {  { relu_shiftx_V157_address0 mem_address 1 1 }  { relu_shiftx_V157_ce0 mem_ce 1 1 }  { relu_shiftx_V157_q0 mem_dout 0 11 } } }
	relu_shiftx_V158 { ap_memory {  { relu_shiftx_V158_address0 mem_address 1 1 }  { relu_shiftx_V158_ce0 mem_ce 1 1 }  { relu_shiftx_V158_q0 mem_dout 0 11 } } }
	relu_shiftx_V159 { ap_memory {  { relu_shiftx_V159_address0 mem_address 1 1 }  { relu_shiftx_V159_ce0 mem_ce 1 1 }  { relu_shiftx_V159_q0 mem_dout 0 11 } } }
	relu_shiftx_V160 { ap_memory {  { relu_shiftx_V160_address0 mem_address 1 1 }  { relu_shiftx_V160_ce0 mem_ce 1 1 }  { relu_shiftx_V160_q0 mem_dout 0 11 } } }
	relu_shiftx_V161 { ap_memory {  { relu_shiftx_V161_address0 mem_address 1 1 }  { relu_shiftx_V161_ce0 mem_ce 1 1 }  { relu_shiftx_V161_q0 mem_dout 0 11 } } }
	relu_shiftx_V162 { ap_memory {  { relu_shiftx_V162_address0 mem_address 1 1 }  { relu_shiftx_V162_ce0 mem_ce 1 1 }  { relu_shiftx_V162_q0 mem_dout 0 11 } } }
	relu_shiftx_V163 { ap_memory {  { relu_shiftx_V163_address0 mem_address 1 1 }  { relu_shiftx_V163_ce0 mem_ce 1 1 }  { relu_shiftx_V163_q0 mem_dout 0 11 } } }
	relu_shifty_V { ap_memory {  { relu_shifty_V_address0 mem_address 1 1 }  { relu_shifty_V_ce0 mem_ce 1 1 }  { relu_shifty_V_q0 mem_dout 0 11 } } }
	relu_shifty_V164 { ap_memory {  { relu_shifty_V164_address0 mem_address 1 1 }  { relu_shifty_V164_ce0 mem_ce 1 1 }  { relu_shifty_V164_q0 mem_dout 0 11 } } }
	relu_shifty_V165 { ap_memory {  { relu_shifty_V165_address0 mem_address 1 1 }  { relu_shifty_V165_ce0 mem_ce 1 1 }  { relu_shifty_V165_q0 mem_dout 0 11 } } }
	relu_shifty_V166 { ap_memory {  { relu_shifty_V166_address0 mem_address 1 1 }  { relu_shifty_V166_ce0 mem_ce 1 1 }  { relu_shifty_V166_q0 mem_dout 0 11 } } }
	relu_shifty_V167 { ap_memory {  { relu_shifty_V167_address0 mem_address 1 1 }  { relu_shifty_V167_ce0 mem_ce 1 1 }  { relu_shifty_V167_q0 mem_dout 0 11 } } }
	relu_shifty_V168 { ap_memory {  { relu_shifty_V168_address0 mem_address 1 1 }  { relu_shifty_V168_ce0 mem_ce 1 1 }  { relu_shifty_V168_q0 mem_dout 0 11 } } }
	relu_shifty_V169 { ap_memory {  { relu_shifty_V169_address0 mem_address 1 1 }  { relu_shifty_V169_ce0 mem_ce 1 1 }  { relu_shifty_V169_q0 mem_dout 0 11 } } }
	relu_shifty_V170 { ap_memory {  { relu_shifty_V170_address0 mem_address 1 1 }  { relu_shifty_V170_ce0 mem_ce 1 1 }  { relu_shifty_V170_q0 mem_dout 0 11 } } }
	relu_shifty_V171 { ap_memory {  { relu_shifty_V171_address0 mem_address 1 1 }  { relu_shifty_V171_ce0 mem_ce 1 1 }  { relu_shifty_V171_q0 mem_dout 0 11 } } }
	relu_shifty_V172 { ap_memory {  { relu_shifty_V172_address0 mem_address 1 1 }  { relu_shifty_V172_ce0 mem_ce 1 1 }  { relu_shifty_V172_q0 mem_dout 0 11 } } }
	relu_shifty_V173 { ap_memory {  { relu_shifty_V173_address0 mem_address 1 1 }  { relu_shifty_V173_ce0 mem_ce 1 1 }  { relu_shifty_V173_q0 mem_dout 0 11 } } }
	relu_shifty_V174 { ap_memory {  { relu_shifty_V174_address0 mem_address 1 1 }  { relu_shifty_V174_ce0 mem_ce 1 1 }  { relu_shifty_V174_q0 mem_dout 0 11 } } }
	relu_shifty_V175 { ap_memory {  { relu_shifty_V175_address0 mem_address 1 1 }  { relu_shifty_V175_ce0 mem_ce 1 1 }  { relu_shifty_V175_q0 mem_dout 0 11 } } }
	relu_shifty_V176 { ap_memory {  { relu_shifty_V176_address0 mem_address 1 1 }  { relu_shifty_V176_ce0 mem_ce 1 1 }  { relu_shifty_V176_q0 mem_dout 0 11 } } }
	relu_shifty_V177 { ap_memory {  { relu_shifty_V177_address0 mem_address 1 1 }  { relu_shifty_V177_ce0 mem_ce 1 1 }  { relu_shifty_V177_q0 mem_dout 0 11 } } }
	relu_shifty_V178 { ap_memory {  { relu_shifty_V178_address0 mem_address 1 1 }  { relu_shifty_V178_ce0 mem_ce 1 1 }  { relu_shifty_V178_q0 mem_dout 0 11 } } }
	relu_shifty_V179 { ap_memory {  { relu_shifty_V179_address0 mem_address 1 1 }  { relu_shifty_V179_ce0 mem_ce 1 1 }  { relu_shifty_V179_q0 mem_dout 0 11 } } }
	relu_shifty_V180 { ap_memory {  { relu_shifty_V180_address0 mem_address 1 1 }  { relu_shifty_V180_ce0 mem_ce 1 1 }  { relu_shifty_V180_q0 mem_dout 0 11 } } }
	relu_shifty_V181 { ap_memory {  { relu_shifty_V181_address0 mem_address 1 1 }  { relu_shifty_V181_ce0 mem_ce 1 1 }  { relu_shifty_V181_q0 mem_dout 0 11 } } }
	relu_shifty_V182 { ap_memory {  { relu_shifty_V182_address0 mem_address 1 1 }  { relu_shifty_V182_ce0 mem_ce 1 1 }  { relu_shifty_V182_q0 mem_dout 0 11 } } }
	relu_shifty_V183 { ap_memory {  { relu_shifty_V183_address0 mem_address 1 1 }  { relu_shifty_V183_ce0 mem_ce 1 1 }  { relu_shifty_V183_q0 mem_dout 0 11 } } }
	relu_shifty_V184 { ap_memory {  { relu_shifty_V184_address0 mem_address 1 1 }  { relu_shifty_V184_ce0 mem_ce 1 1 }  { relu_shifty_V184_q0 mem_dout 0 11 } } }
	relu_shifty_V185 { ap_memory {  { relu_shifty_V185_address0 mem_address 1 1 }  { relu_shifty_V185_ce0 mem_ce 1 1 }  { relu_shifty_V185_q0 mem_dout 0 11 } } }
	relu_shifty_V186 { ap_memory {  { relu_shifty_V186_address0 mem_address 1 1 }  { relu_shifty_V186_ce0 mem_ce 1 1 }  { relu_shifty_V186_q0 mem_dout 0 11 } } }
	relu_shifty_V187 { ap_memory {  { relu_shifty_V187_address0 mem_address 1 1 }  { relu_shifty_V187_ce0 mem_ce 1 1 }  { relu_shifty_V187_q0 mem_dout 0 11 } } }
	relu_shifty_V188 { ap_memory {  { relu_shifty_V188_address0 mem_address 1 1 }  { relu_shifty_V188_ce0 mem_ce 1 1 }  { relu_shifty_V188_q0 mem_dout 0 11 } } }
	relu_shifty_V189 { ap_memory {  { relu_shifty_V189_address0 mem_address 1 1 }  { relu_shifty_V189_ce0 mem_ce 1 1 }  { relu_shifty_V189_q0 mem_dout 0 11 } } }
	relu_shifty_V190 { ap_memory {  { relu_shifty_V190_address0 mem_address 1 1 }  { relu_shifty_V190_ce0 mem_ce 1 1 }  { relu_shifty_V190_q0 mem_dout 0 11 } } }
	relu_shifty_V191 { ap_memory {  { relu_shifty_V191_address0 mem_address 1 1 }  { relu_shifty_V191_ce0 mem_ce 1 1 }  { relu_shifty_V191_q0 mem_dout 0 11 } } }
	relu_shifty_V192 { ap_memory {  { relu_shifty_V192_address0 mem_address 1 1 }  { relu_shifty_V192_ce0 mem_ce 1 1 }  { relu_shifty_V192_q0 mem_dout 0 11 } } }
	relu_shifty_V193 { ap_memory {  { relu_shifty_V193_address0 mem_address 1 1 }  { relu_shifty_V193_ce0 mem_ce 1 1 }  { relu_shifty_V193_q0 mem_dout 0 11 } } }
	relu_shifty_V194 { ap_memory {  { relu_shifty_V194_address0 mem_address 1 1 }  { relu_shifty_V194_ce0 mem_ce 1 1 }  { relu_shifty_V194_q0 mem_dout 0 11 } } }
	relu_weights_V { ap_memory {  { relu_weights_V_address0 mem_address 1 1 }  { relu_weights_V_ce0 mem_ce 1 1 }  { relu_weights_V_q0 mem_dout 0 11 } } }
	relu_weights_V195 { ap_memory {  { relu_weights_V195_address0 mem_address 1 1 }  { relu_weights_V195_ce0 mem_ce 1 1 }  { relu_weights_V195_q0 mem_dout 0 11 } } }
	relu_weights_V196 { ap_memory {  { relu_weights_V196_address0 mem_address 1 1 }  { relu_weights_V196_ce0 mem_ce 1 1 }  { relu_weights_V196_q0 mem_dout 0 11 } } }
	relu_weights_V197 { ap_memory {  { relu_weights_V197_address0 mem_address 1 1 }  { relu_weights_V197_ce0 mem_ce 1 1 }  { relu_weights_V197_q0 mem_dout 0 11 } } }
	relu_weights_V198 { ap_memory {  { relu_weights_V198_address0 mem_address 1 1 }  { relu_weights_V198_ce0 mem_ce 1 1 }  { relu_weights_V198_q0 mem_dout 0 11 } } }
	relu_weights_V199 { ap_memory {  { relu_weights_V199_address0 mem_address 1 1 }  { relu_weights_V199_ce0 mem_ce 1 1 }  { relu_weights_V199_q0 mem_dout 0 11 } } }
	relu_weights_V200 { ap_memory {  { relu_weights_V200_address0 mem_address 1 1 }  { relu_weights_V200_ce0 mem_ce 1 1 }  { relu_weights_V200_q0 mem_dout 0 11 } } }
	relu_weights_V201 { ap_memory {  { relu_weights_V201_address0 mem_address 1 1 }  { relu_weights_V201_ce0 mem_ce 1 1 }  { relu_weights_V201_q0 mem_dout 0 11 } } }
	relu_weights_V202 { ap_memory {  { relu_weights_V202_address0 mem_address 1 1 }  { relu_weights_V202_ce0 mem_ce 1 1 }  { relu_weights_V202_q0 mem_dout 0 11 } } }
	relu_weights_V203 { ap_memory {  { relu_weights_V203_address0 mem_address 1 1 }  { relu_weights_V203_ce0 mem_ce 1 1 }  { relu_weights_V203_q0 mem_dout 0 11 } } }
	relu_weights_V204 { ap_memory {  { relu_weights_V204_address0 mem_address 1 1 }  { relu_weights_V204_ce0 mem_ce 1 1 }  { relu_weights_V204_q0 mem_dout 0 11 } } }
	relu_weights_V205 { ap_memory {  { relu_weights_V205_address0 mem_address 1 1 }  { relu_weights_V205_ce0 mem_ce 1 1 }  { relu_weights_V205_q0 mem_dout 0 11 } } }
	relu_weights_V206 { ap_memory {  { relu_weights_V206_address0 mem_address 1 1 }  { relu_weights_V206_ce0 mem_ce 1 1 }  { relu_weights_V206_q0 mem_dout 0 11 } } }
	relu_weights_V207 { ap_memory {  { relu_weights_V207_address0 mem_address 1 1 }  { relu_weights_V207_ce0 mem_ce 1 1 }  { relu_weights_V207_q0 mem_dout 0 11 } } }
	relu_weights_V208 { ap_memory {  { relu_weights_V208_address0 mem_address 1 1 }  { relu_weights_V208_ce0 mem_ce 1 1 }  { relu_weights_V208_q0 mem_dout 0 11 } } }
	relu_weights_V209 { ap_memory {  { relu_weights_V209_address0 mem_address 1 1 }  { relu_weights_V209_ce0 mem_ce 1 1 }  { relu_weights_V209_q0 mem_dout 0 11 } } }
	relu_weights_V210 { ap_memory {  { relu_weights_V210_address0 mem_address 1 1 }  { relu_weights_V210_ce0 mem_ce 1 1 }  { relu_weights_V210_q0 mem_dout 0 11 } } }
	relu_weights_V211 { ap_memory {  { relu_weights_V211_address0 mem_address 1 1 }  { relu_weights_V211_ce0 mem_ce 1 1 }  { relu_weights_V211_q0 mem_dout 0 11 } } }
	relu_weights_V212 { ap_memory {  { relu_weights_V212_address0 mem_address 1 1 }  { relu_weights_V212_ce0 mem_ce 1 1 }  { relu_weights_V212_q0 mem_dout 0 11 } } }
	relu_weights_V213 { ap_memory {  { relu_weights_V213_address0 mem_address 1 1 }  { relu_weights_V213_ce0 mem_ce 1 1 }  { relu_weights_V213_q0 mem_dout 0 11 } } }
	relu_weights_V214 { ap_memory {  { relu_weights_V214_address0 mem_address 1 1 }  { relu_weights_V214_ce0 mem_ce 1 1 }  { relu_weights_V214_q0 mem_dout 0 11 } } }
	relu_weights_V215 { ap_memory {  { relu_weights_V215_address0 mem_address 1 1 }  { relu_weights_V215_ce0 mem_ce 1 1 }  { relu_weights_V215_q0 mem_dout 0 11 } } }
	relu_weights_V216 { ap_memory {  { relu_weights_V216_address0 mem_address 1 1 }  { relu_weights_V216_ce0 mem_ce 1 1 }  { relu_weights_V216_q0 mem_dout 0 11 } } }
	relu_weights_V217 { ap_memory {  { relu_weights_V217_address0 mem_address 1 1 }  { relu_weights_V217_ce0 mem_ce 1 1 }  { relu_weights_V217_q0 mem_dout 0 11 } } }
	relu_weights_V218 { ap_memory {  { relu_weights_V218_address0 mem_address 1 1 }  { relu_weights_V218_ce0 mem_ce 1 1 }  { relu_weights_V218_q0 mem_dout 0 11 } } }
	relu_weights_V219 { ap_memory {  { relu_weights_V219_address0 mem_address 1 1 }  { relu_weights_V219_ce0 mem_ce 1 1 }  { relu_weights_V219_q0 mem_dout 0 11 } } }
	relu_weights_V220 { ap_memory {  { relu_weights_V220_address0 mem_address 1 1 }  { relu_weights_V220_ce0 mem_ce 1 1 }  { relu_weights_V220_q0 mem_dout 0 11 } } }
	relu_weights_V221 { ap_memory {  { relu_weights_V221_address0 mem_address 1 1 }  { relu_weights_V221_ce0 mem_ce 1 1 }  { relu_weights_V221_q0 mem_dout 0 11 } } }
	relu_weights_V222 { ap_memory {  { relu_weights_V222_address0 mem_address 1 1 }  { relu_weights_V222_ce0 mem_ce 1 1 }  { relu_weights_V222_q0 mem_dout 0 11 } } }
	relu_weights_V223 { ap_memory {  { relu_weights_V223_address0 mem_address 1 1 }  { relu_weights_V223_ce0 mem_ce 1 1 }  { relu_weights_V223_q0 mem_dout 0 11 } } }
	relu_weights_V224 { ap_memory {  { relu_weights_V224_address0 mem_address 1 1 }  { relu_weights_V224_ce0 mem_ce 1 1 }  { relu_weights_V224_q0 mem_dout 0 11 } } }
	relu_weights_V225 { ap_memory {  { relu_weights_V225_address0 mem_address 1 1 }  { relu_weights_V225_ce0 mem_ce 1 1 }  { relu_weights_V225_q0 mem_dout 0 11 } } }
	top_0_V { ap_memory {  { top_0_V_address0 mem_address 1 7 }  { top_0_V_ce0 mem_ce 1 1 }  { top_0_V_we0 mem_we 1 1 }  { top_0_V_d0 mem_din 1 14 }  { top_0_V_q0 mem_dout 0 14 } } }
	top_1_V { ap_memory {  { top_1_V_address0 mem_address 1 7 }  { top_1_V_ce0 mem_ce 1 1 }  { top_1_V_we0 mem_we 1 1 }  { top_1_V_d0 mem_din 1 14 }  { top_1_V_q0 mem_dout 0 14 } } }
	top_2_V { ap_memory {  { top_2_V_address0 mem_address 1 7 }  { top_2_V_ce0 mem_ce 1 1 }  { top_2_V_we0 mem_we 1 1 }  { top_2_V_d0 mem_din 1 14 }  { top_2_V_q0 mem_dout 0 14 } } }
	top_3_V { ap_memory {  { top_3_V_address0 mem_address 1 7 }  { top_3_V_ce0 mem_ce 1 1 }  { top_3_V_we0 mem_we 1 1 }  { top_3_V_d0 mem_din 1 14 }  { top_3_V_q0 mem_dout 0 14 } } }
	top_4_V { ap_memory {  { top_4_V_address0 mem_address 1 7 }  { top_4_V_ce0 mem_ce 1 1 }  { top_4_V_we0 mem_we 1 1 }  { top_4_V_d0 mem_din 1 14 }  { top_4_V_q0 mem_dout 0 14 } } }
	top_5_V { ap_memory {  { top_5_V_address0 mem_address 1 7 }  { top_5_V_ce0 mem_ce 1 1 }  { top_5_V_we0 mem_we 1 1 }  { top_5_V_d0 mem_din 1 14 }  { top_5_V_q0 mem_dout 0 14 } } }
	top_6_V { ap_memory {  { top_6_V_address0 mem_address 1 7 }  { top_6_V_ce0 mem_ce 1 1 }  { top_6_V_we0 mem_we 1 1 }  { top_6_V_d0 mem_din 1 14 }  { top_6_V_q0 mem_dout 0 14 } } }
	top_7_V { ap_memory {  { top_7_V_address0 mem_address 1 7 }  { top_7_V_ce0 mem_ce 1 1 }  { top_7_V_we0 mem_we 1 1 }  { top_7_V_d0 mem_din 1 14 }  { top_7_V_q0 mem_dout 0 14 } } }
	top_8_V { ap_memory {  { top_8_V_address0 mem_address 1 7 }  { top_8_V_ce0 mem_ce 1 1 }  { top_8_V_we0 mem_we 1 1 }  { top_8_V_d0 mem_din 1 14 }  { top_8_V_q0 mem_dout 0 14 } } }
	top_9_V { ap_memory {  { top_9_V_address0 mem_address 1 7 }  { top_9_V_ce0 mem_ce 1 1 }  { top_9_V_we0 mem_we 1 1 }  { top_9_V_d0 mem_din 1 14 }  { top_9_V_q0 mem_dout 0 14 } } }
	top_10_V { ap_memory {  { top_10_V_address0 mem_address 1 7 }  { top_10_V_ce0 mem_ce 1 1 }  { top_10_V_we0 mem_we 1 1 }  { top_10_V_d0 mem_din 1 14 }  { top_10_V_q0 mem_dout 0 14 } } }
	top_11_V { ap_memory {  { top_11_V_address0 mem_address 1 7 }  { top_11_V_ce0 mem_ce 1 1 }  { top_11_V_we0 mem_we 1 1 }  { top_11_V_d0 mem_din 1 14 }  { top_11_V_q0 mem_dout 0 14 } } }
	top_12_V { ap_memory {  { top_12_V_address0 mem_address 1 7 }  { top_12_V_ce0 mem_ce 1 1 }  { top_12_V_we0 mem_we 1 1 }  { top_12_V_d0 mem_din 1 14 }  { top_12_V_q0 mem_dout 0 14 } } }
	top_13_V { ap_memory {  { top_13_V_address0 mem_address 1 7 }  { top_13_V_ce0 mem_ce 1 1 }  { top_13_V_we0 mem_we 1 1 }  { top_13_V_d0 mem_din 1 14 }  { top_13_V_q0 mem_dout 0 14 } } }
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
	stride { ap_none {  { stride in_data 0 4 } } }
	weight_buf_3x3_V_0 { ap_memory {  { weight_buf_3x3_V_0_address0 mem_address 1 6 }  { weight_buf_3x3_V_0_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_0_q0 mem_dout 0 64 }  { weight_buf_3x3_V_0_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_0_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_0_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_1 { ap_memory {  { weight_buf_3x3_V_1_address0 mem_address 1 6 }  { weight_buf_3x3_V_1_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_1_q0 mem_dout 0 64 }  { weight_buf_3x3_V_1_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_1_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_1_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_2 { ap_memory {  { weight_buf_3x3_V_2_address0 mem_address 1 6 }  { weight_buf_3x3_V_2_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_2_q0 mem_dout 0 64 }  { weight_buf_3x3_V_2_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_2_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_2_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_3 { ap_memory {  { weight_buf_3x3_V_3_address0 mem_address 1 6 }  { weight_buf_3x3_V_3_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_3_q0 mem_dout 0 64 }  { weight_buf_3x3_V_3_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_3_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_3_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_4 { ap_memory {  { weight_buf_3x3_V_4_address0 mem_address 1 6 }  { weight_buf_3x3_V_4_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_4_q0 mem_dout 0 64 }  { weight_buf_3x3_V_4_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_4_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_4_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_5 { ap_memory {  { weight_buf_3x3_V_5_address0 mem_address 1 6 }  { weight_buf_3x3_V_5_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_5_q0 mem_dout 0 64 }  { weight_buf_3x3_V_5_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_5_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_5_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_6 { ap_memory {  { weight_buf_3x3_V_6_address0 mem_address 1 6 }  { weight_buf_3x3_V_6_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_6_q0 mem_dout 0 64 }  { weight_buf_3x3_V_6_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_6_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_6_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_7 { ap_memory {  { weight_buf_3x3_V_7_address0 mem_address 1 6 }  { weight_buf_3x3_V_7_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_7_q0 mem_dout 0 64 }  { weight_buf_3x3_V_7_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_7_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_7_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_8 { ap_memory {  { weight_buf_3x3_V_8_address0 mem_address 1 6 }  { weight_buf_3x3_V_8_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_8_q0 mem_dout 0 64 }  { weight_buf_3x3_V_8_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_8_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_8_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_9 { ap_memory {  { weight_buf_3x3_V_9_address0 mem_address 1 6 }  { weight_buf_3x3_V_9_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_9_q0 mem_dout 0 64 }  { weight_buf_3x3_V_9_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_9_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_9_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_10 { ap_memory {  { weight_buf_3x3_V_10_address0 mem_address 1 6 }  { weight_buf_3x3_V_10_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_10_q0 mem_dout 0 64 }  { weight_buf_3x3_V_10_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_10_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_10_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_11 { ap_memory {  { weight_buf_3x3_V_11_address0 mem_address 1 6 }  { weight_buf_3x3_V_11_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_11_q0 mem_dout 0 64 }  { weight_buf_3x3_V_11_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_11_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_11_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_12 { ap_memory {  { weight_buf_3x3_V_12_address0 mem_address 1 6 }  { weight_buf_3x3_V_12_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_12_q0 mem_dout 0 64 }  { weight_buf_3x3_V_12_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_12_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_12_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_13 { ap_memory {  { weight_buf_3x3_V_13_address0 mem_address 1 6 }  { weight_buf_3x3_V_13_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_13_q0 mem_dout 0 64 }  { weight_buf_3x3_V_13_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_13_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_13_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_14 { ap_memory {  { weight_buf_3x3_V_14_address0 mem_address 1 6 }  { weight_buf_3x3_V_14_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_14_q0 mem_dout 0 64 }  { weight_buf_3x3_V_14_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_14_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_14_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_15 { ap_memory {  { weight_buf_3x3_V_15_address0 mem_address 1 6 }  { weight_buf_3x3_V_15_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_15_q0 mem_dout 0 64 }  { weight_buf_3x3_V_15_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_15_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_15_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_16 { ap_memory {  { weight_buf_3x3_V_16_address0 mem_address 1 6 }  { weight_buf_3x3_V_16_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_16_q0 mem_dout 0 64 }  { weight_buf_3x3_V_16_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_16_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_16_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_17 { ap_memory {  { weight_buf_3x3_V_17_address0 mem_address 1 6 }  { weight_buf_3x3_V_17_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_17_q0 mem_dout 0 64 }  { weight_buf_3x3_V_17_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_17_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_17_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_18 { ap_memory {  { weight_buf_3x3_V_18_address0 mem_address 1 6 }  { weight_buf_3x3_V_18_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_18_q0 mem_dout 0 64 }  { weight_buf_3x3_V_18_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_18_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_18_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_19 { ap_memory {  { weight_buf_3x3_V_19_address0 mem_address 1 6 }  { weight_buf_3x3_V_19_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_19_q0 mem_dout 0 64 }  { weight_buf_3x3_V_19_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_19_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_19_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_20 { ap_memory {  { weight_buf_3x3_V_20_address0 mem_address 1 6 }  { weight_buf_3x3_V_20_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_20_q0 mem_dout 0 64 }  { weight_buf_3x3_V_20_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_20_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_20_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_21 { ap_memory {  { weight_buf_3x3_V_21_address0 mem_address 1 6 }  { weight_buf_3x3_V_21_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_21_q0 mem_dout 0 64 }  { weight_buf_3x3_V_21_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_21_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_21_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_22 { ap_memory {  { weight_buf_3x3_V_22_address0 mem_address 1 6 }  { weight_buf_3x3_V_22_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_22_q0 mem_dout 0 64 }  { weight_buf_3x3_V_22_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_22_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_22_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_23 { ap_memory {  { weight_buf_3x3_V_23_address0 mem_address 1 6 }  { weight_buf_3x3_V_23_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_23_q0 mem_dout 0 64 }  { weight_buf_3x3_V_23_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_23_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_23_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_24 { ap_memory {  { weight_buf_3x3_V_24_address0 mem_address 1 6 }  { weight_buf_3x3_V_24_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_24_q0 mem_dout 0 64 }  { weight_buf_3x3_V_24_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_24_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_24_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_25 { ap_memory {  { weight_buf_3x3_V_25_address0 mem_address 1 6 }  { weight_buf_3x3_V_25_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_25_q0 mem_dout 0 64 }  { weight_buf_3x3_V_25_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_25_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_25_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_26 { ap_memory {  { weight_buf_3x3_V_26_address0 mem_address 1 6 }  { weight_buf_3x3_V_26_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_26_q0 mem_dout 0 64 }  { weight_buf_3x3_V_26_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_26_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_26_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_27 { ap_memory {  { weight_buf_3x3_V_27_address0 mem_address 1 6 }  { weight_buf_3x3_V_27_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_27_q0 mem_dout 0 64 }  { weight_buf_3x3_V_27_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_27_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_27_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_28 { ap_memory {  { weight_buf_3x3_V_28_address0 mem_address 1 6 }  { weight_buf_3x3_V_28_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_28_q0 mem_dout 0 64 }  { weight_buf_3x3_V_28_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_28_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_28_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_29 { ap_memory {  { weight_buf_3x3_V_29_address0 mem_address 1 6 }  { weight_buf_3x3_V_29_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_29_q0 mem_dout 0 64 }  { weight_buf_3x3_V_29_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_29_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_29_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_30 { ap_memory {  { weight_buf_3x3_V_30_address0 mem_address 1 6 }  { weight_buf_3x3_V_30_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_30_q0 mem_dout 0 64 }  { weight_buf_3x3_V_30_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_30_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_30_q1 MemPortDOUT2 0 64 } } }
	weight_buf_3x3_V_31 { ap_memory {  { weight_buf_3x3_V_31_address0 mem_address 1 6 }  { weight_buf_3x3_V_31_ce0 mem_ce 1 1 }  { weight_buf_3x3_V_31_q0 mem_dout 0 64 }  { weight_buf_3x3_V_31_address1 MemPortADDR2 1 6 }  { weight_buf_3x3_V_31_ce1 MemPortCE2 1 1 }  { weight_buf_3x3_V_31_q1 MemPortDOUT2 0 64 } } }
}
