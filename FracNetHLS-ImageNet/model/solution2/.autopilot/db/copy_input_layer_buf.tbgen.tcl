set moduleName copy_input_layer_buf
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
set C_modelName {copy_input_layer_buf}
set C_modelType { void 0 }
set C_modelArgList {
	{ dest_V int 512 regular {axi_master 1}  }
	{ dest_V_offset int 26 regular  }
	{ row_offset int 5 regular  }
	{ col_offset int 5 regular  }
	{ FM_buf_acc0_V_0 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_1 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_2 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_3 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_4 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_5 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_6 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_7 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_8 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_9 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_10 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_11 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_12 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_13 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_14 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_15 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_16 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_17 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_18 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_19 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_20 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_21 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_22 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_23 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_24 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_25 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_26 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_27 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_28 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_29 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_30 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
	{ FM_buf_acc0_V_31 int 14 regular {array 81 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dest_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "row_offset", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "col_offset", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "FM_buf_acc0_V_0", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_1", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_2", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_3", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_4", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_5", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_6", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_7", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_8", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_9", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_10", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_11", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_12", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_13", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_14", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_15", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_16", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_17", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_18", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_19", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_20", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_21", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_22", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_23", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_24", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 24,"up" : 24,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_25", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 25,"up" : 25,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_26", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 26,"up" : 26,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_27", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 27,"up" : 27,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_28", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 28,"up" : 28,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_29", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 29,"up" : 29,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_30", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 30,"up" : 30,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "FM_buf_acc0_V_31", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "FM_buf_acc0.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 31,"up" : 31,"step" : 2},{"low" : 0,"up" : 8,"step" : 1},{"low" : 0,"up" : 8,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 150
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_dest_V_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_dest_V_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_dest_V_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_dest_V_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_dest_V_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_dest_V_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_dest_V_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_dest_V_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_dest_V_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_dest_V_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_dest_V_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_dest_V_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_dest_V_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_dest_V_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_dest_V_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_dest_V_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_dest_V_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_dest_V_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_dest_V_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_dest_V_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_dest_V_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_dest_V_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_dest_V_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_dest_V_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_dest_V_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_dest_V_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_dest_V_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_dest_V_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_dest_V_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_dest_V_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_dest_V_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_dest_V_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_dest_V_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_dest_V_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_dest_V_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_dest_V_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_dest_V_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_dest_V_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_dest_V_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_dest_V_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_dest_V_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_dest_V_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_dest_V_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_dest_V_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_dest_V_BUSER sc_in sc_lv 1 signal 0 } 
	{ dest_V_offset sc_in sc_lv 26 signal 1 } 
	{ row_offset sc_in sc_lv 5 signal 2 } 
	{ col_offset sc_in sc_lv 5 signal 3 } 
	{ FM_buf_acc0_V_0_address0 sc_out sc_lv 7 signal 4 } 
	{ FM_buf_acc0_V_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ FM_buf_acc0_V_0_q0 sc_in sc_lv 14 signal 4 } 
	{ FM_buf_acc0_V_1_address0 sc_out sc_lv 7 signal 5 } 
	{ FM_buf_acc0_V_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ FM_buf_acc0_V_1_q0 sc_in sc_lv 14 signal 5 } 
	{ FM_buf_acc0_V_2_address0 sc_out sc_lv 7 signal 6 } 
	{ FM_buf_acc0_V_2_ce0 sc_out sc_logic 1 signal 6 } 
	{ FM_buf_acc0_V_2_q0 sc_in sc_lv 14 signal 6 } 
	{ FM_buf_acc0_V_3_address0 sc_out sc_lv 7 signal 7 } 
	{ FM_buf_acc0_V_3_ce0 sc_out sc_logic 1 signal 7 } 
	{ FM_buf_acc0_V_3_q0 sc_in sc_lv 14 signal 7 } 
	{ FM_buf_acc0_V_4_address0 sc_out sc_lv 7 signal 8 } 
	{ FM_buf_acc0_V_4_ce0 sc_out sc_logic 1 signal 8 } 
	{ FM_buf_acc0_V_4_q0 sc_in sc_lv 14 signal 8 } 
	{ FM_buf_acc0_V_5_address0 sc_out sc_lv 7 signal 9 } 
	{ FM_buf_acc0_V_5_ce0 sc_out sc_logic 1 signal 9 } 
	{ FM_buf_acc0_V_5_q0 sc_in sc_lv 14 signal 9 } 
	{ FM_buf_acc0_V_6_address0 sc_out sc_lv 7 signal 10 } 
	{ FM_buf_acc0_V_6_ce0 sc_out sc_logic 1 signal 10 } 
	{ FM_buf_acc0_V_6_q0 sc_in sc_lv 14 signal 10 } 
	{ FM_buf_acc0_V_7_address0 sc_out sc_lv 7 signal 11 } 
	{ FM_buf_acc0_V_7_ce0 sc_out sc_logic 1 signal 11 } 
	{ FM_buf_acc0_V_7_q0 sc_in sc_lv 14 signal 11 } 
	{ FM_buf_acc0_V_8_address0 sc_out sc_lv 7 signal 12 } 
	{ FM_buf_acc0_V_8_ce0 sc_out sc_logic 1 signal 12 } 
	{ FM_buf_acc0_V_8_q0 sc_in sc_lv 14 signal 12 } 
	{ FM_buf_acc0_V_9_address0 sc_out sc_lv 7 signal 13 } 
	{ FM_buf_acc0_V_9_ce0 sc_out sc_logic 1 signal 13 } 
	{ FM_buf_acc0_V_9_q0 sc_in sc_lv 14 signal 13 } 
	{ FM_buf_acc0_V_10_address0 sc_out sc_lv 7 signal 14 } 
	{ FM_buf_acc0_V_10_ce0 sc_out sc_logic 1 signal 14 } 
	{ FM_buf_acc0_V_10_q0 sc_in sc_lv 14 signal 14 } 
	{ FM_buf_acc0_V_11_address0 sc_out sc_lv 7 signal 15 } 
	{ FM_buf_acc0_V_11_ce0 sc_out sc_logic 1 signal 15 } 
	{ FM_buf_acc0_V_11_q0 sc_in sc_lv 14 signal 15 } 
	{ FM_buf_acc0_V_12_address0 sc_out sc_lv 7 signal 16 } 
	{ FM_buf_acc0_V_12_ce0 sc_out sc_logic 1 signal 16 } 
	{ FM_buf_acc0_V_12_q0 sc_in sc_lv 14 signal 16 } 
	{ FM_buf_acc0_V_13_address0 sc_out sc_lv 7 signal 17 } 
	{ FM_buf_acc0_V_13_ce0 sc_out sc_logic 1 signal 17 } 
	{ FM_buf_acc0_V_13_q0 sc_in sc_lv 14 signal 17 } 
	{ FM_buf_acc0_V_14_address0 sc_out sc_lv 7 signal 18 } 
	{ FM_buf_acc0_V_14_ce0 sc_out sc_logic 1 signal 18 } 
	{ FM_buf_acc0_V_14_q0 sc_in sc_lv 14 signal 18 } 
	{ FM_buf_acc0_V_15_address0 sc_out sc_lv 7 signal 19 } 
	{ FM_buf_acc0_V_15_ce0 sc_out sc_logic 1 signal 19 } 
	{ FM_buf_acc0_V_15_q0 sc_in sc_lv 14 signal 19 } 
	{ FM_buf_acc0_V_16_address0 sc_out sc_lv 7 signal 20 } 
	{ FM_buf_acc0_V_16_ce0 sc_out sc_logic 1 signal 20 } 
	{ FM_buf_acc0_V_16_q0 sc_in sc_lv 14 signal 20 } 
	{ FM_buf_acc0_V_17_address0 sc_out sc_lv 7 signal 21 } 
	{ FM_buf_acc0_V_17_ce0 sc_out sc_logic 1 signal 21 } 
	{ FM_buf_acc0_V_17_q0 sc_in sc_lv 14 signal 21 } 
	{ FM_buf_acc0_V_18_address0 sc_out sc_lv 7 signal 22 } 
	{ FM_buf_acc0_V_18_ce0 sc_out sc_logic 1 signal 22 } 
	{ FM_buf_acc0_V_18_q0 sc_in sc_lv 14 signal 22 } 
	{ FM_buf_acc0_V_19_address0 sc_out sc_lv 7 signal 23 } 
	{ FM_buf_acc0_V_19_ce0 sc_out sc_logic 1 signal 23 } 
	{ FM_buf_acc0_V_19_q0 sc_in sc_lv 14 signal 23 } 
	{ FM_buf_acc0_V_20_address0 sc_out sc_lv 7 signal 24 } 
	{ FM_buf_acc0_V_20_ce0 sc_out sc_logic 1 signal 24 } 
	{ FM_buf_acc0_V_20_q0 sc_in sc_lv 14 signal 24 } 
	{ FM_buf_acc0_V_21_address0 sc_out sc_lv 7 signal 25 } 
	{ FM_buf_acc0_V_21_ce0 sc_out sc_logic 1 signal 25 } 
	{ FM_buf_acc0_V_21_q0 sc_in sc_lv 14 signal 25 } 
	{ FM_buf_acc0_V_22_address0 sc_out sc_lv 7 signal 26 } 
	{ FM_buf_acc0_V_22_ce0 sc_out sc_logic 1 signal 26 } 
	{ FM_buf_acc0_V_22_q0 sc_in sc_lv 14 signal 26 } 
	{ FM_buf_acc0_V_23_address0 sc_out sc_lv 7 signal 27 } 
	{ FM_buf_acc0_V_23_ce0 sc_out sc_logic 1 signal 27 } 
	{ FM_buf_acc0_V_23_q0 sc_in sc_lv 14 signal 27 } 
	{ FM_buf_acc0_V_24_address0 sc_out sc_lv 7 signal 28 } 
	{ FM_buf_acc0_V_24_ce0 sc_out sc_logic 1 signal 28 } 
	{ FM_buf_acc0_V_24_q0 sc_in sc_lv 14 signal 28 } 
	{ FM_buf_acc0_V_25_address0 sc_out sc_lv 7 signal 29 } 
	{ FM_buf_acc0_V_25_ce0 sc_out sc_logic 1 signal 29 } 
	{ FM_buf_acc0_V_25_q0 sc_in sc_lv 14 signal 29 } 
	{ FM_buf_acc0_V_26_address0 sc_out sc_lv 7 signal 30 } 
	{ FM_buf_acc0_V_26_ce0 sc_out sc_logic 1 signal 30 } 
	{ FM_buf_acc0_V_26_q0 sc_in sc_lv 14 signal 30 } 
	{ FM_buf_acc0_V_27_address0 sc_out sc_lv 7 signal 31 } 
	{ FM_buf_acc0_V_27_ce0 sc_out sc_logic 1 signal 31 } 
	{ FM_buf_acc0_V_27_q0 sc_in sc_lv 14 signal 31 } 
	{ FM_buf_acc0_V_28_address0 sc_out sc_lv 7 signal 32 } 
	{ FM_buf_acc0_V_28_ce0 sc_out sc_logic 1 signal 32 } 
	{ FM_buf_acc0_V_28_q0 sc_in sc_lv 14 signal 32 } 
	{ FM_buf_acc0_V_29_address0 sc_out sc_lv 7 signal 33 } 
	{ FM_buf_acc0_V_29_ce0 sc_out sc_logic 1 signal 33 } 
	{ FM_buf_acc0_V_29_q0 sc_in sc_lv 14 signal 33 } 
	{ FM_buf_acc0_V_30_address0 sc_out sc_lv 7 signal 34 } 
	{ FM_buf_acc0_V_30_ce0 sc_out sc_logic 1 signal 34 } 
	{ FM_buf_acc0_V_30_q0 sc_in sc_lv 14 signal 34 } 
	{ FM_buf_acc0_V_31_address0 sc_out sc_lv 7 signal 35 } 
	{ FM_buf_acc0_V_31_ce0 sc_out sc_logic 1 signal 35 } 
	{ FM_buf_acc0_V_31_q0 sc_in sc_lv 14 signal 35 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_dest_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_dest_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_dest_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dest_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_dest_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "AWID" }} , 
 	{ "name": "m_axi_dest_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dest_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_dest_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dest_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_dest_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_dest_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_dest_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dest_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_dest_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dest_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_dest_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dest_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_dest_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dest_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_dest_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_dest_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_dest_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_dest_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "dest_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_dest_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_dest_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_dest_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "WID" }} , 
 	{ "name": "m_axi_dest_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_dest_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_dest_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_dest_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dest_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_dest_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "ARID" }} , 
 	{ "name": "m_axi_dest_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dest_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_dest_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dest_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_dest_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_dest_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_dest_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dest_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_dest_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dest_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_dest_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dest_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_dest_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dest_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_dest_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_dest_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_dest_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_dest_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "dest_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_dest_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_dest_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "RID" }} , 
 	{ "name": "m_axi_dest_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_dest_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_dest_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_dest_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_dest_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_dest_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "BID" }} , 
 	{ "name": "m_axi_dest_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "BUSER" }} , 
 	{ "name": "dest_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "dest_V_offset", "role": "default" }} , 
 	{ "name": "row_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "row_offset", "role": "default" }} , 
 	{ "name": "col_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "col_offset", "role": "default" }} , 
 	{ "name": "FM_buf_acc0_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_0", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_0", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_0", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_1", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_1", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_1", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_2", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_2", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_2", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_3", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_3", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_3", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_4", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_4", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_4", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_5", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_5", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_5", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_6", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_6", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_6", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_7", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_7", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_7", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_8", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_8", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_8", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_9", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_9", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_9", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_10", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_10", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_10", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_11", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_11", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_11", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_12", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_12", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_12", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_13", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_13", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_13", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_14", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_14", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_14", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_15", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_15", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_15", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_16", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_16", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_16", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_17", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_17", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_17", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_18", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_18", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_18", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_19", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_19", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_19", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_20", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_20", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_20", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_21", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_21", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_21", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_22", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_22", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_22", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_23", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_23", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_23", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_24", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_24", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_24_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_24", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_25", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_25", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_25_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_25", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_26", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_26", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_26_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_26", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_27", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_27", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_27_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_27", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_28", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_28", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_28_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_28", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_29", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_29", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_29_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_29", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_30", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_30", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_30_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_30", "role": "q0" }} , 
 	{ "name": "FM_buf_acc0_V_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_31", "role": "address0" }} , 
 	{ "name": "FM_buf_acc0_V_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_31", "role": "ce0" }} , 
 	{ "name": "FM_buf_acc0_V_31_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "FM_buf_acc0_V_31", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "copy_input_layer_buf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dest_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "dest_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "dest_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "dest_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "dest_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "row_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladg8j_U162", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	copy_input_layer_buf {
		dest_V {Type O LastRead 4 FirstWrite 3}
		dest_V_offset {Type I LastRead 0 FirstWrite -1}
		row_offset {Type I LastRead 0 FirstWrite -1}
		col_offset {Type I LastRead 0 FirstWrite -1}
		FM_buf_acc0_V_0 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_1 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_2 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_3 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_4 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_5 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_6 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_7 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_8 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_9 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_10 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_11 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_12 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_13 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_14 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_15 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_16 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_17 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_18 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_19 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_20 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_21 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_22 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_23 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_24 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_25 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_26 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_27 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_28 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_29 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_30 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_31 {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "24", "Max" : "24"}
	, {"Name" : "Interval", "Min" : "24", "Max" : "24"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	dest_V { m_axi {  { m_axi_dest_V_AWVALID VALID 1 1 }  { m_axi_dest_V_AWREADY READY 0 1 }  { m_axi_dest_V_AWADDR ADDR 1 32 }  { m_axi_dest_V_AWID ID 1 1 }  { m_axi_dest_V_AWLEN LEN 1 32 }  { m_axi_dest_V_AWSIZE SIZE 1 3 }  { m_axi_dest_V_AWBURST BURST 1 2 }  { m_axi_dest_V_AWLOCK LOCK 1 2 }  { m_axi_dest_V_AWCACHE CACHE 1 4 }  { m_axi_dest_V_AWPROT PROT 1 3 }  { m_axi_dest_V_AWQOS QOS 1 4 }  { m_axi_dest_V_AWREGION REGION 1 4 }  { m_axi_dest_V_AWUSER USER 1 1 }  { m_axi_dest_V_WVALID VALID 1 1 }  { m_axi_dest_V_WREADY READY 0 1 }  { m_axi_dest_V_WDATA DATA 1 512 }  { m_axi_dest_V_WSTRB STRB 1 64 }  { m_axi_dest_V_WLAST LAST 1 1 }  { m_axi_dest_V_WID ID 1 1 }  { m_axi_dest_V_WUSER USER 1 1 }  { m_axi_dest_V_ARVALID VALID 1 1 }  { m_axi_dest_V_ARREADY READY 0 1 }  { m_axi_dest_V_ARADDR ADDR 1 32 }  { m_axi_dest_V_ARID ID 1 1 }  { m_axi_dest_V_ARLEN LEN 1 32 }  { m_axi_dest_V_ARSIZE SIZE 1 3 }  { m_axi_dest_V_ARBURST BURST 1 2 }  { m_axi_dest_V_ARLOCK LOCK 1 2 }  { m_axi_dest_V_ARCACHE CACHE 1 4 }  { m_axi_dest_V_ARPROT PROT 1 3 }  { m_axi_dest_V_ARQOS QOS 1 4 }  { m_axi_dest_V_ARREGION REGION 1 4 }  { m_axi_dest_V_ARUSER USER 1 1 }  { m_axi_dest_V_RVALID VALID 0 1 }  { m_axi_dest_V_RREADY READY 1 1 }  { m_axi_dest_V_RDATA DATA 0 512 }  { m_axi_dest_V_RLAST LAST 0 1 }  { m_axi_dest_V_RID ID 0 1 }  { m_axi_dest_V_RUSER USER 0 1 }  { m_axi_dest_V_RRESP RESP 0 2 }  { m_axi_dest_V_BVALID VALID 0 1 }  { m_axi_dest_V_BREADY READY 1 1 }  { m_axi_dest_V_BRESP RESP 0 2 }  { m_axi_dest_V_BID ID 0 1 }  { m_axi_dest_V_BUSER USER 0 1 } } }
	dest_V_offset { ap_none {  { dest_V_offset in_data 0 26 } } }
	row_offset { ap_none {  { row_offset in_data 0 5 } } }
	col_offset { ap_none {  { col_offset in_data 0 5 } } }
	FM_buf_acc0_V_0 { ap_memory {  { FM_buf_acc0_V_0_address0 mem_address 1 7 }  { FM_buf_acc0_V_0_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_0_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_1 { ap_memory {  { FM_buf_acc0_V_1_address0 mem_address 1 7 }  { FM_buf_acc0_V_1_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_1_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_2 { ap_memory {  { FM_buf_acc0_V_2_address0 mem_address 1 7 }  { FM_buf_acc0_V_2_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_2_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_3 { ap_memory {  { FM_buf_acc0_V_3_address0 mem_address 1 7 }  { FM_buf_acc0_V_3_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_3_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_4 { ap_memory {  { FM_buf_acc0_V_4_address0 mem_address 1 7 }  { FM_buf_acc0_V_4_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_4_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_5 { ap_memory {  { FM_buf_acc0_V_5_address0 mem_address 1 7 }  { FM_buf_acc0_V_5_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_5_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_6 { ap_memory {  { FM_buf_acc0_V_6_address0 mem_address 1 7 }  { FM_buf_acc0_V_6_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_6_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_7 { ap_memory {  { FM_buf_acc0_V_7_address0 mem_address 1 7 }  { FM_buf_acc0_V_7_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_7_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_8 { ap_memory {  { FM_buf_acc0_V_8_address0 mem_address 1 7 }  { FM_buf_acc0_V_8_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_8_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_9 { ap_memory {  { FM_buf_acc0_V_9_address0 mem_address 1 7 }  { FM_buf_acc0_V_9_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_9_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_10 { ap_memory {  { FM_buf_acc0_V_10_address0 mem_address 1 7 }  { FM_buf_acc0_V_10_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_10_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_11 { ap_memory {  { FM_buf_acc0_V_11_address0 mem_address 1 7 }  { FM_buf_acc0_V_11_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_11_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_12 { ap_memory {  { FM_buf_acc0_V_12_address0 mem_address 1 7 }  { FM_buf_acc0_V_12_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_12_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_13 { ap_memory {  { FM_buf_acc0_V_13_address0 mem_address 1 7 }  { FM_buf_acc0_V_13_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_13_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_14 { ap_memory {  { FM_buf_acc0_V_14_address0 mem_address 1 7 }  { FM_buf_acc0_V_14_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_14_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_15 { ap_memory {  { FM_buf_acc0_V_15_address0 mem_address 1 7 }  { FM_buf_acc0_V_15_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_15_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_16 { ap_memory {  { FM_buf_acc0_V_16_address0 mem_address 1 7 }  { FM_buf_acc0_V_16_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_16_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_17 { ap_memory {  { FM_buf_acc0_V_17_address0 mem_address 1 7 }  { FM_buf_acc0_V_17_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_17_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_18 { ap_memory {  { FM_buf_acc0_V_18_address0 mem_address 1 7 }  { FM_buf_acc0_V_18_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_18_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_19 { ap_memory {  { FM_buf_acc0_V_19_address0 mem_address 1 7 }  { FM_buf_acc0_V_19_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_19_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_20 { ap_memory {  { FM_buf_acc0_V_20_address0 mem_address 1 7 }  { FM_buf_acc0_V_20_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_20_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_21 { ap_memory {  { FM_buf_acc0_V_21_address0 mem_address 1 7 }  { FM_buf_acc0_V_21_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_21_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_22 { ap_memory {  { FM_buf_acc0_V_22_address0 mem_address 1 7 }  { FM_buf_acc0_V_22_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_22_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_23 { ap_memory {  { FM_buf_acc0_V_23_address0 mem_address 1 7 }  { FM_buf_acc0_V_23_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_23_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_24 { ap_memory {  { FM_buf_acc0_V_24_address0 mem_address 1 7 }  { FM_buf_acc0_V_24_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_24_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_25 { ap_memory {  { FM_buf_acc0_V_25_address0 mem_address 1 7 }  { FM_buf_acc0_V_25_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_25_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_26 { ap_memory {  { FM_buf_acc0_V_26_address0 mem_address 1 7 }  { FM_buf_acc0_V_26_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_26_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_27 { ap_memory {  { FM_buf_acc0_V_27_address0 mem_address 1 7 }  { FM_buf_acc0_V_27_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_27_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_28 { ap_memory {  { FM_buf_acc0_V_28_address0 mem_address 1 7 }  { FM_buf_acc0_V_28_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_28_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_29 { ap_memory {  { FM_buf_acc0_V_29_address0 mem_address 1 7 }  { FM_buf_acc0_V_29_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_29_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_30 { ap_memory {  { FM_buf_acc0_V_30_address0 mem_address 1 7 }  { FM_buf_acc0_V_30_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_30_q0 mem_dout 0 14 } } }
	FM_buf_acc0_V_31 { ap_memory {  { FM_buf_acc0_V_31_address0 mem_address 1 7 }  { FM_buf_acc0_V_31_ce0 mem_ce 1 1 }  { FM_buf_acc0_V_31_q0 mem_dout 0 14 } } }
}
