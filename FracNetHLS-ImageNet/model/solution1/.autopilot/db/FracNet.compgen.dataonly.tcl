# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
image_thermo_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
conv_weight_1x1_all_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
conv_weight_3x3_all_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 32
	offset_end 39
}
weights_all_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 40
	offset_end 47
}
linear_weight_all_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 48
	offset_end 55
}
linear_bias_all_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 56
	offset_end 63
}
DDR_buff_merge_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 64
	offset_end 71
}
out_r { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 72
	offset_end 79
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


