set moduleName load_layer_1D_weight
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
set C_modelName {load_layer_1D_weight}
set C_modelType { int 4096 }
set C_modelArgList {
	{ weights_all_V int 512 regular {axi_master 0}  }
	{ weights_all_V_offset int 26 regular  }
	{ weights_all_ptr_start_offset int 13 regular  }
	{ c_out int 6 regular  }
	{ conv_out_channels_offset int 12 regular  }
	{ pw_out_channels_offset int 12 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "weights_all_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "weights_all_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "weights_all_ptr_start_offset", "interface" : "wire", "bitwidth" : 13, "direction" : "READONLY"} , 
 	{ "Name" : "c_out", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "conv_out_channels_offset", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "pw_out_channels_offset", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 4096} ]}
# RTL Port declarations: 
set portNum 312
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_weights_all_V_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_weights_all_V_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_weights_all_V_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_weights_all_V_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_weights_all_V_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_weights_all_V_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_weights_all_V_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_weights_all_V_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_weights_all_V_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_weights_all_V_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_weights_all_V_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_weights_all_V_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_weights_all_V_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_weights_all_V_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_weights_all_V_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_weights_all_V_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_weights_all_V_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_weights_all_V_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_weights_all_V_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_weights_all_V_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_weights_all_V_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_weights_all_V_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_weights_all_V_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_weights_all_V_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_weights_all_V_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_weights_all_V_BUSER sc_in sc_lv 1 signal 0 } 
	{ weights_all_V_offset sc_in sc_lv 26 signal 1 } 
	{ weights_all_ptr_start_offset sc_in sc_lv 13 signal 2 } 
	{ c_out sc_in sc_lv 6 signal 3 } 
	{ conv_out_channels_offset sc_in sc_lv 12 signal 4 } 
	{ pw_out_channels_offset sc_in sc_lv 12 signal 5 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
	{ ap_return_8 sc_out sc_lv 16 signal -1 } 
	{ ap_return_9 sc_out sc_lv 16 signal -1 } 
	{ ap_return_10 sc_out sc_lv 16 signal -1 } 
	{ ap_return_11 sc_out sc_lv 16 signal -1 } 
	{ ap_return_12 sc_out sc_lv 16 signal -1 } 
	{ ap_return_13 sc_out sc_lv 16 signal -1 } 
	{ ap_return_14 sc_out sc_lv 16 signal -1 } 
	{ ap_return_15 sc_out sc_lv 16 signal -1 } 
	{ ap_return_16 sc_out sc_lv 16 signal -1 } 
	{ ap_return_17 sc_out sc_lv 16 signal -1 } 
	{ ap_return_18 sc_out sc_lv 16 signal -1 } 
	{ ap_return_19 sc_out sc_lv 16 signal -1 } 
	{ ap_return_20 sc_out sc_lv 16 signal -1 } 
	{ ap_return_21 sc_out sc_lv 16 signal -1 } 
	{ ap_return_22 sc_out sc_lv 16 signal -1 } 
	{ ap_return_23 sc_out sc_lv 16 signal -1 } 
	{ ap_return_24 sc_out sc_lv 16 signal -1 } 
	{ ap_return_25 sc_out sc_lv 16 signal -1 } 
	{ ap_return_26 sc_out sc_lv 16 signal -1 } 
	{ ap_return_27 sc_out sc_lv 16 signal -1 } 
	{ ap_return_28 sc_out sc_lv 16 signal -1 } 
	{ ap_return_29 sc_out sc_lv 16 signal -1 } 
	{ ap_return_30 sc_out sc_lv 16 signal -1 } 
	{ ap_return_31 sc_out sc_lv 16 signal -1 } 
	{ ap_return_32 sc_out sc_lv 16 signal -1 } 
	{ ap_return_33 sc_out sc_lv 16 signal -1 } 
	{ ap_return_34 sc_out sc_lv 16 signal -1 } 
	{ ap_return_35 sc_out sc_lv 16 signal -1 } 
	{ ap_return_36 sc_out sc_lv 16 signal -1 } 
	{ ap_return_37 sc_out sc_lv 16 signal -1 } 
	{ ap_return_38 sc_out sc_lv 16 signal -1 } 
	{ ap_return_39 sc_out sc_lv 16 signal -1 } 
	{ ap_return_40 sc_out sc_lv 16 signal -1 } 
	{ ap_return_41 sc_out sc_lv 16 signal -1 } 
	{ ap_return_42 sc_out sc_lv 16 signal -1 } 
	{ ap_return_43 sc_out sc_lv 16 signal -1 } 
	{ ap_return_44 sc_out sc_lv 16 signal -1 } 
	{ ap_return_45 sc_out sc_lv 16 signal -1 } 
	{ ap_return_46 sc_out sc_lv 16 signal -1 } 
	{ ap_return_47 sc_out sc_lv 16 signal -1 } 
	{ ap_return_48 sc_out sc_lv 16 signal -1 } 
	{ ap_return_49 sc_out sc_lv 16 signal -1 } 
	{ ap_return_50 sc_out sc_lv 16 signal -1 } 
	{ ap_return_51 sc_out sc_lv 16 signal -1 } 
	{ ap_return_52 sc_out sc_lv 16 signal -1 } 
	{ ap_return_53 sc_out sc_lv 16 signal -1 } 
	{ ap_return_54 sc_out sc_lv 16 signal -1 } 
	{ ap_return_55 sc_out sc_lv 16 signal -1 } 
	{ ap_return_56 sc_out sc_lv 16 signal -1 } 
	{ ap_return_57 sc_out sc_lv 16 signal -1 } 
	{ ap_return_58 sc_out sc_lv 16 signal -1 } 
	{ ap_return_59 sc_out sc_lv 16 signal -1 } 
	{ ap_return_60 sc_out sc_lv 16 signal -1 } 
	{ ap_return_61 sc_out sc_lv 16 signal -1 } 
	{ ap_return_62 sc_out sc_lv 16 signal -1 } 
	{ ap_return_63 sc_out sc_lv 16 signal -1 } 
	{ ap_return_64 sc_out sc_lv 16 signal -1 } 
	{ ap_return_65 sc_out sc_lv 16 signal -1 } 
	{ ap_return_66 sc_out sc_lv 16 signal -1 } 
	{ ap_return_67 sc_out sc_lv 16 signal -1 } 
	{ ap_return_68 sc_out sc_lv 16 signal -1 } 
	{ ap_return_69 sc_out sc_lv 16 signal -1 } 
	{ ap_return_70 sc_out sc_lv 16 signal -1 } 
	{ ap_return_71 sc_out sc_lv 16 signal -1 } 
	{ ap_return_72 sc_out sc_lv 16 signal -1 } 
	{ ap_return_73 sc_out sc_lv 16 signal -1 } 
	{ ap_return_74 sc_out sc_lv 16 signal -1 } 
	{ ap_return_75 sc_out sc_lv 16 signal -1 } 
	{ ap_return_76 sc_out sc_lv 16 signal -1 } 
	{ ap_return_77 sc_out sc_lv 16 signal -1 } 
	{ ap_return_78 sc_out sc_lv 16 signal -1 } 
	{ ap_return_79 sc_out sc_lv 16 signal -1 } 
	{ ap_return_80 sc_out sc_lv 16 signal -1 } 
	{ ap_return_81 sc_out sc_lv 16 signal -1 } 
	{ ap_return_82 sc_out sc_lv 16 signal -1 } 
	{ ap_return_83 sc_out sc_lv 16 signal -1 } 
	{ ap_return_84 sc_out sc_lv 16 signal -1 } 
	{ ap_return_85 sc_out sc_lv 16 signal -1 } 
	{ ap_return_86 sc_out sc_lv 16 signal -1 } 
	{ ap_return_87 sc_out sc_lv 16 signal -1 } 
	{ ap_return_88 sc_out sc_lv 16 signal -1 } 
	{ ap_return_89 sc_out sc_lv 16 signal -1 } 
	{ ap_return_90 sc_out sc_lv 16 signal -1 } 
	{ ap_return_91 sc_out sc_lv 16 signal -1 } 
	{ ap_return_92 sc_out sc_lv 16 signal -1 } 
	{ ap_return_93 sc_out sc_lv 16 signal -1 } 
	{ ap_return_94 sc_out sc_lv 16 signal -1 } 
	{ ap_return_95 sc_out sc_lv 16 signal -1 } 
	{ ap_return_96 sc_out sc_lv 16 signal -1 } 
	{ ap_return_97 sc_out sc_lv 16 signal -1 } 
	{ ap_return_98 sc_out sc_lv 16 signal -1 } 
	{ ap_return_99 sc_out sc_lv 16 signal -1 } 
	{ ap_return_100 sc_out sc_lv 16 signal -1 } 
	{ ap_return_101 sc_out sc_lv 16 signal -1 } 
	{ ap_return_102 sc_out sc_lv 16 signal -1 } 
	{ ap_return_103 sc_out sc_lv 16 signal -1 } 
	{ ap_return_104 sc_out sc_lv 16 signal -1 } 
	{ ap_return_105 sc_out sc_lv 16 signal -1 } 
	{ ap_return_106 sc_out sc_lv 16 signal -1 } 
	{ ap_return_107 sc_out sc_lv 16 signal -1 } 
	{ ap_return_108 sc_out sc_lv 16 signal -1 } 
	{ ap_return_109 sc_out sc_lv 16 signal -1 } 
	{ ap_return_110 sc_out sc_lv 16 signal -1 } 
	{ ap_return_111 sc_out sc_lv 16 signal -1 } 
	{ ap_return_112 sc_out sc_lv 16 signal -1 } 
	{ ap_return_113 sc_out sc_lv 16 signal -1 } 
	{ ap_return_114 sc_out sc_lv 16 signal -1 } 
	{ ap_return_115 sc_out sc_lv 16 signal -1 } 
	{ ap_return_116 sc_out sc_lv 16 signal -1 } 
	{ ap_return_117 sc_out sc_lv 16 signal -1 } 
	{ ap_return_118 sc_out sc_lv 16 signal -1 } 
	{ ap_return_119 sc_out sc_lv 16 signal -1 } 
	{ ap_return_120 sc_out sc_lv 16 signal -1 } 
	{ ap_return_121 sc_out sc_lv 16 signal -1 } 
	{ ap_return_122 sc_out sc_lv 16 signal -1 } 
	{ ap_return_123 sc_out sc_lv 16 signal -1 } 
	{ ap_return_124 sc_out sc_lv 16 signal -1 } 
	{ ap_return_125 sc_out sc_lv 16 signal -1 } 
	{ ap_return_126 sc_out sc_lv 16 signal -1 } 
	{ ap_return_127 sc_out sc_lv 16 signal -1 } 
	{ ap_return_128 sc_out sc_lv 16 signal -1 } 
	{ ap_return_129 sc_out sc_lv 16 signal -1 } 
	{ ap_return_130 sc_out sc_lv 16 signal -1 } 
	{ ap_return_131 sc_out sc_lv 16 signal -1 } 
	{ ap_return_132 sc_out sc_lv 16 signal -1 } 
	{ ap_return_133 sc_out sc_lv 16 signal -1 } 
	{ ap_return_134 sc_out sc_lv 16 signal -1 } 
	{ ap_return_135 sc_out sc_lv 16 signal -1 } 
	{ ap_return_136 sc_out sc_lv 16 signal -1 } 
	{ ap_return_137 sc_out sc_lv 16 signal -1 } 
	{ ap_return_138 sc_out sc_lv 16 signal -1 } 
	{ ap_return_139 sc_out sc_lv 16 signal -1 } 
	{ ap_return_140 sc_out sc_lv 16 signal -1 } 
	{ ap_return_141 sc_out sc_lv 16 signal -1 } 
	{ ap_return_142 sc_out sc_lv 16 signal -1 } 
	{ ap_return_143 sc_out sc_lv 16 signal -1 } 
	{ ap_return_144 sc_out sc_lv 16 signal -1 } 
	{ ap_return_145 sc_out sc_lv 16 signal -1 } 
	{ ap_return_146 sc_out sc_lv 16 signal -1 } 
	{ ap_return_147 sc_out sc_lv 16 signal -1 } 
	{ ap_return_148 sc_out sc_lv 16 signal -1 } 
	{ ap_return_149 sc_out sc_lv 16 signal -1 } 
	{ ap_return_150 sc_out sc_lv 16 signal -1 } 
	{ ap_return_151 sc_out sc_lv 16 signal -1 } 
	{ ap_return_152 sc_out sc_lv 16 signal -1 } 
	{ ap_return_153 sc_out sc_lv 16 signal -1 } 
	{ ap_return_154 sc_out sc_lv 16 signal -1 } 
	{ ap_return_155 sc_out sc_lv 16 signal -1 } 
	{ ap_return_156 sc_out sc_lv 16 signal -1 } 
	{ ap_return_157 sc_out sc_lv 16 signal -1 } 
	{ ap_return_158 sc_out sc_lv 16 signal -1 } 
	{ ap_return_159 sc_out sc_lv 16 signal -1 } 
	{ ap_return_160 sc_out sc_lv 16 signal -1 } 
	{ ap_return_161 sc_out sc_lv 16 signal -1 } 
	{ ap_return_162 sc_out sc_lv 16 signal -1 } 
	{ ap_return_163 sc_out sc_lv 16 signal -1 } 
	{ ap_return_164 sc_out sc_lv 16 signal -1 } 
	{ ap_return_165 sc_out sc_lv 16 signal -1 } 
	{ ap_return_166 sc_out sc_lv 16 signal -1 } 
	{ ap_return_167 sc_out sc_lv 16 signal -1 } 
	{ ap_return_168 sc_out sc_lv 16 signal -1 } 
	{ ap_return_169 sc_out sc_lv 16 signal -1 } 
	{ ap_return_170 sc_out sc_lv 16 signal -1 } 
	{ ap_return_171 sc_out sc_lv 16 signal -1 } 
	{ ap_return_172 sc_out sc_lv 16 signal -1 } 
	{ ap_return_173 sc_out sc_lv 16 signal -1 } 
	{ ap_return_174 sc_out sc_lv 16 signal -1 } 
	{ ap_return_175 sc_out sc_lv 16 signal -1 } 
	{ ap_return_176 sc_out sc_lv 16 signal -1 } 
	{ ap_return_177 sc_out sc_lv 16 signal -1 } 
	{ ap_return_178 sc_out sc_lv 16 signal -1 } 
	{ ap_return_179 sc_out sc_lv 16 signal -1 } 
	{ ap_return_180 sc_out sc_lv 16 signal -1 } 
	{ ap_return_181 sc_out sc_lv 16 signal -1 } 
	{ ap_return_182 sc_out sc_lv 16 signal -1 } 
	{ ap_return_183 sc_out sc_lv 16 signal -1 } 
	{ ap_return_184 sc_out sc_lv 16 signal -1 } 
	{ ap_return_185 sc_out sc_lv 16 signal -1 } 
	{ ap_return_186 sc_out sc_lv 16 signal -1 } 
	{ ap_return_187 sc_out sc_lv 16 signal -1 } 
	{ ap_return_188 sc_out sc_lv 16 signal -1 } 
	{ ap_return_189 sc_out sc_lv 16 signal -1 } 
	{ ap_return_190 sc_out sc_lv 16 signal -1 } 
	{ ap_return_191 sc_out sc_lv 16 signal -1 } 
	{ ap_return_192 sc_out sc_lv 16 signal -1 } 
	{ ap_return_193 sc_out sc_lv 16 signal -1 } 
	{ ap_return_194 sc_out sc_lv 16 signal -1 } 
	{ ap_return_195 sc_out sc_lv 16 signal -1 } 
	{ ap_return_196 sc_out sc_lv 16 signal -1 } 
	{ ap_return_197 sc_out sc_lv 16 signal -1 } 
	{ ap_return_198 sc_out sc_lv 16 signal -1 } 
	{ ap_return_199 sc_out sc_lv 16 signal -1 } 
	{ ap_return_200 sc_out sc_lv 16 signal -1 } 
	{ ap_return_201 sc_out sc_lv 16 signal -1 } 
	{ ap_return_202 sc_out sc_lv 16 signal -1 } 
	{ ap_return_203 sc_out sc_lv 16 signal -1 } 
	{ ap_return_204 sc_out sc_lv 16 signal -1 } 
	{ ap_return_205 sc_out sc_lv 16 signal -1 } 
	{ ap_return_206 sc_out sc_lv 16 signal -1 } 
	{ ap_return_207 sc_out sc_lv 16 signal -1 } 
	{ ap_return_208 sc_out sc_lv 16 signal -1 } 
	{ ap_return_209 sc_out sc_lv 16 signal -1 } 
	{ ap_return_210 sc_out sc_lv 16 signal -1 } 
	{ ap_return_211 sc_out sc_lv 16 signal -1 } 
	{ ap_return_212 sc_out sc_lv 16 signal -1 } 
	{ ap_return_213 sc_out sc_lv 16 signal -1 } 
	{ ap_return_214 sc_out sc_lv 16 signal -1 } 
	{ ap_return_215 sc_out sc_lv 16 signal -1 } 
	{ ap_return_216 sc_out sc_lv 16 signal -1 } 
	{ ap_return_217 sc_out sc_lv 16 signal -1 } 
	{ ap_return_218 sc_out sc_lv 16 signal -1 } 
	{ ap_return_219 sc_out sc_lv 16 signal -1 } 
	{ ap_return_220 sc_out sc_lv 16 signal -1 } 
	{ ap_return_221 sc_out sc_lv 16 signal -1 } 
	{ ap_return_222 sc_out sc_lv 16 signal -1 } 
	{ ap_return_223 sc_out sc_lv 16 signal -1 } 
	{ ap_return_224 sc_out sc_lv 16 signal -1 } 
	{ ap_return_225 sc_out sc_lv 16 signal -1 } 
	{ ap_return_226 sc_out sc_lv 16 signal -1 } 
	{ ap_return_227 sc_out sc_lv 16 signal -1 } 
	{ ap_return_228 sc_out sc_lv 16 signal -1 } 
	{ ap_return_229 sc_out sc_lv 16 signal -1 } 
	{ ap_return_230 sc_out sc_lv 16 signal -1 } 
	{ ap_return_231 sc_out sc_lv 16 signal -1 } 
	{ ap_return_232 sc_out sc_lv 16 signal -1 } 
	{ ap_return_233 sc_out sc_lv 16 signal -1 } 
	{ ap_return_234 sc_out sc_lv 16 signal -1 } 
	{ ap_return_235 sc_out sc_lv 16 signal -1 } 
	{ ap_return_236 sc_out sc_lv 16 signal -1 } 
	{ ap_return_237 sc_out sc_lv 16 signal -1 } 
	{ ap_return_238 sc_out sc_lv 16 signal -1 } 
	{ ap_return_239 sc_out sc_lv 16 signal -1 } 
	{ ap_return_240 sc_out sc_lv 16 signal -1 } 
	{ ap_return_241 sc_out sc_lv 16 signal -1 } 
	{ ap_return_242 sc_out sc_lv 16 signal -1 } 
	{ ap_return_243 sc_out sc_lv 16 signal -1 } 
	{ ap_return_244 sc_out sc_lv 16 signal -1 } 
	{ ap_return_245 sc_out sc_lv 16 signal -1 } 
	{ ap_return_246 sc_out sc_lv 16 signal -1 } 
	{ ap_return_247 sc_out sc_lv 16 signal -1 } 
	{ ap_return_248 sc_out sc_lv 16 signal -1 } 
	{ ap_return_249 sc_out sc_lv 16 signal -1 } 
	{ ap_return_250 sc_out sc_lv 16 signal -1 } 
	{ ap_return_251 sc_out sc_lv 16 signal -1 } 
	{ ap_return_252 sc_out sc_lv 16 signal -1 } 
	{ ap_return_253 sc_out sc_lv 16 signal -1 } 
	{ ap_return_254 sc_out sc_lv 16 signal -1 } 
	{ ap_return_255 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_weights_all_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_weights_all_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_weights_all_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_weights_all_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWID" }} , 
 	{ "name": "m_axi_weights_all_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_weights_all_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_weights_all_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_weights_all_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_weights_all_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_weights_all_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_weights_all_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_weights_all_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_weights_all_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_weights_all_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_weights_all_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_weights_all_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "weights_all_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_weights_all_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "weights_all_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_weights_all_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_weights_all_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "WID" }} , 
 	{ "name": "m_axi_weights_all_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_weights_all_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_weights_all_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_weights_all_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_weights_all_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARID" }} , 
 	{ "name": "m_axi_weights_all_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_weights_all_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_weights_all_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_weights_all_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_weights_all_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_weights_all_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_weights_all_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_weights_all_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_weights_all_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_weights_all_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_weights_all_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_weights_all_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "weights_all_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_weights_all_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_weights_all_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "RID" }} , 
 	{ "name": "m_axi_weights_all_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_weights_all_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_all_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_weights_all_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_weights_all_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_weights_all_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_all_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_weights_all_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "BID" }} , 
 	{ "name": "m_axi_weights_all_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_all_V", "role": "BUSER" }} , 
 	{ "name": "weights_all_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "weights_all_V_offset", "role": "default" }} , 
 	{ "name": "weights_all_ptr_start_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "weights_all_ptr_start_offset", "role": "default" }} , 
 	{ "name": "c_out", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "c_out", "role": "default" }} , 
 	{ "name": "conv_out_channels_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv_out_channels_offset", "role": "default" }} , 
 	{ "name": "pw_out_channels_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "pw_out_channels_offset", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }} , 
 	{ "name": "ap_return_32", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_32", "role": "default" }} , 
 	{ "name": "ap_return_33", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_33", "role": "default" }} , 
 	{ "name": "ap_return_34", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_34", "role": "default" }} , 
 	{ "name": "ap_return_35", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_35", "role": "default" }} , 
 	{ "name": "ap_return_36", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_36", "role": "default" }} , 
 	{ "name": "ap_return_37", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_37", "role": "default" }} , 
 	{ "name": "ap_return_38", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_38", "role": "default" }} , 
 	{ "name": "ap_return_39", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_39", "role": "default" }} , 
 	{ "name": "ap_return_40", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_40", "role": "default" }} , 
 	{ "name": "ap_return_41", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_41", "role": "default" }} , 
 	{ "name": "ap_return_42", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_42", "role": "default" }} , 
 	{ "name": "ap_return_43", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_43", "role": "default" }} , 
 	{ "name": "ap_return_44", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_44", "role": "default" }} , 
 	{ "name": "ap_return_45", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_45", "role": "default" }} , 
 	{ "name": "ap_return_46", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_46", "role": "default" }} , 
 	{ "name": "ap_return_47", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_47", "role": "default" }} , 
 	{ "name": "ap_return_48", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_48", "role": "default" }} , 
 	{ "name": "ap_return_49", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_49", "role": "default" }} , 
 	{ "name": "ap_return_50", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_50", "role": "default" }} , 
 	{ "name": "ap_return_51", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_51", "role": "default" }} , 
 	{ "name": "ap_return_52", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_52", "role": "default" }} , 
 	{ "name": "ap_return_53", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_53", "role": "default" }} , 
 	{ "name": "ap_return_54", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_54", "role": "default" }} , 
 	{ "name": "ap_return_55", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_55", "role": "default" }} , 
 	{ "name": "ap_return_56", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_56", "role": "default" }} , 
 	{ "name": "ap_return_57", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_57", "role": "default" }} , 
 	{ "name": "ap_return_58", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_58", "role": "default" }} , 
 	{ "name": "ap_return_59", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_59", "role": "default" }} , 
 	{ "name": "ap_return_60", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_60", "role": "default" }} , 
 	{ "name": "ap_return_61", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_61", "role": "default" }} , 
 	{ "name": "ap_return_62", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_62", "role": "default" }} , 
 	{ "name": "ap_return_63", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_63", "role": "default" }} , 
 	{ "name": "ap_return_64", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_64", "role": "default" }} , 
 	{ "name": "ap_return_65", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_65", "role": "default" }} , 
 	{ "name": "ap_return_66", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_66", "role": "default" }} , 
 	{ "name": "ap_return_67", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_67", "role": "default" }} , 
 	{ "name": "ap_return_68", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_68", "role": "default" }} , 
 	{ "name": "ap_return_69", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_69", "role": "default" }} , 
 	{ "name": "ap_return_70", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_70", "role": "default" }} , 
 	{ "name": "ap_return_71", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_71", "role": "default" }} , 
 	{ "name": "ap_return_72", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_72", "role": "default" }} , 
 	{ "name": "ap_return_73", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_73", "role": "default" }} , 
 	{ "name": "ap_return_74", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_74", "role": "default" }} , 
 	{ "name": "ap_return_75", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_75", "role": "default" }} , 
 	{ "name": "ap_return_76", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_76", "role": "default" }} , 
 	{ "name": "ap_return_77", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_77", "role": "default" }} , 
 	{ "name": "ap_return_78", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_78", "role": "default" }} , 
 	{ "name": "ap_return_79", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_79", "role": "default" }} , 
 	{ "name": "ap_return_80", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_80", "role": "default" }} , 
 	{ "name": "ap_return_81", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_81", "role": "default" }} , 
 	{ "name": "ap_return_82", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_82", "role": "default" }} , 
 	{ "name": "ap_return_83", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_83", "role": "default" }} , 
 	{ "name": "ap_return_84", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_84", "role": "default" }} , 
 	{ "name": "ap_return_85", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_85", "role": "default" }} , 
 	{ "name": "ap_return_86", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_86", "role": "default" }} , 
 	{ "name": "ap_return_87", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_87", "role": "default" }} , 
 	{ "name": "ap_return_88", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_88", "role": "default" }} , 
 	{ "name": "ap_return_89", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_89", "role": "default" }} , 
 	{ "name": "ap_return_90", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_90", "role": "default" }} , 
 	{ "name": "ap_return_91", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_91", "role": "default" }} , 
 	{ "name": "ap_return_92", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_92", "role": "default" }} , 
 	{ "name": "ap_return_93", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_93", "role": "default" }} , 
 	{ "name": "ap_return_94", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_94", "role": "default" }} , 
 	{ "name": "ap_return_95", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_95", "role": "default" }} , 
 	{ "name": "ap_return_96", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_96", "role": "default" }} , 
 	{ "name": "ap_return_97", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_97", "role": "default" }} , 
 	{ "name": "ap_return_98", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_98", "role": "default" }} , 
 	{ "name": "ap_return_99", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_99", "role": "default" }} , 
 	{ "name": "ap_return_100", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_100", "role": "default" }} , 
 	{ "name": "ap_return_101", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_101", "role": "default" }} , 
 	{ "name": "ap_return_102", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_102", "role": "default" }} , 
 	{ "name": "ap_return_103", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_103", "role": "default" }} , 
 	{ "name": "ap_return_104", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_104", "role": "default" }} , 
 	{ "name": "ap_return_105", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_105", "role": "default" }} , 
 	{ "name": "ap_return_106", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_106", "role": "default" }} , 
 	{ "name": "ap_return_107", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_107", "role": "default" }} , 
 	{ "name": "ap_return_108", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_108", "role": "default" }} , 
 	{ "name": "ap_return_109", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_109", "role": "default" }} , 
 	{ "name": "ap_return_110", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_110", "role": "default" }} , 
 	{ "name": "ap_return_111", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_111", "role": "default" }} , 
 	{ "name": "ap_return_112", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_112", "role": "default" }} , 
 	{ "name": "ap_return_113", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_113", "role": "default" }} , 
 	{ "name": "ap_return_114", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_114", "role": "default" }} , 
 	{ "name": "ap_return_115", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_115", "role": "default" }} , 
 	{ "name": "ap_return_116", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_116", "role": "default" }} , 
 	{ "name": "ap_return_117", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_117", "role": "default" }} , 
 	{ "name": "ap_return_118", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_118", "role": "default" }} , 
 	{ "name": "ap_return_119", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_119", "role": "default" }} , 
 	{ "name": "ap_return_120", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_120", "role": "default" }} , 
 	{ "name": "ap_return_121", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_121", "role": "default" }} , 
 	{ "name": "ap_return_122", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_122", "role": "default" }} , 
 	{ "name": "ap_return_123", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_123", "role": "default" }} , 
 	{ "name": "ap_return_124", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_124", "role": "default" }} , 
 	{ "name": "ap_return_125", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_125", "role": "default" }} , 
 	{ "name": "ap_return_126", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_126", "role": "default" }} , 
 	{ "name": "ap_return_127", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_127", "role": "default" }} , 
 	{ "name": "ap_return_128", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_128", "role": "default" }} , 
 	{ "name": "ap_return_129", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_129", "role": "default" }} , 
 	{ "name": "ap_return_130", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_130", "role": "default" }} , 
 	{ "name": "ap_return_131", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_131", "role": "default" }} , 
 	{ "name": "ap_return_132", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_132", "role": "default" }} , 
 	{ "name": "ap_return_133", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_133", "role": "default" }} , 
 	{ "name": "ap_return_134", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_134", "role": "default" }} , 
 	{ "name": "ap_return_135", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_135", "role": "default" }} , 
 	{ "name": "ap_return_136", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_136", "role": "default" }} , 
 	{ "name": "ap_return_137", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_137", "role": "default" }} , 
 	{ "name": "ap_return_138", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_138", "role": "default" }} , 
 	{ "name": "ap_return_139", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_139", "role": "default" }} , 
 	{ "name": "ap_return_140", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_140", "role": "default" }} , 
 	{ "name": "ap_return_141", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_141", "role": "default" }} , 
 	{ "name": "ap_return_142", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_142", "role": "default" }} , 
 	{ "name": "ap_return_143", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_143", "role": "default" }} , 
 	{ "name": "ap_return_144", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_144", "role": "default" }} , 
 	{ "name": "ap_return_145", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_145", "role": "default" }} , 
 	{ "name": "ap_return_146", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_146", "role": "default" }} , 
 	{ "name": "ap_return_147", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_147", "role": "default" }} , 
 	{ "name": "ap_return_148", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_148", "role": "default" }} , 
 	{ "name": "ap_return_149", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_149", "role": "default" }} , 
 	{ "name": "ap_return_150", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_150", "role": "default" }} , 
 	{ "name": "ap_return_151", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_151", "role": "default" }} , 
 	{ "name": "ap_return_152", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_152", "role": "default" }} , 
 	{ "name": "ap_return_153", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_153", "role": "default" }} , 
 	{ "name": "ap_return_154", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_154", "role": "default" }} , 
 	{ "name": "ap_return_155", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_155", "role": "default" }} , 
 	{ "name": "ap_return_156", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_156", "role": "default" }} , 
 	{ "name": "ap_return_157", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_157", "role": "default" }} , 
 	{ "name": "ap_return_158", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_158", "role": "default" }} , 
 	{ "name": "ap_return_159", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_159", "role": "default" }} , 
 	{ "name": "ap_return_160", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_160", "role": "default" }} , 
 	{ "name": "ap_return_161", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_161", "role": "default" }} , 
 	{ "name": "ap_return_162", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_162", "role": "default" }} , 
 	{ "name": "ap_return_163", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_163", "role": "default" }} , 
 	{ "name": "ap_return_164", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_164", "role": "default" }} , 
 	{ "name": "ap_return_165", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_165", "role": "default" }} , 
 	{ "name": "ap_return_166", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_166", "role": "default" }} , 
 	{ "name": "ap_return_167", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_167", "role": "default" }} , 
 	{ "name": "ap_return_168", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_168", "role": "default" }} , 
 	{ "name": "ap_return_169", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_169", "role": "default" }} , 
 	{ "name": "ap_return_170", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_170", "role": "default" }} , 
 	{ "name": "ap_return_171", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_171", "role": "default" }} , 
 	{ "name": "ap_return_172", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_172", "role": "default" }} , 
 	{ "name": "ap_return_173", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_173", "role": "default" }} , 
 	{ "name": "ap_return_174", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_174", "role": "default" }} , 
 	{ "name": "ap_return_175", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_175", "role": "default" }} , 
 	{ "name": "ap_return_176", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_176", "role": "default" }} , 
 	{ "name": "ap_return_177", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_177", "role": "default" }} , 
 	{ "name": "ap_return_178", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_178", "role": "default" }} , 
 	{ "name": "ap_return_179", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_179", "role": "default" }} , 
 	{ "name": "ap_return_180", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_180", "role": "default" }} , 
 	{ "name": "ap_return_181", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_181", "role": "default" }} , 
 	{ "name": "ap_return_182", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_182", "role": "default" }} , 
 	{ "name": "ap_return_183", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_183", "role": "default" }} , 
 	{ "name": "ap_return_184", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_184", "role": "default" }} , 
 	{ "name": "ap_return_185", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_185", "role": "default" }} , 
 	{ "name": "ap_return_186", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_186", "role": "default" }} , 
 	{ "name": "ap_return_187", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_187", "role": "default" }} , 
 	{ "name": "ap_return_188", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_188", "role": "default" }} , 
 	{ "name": "ap_return_189", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_189", "role": "default" }} , 
 	{ "name": "ap_return_190", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_190", "role": "default" }} , 
 	{ "name": "ap_return_191", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_191", "role": "default" }} , 
 	{ "name": "ap_return_192", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_192", "role": "default" }} , 
 	{ "name": "ap_return_193", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_193", "role": "default" }} , 
 	{ "name": "ap_return_194", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_194", "role": "default" }} , 
 	{ "name": "ap_return_195", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_195", "role": "default" }} , 
 	{ "name": "ap_return_196", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_196", "role": "default" }} , 
 	{ "name": "ap_return_197", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_197", "role": "default" }} , 
 	{ "name": "ap_return_198", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_198", "role": "default" }} , 
 	{ "name": "ap_return_199", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_199", "role": "default" }} , 
 	{ "name": "ap_return_200", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_200", "role": "default" }} , 
 	{ "name": "ap_return_201", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_201", "role": "default" }} , 
 	{ "name": "ap_return_202", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_202", "role": "default" }} , 
 	{ "name": "ap_return_203", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_203", "role": "default" }} , 
 	{ "name": "ap_return_204", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_204", "role": "default" }} , 
 	{ "name": "ap_return_205", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_205", "role": "default" }} , 
 	{ "name": "ap_return_206", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_206", "role": "default" }} , 
 	{ "name": "ap_return_207", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_207", "role": "default" }} , 
 	{ "name": "ap_return_208", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_208", "role": "default" }} , 
 	{ "name": "ap_return_209", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_209", "role": "default" }} , 
 	{ "name": "ap_return_210", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_210", "role": "default" }} , 
 	{ "name": "ap_return_211", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_211", "role": "default" }} , 
 	{ "name": "ap_return_212", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_212", "role": "default" }} , 
 	{ "name": "ap_return_213", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_213", "role": "default" }} , 
 	{ "name": "ap_return_214", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_214", "role": "default" }} , 
 	{ "name": "ap_return_215", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_215", "role": "default" }} , 
 	{ "name": "ap_return_216", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_216", "role": "default" }} , 
 	{ "name": "ap_return_217", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_217", "role": "default" }} , 
 	{ "name": "ap_return_218", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_218", "role": "default" }} , 
 	{ "name": "ap_return_219", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_219", "role": "default" }} , 
 	{ "name": "ap_return_220", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_220", "role": "default" }} , 
 	{ "name": "ap_return_221", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_221", "role": "default" }} , 
 	{ "name": "ap_return_222", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_222", "role": "default" }} , 
 	{ "name": "ap_return_223", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_223", "role": "default" }} , 
 	{ "name": "ap_return_224", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_224", "role": "default" }} , 
 	{ "name": "ap_return_225", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_225", "role": "default" }} , 
 	{ "name": "ap_return_226", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_226", "role": "default" }} , 
 	{ "name": "ap_return_227", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_227", "role": "default" }} , 
 	{ "name": "ap_return_228", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_228", "role": "default" }} , 
 	{ "name": "ap_return_229", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_229", "role": "default" }} , 
 	{ "name": "ap_return_230", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_230", "role": "default" }} , 
 	{ "name": "ap_return_231", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_231", "role": "default" }} , 
 	{ "name": "ap_return_232", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_232", "role": "default" }} , 
 	{ "name": "ap_return_233", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_233", "role": "default" }} , 
 	{ "name": "ap_return_234", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_234", "role": "default" }} , 
 	{ "name": "ap_return_235", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_235", "role": "default" }} , 
 	{ "name": "ap_return_236", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_236", "role": "default" }} , 
 	{ "name": "ap_return_237", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_237", "role": "default" }} , 
 	{ "name": "ap_return_238", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_238", "role": "default" }} , 
 	{ "name": "ap_return_239", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_239", "role": "default" }} , 
 	{ "name": "ap_return_240", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_240", "role": "default" }} , 
 	{ "name": "ap_return_241", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_241", "role": "default" }} , 
 	{ "name": "ap_return_242", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_242", "role": "default" }} , 
 	{ "name": "ap_return_243", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_243", "role": "default" }} , 
 	{ "name": "ap_return_244", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_244", "role": "default" }} , 
 	{ "name": "ap_return_245", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_245", "role": "default" }} , 
 	{ "name": "ap_return_246", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_246", "role": "default" }} , 
 	{ "name": "ap_return_247", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_247", "role": "default" }} , 
 	{ "name": "ap_return_248", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_248", "role": "default" }} , 
 	{ "name": "ap_return_249", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_249", "role": "default" }} , 
 	{ "name": "ap_return_250", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_250", "role": "default" }} , 
 	{ "name": "ap_return_251", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_251", "role": "default" }} , 
 	{ "name": "ap_return_252", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_252", "role": "default" }} , 
 	{ "name": "ap_return_253", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_253", "role": "default" }} , 
 	{ "name": "ap_return_254", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_254", "role": "default" }} , 
 	{ "name": "ap_return_255", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_255", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "load_layer_1D_weight",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "15", "EstimateLatencyMax" : "15",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "weights_all_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "weights_all_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "weights_all_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "weights_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_ptr_start_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_out_channels_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "pw_out_channels_offset", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	load_layer_1D_weight {
		weights_all_V {Type I LastRead 15 FirstWrite -1}
		weights_all_V_offset {Type I LastRead 0 FirstWrite -1}
		weights_all_ptr_start_offset {Type I LastRead 0 FirstWrite -1}
		c_out {Type I LastRead 0 FirstWrite -1}
		conv_out_channels_offset {Type I LastRead 0 FirstWrite -1}
		pw_out_channels_offset {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "15", "Max" : "15"}
	, {"Name" : "Interval", "Min" : "15", "Max" : "15"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	weights_all_V { m_axi {  { m_axi_weights_all_V_AWVALID VALID 1 1 }  { m_axi_weights_all_V_AWREADY READY 0 1 }  { m_axi_weights_all_V_AWADDR ADDR 1 32 }  { m_axi_weights_all_V_AWID ID 1 1 }  { m_axi_weights_all_V_AWLEN LEN 1 32 }  { m_axi_weights_all_V_AWSIZE SIZE 1 3 }  { m_axi_weights_all_V_AWBURST BURST 1 2 }  { m_axi_weights_all_V_AWLOCK LOCK 1 2 }  { m_axi_weights_all_V_AWCACHE CACHE 1 4 }  { m_axi_weights_all_V_AWPROT PROT 1 3 }  { m_axi_weights_all_V_AWQOS QOS 1 4 }  { m_axi_weights_all_V_AWREGION REGION 1 4 }  { m_axi_weights_all_V_AWUSER USER 1 1 }  { m_axi_weights_all_V_WVALID VALID 1 1 }  { m_axi_weights_all_V_WREADY READY 0 1 }  { m_axi_weights_all_V_WDATA DATA 1 512 }  { m_axi_weights_all_V_WSTRB STRB 1 64 }  { m_axi_weights_all_V_WLAST LAST 1 1 }  { m_axi_weights_all_V_WID ID 1 1 }  { m_axi_weights_all_V_WUSER USER 1 1 }  { m_axi_weights_all_V_ARVALID VALID 1 1 }  { m_axi_weights_all_V_ARREADY READY 0 1 }  { m_axi_weights_all_V_ARADDR ADDR 1 32 }  { m_axi_weights_all_V_ARID ID 1 1 }  { m_axi_weights_all_V_ARLEN LEN 1 32 }  { m_axi_weights_all_V_ARSIZE SIZE 1 3 }  { m_axi_weights_all_V_ARBURST BURST 1 2 }  { m_axi_weights_all_V_ARLOCK LOCK 1 2 }  { m_axi_weights_all_V_ARCACHE CACHE 1 4 }  { m_axi_weights_all_V_ARPROT PROT 1 3 }  { m_axi_weights_all_V_ARQOS QOS 1 4 }  { m_axi_weights_all_V_ARREGION REGION 1 4 }  { m_axi_weights_all_V_ARUSER USER 1 1 }  { m_axi_weights_all_V_RVALID VALID 0 1 }  { m_axi_weights_all_V_RREADY READY 1 1 }  { m_axi_weights_all_V_RDATA DATA 0 512 }  { m_axi_weights_all_V_RLAST LAST 0 1 }  { m_axi_weights_all_V_RID ID 0 1 }  { m_axi_weights_all_V_RUSER USER 0 1 }  { m_axi_weights_all_V_RRESP RESP 0 2 }  { m_axi_weights_all_V_BVALID VALID 0 1 }  { m_axi_weights_all_V_BREADY READY 1 1 }  { m_axi_weights_all_V_BRESP RESP 0 2 }  { m_axi_weights_all_V_BID ID 0 1 }  { m_axi_weights_all_V_BUSER USER 0 1 } } }
	weights_all_V_offset { ap_none {  { weights_all_V_offset in_data 0 26 } } }
	weights_all_ptr_start_offset { ap_none {  { weights_all_ptr_start_offset in_data 0 13 } } }
	c_out { ap_none {  { c_out in_data 0 6 } } }
	conv_out_channels_offset { ap_none {  { conv_out_channels_offset in_data 0 12 } } }
	pw_out_channels_offset { ap_none {  { pw_out_channels_offset in_data 0 12 } } }
}
