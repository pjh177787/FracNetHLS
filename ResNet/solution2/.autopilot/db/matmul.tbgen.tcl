set moduleName matmul
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
set C_modelName {matmul}
set C_modelType { void 0 }
set C_modelArgList {
	{ bottom_0_V_read int 8 regular  }
	{ bottom_1_V_read int 8 regular  }
	{ bottom_2_V_read int 8 regular  }
	{ bottom_3_V_read int 8 regular  }
	{ bottom_4_V_read int 8 regular  }
	{ bottom_5_V_read int 8 regular  }
	{ bottom_6_V_read int 8 regular  }
	{ bottom_7_V_read int 8 regular  }
	{ bottom_8_V_read int 8 regular  }
	{ bottom_9_V_read int 8 regular  }
	{ bottom_10_V_read int 8 regular  }
	{ bottom_11_V_read int 8 regular  }
	{ bottom_12_V_read int 8 regular  }
	{ bottom_13_V_read int 8 regular  }
	{ bottom_14_V_read int 8 regular  }
	{ bottom_15_V_read int 8 regular  }
	{ bottom_16_V_read int 8 regular  }
	{ bottom_17_V_read int 8 regular  }
	{ bottom_18_V_read int 8 regular  }
	{ bottom_19_V_read int 8 regular  }
	{ bottom_20_V_read int 8 regular  }
	{ bottom_21_V_read int 8 regular  }
	{ bottom_22_V_read int 8 regular  }
	{ bottom_23_V_read int 8 regular  }
	{ bottom_24_V_read int 8 regular  }
	{ bottom_25_V_read int 8 regular  }
	{ bottom_26_V_read int 8 regular  }
	{ bottom_27_V_read int 8 regular  }
	{ bottom_28_V_read int 8 regular  }
	{ bottom_29_V_read int 8 regular  }
	{ bottom_30_V_read int 8 regular  }
	{ bottom_31_V_read int 8 regular  }
	{ bottom_32_V_read int 8 regular  }
	{ bottom_33_V_read int 8 regular  }
	{ bottom_34_V_read int 8 regular  }
	{ bottom_35_V_read int 8 regular  }
	{ bottom_36_V_read int 8 regular  }
	{ bottom_37_V_read int 8 regular  }
	{ bottom_38_V_read int 8 regular  }
	{ bottom_39_V_read int 8 regular  }
	{ bottom_40_V_read int 8 regular  }
	{ bottom_41_V_read int 8 regular  }
	{ bottom_42_V_read int 8 regular  }
	{ bottom_43_V_read int 8 regular  }
	{ bottom_44_V_read int 8 regular  }
	{ bottom_45_V_read int 8 regular  }
	{ bottom_46_V_read int 8 regular  }
	{ bottom_47_V_read int 8 regular  }
	{ bottom_48_V_read int 8 regular  }
	{ bottom_49_V_read int 8 regular  }
	{ bottom_50_V_read int 8 regular  }
	{ bottom_51_V_read int 8 regular  }
	{ bottom_52_V_read int 8 regular  }
	{ bottom_53_V_read int 8 regular  }
	{ bottom_54_V_read int 8 regular  }
	{ bottom_55_V_read int 8 regular  }
	{ bottom_56_V_read int 8 regular  }
	{ bottom_57_V_read int 8 regular  }
	{ bottom_58_V_read int 8 regular  }
	{ bottom_59_V_read int 8 regular  }
	{ bottom_60_V_read int 8 regular  }
	{ bottom_61_V_read int 8 regular  }
	{ bottom_62_V_read int 8 regular  }
	{ bottom_63_V_read int 8 regular  }
	{ top float 32 regular {axi_master 1}  }
	{ top_offset int 30 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "bottom_0_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_1_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_2_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_3_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_4_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_5_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_6_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_7_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_8_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_9_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_10_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_11_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_12_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_13_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_14_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_15_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_16_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_17_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_18_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_19_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_20_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_21_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_22_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_23_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_24_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_25_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_26_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_27_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_28_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_29_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_30_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_31_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_32_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_33_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_34_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_35_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_36_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_37_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_38_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_39_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_40_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_41_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_42_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_43_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_44_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_45_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_46_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_47_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_48_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_49_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_50_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_51_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_52_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_53_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_54_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_55_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_56_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_57_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_58_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_59_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_60_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_61_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_62_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_63_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "top", "interface" : "axi_master", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "top_offset", "interface" : "wire", "bitwidth" : 30, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 116
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ bottom_0_V_read sc_in sc_lv 8 signal 0 } 
	{ bottom_1_V_read sc_in sc_lv 8 signal 1 } 
	{ bottom_2_V_read sc_in sc_lv 8 signal 2 } 
	{ bottom_3_V_read sc_in sc_lv 8 signal 3 } 
	{ bottom_4_V_read sc_in sc_lv 8 signal 4 } 
	{ bottom_5_V_read sc_in sc_lv 8 signal 5 } 
	{ bottom_6_V_read sc_in sc_lv 8 signal 6 } 
	{ bottom_7_V_read sc_in sc_lv 8 signal 7 } 
	{ bottom_8_V_read sc_in sc_lv 8 signal 8 } 
	{ bottom_9_V_read sc_in sc_lv 8 signal 9 } 
	{ bottom_10_V_read sc_in sc_lv 8 signal 10 } 
	{ bottom_11_V_read sc_in sc_lv 8 signal 11 } 
	{ bottom_12_V_read sc_in sc_lv 8 signal 12 } 
	{ bottom_13_V_read sc_in sc_lv 8 signal 13 } 
	{ bottom_14_V_read sc_in sc_lv 8 signal 14 } 
	{ bottom_15_V_read sc_in sc_lv 8 signal 15 } 
	{ bottom_16_V_read sc_in sc_lv 8 signal 16 } 
	{ bottom_17_V_read sc_in sc_lv 8 signal 17 } 
	{ bottom_18_V_read sc_in sc_lv 8 signal 18 } 
	{ bottom_19_V_read sc_in sc_lv 8 signal 19 } 
	{ bottom_20_V_read sc_in sc_lv 8 signal 20 } 
	{ bottom_21_V_read sc_in sc_lv 8 signal 21 } 
	{ bottom_22_V_read sc_in sc_lv 8 signal 22 } 
	{ bottom_23_V_read sc_in sc_lv 8 signal 23 } 
	{ bottom_24_V_read sc_in sc_lv 8 signal 24 } 
	{ bottom_25_V_read sc_in sc_lv 8 signal 25 } 
	{ bottom_26_V_read sc_in sc_lv 8 signal 26 } 
	{ bottom_27_V_read sc_in sc_lv 8 signal 27 } 
	{ bottom_28_V_read sc_in sc_lv 8 signal 28 } 
	{ bottom_29_V_read sc_in sc_lv 8 signal 29 } 
	{ bottom_30_V_read sc_in sc_lv 8 signal 30 } 
	{ bottom_31_V_read sc_in sc_lv 8 signal 31 } 
	{ bottom_32_V_read sc_in sc_lv 8 signal 32 } 
	{ bottom_33_V_read sc_in sc_lv 8 signal 33 } 
	{ bottom_34_V_read sc_in sc_lv 8 signal 34 } 
	{ bottom_35_V_read sc_in sc_lv 8 signal 35 } 
	{ bottom_36_V_read sc_in sc_lv 8 signal 36 } 
	{ bottom_37_V_read sc_in sc_lv 8 signal 37 } 
	{ bottom_38_V_read sc_in sc_lv 8 signal 38 } 
	{ bottom_39_V_read sc_in sc_lv 8 signal 39 } 
	{ bottom_40_V_read sc_in sc_lv 8 signal 40 } 
	{ bottom_41_V_read sc_in sc_lv 8 signal 41 } 
	{ bottom_42_V_read sc_in sc_lv 8 signal 42 } 
	{ bottom_43_V_read sc_in sc_lv 8 signal 43 } 
	{ bottom_44_V_read sc_in sc_lv 8 signal 44 } 
	{ bottom_45_V_read sc_in sc_lv 8 signal 45 } 
	{ bottom_46_V_read sc_in sc_lv 8 signal 46 } 
	{ bottom_47_V_read sc_in sc_lv 8 signal 47 } 
	{ bottom_48_V_read sc_in sc_lv 8 signal 48 } 
	{ bottom_49_V_read sc_in sc_lv 8 signal 49 } 
	{ bottom_50_V_read sc_in sc_lv 8 signal 50 } 
	{ bottom_51_V_read sc_in sc_lv 8 signal 51 } 
	{ bottom_52_V_read sc_in sc_lv 8 signal 52 } 
	{ bottom_53_V_read sc_in sc_lv 8 signal 53 } 
	{ bottom_54_V_read sc_in sc_lv 8 signal 54 } 
	{ bottom_55_V_read sc_in sc_lv 8 signal 55 } 
	{ bottom_56_V_read sc_in sc_lv 8 signal 56 } 
	{ bottom_57_V_read sc_in sc_lv 8 signal 57 } 
	{ bottom_58_V_read sc_in sc_lv 8 signal 58 } 
	{ bottom_59_V_read sc_in sc_lv 8 signal 59 } 
	{ bottom_60_V_read sc_in sc_lv 8 signal 60 } 
	{ bottom_61_V_read sc_in sc_lv 8 signal 61 } 
	{ bottom_62_V_read sc_in sc_lv 8 signal 62 } 
	{ bottom_63_V_read sc_in sc_lv 8 signal 63 } 
	{ m_axi_top_AWVALID sc_out sc_logic 1 signal 64 } 
	{ m_axi_top_AWREADY sc_in sc_logic 1 signal 64 } 
	{ m_axi_top_AWADDR sc_out sc_lv 32 signal 64 } 
	{ m_axi_top_AWID sc_out sc_lv 1 signal 64 } 
	{ m_axi_top_AWLEN sc_out sc_lv 32 signal 64 } 
	{ m_axi_top_AWSIZE sc_out sc_lv 3 signal 64 } 
	{ m_axi_top_AWBURST sc_out sc_lv 2 signal 64 } 
	{ m_axi_top_AWLOCK sc_out sc_lv 2 signal 64 } 
	{ m_axi_top_AWCACHE sc_out sc_lv 4 signal 64 } 
	{ m_axi_top_AWPROT sc_out sc_lv 3 signal 64 } 
	{ m_axi_top_AWQOS sc_out sc_lv 4 signal 64 } 
	{ m_axi_top_AWREGION sc_out sc_lv 4 signal 64 } 
	{ m_axi_top_AWUSER sc_out sc_lv 1 signal 64 } 
	{ m_axi_top_WVALID sc_out sc_logic 1 signal 64 } 
	{ m_axi_top_WREADY sc_in sc_logic 1 signal 64 } 
	{ m_axi_top_WDATA sc_out sc_lv 32 signal 64 } 
	{ m_axi_top_WSTRB sc_out sc_lv 4 signal 64 } 
	{ m_axi_top_WLAST sc_out sc_logic 1 signal 64 } 
	{ m_axi_top_WID sc_out sc_lv 1 signal 64 } 
	{ m_axi_top_WUSER sc_out sc_lv 1 signal 64 } 
	{ m_axi_top_ARVALID sc_out sc_logic 1 signal 64 } 
	{ m_axi_top_ARREADY sc_in sc_logic 1 signal 64 } 
	{ m_axi_top_ARADDR sc_out sc_lv 32 signal 64 } 
	{ m_axi_top_ARID sc_out sc_lv 1 signal 64 } 
	{ m_axi_top_ARLEN sc_out sc_lv 32 signal 64 } 
	{ m_axi_top_ARSIZE sc_out sc_lv 3 signal 64 } 
	{ m_axi_top_ARBURST sc_out sc_lv 2 signal 64 } 
	{ m_axi_top_ARLOCK sc_out sc_lv 2 signal 64 } 
	{ m_axi_top_ARCACHE sc_out sc_lv 4 signal 64 } 
	{ m_axi_top_ARPROT sc_out sc_lv 3 signal 64 } 
	{ m_axi_top_ARQOS sc_out sc_lv 4 signal 64 } 
	{ m_axi_top_ARREGION sc_out sc_lv 4 signal 64 } 
	{ m_axi_top_ARUSER sc_out sc_lv 1 signal 64 } 
	{ m_axi_top_RVALID sc_in sc_logic 1 signal 64 } 
	{ m_axi_top_RREADY sc_out sc_logic 1 signal 64 } 
	{ m_axi_top_RDATA sc_in sc_lv 32 signal 64 } 
	{ m_axi_top_RLAST sc_in sc_logic 1 signal 64 } 
	{ m_axi_top_RID sc_in sc_lv 1 signal 64 } 
	{ m_axi_top_RUSER sc_in sc_lv 1 signal 64 } 
	{ m_axi_top_RRESP sc_in sc_lv 2 signal 64 } 
	{ m_axi_top_BVALID sc_in sc_logic 1 signal 64 } 
	{ m_axi_top_BREADY sc_out sc_logic 1 signal 64 } 
	{ m_axi_top_BRESP sc_in sc_lv 2 signal 64 } 
	{ m_axi_top_BID sc_in sc_lv 1 signal 64 } 
	{ m_axi_top_BUSER sc_in sc_lv 1 signal 64 } 
	{ top_offset sc_in sc_lv 30 signal 65 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "bottom_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_0_V_read", "role": "default" }} , 
 	{ "name": "bottom_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_1_V_read", "role": "default" }} , 
 	{ "name": "bottom_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_2_V_read", "role": "default" }} , 
 	{ "name": "bottom_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_3_V_read", "role": "default" }} , 
 	{ "name": "bottom_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_4_V_read", "role": "default" }} , 
 	{ "name": "bottom_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_5_V_read", "role": "default" }} , 
 	{ "name": "bottom_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_6_V_read", "role": "default" }} , 
 	{ "name": "bottom_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_7_V_read", "role": "default" }} , 
 	{ "name": "bottom_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_8_V_read", "role": "default" }} , 
 	{ "name": "bottom_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_9_V_read", "role": "default" }} , 
 	{ "name": "bottom_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_10_V_read", "role": "default" }} , 
 	{ "name": "bottom_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_11_V_read", "role": "default" }} , 
 	{ "name": "bottom_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_12_V_read", "role": "default" }} , 
 	{ "name": "bottom_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_13_V_read", "role": "default" }} , 
 	{ "name": "bottom_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_14_V_read", "role": "default" }} , 
 	{ "name": "bottom_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_15_V_read", "role": "default" }} , 
 	{ "name": "bottom_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_16_V_read", "role": "default" }} , 
 	{ "name": "bottom_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_17_V_read", "role": "default" }} , 
 	{ "name": "bottom_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_18_V_read", "role": "default" }} , 
 	{ "name": "bottom_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_19_V_read", "role": "default" }} , 
 	{ "name": "bottom_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_20_V_read", "role": "default" }} , 
 	{ "name": "bottom_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_21_V_read", "role": "default" }} , 
 	{ "name": "bottom_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_22_V_read", "role": "default" }} , 
 	{ "name": "bottom_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_23_V_read", "role": "default" }} , 
 	{ "name": "bottom_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_24_V_read", "role": "default" }} , 
 	{ "name": "bottom_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_25_V_read", "role": "default" }} , 
 	{ "name": "bottom_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_26_V_read", "role": "default" }} , 
 	{ "name": "bottom_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_27_V_read", "role": "default" }} , 
 	{ "name": "bottom_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_28_V_read", "role": "default" }} , 
 	{ "name": "bottom_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_29_V_read", "role": "default" }} , 
 	{ "name": "bottom_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_30_V_read", "role": "default" }} , 
 	{ "name": "bottom_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_31_V_read", "role": "default" }} , 
 	{ "name": "bottom_32_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_32_V_read", "role": "default" }} , 
 	{ "name": "bottom_33_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_33_V_read", "role": "default" }} , 
 	{ "name": "bottom_34_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_34_V_read", "role": "default" }} , 
 	{ "name": "bottom_35_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_35_V_read", "role": "default" }} , 
 	{ "name": "bottom_36_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_36_V_read", "role": "default" }} , 
 	{ "name": "bottom_37_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_37_V_read", "role": "default" }} , 
 	{ "name": "bottom_38_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_38_V_read", "role": "default" }} , 
 	{ "name": "bottom_39_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_39_V_read", "role": "default" }} , 
 	{ "name": "bottom_40_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_40_V_read", "role": "default" }} , 
 	{ "name": "bottom_41_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_41_V_read", "role": "default" }} , 
 	{ "name": "bottom_42_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_42_V_read", "role": "default" }} , 
 	{ "name": "bottom_43_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_43_V_read", "role": "default" }} , 
 	{ "name": "bottom_44_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_44_V_read", "role": "default" }} , 
 	{ "name": "bottom_45_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_45_V_read", "role": "default" }} , 
 	{ "name": "bottom_46_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_46_V_read", "role": "default" }} , 
 	{ "name": "bottom_47_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_47_V_read", "role": "default" }} , 
 	{ "name": "bottom_48_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_48_V_read", "role": "default" }} , 
 	{ "name": "bottom_49_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_49_V_read", "role": "default" }} , 
 	{ "name": "bottom_50_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_50_V_read", "role": "default" }} , 
 	{ "name": "bottom_51_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_51_V_read", "role": "default" }} , 
 	{ "name": "bottom_52_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_52_V_read", "role": "default" }} , 
 	{ "name": "bottom_53_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_53_V_read", "role": "default" }} , 
 	{ "name": "bottom_54_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_54_V_read", "role": "default" }} , 
 	{ "name": "bottom_55_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_55_V_read", "role": "default" }} , 
 	{ "name": "bottom_56_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_56_V_read", "role": "default" }} , 
 	{ "name": "bottom_57_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_57_V_read", "role": "default" }} , 
 	{ "name": "bottom_58_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_58_V_read", "role": "default" }} , 
 	{ "name": "bottom_59_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_59_V_read", "role": "default" }} , 
 	{ "name": "bottom_60_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_60_V_read", "role": "default" }} , 
 	{ "name": "bottom_61_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_61_V_read", "role": "default" }} , 
 	{ "name": "bottom_62_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_62_V_read", "role": "default" }} , 
 	{ "name": "bottom_63_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bottom_63_V_read", "role": "default" }} , 
 	{ "name": "m_axi_top_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "AWVALID" }} , 
 	{ "name": "m_axi_top_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "AWREADY" }} , 
 	{ "name": "m_axi_top_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "top", "role": "AWADDR" }} , 
 	{ "name": "m_axi_top_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "AWID" }} , 
 	{ "name": "m_axi_top_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "top", "role": "AWLEN" }} , 
 	{ "name": "m_axi_top_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "top", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_top_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "top", "role": "AWBURST" }} , 
 	{ "name": "m_axi_top_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "top", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_top_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "top", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_top_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "top", "role": "AWPROT" }} , 
 	{ "name": "m_axi_top_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "top", "role": "AWQOS" }} , 
 	{ "name": "m_axi_top_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "top", "role": "AWREGION" }} , 
 	{ "name": "m_axi_top_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "AWUSER" }} , 
 	{ "name": "m_axi_top_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "WVALID" }} , 
 	{ "name": "m_axi_top_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "WREADY" }} , 
 	{ "name": "m_axi_top_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "top", "role": "WDATA" }} , 
 	{ "name": "m_axi_top_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "top", "role": "WSTRB" }} , 
 	{ "name": "m_axi_top_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "WLAST" }} , 
 	{ "name": "m_axi_top_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "WID" }} , 
 	{ "name": "m_axi_top_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "WUSER" }} , 
 	{ "name": "m_axi_top_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "ARVALID" }} , 
 	{ "name": "m_axi_top_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "ARREADY" }} , 
 	{ "name": "m_axi_top_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "top", "role": "ARADDR" }} , 
 	{ "name": "m_axi_top_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "ARID" }} , 
 	{ "name": "m_axi_top_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "top", "role": "ARLEN" }} , 
 	{ "name": "m_axi_top_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "top", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_top_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "top", "role": "ARBURST" }} , 
 	{ "name": "m_axi_top_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "top", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_top_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "top", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_top_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "top", "role": "ARPROT" }} , 
 	{ "name": "m_axi_top_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "top", "role": "ARQOS" }} , 
 	{ "name": "m_axi_top_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "top", "role": "ARREGION" }} , 
 	{ "name": "m_axi_top_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "ARUSER" }} , 
 	{ "name": "m_axi_top_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "RVALID" }} , 
 	{ "name": "m_axi_top_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "RREADY" }} , 
 	{ "name": "m_axi_top_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "top", "role": "RDATA" }} , 
 	{ "name": "m_axi_top_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "RLAST" }} , 
 	{ "name": "m_axi_top_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "RID" }} , 
 	{ "name": "m_axi_top_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "RUSER" }} , 
 	{ "name": "m_axi_top_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "top", "role": "RRESP" }} , 
 	{ "name": "m_axi_top_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "BVALID" }} , 
 	{ "name": "m_axi_top_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "BREADY" }} , 
 	{ "name": "m_axi_top_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "top", "role": "BRESP" }} , 
 	{ "name": "m_axi_top_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "BID" }} , 
 	{ "name": "m_axi_top_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "top", "role": "BUSER" }} , 
 	{ "name": "top_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "top_offset", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"],
		"CDFG" : "matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "148", "EstimateLatencyMax" : "148",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "top", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "top_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "top_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "top_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "top_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "linear_weight_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_9", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_weight_V_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ResNet_mux_646_12udo_U645", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ResNet_mux_104_12vdy_U646", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	matmul {
		bottom_0_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_1_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_2_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_3_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_4_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_5_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_6_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_7_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_8_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_9_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_10_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_11_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_12_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_13_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_14_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_15_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_16_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_17_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_18_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_19_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_20_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_21_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_22_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_23_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_24_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_25_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_26_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_27_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_28_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_29_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_30_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_31_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_32_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_33_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_34_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_35_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_36_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_37_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_38_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_39_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_40_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_41_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_42_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_43_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_44_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_45_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_46_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_47_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_48_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_49_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_50_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_51_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_52_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_53_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_54_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_55_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_56_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_57_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_58_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_59_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_60_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_61_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_62_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_63_V_read {Type I LastRead 0 FirstWrite -1}
		top {Type O LastRead 4 FirstWrite 6}
		top_offset {Type I LastRead 0 FirstWrite -1}
		linear_weight_V_0 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_1 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_2 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_3 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_4 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_5 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_6 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_7 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_8 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_9 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "148", "Max" : "148"}
	, {"Name" : "Interval", "Min" : "148", "Max" : "148"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	bottom_0_V_read { ap_none {  { bottom_0_V_read in_data 0 8 } } }
	bottom_1_V_read { ap_none {  { bottom_1_V_read in_data 0 8 } } }
	bottom_2_V_read { ap_none {  { bottom_2_V_read in_data 0 8 } } }
	bottom_3_V_read { ap_none {  { bottom_3_V_read in_data 0 8 } } }
	bottom_4_V_read { ap_none {  { bottom_4_V_read in_data 0 8 } } }
	bottom_5_V_read { ap_none {  { bottom_5_V_read in_data 0 8 } } }
	bottom_6_V_read { ap_none {  { bottom_6_V_read in_data 0 8 } } }
	bottom_7_V_read { ap_none {  { bottom_7_V_read in_data 0 8 } } }
	bottom_8_V_read { ap_none {  { bottom_8_V_read in_data 0 8 } } }
	bottom_9_V_read { ap_none {  { bottom_9_V_read in_data 0 8 } } }
	bottom_10_V_read { ap_none {  { bottom_10_V_read in_data 0 8 } } }
	bottom_11_V_read { ap_none {  { bottom_11_V_read in_data 0 8 } } }
	bottom_12_V_read { ap_none {  { bottom_12_V_read in_data 0 8 } } }
	bottom_13_V_read { ap_none {  { bottom_13_V_read in_data 0 8 } } }
	bottom_14_V_read { ap_none {  { bottom_14_V_read in_data 0 8 } } }
	bottom_15_V_read { ap_none {  { bottom_15_V_read in_data 0 8 } } }
	bottom_16_V_read { ap_none {  { bottom_16_V_read in_data 0 8 } } }
	bottom_17_V_read { ap_none {  { bottom_17_V_read in_data 0 8 } } }
	bottom_18_V_read { ap_none {  { bottom_18_V_read in_data 0 8 } } }
	bottom_19_V_read { ap_none {  { bottom_19_V_read in_data 0 8 } } }
	bottom_20_V_read { ap_none {  { bottom_20_V_read in_data 0 8 } } }
	bottom_21_V_read { ap_none {  { bottom_21_V_read in_data 0 8 } } }
	bottom_22_V_read { ap_none {  { bottom_22_V_read in_data 0 8 } } }
	bottom_23_V_read { ap_none {  { bottom_23_V_read in_data 0 8 } } }
	bottom_24_V_read { ap_none {  { bottom_24_V_read in_data 0 8 } } }
	bottom_25_V_read { ap_none {  { bottom_25_V_read in_data 0 8 } } }
	bottom_26_V_read { ap_none {  { bottom_26_V_read in_data 0 8 } } }
	bottom_27_V_read { ap_none {  { bottom_27_V_read in_data 0 8 } } }
	bottom_28_V_read { ap_none {  { bottom_28_V_read in_data 0 8 } } }
	bottom_29_V_read { ap_none {  { bottom_29_V_read in_data 0 8 } } }
	bottom_30_V_read { ap_none {  { bottom_30_V_read in_data 0 8 } } }
	bottom_31_V_read { ap_none {  { bottom_31_V_read in_data 0 8 } } }
	bottom_32_V_read { ap_none {  { bottom_32_V_read in_data 0 8 } } }
	bottom_33_V_read { ap_none {  { bottom_33_V_read in_data 0 8 } } }
	bottom_34_V_read { ap_none {  { bottom_34_V_read in_data 0 8 } } }
	bottom_35_V_read { ap_none {  { bottom_35_V_read in_data 0 8 } } }
	bottom_36_V_read { ap_none {  { bottom_36_V_read in_data 0 8 } } }
	bottom_37_V_read { ap_none {  { bottom_37_V_read in_data 0 8 } } }
	bottom_38_V_read { ap_none {  { bottom_38_V_read in_data 0 8 } } }
	bottom_39_V_read { ap_none {  { bottom_39_V_read in_data 0 8 } } }
	bottom_40_V_read { ap_none {  { bottom_40_V_read in_data 0 8 } } }
	bottom_41_V_read { ap_none {  { bottom_41_V_read in_data 0 8 } } }
	bottom_42_V_read { ap_none {  { bottom_42_V_read in_data 0 8 } } }
	bottom_43_V_read { ap_none {  { bottom_43_V_read in_data 0 8 } } }
	bottom_44_V_read { ap_none {  { bottom_44_V_read in_data 0 8 } } }
	bottom_45_V_read { ap_none {  { bottom_45_V_read in_data 0 8 } } }
	bottom_46_V_read { ap_none {  { bottom_46_V_read in_data 0 8 } } }
	bottom_47_V_read { ap_none {  { bottom_47_V_read in_data 0 8 } } }
	bottom_48_V_read { ap_none {  { bottom_48_V_read in_data 0 8 } } }
	bottom_49_V_read { ap_none {  { bottom_49_V_read in_data 0 8 } } }
	bottom_50_V_read { ap_none {  { bottom_50_V_read in_data 0 8 } } }
	bottom_51_V_read { ap_none {  { bottom_51_V_read in_data 0 8 } } }
	bottom_52_V_read { ap_none {  { bottom_52_V_read in_data 0 8 } } }
	bottom_53_V_read { ap_none {  { bottom_53_V_read in_data 0 8 } } }
	bottom_54_V_read { ap_none {  { bottom_54_V_read in_data 0 8 } } }
	bottom_55_V_read { ap_none {  { bottom_55_V_read in_data 0 8 } } }
	bottom_56_V_read { ap_none {  { bottom_56_V_read in_data 0 8 } } }
	bottom_57_V_read { ap_none {  { bottom_57_V_read in_data 0 8 } } }
	bottom_58_V_read { ap_none {  { bottom_58_V_read in_data 0 8 } } }
	bottom_59_V_read { ap_none {  { bottom_59_V_read in_data 0 8 } } }
	bottom_60_V_read { ap_none {  { bottom_60_V_read in_data 0 8 } } }
	bottom_61_V_read { ap_none {  { bottom_61_V_read in_data 0 8 } } }
	bottom_62_V_read { ap_none {  { bottom_62_V_read in_data 0 8 } } }
	bottom_63_V_read { ap_none {  { bottom_63_V_read in_data 0 8 } } }
	top { m_axi {  { m_axi_top_AWVALID VALID 1 1 }  { m_axi_top_AWREADY READY 0 1 }  { m_axi_top_AWADDR ADDR 1 32 }  { m_axi_top_AWID ID 1 1 }  { m_axi_top_AWLEN LEN 1 32 }  { m_axi_top_AWSIZE SIZE 1 3 }  { m_axi_top_AWBURST BURST 1 2 }  { m_axi_top_AWLOCK LOCK 1 2 }  { m_axi_top_AWCACHE CACHE 1 4 }  { m_axi_top_AWPROT PROT 1 3 }  { m_axi_top_AWQOS QOS 1 4 }  { m_axi_top_AWREGION REGION 1 4 }  { m_axi_top_AWUSER USER 1 1 }  { m_axi_top_WVALID VALID 1 1 }  { m_axi_top_WREADY READY 0 1 }  { m_axi_top_WDATA DATA 1 32 }  { m_axi_top_WSTRB STRB 1 4 }  { m_axi_top_WLAST LAST 1 1 }  { m_axi_top_WID ID 1 1 }  { m_axi_top_WUSER USER 1 1 }  { m_axi_top_ARVALID VALID 1 1 }  { m_axi_top_ARREADY READY 0 1 }  { m_axi_top_ARADDR ADDR 1 32 }  { m_axi_top_ARID ID 1 1 }  { m_axi_top_ARLEN LEN 1 32 }  { m_axi_top_ARSIZE SIZE 1 3 }  { m_axi_top_ARBURST BURST 1 2 }  { m_axi_top_ARLOCK LOCK 1 2 }  { m_axi_top_ARCACHE CACHE 1 4 }  { m_axi_top_ARPROT PROT 1 3 }  { m_axi_top_ARQOS QOS 1 4 }  { m_axi_top_ARREGION REGION 1 4 }  { m_axi_top_ARUSER USER 1 1 }  { m_axi_top_RVALID VALID 0 1 }  { m_axi_top_RREADY READY 1 1 }  { m_axi_top_RDATA DATA 0 32 }  { m_axi_top_RLAST LAST 0 1 }  { m_axi_top_RID ID 0 1 }  { m_axi_top_RUSER USER 0 1 }  { m_axi_top_RRESP RESP 0 2 }  { m_axi_top_BVALID VALID 0 1 }  { m_axi_top_BREADY READY 1 1 }  { m_axi_top_BRESP RESP 0 2 }  { m_axi_top_BID ID 0 1 }  { m_axi_top_BUSER USER 0 1 } } }
	top_offset { ap_none {  { top_offset in_data 0 30 } } }
}
