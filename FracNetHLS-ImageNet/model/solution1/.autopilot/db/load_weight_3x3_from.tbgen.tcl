set moduleName load_weight_3x3_from
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
set C_modelName {load_weight_3x3_from}
set C_modelType { void 0 }
set C_modelArgList {
	{ dest_0_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_1_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_2_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_3_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_4_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_5_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_6_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_7_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_8_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_9_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_10_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_11_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_12_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_13_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_14_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_15_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_16_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_17_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_18_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_19_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_20_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_21_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_22_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_23_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_24_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_25_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_26_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_27_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_28_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_29_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_30_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ dest_31_V int 64 regular {array 36 { 0 3 } 0 1 }  }
	{ src_V int 512 regular {axi_master 0}  }
	{ src_V_offset int 26 regular  }
	{ index int 10 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dest_0_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_1_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_2_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_3_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_4_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_5_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_6_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_7_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_8_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_9_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_10_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_11_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_12_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_13_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_14_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_15_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_16_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_17_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_18_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_19_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_20_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_21_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_22_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_23_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_24_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_25_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_26_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_27_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_28_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_29_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_30_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_31_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "src_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "src_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "index", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 181
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dest_0_V_address0 sc_out sc_lv 6 signal 0 } 
	{ dest_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ dest_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ dest_0_V_d0 sc_out sc_lv 64 signal 0 } 
	{ dest_1_V_address0 sc_out sc_lv 6 signal 1 } 
	{ dest_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ dest_1_V_we0 sc_out sc_logic 1 signal 1 } 
	{ dest_1_V_d0 sc_out sc_lv 64 signal 1 } 
	{ dest_2_V_address0 sc_out sc_lv 6 signal 2 } 
	{ dest_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ dest_2_V_we0 sc_out sc_logic 1 signal 2 } 
	{ dest_2_V_d0 sc_out sc_lv 64 signal 2 } 
	{ dest_3_V_address0 sc_out sc_lv 6 signal 3 } 
	{ dest_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ dest_3_V_we0 sc_out sc_logic 1 signal 3 } 
	{ dest_3_V_d0 sc_out sc_lv 64 signal 3 } 
	{ dest_4_V_address0 sc_out sc_lv 6 signal 4 } 
	{ dest_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ dest_4_V_we0 sc_out sc_logic 1 signal 4 } 
	{ dest_4_V_d0 sc_out sc_lv 64 signal 4 } 
	{ dest_5_V_address0 sc_out sc_lv 6 signal 5 } 
	{ dest_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ dest_5_V_we0 sc_out sc_logic 1 signal 5 } 
	{ dest_5_V_d0 sc_out sc_lv 64 signal 5 } 
	{ dest_6_V_address0 sc_out sc_lv 6 signal 6 } 
	{ dest_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ dest_6_V_we0 sc_out sc_logic 1 signal 6 } 
	{ dest_6_V_d0 sc_out sc_lv 64 signal 6 } 
	{ dest_7_V_address0 sc_out sc_lv 6 signal 7 } 
	{ dest_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ dest_7_V_we0 sc_out sc_logic 1 signal 7 } 
	{ dest_7_V_d0 sc_out sc_lv 64 signal 7 } 
	{ dest_8_V_address0 sc_out sc_lv 6 signal 8 } 
	{ dest_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ dest_8_V_we0 sc_out sc_logic 1 signal 8 } 
	{ dest_8_V_d0 sc_out sc_lv 64 signal 8 } 
	{ dest_9_V_address0 sc_out sc_lv 6 signal 9 } 
	{ dest_9_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ dest_9_V_we0 sc_out sc_logic 1 signal 9 } 
	{ dest_9_V_d0 sc_out sc_lv 64 signal 9 } 
	{ dest_10_V_address0 sc_out sc_lv 6 signal 10 } 
	{ dest_10_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ dest_10_V_we0 sc_out sc_logic 1 signal 10 } 
	{ dest_10_V_d0 sc_out sc_lv 64 signal 10 } 
	{ dest_11_V_address0 sc_out sc_lv 6 signal 11 } 
	{ dest_11_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ dest_11_V_we0 sc_out sc_logic 1 signal 11 } 
	{ dest_11_V_d0 sc_out sc_lv 64 signal 11 } 
	{ dest_12_V_address0 sc_out sc_lv 6 signal 12 } 
	{ dest_12_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ dest_12_V_we0 sc_out sc_logic 1 signal 12 } 
	{ dest_12_V_d0 sc_out sc_lv 64 signal 12 } 
	{ dest_13_V_address0 sc_out sc_lv 6 signal 13 } 
	{ dest_13_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ dest_13_V_we0 sc_out sc_logic 1 signal 13 } 
	{ dest_13_V_d0 sc_out sc_lv 64 signal 13 } 
	{ dest_14_V_address0 sc_out sc_lv 6 signal 14 } 
	{ dest_14_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ dest_14_V_we0 sc_out sc_logic 1 signal 14 } 
	{ dest_14_V_d0 sc_out sc_lv 64 signal 14 } 
	{ dest_15_V_address0 sc_out sc_lv 6 signal 15 } 
	{ dest_15_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ dest_15_V_we0 sc_out sc_logic 1 signal 15 } 
	{ dest_15_V_d0 sc_out sc_lv 64 signal 15 } 
	{ dest_16_V_address0 sc_out sc_lv 6 signal 16 } 
	{ dest_16_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ dest_16_V_we0 sc_out sc_logic 1 signal 16 } 
	{ dest_16_V_d0 sc_out sc_lv 64 signal 16 } 
	{ dest_17_V_address0 sc_out sc_lv 6 signal 17 } 
	{ dest_17_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ dest_17_V_we0 sc_out sc_logic 1 signal 17 } 
	{ dest_17_V_d0 sc_out sc_lv 64 signal 17 } 
	{ dest_18_V_address0 sc_out sc_lv 6 signal 18 } 
	{ dest_18_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ dest_18_V_we0 sc_out sc_logic 1 signal 18 } 
	{ dest_18_V_d0 sc_out sc_lv 64 signal 18 } 
	{ dest_19_V_address0 sc_out sc_lv 6 signal 19 } 
	{ dest_19_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ dest_19_V_we0 sc_out sc_logic 1 signal 19 } 
	{ dest_19_V_d0 sc_out sc_lv 64 signal 19 } 
	{ dest_20_V_address0 sc_out sc_lv 6 signal 20 } 
	{ dest_20_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ dest_20_V_we0 sc_out sc_logic 1 signal 20 } 
	{ dest_20_V_d0 sc_out sc_lv 64 signal 20 } 
	{ dest_21_V_address0 sc_out sc_lv 6 signal 21 } 
	{ dest_21_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ dest_21_V_we0 sc_out sc_logic 1 signal 21 } 
	{ dest_21_V_d0 sc_out sc_lv 64 signal 21 } 
	{ dest_22_V_address0 sc_out sc_lv 6 signal 22 } 
	{ dest_22_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ dest_22_V_we0 sc_out sc_logic 1 signal 22 } 
	{ dest_22_V_d0 sc_out sc_lv 64 signal 22 } 
	{ dest_23_V_address0 sc_out sc_lv 6 signal 23 } 
	{ dest_23_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ dest_23_V_we0 sc_out sc_logic 1 signal 23 } 
	{ dest_23_V_d0 sc_out sc_lv 64 signal 23 } 
	{ dest_24_V_address0 sc_out sc_lv 6 signal 24 } 
	{ dest_24_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ dest_24_V_we0 sc_out sc_logic 1 signal 24 } 
	{ dest_24_V_d0 sc_out sc_lv 64 signal 24 } 
	{ dest_25_V_address0 sc_out sc_lv 6 signal 25 } 
	{ dest_25_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ dest_25_V_we0 sc_out sc_logic 1 signal 25 } 
	{ dest_25_V_d0 sc_out sc_lv 64 signal 25 } 
	{ dest_26_V_address0 sc_out sc_lv 6 signal 26 } 
	{ dest_26_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ dest_26_V_we0 sc_out sc_logic 1 signal 26 } 
	{ dest_26_V_d0 sc_out sc_lv 64 signal 26 } 
	{ dest_27_V_address0 sc_out sc_lv 6 signal 27 } 
	{ dest_27_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ dest_27_V_we0 sc_out sc_logic 1 signal 27 } 
	{ dest_27_V_d0 sc_out sc_lv 64 signal 27 } 
	{ dest_28_V_address0 sc_out sc_lv 6 signal 28 } 
	{ dest_28_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ dest_28_V_we0 sc_out sc_logic 1 signal 28 } 
	{ dest_28_V_d0 sc_out sc_lv 64 signal 28 } 
	{ dest_29_V_address0 sc_out sc_lv 6 signal 29 } 
	{ dest_29_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ dest_29_V_we0 sc_out sc_logic 1 signal 29 } 
	{ dest_29_V_d0 sc_out sc_lv 64 signal 29 } 
	{ dest_30_V_address0 sc_out sc_lv 6 signal 30 } 
	{ dest_30_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ dest_30_V_we0 sc_out sc_logic 1 signal 30 } 
	{ dest_30_V_d0 sc_out sc_lv 64 signal 30 } 
	{ dest_31_V_address0 sc_out sc_lv 6 signal 31 } 
	{ dest_31_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ dest_31_V_we0 sc_out sc_logic 1 signal 31 } 
	{ dest_31_V_d0 sc_out sc_lv 64 signal 31 } 
	{ m_axi_src_V_AWVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_src_V_AWREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_src_V_AWADDR sc_out sc_lv 32 signal 32 } 
	{ m_axi_src_V_AWID sc_out sc_lv 1 signal 32 } 
	{ m_axi_src_V_AWLEN sc_out sc_lv 32 signal 32 } 
	{ m_axi_src_V_AWSIZE sc_out sc_lv 3 signal 32 } 
	{ m_axi_src_V_AWBURST sc_out sc_lv 2 signal 32 } 
	{ m_axi_src_V_AWLOCK sc_out sc_lv 2 signal 32 } 
	{ m_axi_src_V_AWCACHE sc_out sc_lv 4 signal 32 } 
	{ m_axi_src_V_AWPROT sc_out sc_lv 3 signal 32 } 
	{ m_axi_src_V_AWQOS sc_out sc_lv 4 signal 32 } 
	{ m_axi_src_V_AWREGION sc_out sc_lv 4 signal 32 } 
	{ m_axi_src_V_AWUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_src_V_WVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_src_V_WREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_src_V_WDATA sc_out sc_lv 512 signal 32 } 
	{ m_axi_src_V_WSTRB sc_out sc_lv 64 signal 32 } 
	{ m_axi_src_V_WLAST sc_out sc_logic 1 signal 32 } 
	{ m_axi_src_V_WID sc_out sc_lv 1 signal 32 } 
	{ m_axi_src_V_WUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_src_V_ARVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_src_V_ARREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_src_V_ARADDR sc_out sc_lv 32 signal 32 } 
	{ m_axi_src_V_ARID sc_out sc_lv 1 signal 32 } 
	{ m_axi_src_V_ARLEN sc_out sc_lv 32 signal 32 } 
	{ m_axi_src_V_ARSIZE sc_out sc_lv 3 signal 32 } 
	{ m_axi_src_V_ARBURST sc_out sc_lv 2 signal 32 } 
	{ m_axi_src_V_ARLOCK sc_out sc_lv 2 signal 32 } 
	{ m_axi_src_V_ARCACHE sc_out sc_lv 4 signal 32 } 
	{ m_axi_src_V_ARPROT sc_out sc_lv 3 signal 32 } 
	{ m_axi_src_V_ARQOS sc_out sc_lv 4 signal 32 } 
	{ m_axi_src_V_ARREGION sc_out sc_lv 4 signal 32 } 
	{ m_axi_src_V_ARUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_src_V_RVALID sc_in sc_logic 1 signal 32 } 
	{ m_axi_src_V_RREADY sc_out sc_logic 1 signal 32 } 
	{ m_axi_src_V_RDATA sc_in sc_lv 512 signal 32 } 
	{ m_axi_src_V_RLAST sc_in sc_logic 1 signal 32 } 
	{ m_axi_src_V_RID sc_in sc_lv 1 signal 32 } 
	{ m_axi_src_V_RUSER sc_in sc_lv 1 signal 32 } 
	{ m_axi_src_V_RRESP sc_in sc_lv 2 signal 32 } 
	{ m_axi_src_V_BVALID sc_in sc_logic 1 signal 32 } 
	{ m_axi_src_V_BREADY sc_out sc_logic 1 signal 32 } 
	{ m_axi_src_V_BRESP sc_in sc_lv 2 signal 32 } 
	{ m_axi_src_V_BID sc_in sc_lv 1 signal 32 } 
	{ m_axi_src_V_BUSER sc_in sc_lv 1 signal 32 } 
	{ src_V_offset sc_in sc_lv 26 signal 33 } 
	{ index sc_in sc_lv 10 signal 34 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "dest_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_0_V", "role": "address0" }} , 
 	{ "name": "dest_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_0_V", "role": "ce0" }} , 
 	{ "name": "dest_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_0_V", "role": "we0" }} , 
 	{ "name": "dest_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_0_V", "role": "d0" }} , 
 	{ "name": "dest_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_1_V", "role": "address0" }} , 
 	{ "name": "dest_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_1_V", "role": "ce0" }} , 
 	{ "name": "dest_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_1_V", "role": "we0" }} , 
 	{ "name": "dest_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_1_V", "role": "d0" }} , 
 	{ "name": "dest_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_2_V", "role": "address0" }} , 
 	{ "name": "dest_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_2_V", "role": "ce0" }} , 
 	{ "name": "dest_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_2_V", "role": "we0" }} , 
 	{ "name": "dest_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_2_V", "role": "d0" }} , 
 	{ "name": "dest_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_3_V", "role": "address0" }} , 
 	{ "name": "dest_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_3_V", "role": "ce0" }} , 
 	{ "name": "dest_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_3_V", "role": "we0" }} , 
 	{ "name": "dest_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_3_V", "role": "d0" }} , 
 	{ "name": "dest_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_4_V", "role": "address0" }} , 
 	{ "name": "dest_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_4_V", "role": "ce0" }} , 
 	{ "name": "dest_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_4_V", "role": "we0" }} , 
 	{ "name": "dest_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_4_V", "role": "d0" }} , 
 	{ "name": "dest_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_5_V", "role": "address0" }} , 
 	{ "name": "dest_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_5_V", "role": "ce0" }} , 
 	{ "name": "dest_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_5_V", "role": "we0" }} , 
 	{ "name": "dest_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_5_V", "role": "d0" }} , 
 	{ "name": "dest_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_6_V", "role": "address0" }} , 
 	{ "name": "dest_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_6_V", "role": "ce0" }} , 
 	{ "name": "dest_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_6_V", "role": "we0" }} , 
 	{ "name": "dest_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_6_V", "role": "d0" }} , 
 	{ "name": "dest_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_7_V", "role": "address0" }} , 
 	{ "name": "dest_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_7_V", "role": "ce0" }} , 
 	{ "name": "dest_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_7_V", "role": "we0" }} , 
 	{ "name": "dest_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_7_V", "role": "d0" }} , 
 	{ "name": "dest_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_8_V", "role": "address0" }} , 
 	{ "name": "dest_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_8_V", "role": "ce0" }} , 
 	{ "name": "dest_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_8_V", "role": "we0" }} , 
 	{ "name": "dest_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_8_V", "role": "d0" }} , 
 	{ "name": "dest_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_9_V", "role": "address0" }} , 
 	{ "name": "dest_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_9_V", "role": "ce0" }} , 
 	{ "name": "dest_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_9_V", "role": "we0" }} , 
 	{ "name": "dest_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_9_V", "role": "d0" }} , 
 	{ "name": "dest_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_10_V", "role": "address0" }} , 
 	{ "name": "dest_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_10_V", "role": "ce0" }} , 
 	{ "name": "dest_10_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_10_V", "role": "we0" }} , 
 	{ "name": "dest_10_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_10_V", "role": "d0" }} , 
 	{ "name": "dest_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_11_V", "role": "address0" }} , 
 	{ "name": "dest_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_11_V", "role": "ce0" }} , 
 	{ "name": "dest_11_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_11_V", "role": "we0" }} , 
 	{ "name": "dest_11_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_11_V", "role": "d0" }} , 
 	{ "name": "dest_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_12_V", "role": "address0" }} , 
 	{ "name": "dest_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_12_V", "role": "ce0" }} , 
 	{ "name": "dest_12_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_12_V", "role": "we0" }} , 
 	{ "name": "dest_12_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_12_V", "role": "d0" }} , 
 	{ "name": "dest_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_13_V", "role": "address0" }} , 
 	{ "name": "dest_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_13_V", "role": "ce0" }} , 
 	{ "name": "dest_13_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_13_V", "role": "we0" }} , 
 	{ "name": "dest_13_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_13_V", "role": "d0" }} , 
 	{ "name": "dest_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_14_V", "role": "address0" }} , 
 	{ "name": "dest_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_14_V", "role": "ce0" }} , 
 	{ "name": "dest_14_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_14_V", "role": "we0" }} , 
 	{ "name": "dest_14_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_14_V", "role": "d0" }} , 
 	{ "name": "dest_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_15_V", "role": "address0" }} , 
 	{ "name": "dest_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_15_V", "role": "ce0" }} , 
 	{ "name": "dest_15_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_15_V", "role": "we0" }} , 
 	{ "name": "dest_15_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_15_V", "role": "d0" }} , 
 	{ "name": "dest_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_16_V", "role": "address0" }} , 
 	{ "name": "dest_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_16_V", "role": "ce0" }} , 
 	{ "name": "dest_16_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_16_V", "role": "we0" }} , 
 	{ "name": "dest_16_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_16_V", "role": "d0" }} , 
 	{ "name": "dest_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_17_V", "role": "address0" }} , 
 	{ "name": "dest_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_17_V", "role": "ce0" }} , 
 	{ "name": "dest_17_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_17_V", "role": "we0" }} , 
 	{ "name": "dest_17_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_17_V", "role": "d0" }} , 
 	{ "name": "dest_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_18_V", "role": "address0" }} , 
 	{ "name": "dest_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_18_V", "role": "ce0" }} , 
 	{ "name": "dest_18_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_18_V", "role": "we0" }} , 
 	{ "name": "dest_18_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_18_V", "role": "d0" }} , 
 	{ "name": "dest_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_19_V", "role": "address0" }} , 
 	{ "name": "dest_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_19_V", "role": "ce0" }} , 
 	{ "name": "dest_19_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_19_V", "role": "we0" }} , 
 	{ "name": "dest_19_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_19_V", "role": "d0" }} , 
 	{ "name": "dest_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_20_V", "role": "address0" }} , 
 	{ "name": "dest_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_20_V", "role": "ce0" }} , 
 	{ "name": "dest_20_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_20_V", "role": "we0" }} , 
 	{ "name": "dest_20_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_20_V", "role": "d0" }} , 
 	{ "name": "dest_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_21_V", "role": "address0" }} , 
 	{ "name": "dest_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_21_V", "role": "ce0" }} , 
 	{ "name": "dest_21_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_21_V", "role": "we0" }} , 
 	{ "name": "dest_21_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_21_V", "role": "d0" }} , 
 	{ "name": "dest_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_22_V", "role": "address0" }} , 
 	{ "name": "dest_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_22_V", "role": "ce0" }} , 
 	{ "name": "dest_22_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_22_V", "role": "we0" }} , 
 	{ "name": "dest_22_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_22_V", "role": "d0" }} , 
 	{ "name": "dest_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_23_V", "role": "address0" }} , 
 	{ "name": "dest_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_23_V", "role": "ce0" }} , 
 	{ "name": "dest_23_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_23_V", "role": "we0" }} , 
 	{ "name": "dest_23_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_23_V", "role": "d0" }} , 
 	{ "name": "dest_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_24_V", "role": "address0" }} , 
 	{ "name": "dest_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_24_V", "role": "ce0" }} , 
 	{ "name": "dest_24_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_24_V", "role": "we0" }} , 
 	{ "name": "dest_24_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_24_V", "role": "d0" }} , 
 	{ "name": "dest_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_25_V", "role": "address0" }} , 
 	{ "name": "dest_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_25_V", "role": "ce0" }} , 
 	{ "name": "dest_25_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_25_V", "role": "we0" }} , 
 	{ "name": "dest_25_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_25_V", "role": "d0" }} , 
 	{ "name": "dest_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_26_V", "role": "address0" }} , 
 	{ "name": "dest_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_26_V", "role": "ce0" }} , 
 	{ "name": "dest_26_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_26_V", "role": "we0" }} , 
 	{ "name": "dest_26_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_26_V", "role": "d0" }} , 
 	{ "name": "dest_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_27_V", "role": "address0" }} , 
 	{ "name": "dest_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_27_V", "role": "ce0" }} , 
 	{ "name": "dest_27_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_27_V", "role": "we0" }} , 
 	{ "name": "dest_27_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_27_V", "role": "d0" }} , 
 	{ "name": "dest_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_28_V", "role": "address0" }} , 
 	{ "name": "dest_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_28_V", "role": "ce0" }} , 
 	{ "name": "dest_28_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_28_V", "role": "we0" }} , 
 	{ "name": "dest_28_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_28_V", "role": "d0" }} , 
 	{ "name": "dest_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_29_V", "role": "address0" }} , 
 	{ "name": "dest_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_29_V", "role": "ce0" }} , 
 	{ "name": "dest_29_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_29_V", "role": "we0" }} , 
 	{ "name": "dest_29_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_29_V", "role": "d0" }} , 
 	{ "name": "dest_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_30_V", "role": "address0" }} , 
 	{ "name": "dest_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_30_V", "role": "ce0" }} , 
 	{ "name": "dest_30_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_30_V", "role": "we0" }} , 
 	{ "name": "dest_30_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_30_V", "role": "d0" }} , 
 	{ "name": "dest_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dest_31_V", "role": "address0" }} , 
 	{ "name": "dest_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_31_V", "role": "ce0" }} , 
 	{ "name": "dest_31_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_31_V", "role": "we0" }} , 
 	{ "name": "dest_31_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_31_V", "role": "d0" }} , 
 	{ "name": "m_axi_src_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_src_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_src_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "src_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_src_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "AWID" }} , 
 	{ "name": "m_axi_src_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "src_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_src_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "src_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_src_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "src_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_src_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "src_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_src_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "src_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_src_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "src_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_src_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "src_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_src_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "src_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_src_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_src_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_src_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_src_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "src_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_src_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "src_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_src_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_src_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "WID" }} , 
 	{ "name": "m_axi_src_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_src_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_src_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_src_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "src_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_src_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "ARID" }} , 
 	{ "name": "m_axi_src_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "src_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_src_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "src_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_src_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "src_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_src_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "src_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_src_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "src_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_src_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "src_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_src_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "src_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_src_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "src_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_src_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_src_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_src_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_src_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "src_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_src_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_src_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "RID" }} , 
 	{ "name": "m_axi_src_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_src_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "src_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_src_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_src_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_src_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "src_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_src_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "BID" }} , 
 	{ "name": "m_axi_src_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "src_V", "role": "BUSER" }} , 
 	{ "name": "src_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "src_V_offset", "role": "default" }} , 
 	{ "name": "index", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "index", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
	{"Name" : "Latency", "Min" : "47", "Max" : "47"}
	, {"Name" : "Interval", "Min" : "47", "Max" : "47"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	dest_0_V { ap_memory {  { dest_0_V_address0 mem_address 1 6 }  { dest_0_V_ce0 mem_ce 1 1 }  { dest_0_V_we0 mem_we 1 1 }  { dest_0_V_d0 mem_din 1 64 } } }
	dest_1_V { ap_memory {  { dest_1_V_address0 mem_address 1 6 }  { dest_1_V_ce0 mem_ce 1 1 }  { dest_1_V_we0 mem_we 1 1 }  { dest_1_V_d0 mem_din 1 64 } } }
	dest_2_V { ap_memory {  { dest_2_V_address0 mem_address 1 6 }  { dest_2_V_ce0 mem_ce 1 1 }  { dest_2_V_we0 mem_we 1 1 }  { dest_2_V_d0 mem_din 1 64 } } }
	dest_3_V { ap_memory {  { dest_3_V_address0 mem_address 1 6 }  { dest_3_V_ce0 mem_ce 1 1 }  { dest_3_V_we0 mem_we 1 1 }  { dest_3_V_d0 mem_din 1 64 } } }
	dest_4_V { ap_memory {  { dest_4_V_address0 mem_address 1 6 }  { dest_4_V_ce0 mem_ce 1 1 }  { dest_4_V_we0 mem_we 1 1 }  { dest_4_V_d0 mem_din 1 64 } } }
	dest_5_V { ap_memory {  { dest_5_V_address0 mem_address 1 6 }  { dest_5_V_ce0 mem_ce 1 1 }  { dest_5_V_we0 mem_we 1 1 }  { dest_5_V_d0 mem_din 1 64 } } }
	dest_6_V { ap_memory {  { dest_6_V_address0 mem_address 1 6 }  { dest_6_V_ce0 mem_ce 1 1 }  { dest_6_V_we0 mem_we 1 1 }  { dest_6_V_d0 mem_din 1 64 } } }
	dest_7_V { ap_memory {  { dest_7_V_address0 mem_address 1 6 }  { dest_7_V_ce0 mem_ce 1 1 }  { dest_7_V_we0 mem_we 1 1 }  { dest_7_V_d0 mem_din 1 64 } } }
	dest_8_V { ap_memory {  { dest_8_V_address0 mem_address 1 6 }  { dest_8_V_ce0 mem_ce 1 1 }  { dest_8_V_we0 mem_we 1 1 }  { dest_8_V_d0 mem_din 1 64 } } }
	dest_9_V { ap_memory {  { dest_9_V_address0 mem_address 1 6 }  { dest_9_V_ce0 mem_ce 1 1 }  { dest_9_V_we0 mem_we 1 1 }  { dest_9_V_d0 mem_din 1 64 } } }
	dest_10_V { ap_memory {  { dest_10_V_address0 mem_address 1 6 }  { dest_10_V_ce0 mem_ce 1 1 }  { dest_10_V_we0 mem_we 1 1 }  { dest_10_V_d0 mem_din 1 64 } } }
	dest_11_V { ap_memory {  { dest_11_V_address0 mem_address 1 6 }  { dest_11_V_ce0 mem_ce 1 1 }  { dest_11_V_we0 mem_we 1 1 }  { dest_11_V_d0 mem_din 1 64 } } }
	dest_12_V { ap_memory {  { dest_12_V_address0 mem_address 1 6 }  { dest_12_V_ce0 mem_ce 1 1 }  { dest_12_V_we0 mem_we 1 1 }  { dest_12_V_d0 mem_din 1 64 } } }
	dest_13_V { ap_memory {  { dest_13_V_address0 mem_address 1 6 }  { dest_13_V_ce0 mem_ce 1 1 }  { dest_13_V_we0 mem_we 1 1 }  { dest_13_V_d0 mem_din 1 64 } } }
	dest_14_V { ap_memory {  { dest_14_V_address0 mem_address 1 6 }  { dest_14_V_ce0 mem_ce 1 1 }  { dest_14_V_we0 mem_we 1 1 }  { dest_14_V_d0 mem_din 1 64 } } }
	dest_15_V { ap_memory {  { dest_15_V_address0 mem_address 1 6 }  { dest_15_V_ce0 mem_ce 1 1 }  { dest_15_V_we0 mem_we 1 1 }  { dest_15_V_d0 mem_din 1 64 } } }
	dest_16_V { ap_memory {  { dest_16_V_address0 mem_address 1 6 }  { dest_16_V_ce0 mem_ce 1 1 }  { dest_16_V_we0 mem_we 1 1 }  { dest_16_V_d0 mem_din 1 64 } } }
	dest_17_V { ap_memory {  { dest_17_V_address0 mem_address 1 6 }  { dest_17_V_ce0 mem_ce 1 1 }  { dest_17_V_we0 mem_we 1 1 }  { dest_17_V_d0 mem_din 1 64 } } }
	dest_18_V { ap_memory {  { dest_18_V_address0 mem_address 1 6 }  { dest_18_V_ce0 mem_ce 1 1 }  { dest_18_V_we0 mem_we 1 1 }  { dest_18_V_d0 mem_din 1 64 } } }
	dest_19_V { ap_memory {  { dest_19_V_address0 mem_address 1 6 }  { dest_19_V_ce0 mem_ce 1 1 }  { dest_19_V_we0 mem_we 1 1 }  { dest_19_V_d0 mem_din 1 64 } } }
	dest_20_V { ap_memory {  { dest_20_V_address0 mem_address 1 6 }  { dest_20_V_ce0 mem_ce 1 1 }  { dest_20_V_we0 mem_we 1 1 }  { dest_20_V_d0 mem_din 1 64 } } }
	dest_21_V { ap_memory {  { dest_21_V_address0 mem_address 1 6 }  { dest_21_V_ce0 mem_ce 1 1 }  { dest_21_V_we0 mem_we 1 1 }  { dest_21_V_d0 mem_din 1 64 } } }
	dest_22_V { ap_memory {  { dest_22_V_address0 mem_address 1 6 }  { dest_22_V_ce0 mem_ce 1 1 }  { dest_22_V_we0 mem_we 1 1 }  { dest_22_V_d0 mem_din 1 64 } } }
	dest_23_V { ap_memory {  { dest_23_V_address0 mem_address 1 6 }  { dest_23_V_ce0 mem_ce 1 1 }  { dest_23_V_we0 mem_we 1 1 }  { dest_23_V_d0 mem_din 1 64 } } }
	dest_24_V { ap_memory {  { dest_24_V_address0 mem_address 1 6 }  { dest_24_V_ce0 mem_ce 1 1 }  { dest_24_V_we0 mem_we 1 1 }  { dest_24_V_d0 mem_din 1 64 } } }
	dest_25_V { ap_memory {  { dest_25_V_address0 mem_address 1 6 }  { dest_25_V_ce0 mem_ce 1 1 }  { dest_25_V_we0 mem_we 1 1 }  { dest_25_V_d0 mem_din 1 64 } } }
	dest_26_V { ap_memory {  { dest_26_V_address0 mem_address 1 6 }  { dest_26_V_ce0 mem_ce 1 1 }  { dest_26_V_we0 mem_we 1 1 }  { dest_26_V_d0 mem_din 1 64 } } }
	dest_27_V { ap_memory {  { dest_27_V_address0 mem_address 1 6 }  { dest_27_V_ce0 mem_ce 1 1 }  { dest_27_V_we0 mem_we 1 1 }  { dest_27_V_d0 mem_din 1 64 } } }
	dest_28_V { ap_memory {  { dest_28_V_address0 mem_address 1 6 }  { dest_28_V_ce0 mem_ce 1 1 }  { dest_28_V_we0 mem_we 1 1 }  { dest_28_V_d0 mem_din 1 64 } } }
	dest_29_V { ap_memory {  { dest_29_V_address0 mem_address 1 6 }  { dest_29_V_ce0 mem_ce 1 1 }  { dest_29_V_we0 mem_we 1 1 }  { dest_29_V_d0 mem_din 1 64 } } }
	dest_30_V { ap_memory {  { dest_30_V_address0 mem_address 1 6 }  { dest_30_V_ce0 mem_ce 1 1 }  { dest_30_V_we0 mem_we 1 1 }  { dest_30_V_d0 mem_din 1 64 } } }
	dest_31_V { ap_memory {  { dest_31_V_address0 mem_address 1 6 }  { dest_31_V_ce0 mem_ce 1 1 }  { dest_31_V_we0 mem_we 1 1 }  { dest_31_V_d0 mem_din 1 64 } } }
	src_V { m_axi {  { m_axi_src_V_AWVALID VALID 1 1 }  { m_axi_src_V_AWREADY READY 0 1 }  { m_axi_src_V_AWADDR ADDR 1 32 }  { m_axi_src_V_AWID ID 1 1 }  { m_axi_src_V_AWLEN LEN 1 32 }  { m_axi_src_V_AWSIZE SIZE 1 3 }  { m_axi_src_V_AWBURST BURST 1 2 }  { m_axi_src_V_AWLOCK LOCK 1 2 }  { m_axi_src_V_AWCACHE CACHE 1 4 }  { m_axi_src_V_AWPROT PROT 1 3 }  { m_axi_src_V_AWQOS QOS 1 4 }  { m_axi_src_V_AWREGION REGION 1 4 }  { m_axi_src_V_AWUSER USER 1 1 }  { m_axi_src_V_WVALID VALID 1 1 }  { m_axi_src_V_WREADY READY 0 1 }  { m_axi_src_V_WDATA DATA 1 512 }  { m_axi_src_V_WSTRB STRB 1 64 }  { m_axi_src_V_WLAST LAST 1 1 }  { m_axi_src_V_WID ID 1 1 }  { m_axi_src_V_WUSER USER 1 1 }  { m_axi_src_V_ARVALID VALID 1 1 }  { m_axi_src_V_ARREADY READY 0 1 }  { m_axi_src_V_ARADDR ADDR 1 32 }  { m_axi_src_V_ARID ID 1 1 }  { m_axi_src_V_ARLEN LEN 1 32 }  { m_axi_src_V_ARSIZE SIZE 1 3 }  { m_axi_src_V_ARBURST BURST 1 2 }  { m_axi_src_V_ARLOCK LOCK 1 2 }  { m_axi_src_V_ARCACHE CACHE 1 4 }  { m_axi_src_V_ARPROT PROT 1 3 }  { m_axi_src_V_ARQOS QOS 1 4 }  { m_axi_src_V_ARREGION REGION 1 4 }  { m_axi_src_V_ARUSER USER 1 1 }  { m_axi_src_V_RVALID VALID 0 1 }  { m_axi_src_V_RREADY READY 1 1 }  { m_axi_src_V_RDATA DATA 0 512 }  { m_axi_src_V_RLAST LAST 0 1 }  { m_axi_src_V_RID ID 0 1 }  { m_axi_src_V_RUSER USER 0 1 }  { m_axi_src_V_RRESP RESP 0 2 }  { m_axi_src_V_BVALID VALID 0 1 }  { m_axi_src_V_BREADY READY 1 1 }  { m_axi_src_V_BRESP RESP 0 2 }  { m_axi_src_V_BID ID 0 1 }  { m_axi_src_V_BUSER USER 0 1 } } }
	src_V_offset { ap_none {  { src_V_offset in_data 0 26 } } }
	index { ap_none {  { index in_data 0 10 } } }
}
