set moduleName load_shortcut
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
set C_modelName {load_shortcut}
set C_modelType { void 0 }
set C_modelArgList {
	{ out_buf_sc_0_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_1_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_2_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_3_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_4_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_5_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_6_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_7_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_8_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_9_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_10_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_11_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_12_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_13_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_14_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_15_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_16_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_17_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_18_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_19_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_20_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_21_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_22_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_23_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_24_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_25_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_26_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_27_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_28_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_29_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_30_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ out_buf_sc_31_V int 16 regular {array 904 { 0 3 } 0 1 }  }
	{ DDR_buf_V int 512 regular {axi_master 0}  }
	{ DDR_buf_V_offset int 26 regular  }
	{ H_fmap_out int 8 regular  }
	{ in_channels int 12 regular  }
	{ out_channel_start int 32 regular  }
	{ row_tile_start int 32 regular  }
	{ switch_bank int 1 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "out_buf_sc_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_10_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_11_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_12_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_13_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_14_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_15_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_16_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_17_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_18_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_19_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_20_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_21_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_22_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_23_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_24_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_25_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_26_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_27_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_28_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_29_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_30_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_buf_sc_31_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "DDR_buf_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "DDR_buf_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "H_fmap_out", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "in_channels", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "out_channel_start", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "row_tile_start", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "switch_bank", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 185
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ out_buf_sc_0_V_address0 sc_out sc_lv 10 signal 0 } 
	{ out_buf_sc_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ out_buf_sc_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ out_buf_sc_0_V_d0 sc_out sc_lv 16 signal 0 } 
	{ out_buf_sc_1_V_address0 sc_out sc_lv 10 signal 1 } 
	{ out_buf_sc_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ out_buf_sc_1_V_we0 sc_out sc_logic 1 signal 1 } 
	{ out_buf_sc_1_V_d0 sc_out sc_lv 16 signal 1 } 
	{ out_buf_sc_2_V_address0 sc_out sc_lv 10 signal 2 } 
	{ out_buf_sc_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ out_buf_sc_2_V_we0 sc_out sc_logic 1 signal 2 } 
	{ out_buf_sc_2_V_d0 sc_out sc_lv 16 signal 2 } 
	{ out_buf_sc_3_V_address0 sc_out sc_lv 10 signal 3 } 
	{ out_buf_sc_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ out_buf_sc_3_V_we0 sc_out sc_logic 1 signal 3 } 
	{ out_buf_sc_3_V_d0 sc_out sc_lv 16 signal 3 } 
	{ out_buf_sc_4_V_address0 sc_out sc_lv 10 signal 4 } 
	{ out_buf_sc_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ out_buf_sc_4_V_we0 sc_out sc_logic 1 signal 4 } 
	{ out_buf_sc_4_V_d0 sc_out sc_lv 16 signal 4 } 
	{ out_buf_sc_5_V_address0 sc_out sc_lv 10 signal 5 } 
	{ out_buf_sc_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ out_buf_sc_5_V_we0 sc_out sc_logic 1 signal 5 } 
	{ out_buf_sc_5_V_d0 sc_out sc_lv 16 signal 5 } 
	{ out_buf_sc_6_V_address0 sc_out sc_lv 10 signal 6 } 
	{ out_buf_sc_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ out_buf_sc_6_V_we0 sc_out sc_logic 1 signal 6 } 
	{ out_buf_sc_6_V_d0 sc_out sc_lv 16 signal 6 } 
	{ out_buf_sc_7_V_address0 sc_out sc_lv 10 signal 7 } 
	{ out_buf_sc_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ out_buf_sc_7_V_we0 sc_out sc_logic 1 signal 7 } 
	{ out_buf_sc_7_V_d0 sc_out sc_lv 16 signal 7 } 
	{ out_buf_sc_8_V_address0 sc_out sc_lv 10 signal 8 } 
	{ out_buf_sc_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ out_buf_sc_8_V_we0 sc_out sc_logic 1 signal 8 } 
	{ out_buf_sc_8_V_d0 sc_out sc_lv 16 signal 8 } 
	{ out_buf_sc_9_V_address0 sc_out sc_lv 10 signal 9 } 
	{ out_buf_sc_9_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ out_buf_sc_9_V_we0 sc_out sc_logic 1 signal 9 } 
	{ out_buf_sc_9_V_d0 sc_out sc_lv 16 signal 9 } 
	{ out_buf_sc_10_V_address0 sc_out sc_lv 10 signal 10 } 
	{ out_buf_sc_10_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ out_buf_sc_10_V_we0 sc_out sc_logic 1 signal 10 } 
	{ out_buf_sc_10_V_d0 sc_out sc_lv 16 signal 10 } 
	{ out_buf_sc_11_V_address0 sc_out sc_lv 10 signal 11 } 
	{ out_buf_sc_11_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ out_buf_sc_11_V_we0 sc_out sc_logic 1 signal 11 } 
	{ out_buf_sc_11_V_d0 sc_out sc_lv 16 signal 11 } 
	{ out_buf_sc_12_V_address0 sc_out sc_lv 10 signal 12 } 
	{ out_buf_sc_12_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ out_buf_sc_12_V_we0 sc_out sc_logic 1 signal 12 } 
	{ out_buf_sc_12_V_d0 sc_out sc_lv 16 signal 12 } 
	{ out_buf_sc_13_V_address0 sc_out sc_lv 10 signal 13 } 
	{ out_buf_sc_13_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ out_buf_sc_13_V_we0 sc_out sc_logic 1 signal 13 } 
	{ out_buf_sc_13_V_d0 sc_out sc_lv 16 signal 13 } 
	{ out_buf_sc_14_V_address0 sc_out sc_lv 10 signal 14 } 
	{ out_buf_sc_14_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ out_buf_sc_14_V_we0 sc_out sc_logic 1 signal 14 } 
	{ out_buf_sc_14_V_d0 sc_out sc_lv 16 signal 14 } 
	{ out_buf_sc_15_V_address0 sc_out sc_lv 10 signal 15 } 
	{ out_buf_sc_15_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ out_buf_sc_15_V_we0 sc_out sc_logic 1 signal 15 } 
	{ out_buf_sc_15_V_d0 sc_out sc_lv 16 signal 15 } 
	{ out_buf_sc_16_V_address0 sc_out sc_lv 10 signal 16 } 
	{ out_buf_sc_16_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ out_buf_sc_16_V_we0 sc_out sc_logic 1 signal 16 } 
	{ out_buf_sc_16_V_d0 sc_out sc_lv 16 signal 16 } 
	{ out_buf_sc_17_V_address0 sc_out sc_lv 10 signal 17 } 
	{ out_buf_sc_17_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ out_buf_sc_17_V_we0 sc_out sc_logic 1 signal 17 } 
	{ out_buf_sc_17_V_d0 sc_out sc_lv 16 signal 17 } 
	{ out_buf_sc_18_V_address0 sc_out sc_lv 10 signal 18 } 
	{ out_buf_sc_18_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ out_buf_sc_18_V_we0 sc_out sc_logic 1 signal 18 } 
	{ out_buf_sc_18_V_d0 sc_out sc_lv 16 signal 18 } 
	{ out_buf_sc_19_V_address0 sc_out sc_lv 10 signal 19 } 
	{ out_buf_sc_19_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ out_buf_sc_19_V_we0 sc_out sc_logic 1 signal 19 } 
	{ out_buf_sc_19_V_d0 sc_out sc_lv 16 signal 19 } 
	{ out_buf_sc_20_V_address0 sc_out sc_lv 10 signal 20 } 
	{ out_buf_sc_20_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ out_buf_sc_20_V_we0 sc_out sc_logic 1 signal 20 } 
	{ out_buf_sc_20_V_d0 sc_out sc_lv 16 signal 20 } 
	{ out_buf_sc_21_V_address0 sc_out sc_lv 10 signal 21 } 
	{ out_buf_sc_21_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ out_buf_sc_21_V_we0 sc_out sc_logic 1 signal 21 } 
	{ out_buf_sc_21_V_d0 sc_out sc_lv 16 signal 21 } 
	{ out_buf_sc_22_V_address0 sc_out sc_lv 10 signal 22 } 
	{ out_buf_sc_22_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ out_buf_sc_22_V_we0 sc_out sc_logic 1 signal 22 } 
	{ out_buf_sc_22_V_d0 sc_out sc_lv 16 signal 22 } 
	{ out_buf_sc_23_V_address0 sc_out sc_lv 10 signal 23 } 
	{ out_buf_sc_23_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ out_buf_sc_23_V_we0 sc_out sc_logic 1 signal 23 } 
	{ out_buf_sc_23_V_d0 sc_out sc_lv 16 signal 23 } 
	{ out_buf_sc_24_V_address0 sc_out sc_lv 10 signal 24 } 
	{ out_buf_sc_24_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ out_buf_sc_24_V_we0 sc_out sc_logic 1 signal 24 } 
	{ out_buf_sc_24_V_d0 sc_out sc_lv 16 signal 24 } 
	{ out_buf_sc_25_V_address0 sc_out sc_lv 10 signal 25 } 
	{ out_buf_sc_25_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ out_buf_sc_25_V_we0 sc_out sc_logic 1 signal 25 } 
	{ out_buf_sc_25_V_d0 sc_out sc_lv 16 signal 25 } 
	{ out_buf_sc_26_V_address0 sc_out sc_lv 10 signal 26 } 
	{ out_buf_sc_26_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ out_buf_sc_26_V_we0 sc_out sc_logic 1 signal 26 } 
	{ out_buf_sc_26_V_d0 sc_out sc_lv 16 signal 26 } 
	{ out_buf_sc_27_V_address0 sc_out sc_lv 10 signal 27 } 
	{ out_buf_sc_27_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ out_buf_sc_27_V_we0 sc_out sc_logic 1 signal 27 } 
	{ out_buf_sc_27_V_d0 sc_out sc_lv 16 signal 27 } 
	{ out_buf_sc_28_V_address0 sc_out sc_lv 10 signal 28 } 
	{ out_buf_sc_28_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ out_buf_sc_28_V_we0 sc_out sc_logic 1 signal 28 } 
	{ out_buf_sc_28_V_d0 sc_out sc_lv 16 signal 28 } 
	{ out_buf_sc_29_V_address0 sc_out sc_lv 10 signal 29 } 
	{ out_buf_sc_29_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ out_buf_sc_29_V_we0 sc_out sc_logic 1 signal 29 } 
	{ out_buf_sc_29_V_d0 sc_out sc_lv 16 signal 29 } 
	{ out_buf_sc_30_V_address0 sc_out sc_lv 10 signal 30 } 
	{ out_buf_sc_30_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ out_buf_sc_30_V_we0 sc_out sc_logic 1 signal 30 } 
	{ out_buf_sc_30_V_d0 sc_out sc_lv 16 signal 30 } 
	{ out_buf_sc_31_V_address0 sc_out sc_lv 10 signal 31 } 
	{ out_buf_sc_31_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ out_buf_sc_31_V_we0 sc_out sc_logic 1 signal 31 } 
	{ out_buf_sc_31_V_d0 sc_out sc_lv 16 signal 31 } 
	{ m_axi_DDR_buf_V_AWVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_AWREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_AWADDR sc_out sc_lv 32 signal 32 } 
	{ m_axi_DDR_buf_V_AWID sc_out sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_AWLEN sc_out sc_lv 32 signal 32 } 
	{ m_axi_DDR_buf_V_AWSIZE sc_out sc_lv 3 signal 32 } 
	{ m_axi_DDR_buf_V_AWBURST sc_out sc_lv 2 signal 32 } 
	{ m_axi_DDR_buf_V_AWLOCK sc_out sc_lv 2 signal 32 } 
	{ m_axi_DDR_buf_V_AWCACHE sc_out sc_lv 4 signal 32 } 
	{ m_axi_DDR_buf_V_AWPROT sc_out sc_lv 3 signal 32 } 
	{ m_axi_DDR_buf_V_AWQOS sc_out sc_lv 4 signal 32 } 
	{ m_axi_DDR_buf_V_AWREGION sc_out sc_lv 4 signal 32 } 
	{ m_axi_DDR_buf_V_AWUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_WVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_WREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_WDATA sc_out sc_lv 512 signal 32 } 
	{ m_axi_DDR_buf_V_WSTRB sc_out sc_lv 64 signal 32 } 
	{ m_axi_DDR_buf_V_WLAST sc_out sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_WID sc_out sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_WUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_ARVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_ARREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_ARADDR sc_out sc_lv 32 signal 32 } 
	{ m_axi_DDR_buf_V_ARID sc_out sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_ARLEN sc_out sc_lv 32 signal 32 } 
	{ m_axi_DDR_buf_V_ARSIZE sc_out sc_lv 3 signal 32 } 
	{ m_axi_DDR_buf_V_ARBURST sc_out sc_lv 2 signal 32 } 
	{ m_axi_DDR_buf_V_ARLOCK sc_out sc_lv 2 signal 32 } 
	{ m_axi_DDR_buf_V_ARCACHE sc_out sc_lv 4 signal 32 } 
	{ m_axi_DDR_buf_V_ARPROT sc_out sc_lv 3 signal 32 } 
	{ m_axi_DDR_buf_V_ARQOS sc_out sc_lv 4 signal 32 } 
	{ m_axi_DDR_buf_V_ARREGION sc_out sc_lv 4 signal 32 } 
	{ m_axi_DDR_buf_V_ARUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_RVALID sc_in sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_RREADY sc_out sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_RDATA sc_in sc_lv 512 signal 32 } 
	{ m_axi_DDR_buf_V_RLAST sc_in sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_RID sc_in sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_RUSER sc_in sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_RRESP sc_in sc_lv 2 signal 32 } 
	{ m_axi_DDR_buf_V_BVALID sc_in sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_BREADY sc_out sc_logic 1 signal 32 } 
	{ m_axi_DDR_buf_V_BRESP sc_in sc_lv 2 signal 32 } 
	{ m_axi_DDR_buf_V_BID sc_in sc_lv 1 signal 32 } 
	{ m_axi_DDR_buf_V_BUSER sc_in sc_lv 1 signal 32 } 
	{ DDR_buf_V_offset sc_in sc_lv 26 signal 33 } 
	{ H_fmap_out sc_in sc_lv 8 signal 34 } 
	{ in_channels sc_in sc_lv 12 signal 35 } 
	{ out_channel_start sc_in sc_lv 32 signal 36 } 
	{ row_tile_start sc_in sc_lv 32 signal 37 } 
	{ switch_bank sc_in sc_lv 1 signal 38 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "out_buf_sc_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_0_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_0_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_0_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_0_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_1_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_1_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_1_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_1_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_2_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_2_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_2_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_2_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_3_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_3_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_3_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_3_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_4_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_4_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_4_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_4_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_5_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_5_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_5_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_5_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_6_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_6_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_6_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_6_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_7_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_7_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_7_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_7_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_8_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_8_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_8_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_8_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_9_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_9_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_9_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_9_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_10_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_10_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_10_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_10_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_10_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_10_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_11_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_11_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_11_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_11_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_11_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_11_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_12_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_12_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_12_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_12_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_12_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_12_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_13_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_13_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_13_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_13_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_13_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_13_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_14_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_14_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_14_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_14_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_14_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_14_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_15_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_15_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_15_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_15_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_15_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_15_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_16_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_16_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_16_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_16_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_16_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_16_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_17_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_17_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_17_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_17_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_17_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_17_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_18_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_18_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_18_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_18_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_18_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_18_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_19_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_19_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_19_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_19_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_19_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_19_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_20_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_20_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_20_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_20_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_20_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_20_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_21_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_21_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_21_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_21_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_21_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_21_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_22_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_22_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_22_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_22_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_22_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_22_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_23_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_23_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_23_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_23_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_23_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_23_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_24_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_24_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_24_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_24_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_24_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_24_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_25_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_25_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_25_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_25_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_25_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_25_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_26_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_26_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_26_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_26_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_26_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_26_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_27_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_27_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_27_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_27_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_27_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_27_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_28_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_28_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_28_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_28_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_28_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_28_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_29_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_29_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_29_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_29_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_29_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_29_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_30_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_30_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_30_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_30_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_30_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_30_V", "role": "d0" }} , 
 	{ "name": "out_buf_sc_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_31_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_31_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_31_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_31_V", "role": "we0" }} , 
 	{ "name": "out_buf_sc_31_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_31_V", "role": "d0" }} , 
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
 	{ "name": "H_fmap_out", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "H_fmap_out", "role": "default" }} , 
 	{ "name": "in_channels", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_channels", "role": "default" }} , 
 	{ "name": "out_channel_start", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_channel_start", "role": "default" }} , 
 	{ "name": "row_tile_start", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "row_tile_start", "role": "default" }} , 
 	{ "name": "switch_bank", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "switch_bank", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "load_shortcut",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "73", "EstimateLatencyMax" : "913",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_buf_sc_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_16_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_17_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_18_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_19_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_20_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_21_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_22_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_23_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_24_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_25_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_26_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_27_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_28_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_29_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_30_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "out_buf_sc_31_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "DDR_buf_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "DDR_buf_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DDR_buf_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "DDR_buf_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "H_fmap_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_channels", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_channel_start", "Type" : "None", "Direction" : "I"},
			{"Name" : "row_tile_start", "Type" : "None", "Direction" : "I"},
			{"Name" : "switch_bank", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_29s_9lbW_U777", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_9ns_3mb6_U778", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladncg_U779", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	load_shortcut {
		out_buf_sc_0_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_1_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_2_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_3_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_4_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_5_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_6_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_7_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_8_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_9_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_10_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_11_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_12_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_13_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_14_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_15_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_16_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_17_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_18_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_19_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_20_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_21_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_22_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_23_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_24_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_25_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_26_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_27_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_28_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_29_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_30_V {Type O LastRead -1 FirstWrite 17}
		out_buf_sc_31_V {Type O LastRead -1 FirstWrite 17}
		DDR_buf_V {Type I LastRead 16 FirstWrite -1}
		DDR_buf_V_offset {Type I LastRead 3 FirstWrite -1}
		H_fmap_out {Type I LastRead 3 FirstWrite -1}
		in_channels {Type I LastRead 1 FirstWrite -1}
		out_channel_start {Type I LastRead 0 FirstWrite -1}
		row_tile_start {Type I LastRead 3 FirstWrite -1}
		switch_bank {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "73", "Max" : "913"}
	, {"Name" : "Interval", "Min" : "73", "Max" : "913"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	out_buf_sc_0_V { ap_memory {  { out_buf_sc_0_V_address0 mem_address 1 10 }  { out_buf_sc_0_V_ce0 mem_ce 1 1 }  { out_buf_sc_0_V_we0 mem_we 1 1 }  { out_buf_sc_0_V_d0 mem_din 1 16 } } }
	out_buf_sc_1_V { ap_memory {  { out_buf_sc_1_V_address0 mem_address 1 10 }  { out_buf_sc_1_V_ce0 mem_ce 1 1 }  { out_buf_sc_1_V_we0 mem_we 1 1 }  { out_buf_sc_1_V_d0 mem_din 1 16 } } }
	out_buf_sc_2_V { ap_memory {  { out_buf_sc_2_V_address0 mem_address 1 10 }  { out_buf_sc_2_V_ce0 mem_ce 1 1 }  { out_buf_sc_2_V_we0 mem_we 1 1 }  { out_buf_sc_2_V_d0 mem_din 1 16 } } }
	out_buf_sc_3_V { ap_memory {  { out_buf_sc_3_V_address0 mem_address 1 10 }  { out_buf_sc_3_V_ce0 mem_ce 1 1 }  { out_buf_sc_3_V_we0 mem_we 1 1 }  { out_buf_sc_3_V_d0 mem_din 1 16 } } }
	out_buf_sc_4_V { ap_memory {  { out_buf_sc_4_V_address0 mem_address 1 10 }  { out_buf_sc_4_V_ce0 mem_ce 1 1 }  { out_buf_sc_4_V_we0 mem_we 1 1 }  { out_buf_sc_4_V_d0 mem_din 1 16 } } }
	out_buf_sc_5_V { ap_memory {  { out_buf_sc_5_V_address0 mem_address 1 10 }  { out_buf_sc_5_V_ce0 mem_ce 1 1 }  { out_buf_sc_5_V_we0 mem_we 1 1 }  { out_buf_sc_5_V_d0 mem_din 1 16 } } }
	out_buf_sc_6_V { ap_memory {  { out_buf_sc_6_V_address0 mem_address 1 10 }  { out_buf_sc_6_V_ce0 mem_ce 1 1 }  { out_buf_sc_6_V_we0 mem_we 1 1 }  { out_buf_sc_6_V_d0 mem_din 1 16 } } }
	out_buf_sc_7_V { ap_memory {  { out_buf_sc_7_V_address0 mem_address 1 10 }  { out_buf_sc_7_V_ce0 mem_ce 1 1 }  { out_buf_sc_7_V_we0 mem_we 1 1 }  { out_buf_sc_7_V_d0 mem_din 1 16 } } }
	out_buf_sc_8_V { ap_memory {  { out_buf_sc_8_V_address0 mem_address 1 10 }  { out_buf_sc_8_V_ce0 mem_ce 1 1 }  { out_buf_sc_8_V_we0 mem_we 1 1 }  { out_buf_sc_8_V_d0 mem_din 1 16 } } }
	out_buf_sc_9_V { ap_memory {  { out_buf_sc_9_V_address0 mem_address 1 10 }  { out_buf_sc_9_V_ce0 mem_ce 1 1 }  { out_buf_sc_9_V_we0 mem_we 1 1 }  { out_buf_sc_9_V_d0 mem_din 1 16 } } }
	out_buf_sc_10_V { ap_memory {  { out_buf_sc_10_V_address0 mem_address 1 10 }  { out_buf_sc_10_V_ce0 mem_ce 1 1 }  { out_buf_sc_10_V_we0 mem_we 1 1 }  { out_buf_sc_10_V_d0 mem_din 1 16 } } }
	out_buf_sc_11_V { ap_memory {  { out_buf_sc_11_V_address0 mem_address 1 10 }  { out_buf_sc_11_V_ce0 mem_ce 1 1 }  { out_buf_sc_11_V_we0 mem_we 1 1 }  { out_buf_sc_11_V_d0 mem_din 1 16 } } }
	out_buf_sc_12_V { ap_memory {  { out_buf_sc_12_V_address0 mem_address 1 10 }  { out_buf_sc_12_V_ce0 mem_ce 1 1 }  { out_buf_sc_12_V_we0 mem_we 1 1 }  { out_buf_sc_12_V_d0 mem_din 1 16 } } }
	out_buf_sc_13_V { ap_memory {  { out_buf_sc_13_V_address0 mem_address 1 10 }  { out_buf_sc_13_V_ce0 mem_ce 1 1 }  { out_buf_sc_13_V_we0 mem_we 1 1 }  { out_buf_sc_13_V_d0 mem_din 1 16 } } }
	out_buf_sc_14_V { ap_memory {  { out_buf_sc_14_V_address0 mem_address 1 10 }  { out_buf_sc_14_V_ce0 mem_ce 1 1 }  { out_buf_sc_14_V_we0 mem_we 1 1 }  { out_buf_sc_14_V_d0 mem_din 1 16 } } }
	out_buf_sc_15_V { ap_memory {  { out_buf_sc_15_V_address0 mem_address 1 10 }  { out_buf_sc_15_V_ce0 mem_ce 1 1 }  { out_buf_sc_15_V_we0 mem_we 1 1 }  { out_buf_sc_15_V_d0 mem_din 1 16 } } }
	out_buf_sc_16_V { ap_memory {  { out_buf_sc_16_V_address0 mem_address 1 10 }  { out_buf_sc_16_V_ce0 mem_ce 1 1 }  { out_buf_sc_16_V_we0 mem_we 1 1 }  { out_buf_sc_16_V_d0 mem_din 1 16 } } }
	out_buf_sc_17_V { ap_memory {  { out_buf_sc_17_V_address0 mem_address 1 10 }  { out_buf_sc_17_V_ce0 mem_ce 1 1 }  { out_buf_sc_17_V_we0 mem_we 1 1 }  { out_buf_sc_17_V_d0 mem_din 1 16 } } }
	out_buf_sc_18_V { ap_memory {  { out_buf_sc_18_V_address0 mem_address 1 10 }  { out_buf_sc_18_V_ce0 mem_ce 1 1 }  { out_buf_sc_18_V_we0 mem_we 1 1 }  { out_buf_sc_18_V_d0 mem_din 1 16 } } }
	out_buf_sc_19_V { ap_memory {  { out_buf_sc_19_V_address0 mem_address 1 10 }  { out_buf_sc_19_V_ce0 mem_ce 1 1 }  { out_buf_sc_19_V_we0 mem_we 1 1 }  { out_buf_sc_19_V_d0 mem_din 1 16 } } }
	out_buf_sc_20_V { ap_memory {  { out_buf_sc_20_V_address0 mem_address 1 10 }  { out_buf_sc_20_V_ce0 mem_ce 1 1 }  { out_buf_sc_20_V_we0 mem_we 1 1 }  { out_buf_sc_20_V_d0 mem_din 1 16 } } }
	out_buf_sc_21_V { ap_memory {  { out_buf_sc_21_V_address0 mem_address 1 10 }  { out_buf_sc_21_V_ce0 mem_ce 1 1 }  { out_buf_sc_21_V_we0 mem_we 1 1 }  { out_buf_sc_21_V_d0 mem_din 1 16 } } }
	out_buf_sc_22_V { ap_memory {  { out_buf_sc_22_V_address0 mem_address 1 10 }  { out_buf_sc_22_V_ce0 mem_ce 1 1 }  { out_buf_sc_22_V_we0 mem_we 1 1 }  { out_buf_sc_22_V_d0 mem_din 1 16 } } }
	out_buf_sc_23_V { ap_memory {  { out_buf_sc_23_V_address0 mem_address 1 10 }  { out_buf_sc_23_V_ce0 mem_ce 1 1 }  { out_buf_sc_23_V_we0 mem_we 1 1 }  { out_buf_sc_23_V_d0 mem_din 1 16 } } }
	out_buf_sc_24_V { ap_memory {  { out_buf_sc_24_V_address0 mem_address 1 10 }  { out_buf_sc_24_V_ce0 mem_ce 1 1 }  { out_buf_sc_24_V_we0 mem_we 1 1 }  { out_buf_sc_24_V_d0 mem_din 1 16 } } }
	out_buf_sc_25_V { ap_memory {  { out_buf_sc_25_V_address0 mem_address 1 10 }  { out_buf_sc_25_V_ce0 mem_ce 1 1 }  { out_buf_sc_25_V_we0 mem_we 1 1 }  { out_buf_sc_25_V_d0 mem_din 1 16 } } }
	out_buf_sc_26_V { ap_memory {  { out_buf_sc_26_V_address0 mem_address 1 10 }  { out_buf_sc_26_V_ce0 mem_ce 1 1 }  { out_buf_sc_26_V_we0 mem_we 1 1 }  { out_buf_sc_26_V_d0 mem_din 1 16 } } }
	out_buf_sc_27_V { ap_memory {  { out_buf_sc_27_V_address0 mem_address 1 10 }  { out_buf_sc_27_V_ce0 mem_ce 1 1 }  { out_buf_sc_27_V_we0 mem_we 1 1 }  { out_buf_sc_27_V_d0 mem_din 1 16 } } }
	out_buf_sc_28_V { ap_memory {  { out_buf_sc_28_V_address0 mem_address 1 10 }  { out_buf_sc_28_V_ce0 mem_ce 1 1 }  { out_buf_sc_28_V_we0 mem_we 1 1 }  { out_buf_sc_28_V_d0 mem_din 1 16 } } }
	out_buf_sc_29_V { ap_memory {  { out_buf_sc_29_V_address0 mem_address 1 10 }  { out_buf_sc_29_V_ce0 mem_ce 1 1 }  { out_buf_sc_29_V_we0 mem_we 1 1 }  { out_buf_sc_29_V_d0 mem_din 1 16 } } }
	out_buf_sc_30_V { ap_memory {  { out_buf_sc_30_V_address0 mem_address 1 10 }  { out_buf_sc_30_V_ce0 mem_ce 1 1 }  { out_buf_sc_30_V_we0 mem_we 1 1 }  { out_buf_sc_30_V_d0 mem_din 1 16 } } }
	out_buf_sc_31_V { ap_memory {  { out_buf_sc_31_V_address0 mem_address 1 10 }  { out_buf_sc_31_V_ce0 mem_ce 1 1 }  { out_buf_sc_31_V_we0 mem_we 1 1 }  { out_buf_sc_31_V_d0 mem_din 1 16 } } }
	DDR_buf_V { m_axi {  { m_axi_DDR_buf_V_AWVALID VALID 1 1 }  { m_axi_DDR_buf_V_AWREADY READY 0 1 }  { m_axi_DDR_buf_V_AWADDR ADDR 1 32 }  { m_axi_DDR_buf_V_AWID ID 1 1 }  { m_axi_DDR_buf_V_AWLEN LEN 1 32 }  { m_axi_DDR_buf_V_AWSIZE SIZE 1 3 }  { m_axi_DDR_buf_V_AWBURST BURST 1 2 }  { m_axi_DDR_buf_V_AWLOCK LOCK 1 2 }  { m_axi_DDR_buf_V_AWCACHE CACHE 1 4 }  { m_axi_DDR_buf_V_AWPROT PROT 1 3 }  { m_axi_DDR_buf_V_AWQOS QOS 1 4 }  { m_axi_DDR_buf_V_AWREGION REGION 1 4 }  { m_axi_DDR_buf_V_AWUSER USER 1 1 }  { m_axi_DDR_buf_V_WVALID VALID 1 1 }  { m_axi_DDR_buf_V_WREADY READY 0 1 }  { m_axi_DDR_buf_V_WDATA DATA 1 512 }  { m_axi_DDR_buf_V_WSTRB STRB 1 64 }  { m_axi_DDR_buf_V_WLAST LAST 1 1 }  { m_axi_DDR_buf_V_WID ID 1 1 }  { m_axi_DDR_buf_V_WUSER USER 1 1 }  { m_axi_DDR_buf_V_ARVALID VALID 1 1 }  { m_axi_DDR_buf_V_ARREADY READY 0 1 }  { m_axi_DDR_buf_V_ARADDR ADDR 1 32 }  { m_axi_DDR_buf_V_ARID ID 1 1 }  { m_axi_DDR_buf_V_ARLEN LEN 1 32 }  { m_axi_DDR_buf_V_ARSIZE SIZE 1 3 }  { m_axi_DDR_buf_V_ARBURST BURST 1 2 }  { m_axi_DDR_buf_V_ARLOCK LOCK 1 2 }  { m_axi_DDR_buf_V_ARCACHE CACHE 1 4 }  { m_axi_DDR_buf_V_ARPROT PROT 1 3 }  { m_axi_DDR_buf_V_ARQOS QOS 1 4 }  { m_axi_DDR_buf_V_ARREGION REGION 1 4 }  { m_axi_DDR_buf_V_ARUSER USER 1 1 }  { m_axi_DDR_buf_V_RVALID VALID 0 1 }  { m_axi_DDR_buf_V_RREADY READY 1 1 }  { m_axi_DDR_buf_V_RDATA DATA 0 512 }  { m_axi_DDR_buf_V_RLAST LAST 0 1 }  { m_axi_DDR_buf_V_RID ID 0 1 }  { m_axi_DDR_buf_V_RUSER USER 0 1 }  { m_axi_DDR_buf_V_RRESP RESP 0 2 }  { m_axi_DDR_buf_V_BVALID VALID 0 1 }  { m_axi_DDR_buf_V_BREADY READY 1 1 }  { m_axi_DDR_buf_V_BRESP RESP 0 2 }  { m_axi_DDR_buf_V_BID ID 0 1 }  { m_axi_DDR_buf_V_BUSER USER 0 1 } } }
	DDR_buf_V_offset { ap_none {  { DDR_buf_V_offset in_data 0 26 } } }
	H_fmap_out { ap_none {  { H_fmap_out in_data 0 8 } } }
	in_channels { ap_none {  { in_channels in_data 0 12 } } }
	out_channel_start { ap_none {  { out_channel_start in_data 0 32 } } }
	row_tile_start { ap_none {  { row_tile_start in_data 0 32 } } }
	switch_bank { ap_none {  { switch_bank in_data 0 1 } } }
}
