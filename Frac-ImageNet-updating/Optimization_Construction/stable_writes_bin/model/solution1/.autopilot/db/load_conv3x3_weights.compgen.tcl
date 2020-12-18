# This script segment is generated automatically by AutoPilot

set id 1
set name FracNet_urem_5ns_bkb
set corename simcore_urem
set op urem
set stage_num 9
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 5
set in0_signed 0
set in1_width 3
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 5
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_urem] == "ap_gen_simcore_urem"} {
eval "ap_gen_simcore_urem { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_urem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op urem
set corename DivnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 2
set name FracNet_mac_muladcud
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 6
set in0_signed 0
set in1_width 7
set in1_signed 0
set in2_width 6
set in2_signed 0
set out_width 11
set exp i0*i1+i2
set arg_lists {i0 {6 0 +} i1 {7 0 +} m {11 0 +} i2 {6 0 +} p {11 0 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name conv_weight_3x3_all_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_weight_3x3_all_V \
    op interface \
    ports { m_axi_conv_weight_3x3_all_V_AWVALID { O 1 bit } m_axi_conv_weight_3x3_all_V_AWREADY { I 1 bit } m_axi_conv_weight_3x3_all_V_AWADDR { O 32 vector } m_axi_conv_weight_3x3_all_V_AWID { O 1 vector } m_axi_conv_weight_3x3_all_V_AWLEN { O 32 vector } m_axi_conv_weight_3x3_all_V_AWSIZE { O 3 vector } m_axi_conv_weight_3x3_all_V_AWBURST { O 2 vector } m_axi_conv_weight_3x3_all_V_AWLOCK { O 2 vector } m_axi_conv_weight_3x3_all_V_AWCACHE { O 4 vector } m_axi_conv_weight_3x3_all_V_AWPROT { O 3 vector } m_axi_conv_weight_3x3_all_V_AWQOS { O 4 vector } m_axi_conv_weight_3x3_all_V_AWREGION { O 4 vector } m_axi_conv_weight_3x3_all_V_AWUSER { O 1 vector } m_axi_conv_weight_3x3_all_V_WVALID { O 1 bit } m_axi_conv_weight_3x3_all_V_WREADY { I 1 bit } m_axi_conv_weight_3x3_all_V_WDATA { O 512 vector } m_axi_conv_weight_3x3_all_V_WSTRB { O 64 vector } m_axi_conv_weight_3x3_all_V_WLAST { O 1 bit } m_axi_conv_weight_3x3_all_V_WID { O 1 vector } m_axi_conv_weight_3x3_all_V_WUSER { O 1 vector } m_axi_conv_weight_3x3_all_V_ARVALID { O 1 bit } m_axi_conv_weight_3x3_all_V_ARREADY { I 1 bit } m_axi_conv_weight_3x3_all_V_ARADDR { O 32 vector } m_axi_conv_weight_3x3_all_V_ARID { O 1 vector } m_axi_conv_weight_3x3_all_V_ARLEN { O 32 vector } m_axi_conv_weight_3x3_all_V_ARSIZE { O 3 vector } m_axi_conv_weight_3x3_all_V_ARBURST { O 2 vector } m_axi_conv_weight_3x3_all_V_ARLOCK { O 2 vector } m_axi_conv_weight_3x3_all_V_ARCACHE { O 4 vector } m_axi_conv_weight_3x3_all_V_ARPROT { O 3 vector } m_axi_conv_weight_3x3_all_V_ARQOS { O 4 vector } m_axi_conv_weight_3x3_all_V_ARREGION { O 4 vector } m_axi_conv_weight_3x3_all_V_ARUSER { O 1 vector } m_axi_conv_weight_3x3_all_V_RVALID { I 1 bit } m_axi_conv_weight_3x3_all_V_RREADY { O 1 bit } m_axi_conv_weight_3x3_all_V_RDATA { I 512 vector } m_axi_conv_weight_3x3_all_V_RLAST { I 1 bit } m_axi_conv_weight_3x3_all_V_RID { I 1 vector } m_axi_conv_weight_3x3_all_V_RUSER { I 1 vector } m_axi_conv_weight_3x3_all_V_RRESP { I 2 vector } m_axi_conv_weight_3x3_all_V_BVALID { I 1 bit } m_axi_conv_weight_3x3_all_V_BREADY { O 1 bit } m_axi_conv_weight_3x3_all_V_BRESP { I 2 vector } m_axi_conv_weight_3x3_all_V_BID { I 1 vector } m_axi_conv_weight_3x3_all_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name conv_weight_3x3_all_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_weight_3x3_all_V_offset \
    op interface \
    ports { conv_weight_3x3_all_V_offset { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name conv3x3_weight_ptr \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv3x3_weight_ptr \
    op interface \
    ports { conv3x3_weight_ptr { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name c_out \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_c_out \
    op interface \
    ports { c_out { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name c_in \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_c_in \
    op interface \
    ports { c_in { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name in_channels_after_pa \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_channels_after_pa \
    op interface \
    ports { in_channels_after_pa { I 7 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name weight3x3_tile_buffe_287 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_287 \
    op interface \
    ports { weight3x3_tile_buffe_287 { O 32 vector } weight3x3_tile_buffe_287_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name weight3x3_tile_buffe_288 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_288 \
    op interface \
    ports { weight3x3_tile_buffe_288 { O 32 vector } weight3x3_tile_buffe_288_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name weight3x3_tile_buffe_289 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_289 \
    op interface \
    ports { weight3x3_tile_buffe_289 { O 32 vector } weight3x3_tile_buffe_289_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name weight3x3_tile_buffe_290 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_290 \
    op interface \
    ports { weight3x3_tile_buffe_290 { O 32 vector } weight3x3_tile_buffe_290_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name weight3x3_tile_buffe_291 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_291 \
    op interface \
    ports { weight3x3_tile_buffe_291 { O 32 vector } weight3x3_tile_buffe_291_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name weight3x3_tile_buffe_292 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_292 \
    op interface \
    ports { weight3x3_tile_buffe_292 { O 32 vector } weight3x3_tile_buffe_292_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name weight3x3_tile_buffe_293 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_293 \
    op interface \
    ports { weight3x3_tile_buffe_293 { O 32 vector } weight3x3_tile_buffe_293_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name weight3x3_tile_buffe_294 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_294 \
    op interface \
    ports { weight3x3_tile_buffe_294 { O 32 vector } weight3x3_tile_buffe_294_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name weight3x3_tile_buffe_295 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_295 \
    op interface \
    ports { weight3x3_tile_buffe_295 { O 32 vector } weight3x3_tile_buffe_295_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name weight3x3_tile_buffe_296 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_296 \
    op interface \
    ports { weight3x3_tile_buffe_296 { O 32 vector } weight3x3_tile_buffe_296_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name weight3x3_tile_buffe_297 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_297 \
    op interface \
    ports { weight3x3_tile_buffe_297 { O 32 vector } weight3x3_tile_buffe_297_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name weight3x3_tile_buffe_298 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_298 \
    op interface \
    ports { weight3x3_tile_buffe_298 { O 32 vector } weight3x3_tile_buffe_298_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name weight3x3_tile_buffe_299 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_299 \
    op interface \
    ports { weight3x3_tile_buffe_299 { O 32 vector } weight3x3_tile_buffe_299_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name weight3x3_tile_buffe_300 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_300 \
    op interface \
    ports { weight3x3_tile_buffe_300 { O 32 vector } weight3x3_tile_buffe_300_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name weight3x3_tile_buffe_301 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_301 \
    op interface \
    ports { weight3x3_tile_buffe_301 { O 32 vector } weight3x3_tile_buffe_301_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name weight3x3_tile_buffe_302 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_302 \
    op interface \
    ports { weight3x3_tile_buffe_302 { O 32 vector } weight3x3_tile_buffe_302_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name weight3x3_tile_buffe_303 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_303 \
    op interface \
    ports { weight3x3_tile_buffe_303 { O 32 vector } weight3x3_tile_buffe_303_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name weight3x3_tile_buffe_304 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_304 \
    op interface \
    ports { weight3x3_tile_buffe_304 { O 32 vector } weight3x3_tile_buffe_304_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name weight3x3_tile_buffe_395 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_395 \
    op interface \
    ports { weight3x3_tile_buffe_395 { O 32 vector } weight3x3_tile_buffe_395_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name weight3x3_tile_buffe_396 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_396 \
    op interface \
    ports { weight3x3_tile_buffe_396 { O 32 vector } weight3x3_tile_buffe_396_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name weight3x3_tile_buffe_397 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_397 \
    op interface \
    ports { weight3x3_tile_buffe_397 { O 32 vector } weight3x3_tile_buffe_397_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name weight3x3_tile_buffe_398 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_398 \
    op interface \
    ports { weight3x3_tile_buffe_398 { O 32 vector } weight3x3_tile_buffe_398_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name weight3x3_tile_buffe_399 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_399 \
    op interface \
    ports { weight3x3_tile_buffe_399 { O 32 vector } weight3x3_tile_buffe_399_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name weight3x3_tile_buffe_400 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_400 \
    op interface \
    ports { weight3x3_tile_buffe_400 { O 32 vector } weight3x3_tile_buffe_400_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name weight3x3_tile_buffe_401 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_401 \
    op interface \
    ports { weight3x3_tile_buffe_401 { O 32 vector } weight3x3_tile_buffe_401_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name weight3x3_tile_buffe_402 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_402 \
    op interface \
    ports { weight3x3_tile_buffe_402 { O 32 vector } weight3x3_tile_buffe_402_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name weight3x3_tile_buffe_403 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_403 \
    op interface \
    ports { weight3x3_tile_buffe_403 { O 32 vector } weight3x3_tile_buffe_403_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name weight3x3_tile_buffe_80 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_80 \
    op interface \
    ports { weight3x3_tile_buffe_80 { O 32 vector } weight3x3_tile_buffe_80_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name weight3x3_tile_buffe_79 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_79 \
    op interface \
    ports { weight3x3_tile_buffe_79 { O 32 vector } weight3x3_tile_buffe_79_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 40 \
    name weight3x3_tile_buffe_78 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_78 \
    op interface \
    ports { weight3x3_tile_buffe_78 { O 32 vector } weight3x3_tile_buffe_78_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 41 \
    name weight3x3_tile_buffe_77 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_77 \
    op interface \
    ports { weight3x3_tile_buffe_77 { O 32 vector } weight3x3_tile_buffe_77_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name weight3x3_tile_buffe_76 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_76 \
    op interface \
    ports { weight3x3_tile_buffe_76 { O 32 vector } weight3x3_tile_buffe_76_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name weight3x3_tile_buffe_75 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_75 \
    op interface \
    ports { weight3x3_tile_buffe_75 { O 32 vector } weight3x3_tile_buffe_75_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
    name weight3x3_tile_buffe_74 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_74 \
    op interface \
    ports { weight3x3_tile_buffe_74 { O 32 vector } weight3x3_tile_buffe_74_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 45 \
    name weight3x3_tile_buffe_73 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_73 \
    op interface \
    ports { weight3x3_tile_buffe_73 { O 32 vector } weight3x3_tile_buffe_73_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name weight3x3_tile_buffe_72 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_72 \
    op interface \
    ports { weight3x3_tile_buffe_72 { O 32 vector } weight3x3_tile_buffe_72_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name weight3x3_tile_buffe_53 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_53 \
    op interface \
    ports { weight3x3_tile_buffe_53 { O 32 vector } weight3x3_tile_buffe_53_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name weight3x3_tile_buffe_52 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_52 \
    op interface \
    ports { weight3x3_tile_buffe_52 { O 32 vector } weight3x3_tile_buffe_52_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name weight3x3_tile_buffe_51 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_51 \
    op interface \
    ports { weight3x3_tile_buffe_51 { O 32 vector } weight3x3_tile_buffe_51_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name weight3x3_tile_buffe_50 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_50 \
    op interface \
    ports { weight3x3_tile_buffe_50 { O 32 vector } weight3x3_tile_buffe_50_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name weight3x3_tile_buffe_49 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_49 \
    op interface \
    ports { weight3x3_tile_buffe_49 { O 32 vector } weight3x3_tile_buffe_49_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name weight3x3_tile_buffe_48 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_48 \
    op interface \
    ports { weight3x3_tile_buffe_48 { O 32 vector } weight3x3_tile_buffe_48_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 53 \
    name weight3x3_tile_buffe_47 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_47 \
    op interface \
    ports { weight3x3_tile_buffe_47 { O 32 vector } weight3x3_tile_buffe_47_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 54 \
    name weight3x3_tile_buffe_46 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_46 \
    op interface \
    ports { weight3x3_tile_buffe_46 { O 32 vector } weight3x3_tile_buffe_46_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name weight3x3_tile_buffe_45 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_45 \
    op interface \
    ports { weight3x3_tile_buffe_45 { O 32 vector } weight3x3_tile_buffe_45_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name weight3x3_tile_buffe_44 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_44 \
    op interface \
    ports { weight3x3_tile_buffe_44 { O 32 vector } weight3x3_tile_buffe_44_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name weight3x3_tile_buffe_43 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_43 \
    op interface \
    ports { weight3x3_tile_buffe_43 { O 32 vector } weight3x3_tile_buffe_43_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name weight3x3_tile_buffe_42 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_42 \
    op interface \
    ports { weight3x3_tile_buffe_42 { O 32 vector } weight3x3_tile_buffe_42_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
    name weight3x3_tile_buffe_41 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_41 \
    op interface \
    ports { weight3x3_tile_buffe_41 { O 32 vector } weight3x3_tile_buffe_41_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 60 \
    name weight3x3_tile_buffe_40 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_40 \
    op interface \
    ports { weight3x3_tile_buffe_40 { O 32 vector } weight3x3_tile_buffe_40_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name weight3x3_tile_buffe_39 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_39 \
    op interface \
    ports { weight3x3_tile_buffe_39 { O 32 vector } weight3x3_tile_buffe_39_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 62 \
    name weight3x3_tile_buffe_38 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_38 \
    op interface \
    ports { weight3x3_tile_buffe_38 { O 32 vector } weight3x3_tile_buffe_38_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name weight3x3_tile_buffe_37 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_37 \
    op interface \
    ports { weight3x3_tile_buffe_37 { O 32 vector } weight3x3_tile_buffe_37_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 64 \
    name weight3x3_tile_buffe_36 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_36 \
    op interface \
    ports { weight3x3_tile_buffe_36 { O 32 vector } weight3x3_tile_buffe_36_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name weight3x3_tile_buffe_35 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_35 \
    op interface \
    ports { weight3x3_tile_buffe_35 { O 32 vector } weight3x3_tile_buffe_35_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name weight3x3_tile_buffe_34 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_34 \
    op interface \
    ports { weight3x3_tile_buffe_34 { O 32 vector } weight3x3_tile_buffe_34_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name weight3x3_tile_buffe_33 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_33 \
    op interface \
    ports { weight3x3_tile_buffe_33 { O 32 vector } weight3x3_tile_buffe_33_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 68 \
    name weight3x3_tile_buffe_32 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_32 \
    op interface \
    ports { weight3x3_tile_buffe_32 { O 32 vector } weight3x3_tile_buffe_32_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 69 \
    name weight3x3_tile_buffe_31 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_31 \
    op interface \
    ports { weight3x3_tile_buffe_31 { O 32 vector } weight3x3_tile_buffe_31_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 70 \
    name weight3x3_tile_buffe_30 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_30 \
    op interface \
    ports { weight3x3_tile_buffe_30 { O 32 vector } weight3x3_tile_buffe_30_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 71 \
    name weight3x3_tile_buffe_29 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_29 \
    op interface \
    ports { weight3x3_tile_buffe_29 { O 32 vector } weight3x3_tile_buffe_29_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 72 \
    name weight3x3_tile_buffe_28 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_28 \
    op interface \
    ports { weight3x3_tile_buffe_28 { O 32 vector } weight3x3_tile_buffe_28_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 73 \
    name weight3x3_tile_buffe_27 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_27 \
    op interface \
    ports { weight3x3_tile_buffe_27 { O 32 vector } weight3x3_tile_buffe_27_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 74 \
    name weight3x3_tile_buffe_26 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_26 \
    op interface \
    ports { weight3x3_tile_buffe_26 { O 32 vector } weight3x3_tile_buffe_26_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 75 \
    name weight3x3_tile_buffe_25 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_25 \
    op interface \
    ports { weight3x3_tile_buffe_25 { O 32 vector } weight3x3_tile_buffe_25_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 76 \
    name weight3x3_tile_buffe_24 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_24 \
    op interface \
    ports { weight3x3_tile_buffe_24 { O 32 vector } weight3x3_tile_buffe_24_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 77 \
    name weight3x3_tile_buffe_23 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_23 \
    op interface \
    ports { weight3x3_tile_buffe_23 { O 32 vector } weight3x3_tile_buffe_23_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 78 \
    name weight3x3_tile_buffe_22 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_22 \
    op interface \
    ports { weight3x3_tile_buffe_22 { O 32 vector } weight3x3_tile_buffe_22_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 79 \
    name weight3x3_tile_buffe_21 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_21 \
    op interface \
    ports { weight3x3_tile_buffe_21 { O 32 vector } weight3x3_tile_buffe_21_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 80 \
    name weight3x3_tile_buffe_20 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_20 \
    op interface \
    ports { weight3x3_tile_buffe_20 { O 32 vector } weight3x3_tile_buffe_20_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 81 \
    name weight3x3_tile_buffe_19 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_19 \
    op interface \
    ports { weight3x3_tile_buffe_19 { O 32 vector } weight3x3_tile_buffe_19_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 82 \
    name weight3x3_tile_buffe_18 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_18 \
    op interface \
    ports { weight3x3_tile_buffe_18 { O 32 vector } weight3x3_tile_buffe_18_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 83 \
    name weight3x3_tile_buffe_17 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_17 \
    op interface \
    ports { weight3x3_tile_buffe_17 { O 32 vector } weight3x3_tile_buffe_17_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 84 \
    name weight3x3_tile_buffe_16 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_16 \
    op interface \
    ports { weight3x3_tile_buffe_16 { O 32 vector } weight3x3_tile_buffe_16_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 85 \
    name weight3x3_tile_buffe_15 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_15 \
    op interface \
    ports { weight3x3_tile_buffe_15 { O 32 vector } weight3x3_tile_buffe_15_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 86 \
    name weight3x3_tile_buffe_14 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_14 \
    op interface \
    ports { weight3x3_tile_buffe_14 { O 32 vector } weight3x3_tile_buffe_14_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 87 \
    name weight3x3_tile_buffe_13 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_13 \
    op interface \
    ports { weight3x3_tile_buffe_13 { O 32 vector } weight3x3_tile_buffe_13_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 88 \
    name weight3x3_tile_buffe_12 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_12 \
    op interface \
    ports { weight3x3_tile_buffe_12 { O 32 vector } weight3x3_tile_buffe_12_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 89 \
    name weight3x3_tile_buffe_11 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_11 \
    op interface \
    ports { weight3x3_tile_buffe_11 { O 32 vector } weight3x3_tile_buffe_11_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 90 \
    name weight3x3_tile_buffe_10 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_10 \
    op interface \
    ports { weight3x3_tile_buffe_10 { O 32 vector } weight3x3_tile_buffe_10_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 91 \
    name weight3x3_tile_buffe_9 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_9 \
    op interface \
    ports { weight3x3_tile_buffe_9 { O 32 vector } weight3x3_tile_buffe_9_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 92 \
    name weight3x3_tile_buffe_8 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_8 \
    op interface \
    ports { weight3x3_tile_buffe_8 { O 32 vector } weight3x3_tile_buffe_8_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 93 \
    name weight3x3_tile_buffe_7 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_7 \
    op interface \
    ports { weight3x3_tile_buffe_7 { O 32 vector } weight3x3_tile_buffe_7_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 94 \
    name weight3x3_tile_buffe_6 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_6 \
    op interface \
    ports { weight3x3_tile_buffe_6 { O 32 vector } weight3x3_tile_buffe_6_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 95 \
    name weight3x3_tile_buffe_5 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_5 \
    op interface \
    ports { weight3x3_tile_buffe_5 { O 32 vector } weight3x3_tile_buffe_5_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 96 \
    name weight3x3_tile_buffe_4 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_4 \
    op interface \
    ports { weight3x3_tile_buffe_4 { O 32 vector } weight3x3_tile_buffe_4_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 97 \
    name weight3x3_tile_buffe_3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_3 \
    op interface \
    ports { weight3x3_tile_buffe_3 { O 32 vector } weight3x3_tile_buffe_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 98 \
    name weight3x3_tile_buffe_2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_2 \
    op interface \
    ports { weight3x3_tile_buffe_2 { O 32 vector } weight3x3_tile_buffe_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 99 \
    name weight3x3_tile_buffe_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_1 \
    op interface \
    ports { weight3x3_tile_buffe_1 { O 32 vector } weight3x3_tile_buffe_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 100 \
    name weight3x3_tile_buffe \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe \
    op interface \
    ports { weight3x3_tile_buffe { O 32 vector } weight3x3_tile_buffe_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 101 \
    name weight3x3_tile_buffe_305 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_305 \
    op interface \
    ports { weight3x3_tile_buffe_305 { O 32 vector } weight3x3_tile_buffe_305_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 102 \
    name weight3x3_tile_buffe_306 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_306 \
    op interface \
    ports { weight3x3_tile_buffe_306 { O 32 vector } weight3x3_tile_buffe_306_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 103 \
    name weight3x3_tile_buffe_307 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_307 \
    op interface \
    ports { weight3x3_tile_buffe_307 { O 32 vector } weight3x3_tile_buffe_307_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 104 \
    name weight3x3_tile_buffe_308 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_308 \
    op interface \
    ports { weight3x3_tile_buffe_308 { O 32 vector } weight3x3_tile_buffe_308_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 105 \
    name weight3x3_tile_buffe_309 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_309 \
    op interface \
    ports { weight3x3_tile_buffe_309 { O 32 vector } weight3x3_tile_buffe_309_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 106 \
    name weight3x3_tile_buffe_310 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_310 \
    op interface \
    ports { weight3x3_tile_buffe_310 { O 32 vector } weight3x3_tile_buffe_310_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 107 \
    name weight3x3_tile_buffe_311 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_311 \
    op interface \
    ports { weight3x3_tile_buffe_311 { O 32 vector } weight3x3_tile_buffe_311_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 108 \
    name weight3x3_tile_buffe_312 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_312 \
    op interface \
    ports { weight3x3_tile_buffe_312 { O 32 vector } weight3x3_tile_buffe_312_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 109 \
    name weight3x3_tile_buffe_313 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_313 \
    op interface \
    ports { weight3x3_tile_buffe_313 { O 32 vector } weight3x3_tile_buffe_313_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 110 \
    name weight3x3_tile_buffe_314 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_314 \
    op interface \
    ports { weight3x3_tile_buffe_314 { O 32 vector } weight3x3_tile_buffe_314_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 111 \
    name weight3x3_tile_buffe_315 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_315 \
    op interface \
    ports { weight3x3_tile_buffe_315 { O 32 vector } weight3x3_tile_buffe_315_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 112 \
    name weight3x3_tile_buffe_316 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_316 \
    op interface \
    ports { weight3x3_tile_buffe_316 { O 32 vector } weight3x3_tile_buffe_316_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 113 \
    name weight3x3_tile_buffe_317 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_317 \
    op interface \
    ports { weight3x3_tile_buffe_317 { O 32 vector } weight3x3_tile_buffe_317_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 114 \
    name weight3x3_tile_buffe_318 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_318 \
    op interface \
    ports { weight3x3_tile_buffe_318 { O 32 vector } weight3x3_tile_buffe_318_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 115 \
    name weight3x3_tile_buffe_319 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_319 \
    op interface \
    ports { weight3x3_tile_buffe_319 { O 32 vector } weight3x3_tile_buffe_319_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 116 \
    name weight3x3_tile_buffe_320 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_320 \
    op interface \
    ports { weight3x3_tile_buffe_320 { O 32 vector } weight3x3_tile_buffe_320_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 117 \
    name weight3x3_tile_buffe_321 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_321 \
    op interface \
    ports { weight3x3_tile_buffe_321 { O 32 vector } weight3x3_tile_buffe_321_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 118 \
    name weight3x3_tile_buffe_322 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_322 \
    op interface \
    ports { weight3x3_tile_buffe_322 { O 32 vector } weight3x3_tile_buffe_322_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
    name weight3x3_tile_buffe_323 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_323 \
    op interface \
    ports { weight3x3_tile_buffe_323 { O 32 vector } weight3x3_tile_buffe_323_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 120 \
    name weight3x3_tile_buffe_324 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_324 \
    op interface \
    ports { weight3x3_tile_buffe_324 { O 32 vector } weight3x3_tile_buffe_324_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 121 \
    name weight3x3_tile_buffe_325 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_325 \
    op interface \
    ports { weight3x3_tile_buffe_325 { O 32 vector } weight3x3_tile_buffe_325_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 122 \
    name weight3x3_tile_buffe_326 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_326 \
    op interface \
    ports { weight3x3_tile_buffe_326 { O 32 vector } weight3x3_tile_buffe_326_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 123 \
    name weight3x3_tile_buffe_327 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_327 \
    op interface \
    ports { weight3x3_tile_buffe_327 { O 32 vector } weight3x3_tile_buffe_327_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 124 \
    name weight3x3_tile_buffe_328 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_328 \
    op interface \
    ports { weight3x3_tile_buffe_328 { O 32 vector } weight3x3_tile_buffe_328_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 125 \
    name weight3x3_tile_buffe_329 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_329 \
    op interface \
    ports { weight3x3_tile_buffe_329 { O 32 vector } weight3x3_tile_buffe_329_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 126 \
    name weight3x3_tile_buffe_330 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_330 \
    op interface \
    ports { weight3x3_tile_buffe_330 { O 32 vector } weight3x3_tile_buffe_330_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 127 \
    name weight3x3_tile_buffe_331 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_331 \
    op interface \
    ports { weight3x3_tile_buffe_331 { O 32 vector } weight3x3_tile_buffe_331_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 128 \
    name weight3x3_tile_buffe_332 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_332 \
    op interface \
    ports { weight3x3_tile_buffe_332 { O 32 vector } weight3x3_tile_buffe_332_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name weight3x3_tile_buffe_333 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_333 \
    op interface \
    ports { weight3x3_tile_buffe_333 { O 32 vector } weight3x3_tile_buffe_333_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name weight3x3_tile_buffe_334 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_334 \
    op interface \
    ports { weight3x3_tile_buffe_334 { O 32 vector } weight3x3_tile_buffe_334_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name weight3x3_tile_buffe_335 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_335 \
    op interface \
    ports { weight3x3_tile_buffe_335 { O 32 vector } weight3x3_tile_buffe_335_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name weight3x3_tile_buffe_336 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_336 \
    op interface \
    ports { weight3x3_tile_buffe_336 { O 32 vector } weight3x3_tile_buffe_336_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name weight3x3_tile_buffe_337 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_337 \
    op interface \
    ports { weight3x3_tile_buffe_337 { O 32 vector } weight3x3_tile_buffe_337_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name weight3x3_tile_buffe_338 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_338 \
    op interface \
    ports { weight3x3_tile_buffe_338 { O 32 vector } weight3x3_tile_buffe_338_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name weight3x3_tile_buffe_339 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_339 \
    op interface \
    ports { weight3x3_tile_buffe_339 { O 32 vector } weight3x3_tile_buffe_339_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name weight3x3_tile_buffe_340 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_340 \
    op interface \
    ports { weight3x3_tile_buffe_340 { O 32 vector } weight3x3_tile_buffe_340_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name weight3x3_tile_buffe_341 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_341 \
    op interface \
    ports { weight3x3_tile_buffe_341 { O 32 vector } weight3x3_tile_buffe_341_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name weight3x3_tile_buffe_342 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_342 \
    op interface \
    ports { weight3x3_tile_buffe_342 { O 32 vector } weight3x3_tile_buffe_342_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name weight3x3_tile_buffe_343 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_343 \
    op interface \
    ports { weight3x3_tile_buffe_343 { O 32 vector } weight3x3_tile_buffe_343_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 140 \
    name weight3x3_tile_buffe_344 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_344 \
    op interface \
    ports { weight3x3_tile_buffe_344 { O 32 vector } weight3x3_tile_buffe_344_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 141 \
    name weight3x3_tile_buffe_345 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_345 \
    op interface \
    ports { weight3x3_tile_buffe_345 { O 32 vector } weight3x3_tile_buffe_345_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name weight3x3_tile_buffe_346 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_346 \
    op interface \
    ports { weight3x3_tile_buffe_346 { O 32 vector } weight3x3_tile_buffe_346_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 143 \
    name weight3x3_tile_buffe_347 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_347 \
    op interface \
    ports { weight3x3_tile_buffe_347 { O 32 vector } weight3x3_tile_buffe_347_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 144 \
    name weight3x3_tile_buffe_348 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_348 \
    op interface \
    ports { weight3x3_tile_buffe_348 { O 32 vector } weight3x3_tile_buffe_348_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name weight3x3_tile_buffe_349 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_349 \
    op interface \
    ports { weight3x3_tile_buffe_349 { O 32 vector } weight3x3_tile_buffe_349_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name weight3x3_tile_buffe_350 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_350 \
    op interface \
    ports { weight3x3_tile_buffe_350 { O 32 vector } weight3x3_tile_buffe_350_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name weight3x3_tile_buffe_351 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_351 \
    op interface \
    ports { weight3x3_tile_buffe_351 { O 32 vector } weight3x3_tile_buffe_351_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name weight3x3_tile_buffe_352 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_352 \
    op interface \
    ports { weight3x3_tile_buffe_352 { O 32 vector } weight3x3_tile_buffe_352_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name weight3x3_tile_buffe_353 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_353 \
    op interface \
    ports { weight3x3_tile_buffe_353 { O 32 vector } weight3x3_tile_buffe_353_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name weight3x3_tile_buffe_354 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_354 \
    op interface \
    ports { weight3x3_tile_buffe_354 { O 32 vector } weight3x3_tile_buffe_354_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name weight3x3_tile_buffe_355 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_355 \
    op interface \
    ports { weight3x3_tile_buffe_355 { O 32 vector } weight3x3_tile_buffe_355_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name weight3x3_tile_buffe_356 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_356 \
    op interface \
    ports { weight3x3_tile_buffe_356 { O 32 vector } weight3x3_tile_buffe_356_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name weight3x3_tile_buffe_357 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_357 \
    op interface \
    ports { weight3x3_tile_buffe_357 { O 32 vector } weight3x3_tile_buffe_357_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name weight3x3_tile_buffe_358 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_358 \
    op interface \
    ports { weight3x3_tile_buffe_358 { O 32 vector } weight3x3_tile_buffe_358_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name weight3x3_tile_buffe_359 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_359 \
    op interface \
    ports { weight3x3_tile_buffe_359 { O 32 vector } weight3x3_tile_buffe_359_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name weight3x3_tile_buffe_360 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_360 \
    op interface \
    ports { weight3x3_tile_buffe_360 { O 32 vector } weight3x3_tile_buffe_360_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 157 \
    name weight3x3_tile_buffe_361 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_361 \
    op interface \
    ports { weight3x3_tile_buffe_361 { O 32 vector } weight3x3_tile_buffe_361_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 158 \
    name weight3x3_tile_buffe_362 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_362 \
    op interface \
    ports { weight3x3_tile_buffe_362 { O 32 vector } weight3x3_tile_buffe_362_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 159 \
    name weight3x3_tile_buffe_363 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_363 \
    op interface \
    ports { weight3x3_tile_buffe_363 { O 32 vector } weight3x3_tile_buffe_363_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 160 \
    name weight3x3_tile_buffe_364 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_364 \
    op interface \
    ports { weight3x3_tile_buffe_364 { O 32 vector } weight3x3_tile_buffe_364_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 161 \
    name weight3x3_tile_buffe_365 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_365 \
    op interface \
    ports { weight3x3_tile_buffe_365 { O 32 vector } weight3x3_tile_buffe_365_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name weight3x3_tile_buffe_366 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_366 \
    op interface \
    ports { weight3x3_tile_buffe_366 { O 32 vector } weight3x3_tile_buffe_366_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name weight3x3_tile_buffe_367 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_367 \
    op interface \
    ports { weight3x3_tile_buffe_367 { O 32 vector } weight3x3_tile_buffe_367_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name weight3x3_tile_buffe_368 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_368 \
    op interface \
    ports { weight3x3_tile_buffe_368 { O 32 vector } weight3x3_tile_buffe_368_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name weight3x3_tile_buffe_369 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_369 \
    op interface \
    ports { weight3x3_tile_buffe_369 { O 32 vector } weight3x3_tile_buffe_369_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name weight3x3_tile_buffe_370 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_370 \
    op interface \
    ports { weight3x3_tile_buffe_370 { O 32 vector } weight3x3_tile_buffe_370_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name weight3x3_tile_buffe_371 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_371 \
    op interface \
    ports { weight3x3_tile_buffe_371 { O 32 vector } weight3x3_tile_buffe_371_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 168 \
    name weight3x3_tile_buffe_372 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_372 \
    op interface \
    ports { weight3x3_tile_buffe_372 { O 32 vector } weight3x3_tile_buffe_372_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 169 \
    name weight3x3_tile_buffe_373 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_373 \
    op interface \
    ports { weight3x3_tile_buffe_373 { O 32 vector } weight3x3_tile_buffe_373_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 170 \
    name weight3x3_tile_buffe_374 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_374 \
    op interface \
    ports { weight3x3_tile_buffe_374 { O 32 vector } weight3x3_tile_buffe_374_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 171 \
    name weight3x3_tile_buffe_375 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_375 \
    op interface \
    ports { weight3x3_tile_buffe_375 { O 32 vector } weight3x3_tile_buffe_375_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 172 \
    name weight3x3_tile_buffe_376 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_376 \
    op interface \
    ports { weight3x3_tile_buffe_376 { O 32 vector } weight3x3_tile_buffe_376_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 173 \
    name weight3x3_tile_buffe_377 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_377 \
    op interface \
    ports { weight3x3_tile_buffe_377 { O 32 vector } weight3x3_tile_buffe_377_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 174 \
    name weight3x3_tile_buffe_378 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_378 \
    op interface \
    ports { weight3x3_tile_buffe_378 { O 32 vector } weight3x3_tile_buffe_378_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 175 \
    name weight3x3_tile_buffe_379 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_379 \
    op interface \
    ports { weight3x3_tile_buffe_379 { O 32 vector } weight3x3_tile_buffe_379_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 176 \
    name weight3x3_tile_buffe_380 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_380 \
    op interface \
    ports { weight3x3_tile_buffe_380 { O 32 vector } weight3x3_tile_buffe_380_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 177 \
    name weight3x3_tile_buffe_381 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_381 \
    op interface \
    ports { weight3x3_tile_buffe_381 { O 32 vector } weight3x3_tile_buffe_381_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 178 \
    name weight3x3_tile_buffe_382 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_382 \
    op interface \
    ports { weight3x3_tile_buffe_382 { O 32 vector } weight3x3_tile_buffe_382_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 179 \
    name weight3x3_tile_buffe_383 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_383 \
    op interface \
    ports { weight3x3_tile_buffe_383 { O 32 vector } weight3x3_tile_buffe_383_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name weight3x3_tile_buffe_384 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_384 \
    op interface \
    ports { weight3x3_tile_buffe_384 { O 32 vector } weight3x3_tile_buffe_384_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name weight3x3_tile_buffe_385 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_385 \
    op interface \
    ports { weight3x3_tile_buffe_385 { O 32 vector } weight3x3_tile_buffe_385_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 182 \
    name weight3x3_tile_buffe_386 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_386 \
    op interface \
    ports { weight3x3_tile_buffe_386 { O 32 vector } weight3x3_tile_buffe_386_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 183 \
    name weight3x3_tile_buffe_387 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_387 \
    op interface \
    ports { weight3x3_tile_buffe_387 { O 32 vector } weight3x3_tile_buffe_387_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 184 \
    name weight3x3_tile_buffe_388 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_388 \
    op interface \
    ports { weight3x3_tile_buffe_388 { O 32 vector } weight3x3_tile_buffe_388_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 185 \
    name weight3x3_tile_buffe_389 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_389 \
    op interface \
    ports { weight3x3_tile_buffe_389 { O 32 vector } weight3x3_tile_buffe_389_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 186 \
    name weight3x3_tile_buffe_390 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_390 \
    op interface \
    ports { weight3x3_tile_buffe_390 { O 32 vector } weight3x3_tile_buffe_390_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 187 \
    name weight3x3_tile_buffe_391 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_391 \
    op interface \
    ports { weight3x3_tile_buffe_391 { O 32 vector } weight3x3_tile_buffe_391_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 188 \
    name weight3x3_tile_buffe_392 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_392 \
    op interface \
    ports { weight3x3_tile_buffe_392 { O 32 vector } weight3x3_tile_buffe_392_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 189 \
    name weight3x3_tile_buffe_393 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_393 \
    op interface \
    ports { weight3x3_tile_buffe_393 { O 32 vector } weight3x3_tile_buffe_393_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 190 \
    name weight3x3_tile_buffe_394 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_394 \
    op interface \
    ports { weight3x3_tile_buffe_394 { O 32 vector } weight3x3_tile_buffe_394_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 191 \
    name weight3x3_tile_buffe_404 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_404 \
    op interface \
    ports { weight3x3_tile_buffe_404 { O 32 vector } weight3x3_tile_buffe_404_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 192 \
    name weight3x3_tile_buffe_405 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_405 \
    op interface \
    ports { weight3x3_tile_buffe_405 { O 32 vector } weight3x3_tile_buffe_405_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 193 \
    name weight3x3_tile_buffe_406 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_406 \
    op interface \
    ports { weight3x3_tile_buffe_406 { O 32 vector } weight3x3_tile_buffe_406_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 194 \
    name weight3x3_tile_buffe_407 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_407 \
    op interface \
    ports { weight3x3_tile_buffe_407 { O 32 vector } weight3x3_tile_buffe_407_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 195 \
    name weight3x3_tile_buffe_408 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_408 \
    op interface \
    ports { weight3x3_tile_buffe_408 { O 32 vector } weight3x3_tile_buffe_408_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 196 \
    name weight3x3_tile_buffe_409 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_409 \
    op interface \
    ports { weight3x3_tile_buffe_409 { O 32 vector } weight3x3_tile_buffe_409_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 197 \
    name weight3x3_tile_buffe_410 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_410 \
    op interface \
    ports { weight3x3_tile_buffe_410 { O 32 vector } weight3x3_tile_buffe_410_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 198 \
    name weight3x3_tile_buffe_411 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_411 \
    op interface \
    ports { weight3x3_tile_buffe_411 { O 32 vector } weight3x3_tile_buffe_411_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 199 \
    name weight3x3_tile_buffe_412 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_412 \
    op interface \
    ports { weight3x3_tile_buffe_412 { O 32 vector } weight3x3_tile_buffe_412_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 200 \
    name weight3x3_tile_buffe_413 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_413 \
    op interface \
    ports { weight3x3_tile_buffe_413 { O 32 vector } weight3x3_tile_buffe_413_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 201 \
    name weight3x3_tile_buffe_414 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_414 \
    op interface \
    ports { weight3x3_tile_buffe_414 { O 32 vector } weight3x3_tile_buffe_414_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 202 \
    name weight3x3_tile_buffe_415 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_415 \
    op interface \
    ports { weight3x3_tile_buffe_415 { O 32 vector } weight3x3_tile_buffe_415_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 203 \
    name weight3x3_tile_buffe_416 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_416 \
    op interface \
    ports { weight3x3_tile_buffe_416 { O 32 vector } weight3x3_tile_buffe_416_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 204 \
    name weight3x3_tile_buffe_417 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_417 \
    op interface \
    ports { weight3x3_tile_buffe_417 { O 32 vector } weight3x3_tile_buffe_417_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name weight3x3_tile_buffe_418 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_418 \
    op interface \
    ports { weight3x3_tile_buffe_418 { O 32 vector } weight3x3_tile_buffe_418_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name weight3x3_tile_buffe_419 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_419 \
    op interface \
    ports { weight3x3_tile_buffe_419 { O 32 vector } weight3x3_tile_buffe_419_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
    name weight3x3_tile_buffe_420 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_420 \
    op interface \
    ports { weight3x3_tile_buffe_420 { O 32 vector } weight3x3_tile_buffe_420_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 208 \
    name weight3x3_tile_buffe_421 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_421 \
    op interface \
    ports { weight3x3_tile_buffe_421 { O 32 vector } weight3x3_tile_buffe_421_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 209 \
    name weight3x3_tile_buffe_422 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_422 \
    op interface \
    ports { weight3x3_tile_buffe_422 { O 32 vector } weight3x3_tile_buffe_422_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 210 \
    name weight3x3_tile_buffe_423 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_423 \
    op interface \
    ports { weight3x3_tile_buffe_423 { O 32 vector } weight3x3_tile_buffe_423_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 211 \
    name weight3x3_tile_buffe_424 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_424 \
    op interface \
    ports { weight3x3_tile_buffe_424 { O 32 vector } weight3x3_tile_buffe_424_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 212 \
    name weight3x3_tile_buffe_425 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_425 \
    op interface \
    ports { weight3x3_tile_buffe_425 { O 32 vector } weight3x3_tile_buffe_425_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 213 \
    name weight3x3_tile_buffe_426 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_426 \
    op interface \
    ports { weight3x3_tile_buffe_426 { O 32 vector } weight3x3_tile_buffe_426_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 214 \
    name weight3x3_tile_buffe_427 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_427 \
    op interface \
    ports { weight3x3_tile_buffe_427 { O 32 vector } weight3x3_tile_buffe_427_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 215 \
    name weight3x3_tile_buffe_428 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_428 \
    op interface \
    ports { weight3x3_tile_buffe_428 { O 32 vector } weight3x3_tile_buffe_428_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 216 \
    name weight3x3_tile_buffe_429 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_429 \
    op interface \
    ports { weight3x3_tile_buffe_429 { O 32 vector } weight3x3_tile_buffe_429_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 217 \
    name weight3x3_tile_buffe_430 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_430 \
    op interface \
    ports { weight3x3_tile_buffe_430 { O 32 vector } weight3x3_tile_buffe_430_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 218 \
    name weight3x3_tile_buffe_431 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_431 \
    op interface \
    ports { weight3x3_tile_buffe_431 { O 32 vector } weight3x3_tile_buffe_431_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 219 \
    name weight3x3_tile_buffe_432 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_432 \
    op interface \
    ports { weight3x3_tile_buffe_432 { O 32 vector } weight3x3_tile_buffe_432_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 220 \
    name weight3x3_tile_buffe_433 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_433 \
    op interface \
    ports { weight3x3_tile_buffe_433 { O 32 vector } weight3x3_tile_buffe_433_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name weight3x3_tile_buffe_434 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_434 \
    op interface \
    ports { weight3x3_tile_buffe_434 { O 32 vector } weight3x3_tile_buffe_434_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name weight3x3_tile_buffe_435 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_435 \
    op interface \
    ports { weight3x3_tile_buffe_435 { O 32 vector } weight3x3_tile_buffe_435_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name weight3x3_tile_buffe_436 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_436 \
    op interface \
    ports { weight3x3_tile_buffe_436 { O 32 vector } weight3x3_tile_buffe_436_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name weight3x3_tile_buffe_437 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_437 \
    op interface \
    ports { weight3x3_tile_buffe_437 { O 32 vector } weight3x3_tile_buffe_437_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name weight3x3_tile_buffe_438 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_438 \
    op interface \
    ports { weight3x3_tile_buffe_438 { O 32 vector } weight3x3_tile_buffe_438_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 226 \
    name weight3x3_tile_buffe_439 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_439 \
    op interface \
    ports { weight3x3_tile_buffe_439 { O 32 vector } weight3x3_tile_buffe_439_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
    name weight3x3_tile_buffe_440 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_440 \
    op interface \
    ports { weight3x3_tile_buffe_440 { O 32 vector } weight3x3_tile_buffe_440_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 228 \
    name weight3x3_tile_buffe_441 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_441 \
    op interface \
    ports { weight3x3_tile_buffe_441 { O 32 vector } weight3x3_tile_buffe_441_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 229 \
    name weight3x3_tile_buffe_442 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_442 \
    op interface \
    ports { weight3x3_tile_buffe_442 { O 32 vector } weight3x3_tile_buffe_442_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 230 \
    name weight3x3_tile_buffe_443 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_443 \
    op interface \
    ports { weight3x3_tile_buffe_443 { O 32 vector } weight3x3_tile_buffe_443_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 231 \
    name weight3x3_tile_buffe_444 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_444 \
    op interface \
    ports { weight3x3_tile_buffe_444 { O 32 vector } weight3x3_tile_buffe_444_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 232 \
    name weight3x3_tile_buffe_445 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_445 \
    op interface \
    ports { weight3x3_tile_buffe_445 { O 32 vector } weight3x3_tile_buffe_445_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 233 \
    name weight3x3_tile_buffe_446 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_446 \
    op interface \
    ports { weight3x3_tile_buffe_446 { O 32 vector } weight3x3_tile_buffe_446_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 234 \
    name weight3x3_tile_buffe_447 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_447 \
    op interface \
    ports { weight3x3_tile_buffe_447 { O 32 vector } weight3x3_tile_buffe_447_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 235 \
    name weight3x3_tile_buffe_448 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_448 \
    op interface \
    ports { weight3x3_tile_buffe_448 { O 32 vector } weight3x3_tile_buffe_448_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 236 \
    name weight3x3_tile_buffe_449 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_449 \
    op interface \
    ports { weight3x3_tile_buffe_449 { O 32 vector } weight3x3_tile_buffe_449_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 237 \
    name weight3x3_tile_buffe_450 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_450 \
    op interface \
    ports { weight3x3_tile_buffe_450 { O 32 vector } weight3x3_tile_buffe_450_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 238 \
    name weight3x3_tile_buffe_451 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_451 \
    op interface \
    ports { weight3x3_tile_buffe_451 { O 32 vector } weight3x3_tile_buffe_451_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 239 \
    name weight3x3_tile_buffe_452 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_452 \
    op interface \
    ports { weight3x3_tile_buffe_452 { O 32 vector } weight3x3_tile_buffe_452_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 240 \
    name weight3x3_tile_buffe_453 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_453 \
    op interface \
    ports { weight3x3_tile_buffe_453 { O 32 vector } weight3x3_tile_buffe_453_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 241 \
    name weight3x3_tile_buffe_454 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_454 \
    op interface \
    ports { weight3x3_tile_buffe_454 { O 32 vector } weight3x3_tile_buffe_454_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 242 \
    name weight3x3_tile_buffe_455 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_455 \
    op interface \
    ports { weight3x3_tile_buffe_455 { O 32 vector } weight3x3_tile_buffe_455_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 243 \
    name weight3x3_tile_buffe_456 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_456 \
    op interface \
    ports { weight3x3_tile_buffe_456 { O 32 vector } weight3x3_tile_buffe_456_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 244 \
    name weight3x3_tile_buffe_457 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_457 \
    op interface \
    ports { weight3x3_tile_buffe_457 { O 32 vector } weight3x3_tile_buffe_457_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 245 \
    name weight3x3_tile_buffe_458 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_458 \
    op interface \
    ports { weight3x3_tile_buffe_458 { O 32 vector } weight3x3_tile_buffe_458_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 246 \
    name weight3x3_tile_buffe_459 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_459 \
    op interface \
    ports { weight3x3_tile_buffe_459 { O 32 vector } weight3x3_tile_buffe_459_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 247 \
    name weight3x3_tile_buffe_460 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_460 \
    op interface \
    ports { weight3x3_tile_buffe_460 { O 32 vector } weight3x3_tile_buffe_460_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 248 \
    name weight3x3_tile_buffe_461 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_461 \
    op interface \
    ports { weight3x3_tile_buffe_461 { O 32 vector } weight3x3_tile_buffe_461_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 249 \
    name weight3x3_tile_buffe_462 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_462 \
    op interface \
    ports { weight3x3_tile_buffe_462 { O 32 vector } weight3x3_tile_buffe_462_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 250 \
    name weight3x3_tile_buffe_463 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_463 \
    op interface \
    ports { weight3x3_tile_buffe_463 { O 32 vector } weight3x3_tile_buffe_463_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 251 \
    name weight3x3_tile_buffe_464 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_464 \
    op interface \
    ports { weight3x3_tile_buffe_464 { O 32 vector } weight3x3_tile_buffe_464_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 252 \
    name weight3x3_tile_buffe_465 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_465 \
    op interface \
    ports { weight3x3_tile_buffe_465 { O 32 vector } weight3x3_tile_buffe_465_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 253 \
    name weight3x3_tile_buffe_466 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_466 \
    op interface \
    ports { weight3x3_tile_buffe_466 { O 32 vector } weight3x3_tile_buffe_466_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 254 \
    name weight3x3_tile_buffe_467 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_467 \
    op interface \
    ports { weight3x3_tile_buffe_467 { O 32 vector } weight3x3_tile_buffe_467_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 255 \
    name weight3x3_tile_buffe_468 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_468 \
    op interface \
    ports { weight3x3_tile_buffe_468 { O 32 vector } weight3x3_tile_buffe_468_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 256 \
    name weight3x3_tile_buffe_469 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_469 \
    op interface \
    ports { weight3x3_tile_buffe_469 { O 32 vector } weight3x3_tile_buffe_469_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 257 \
    name weight3x3_tile_buffe_470 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_470 \
    op interface \
    ports { weight3x3_tile_buffe_470 { O 32 vector } weight3x3_tile_buffe_470_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 258 \
    name weight3x3_tile_buffe_471 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_471 \
    op interface \
    ports { weight3x3_tile_buffe_471 { O 32 vector } weight3x3_tile_buffe_471_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 259 \
    name weight3x3_tile_buffe_472 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_472 \
    op interface \
    ports { weight3x3_tile_buffe_472 { O 32 vector } weight3x3_tile_buffe_472_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 260 \
    name weight3x3_tile_buffe_473 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_473 \
    op interface \
    ports { weight3x3_tile_buffe_473 { O 32 vector } weight3x3_tile_buffe_473_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 261 \
    name weight3x3_tile_buffe_474 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_474 \
    op interface \
    ports { weight3x3_tile_buffe_474 { O 32 vector } weight3x3_tile_buffe_474_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 262 \
    name weight3x3_tile_buffe_99 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_99 \
    op interface \
    ports { weight3x3_tile_buffe_99 { O 32 vector } weight3x3_tile_buffe_99_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 263 \
    name weight3x3_tile_buffe_98 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_98 \
    op interface \
    ports { weight3x3_tile_buffe_98 { O 32 vector } weight3x3_tile_buffe_98_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 264 \
    name weight3x3_tile_buffe_97 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_97 \
    op interface \
    ports { weight3x3_tile_buffe_97 { O 32 vector } weight3x3_tile_buffe_97_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 265 \
    name weight3x3_tile_buffe_96 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_96 \
    op interface \
    ports { weight3x3_tile_buffe_96 { O 32 vector } weight3x3_tile_buffe_96_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 266 \
    name weight3x3_tile_buffe_95 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_95 \
    op interface \
    ports { weight3x3_tile_buffe_95 { O 32 vector } weight3x3_tile_buffe_95_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 267 \
    name weight3x3_tile_buffe_94 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_94 \
    op interface \
    ports { weight3x3_tile_buffe_94 { O 32 vector } weight3x3_tile_buffe_94_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 268 \
    name weight3x3_tile_buffe_93 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_93 \
    op interface \
    ports { weight3x3_tile_buffe_93 { O 32 vector } weight3x3_tile_buffe_93_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 269 \
    name weight3x3_tile_buffe_92 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_92 \
    op interface \
    ports { weight3x3_tile_buffe_92 { O 32 vector } weight3x3_tile_buffe_92_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 270 \
    name weight3x3_tile_buffe_91 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_91 \
    op interface \
    ports { weight3x3_tile_buffe_91 { O 32 vector } weight3x3_tile_buffe_91_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 271 \
    name weight3x3_tile_buffe_90 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_90 \
    op interface \
    ports { weight3x3_tile_buffe_90 { O 32 vector } weight3x3_tile_buffe_90_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 272 \
    name weight3x3_tile_buffe_89 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_89 \
    op interface \
    ports { weight3x3_tile_buffe_89 { O 32 vector } weight3x3_tile_buffe_89_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 273 \
    name weight3x3_tile_buffe_88 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_88 \
    op interface \
    ports { weight3x3_tile_buffe_88 { O 32 vector } weight3x3_tile_buffe_88_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 274 \
    name weight3x3_tile_buffe_87 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_87 \
    op interface \
    ports { weight3x3_tile_buffe_87 { O 32 vector } weight3x3_tile_buffe_87_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 275 \
    name weight3x3_tile_buffe_86 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_86 \
    op interface \
    ports { weight3x3_tile_buffe_86 { O 32 vector } weight3x3_tile_buffe_86_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 276 \
    name weight3x3_tile_buffe_85 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_85 \
    op interface \
    ports { weight3x3_tile_buffe_85 { O 32 vector } weight3x3_tile_buffe_85_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 277 \
    name weight3x3_tile_buffe_84 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_84 \
    op interface \
    ports { weight3x3_tile_buffe_84 { O 32 vector } weight3x3_tile_buffe_84_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 278 \
    name weight3x3_tile_buffe_83 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_83 \
    op interface \
    ports { weight3x3_tile_buffe_83 { O 32 vector } weight3x3_tile_buffe_83_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 279 \
    name weight3x3_tile_buffe_82 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_82 \
    op interface \
    ports { weight3x3_tile_buffe_82 { O 32 vector } weight3x3_tile_buffe_82_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 280 \
    name weight3x3_tile_buffe_81 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_81 \
    op interface \
    ports { weight3x3_tile_buffe_81 { O 32 vector } weight3x3_tile_buffe_81_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 281 \
    name weight3x3_tile_buffe_71 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_71 \
    op interface \
    ports { weight3x3_tile_buffe_71 { O 32 vector } weight3x3_tile_buffe_71_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 282 \
    name weight3x3_tile_buffe_70 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_70 \
    op interface \
    ports { weight3x3_tile_buffe_70 { O 32 vector } weight3x3_tile_buffe_70_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 283 \
    name weight3x3_tile_buffe_69 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_69 \
    op interface \
    ports { weight3x3_tile_buffe_69 { O 32 vector } weight3x3_tile_buffe_69_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 284 \
    name weight3x3_tile_buffe_68 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_68 \
    op interface \
    ports { weight3x3_tile_buffe_68 { O 32 vector } weight3x3_tile_buffe_68_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 285 \
    name weight3x3_tile_buffe_67 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_67 \
    op interface \
    ports { weight3x3_tile_buffe_67 { O 32 vector } weight3x3_tile_buffe_67_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 286 \
    name weight3x3_tile_buffe_66 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_66 \
    op interface \
    ports { weight3x3_tile_buffe_66 { O 32 vector } weight3x3_tile_buffe_66_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 287 \
    name weight3x3_tile_buffe_65 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_65 \
    op interface \
    ports { weight3x3_tile_buffe_65 { O 32 vector } weight3x3_tile_buffe_65_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 288 \
    name weight3x3_tile_buffe_64 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_64 \
    op interface \
    ports { weight3x3_tile_buffe_64 { O 32 vector } weight3x3_tile_buffe_64_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 289 \
    name weight3x3_tile_buffe_63 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_63 \
    op interface \
    ports { weight3x3_tile_buffe_63 { O 32 vector } weight3x3_tile_buffe_63_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 290 \
    name weight3x3_tile_buffe_62 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_62 \
    op interface \
    ports { weight3x3_tile_buffe_62 { O 32 vector } weight3x3_tile_buffe_62_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 291 \
    name weight3x3_tile_buffe_61 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_61 \
    op interface \
    ports { weight3x3_tile_buffe_61 { O 32 vector } weight3x3_tile_buffe_61_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 292 \
    name weight3x3_tile_buffe_60 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_60 \
    op interface \
    ports { weight3x3_tile_buffe_60 { O 32 vector } weight3x3_tile_buffe_60_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 293 \
    name weight3x3_tile_buffe_59 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_59 \
    op interface \
    ports { weight3x3_tile_buffe_59 { O 32 vector } weight3x3_tile_buffe_59_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 294 \
    name weight3x3_tile_buffe_58 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_58 \
    op interface \
    ports { weight3x3_tile_buffe_58 { O 32 vector } weight3x3_tile_buffe_58_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 295 \
    name weight3x3_tile_buffe_57 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_57 \
    op interface \
    ports { weight3x3_tile_buffe_57 { O 32 vector } weight3x3_tile_buffe_57_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 296 \
    name weight3x3_tile_buffe_56 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_56 \
    op interface \
    ports { weight3x3_tile_buffe_56 { O 32 vector } weight3x3_tile_buffe_56_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 297 \
    name weight3x3_tile_buffe_55 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_55 \
    op interface \
    ports { weight3x3_tile_buffe_55 { O 32 vector } weight3x3_tile_buffe_55_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 298 \
    name weight3x3_tile_buffe_54 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_weight3x3_tile_buffe_54 \
    op interface \
    ports { weight3x3_tile_buffe_54 { O 32 vector } weight3x3_tile_buffe_54_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


