# This script segment is generated automatically by AutoPilot

set id 432
set name FracNet_urem_6ns_hbi
set corename simcore_urem
set op urem
set stage_num 10
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 6
set in0_signed 0
set in1_width 4
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 6
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


set id 433
set name FracNet_mul_mul_1ibs
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 15
set in0_signed 0
set in1_width 6
set in1_signed 0
set out_width 19
set exp i0*i1
set arg_lists {i0 {15 0 +} i1 {6 0 +} p {19 0 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
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
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
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
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 434
set name FracNet_mac_muladjbC
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 11
set in0_signed 0
set in1_width 5
set in1_signed 0
set in2_width 19
set in2_signed 0
set out_width 19
set exp i0*i1+i2
set arg_lists {i0 {11 0 +} i1 {5 0 +} m {16 0 +} i2 {19 0 +} p {19 0 +} c_reg {1} rnd {0} acc {0} }
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

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 440 \
    name dest_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_0_V \
    op interface \
    ports { dest_0_V_address0 { O 7 vector } dest_0_V_ce0 { O 1 bit } dest_0_V_we0 { O 1 bit } dest_0_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 441 \
    name dest_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_1_V \
    op interface \
    ports { dest_1_V_address0 { O 7 vector } dest_1_V_ce0 { O 1 bit } dest_1_V_we0 { O 1 bit } dest_1_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 442 \
    name dest_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_2_V \
    op interface \
    ports { dest_2_V_address0 { O 7 vector } dest_2_V_ce0 { O 1 bit } dest_2_V_we0 { O 1 bit } dest_2_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 443 \
    name dest_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_3_V \
    op interface \
    ports { dest_3_V_address0 { O 7 vector } dest_3_V_ce0 { O 1 bit } dest_3_V_we0 { O 1 bit } dest_3_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 444 \
    name dest_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_4_V \
    op interface \
    ports { dest_4_V_address0 { O 7 vector } dest_4_V_ce0 { O 1 bit } dest_4_V_we0 { O 1 bit } dest_4_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 445 \
    name dest_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_5_V \
    op interface \
    ports { dest_5_V_address0 { O 7 vector } dest_5_V_ce0 { O 1 bit } dest_5_V_we0 { O 1 bit } dest_5_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 446 \
    name dest_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_6_V \
    op interface \
    ports { dest_6_V_address0 { O 7 vector } dest_6_V_ce0 { O 1 bit } dest_6_V_we0 { O 1 bit } dest_6_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 447 \
    name dest_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_7_V \
    op interface \
    ports { dest_7_V_address0 { O 7 vector } dest_7_V_ce0 { O 1 bit } dest_7_V_we0 { O 1 bit } dest_7_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 448 \
    name dest_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_8_V \
    op interface \
    ports { dest_8_V_address0 { O 7 vector } dest_8_V_ce0 { O 1 bit } dest_8_V_we0 { O 1 bit } dest_8_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 449 \
    name dest_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_9_V \
    op interface \
    ports { dest_9_V_address0 { O 7 vector } dest_9_V_ce0 { O 1 bit } dest_9_V_we0 { O 1 bit } dest_9_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 450 \
    name dest_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_10_V \
    op interface \
    ports { dest_10_V_address0 { O 7 vector } dest_10_V_ce0 { O 1 bit } dest_10_V_we0 { O 1 bit } dest_10_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 451 \
    name dest_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_11_V \
    op interface \
    ports { dest_11_V_address0 { O 7 vector } dest_11_V_ce0 { O 1 bit } dest_11_V_we0 { O 1 bit } dest_11_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 452 \
    name dest_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_12_V \
    op interface \
    ports { dest_12_V_address0 { O 7 vector } dest_12_V_ce0 { O 1 bit } dest_12_V_we0 { O 1 bit } dest_12_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 453 \
    name dest_13_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_13_V \
    op interface \
    ports { dest_13_V_address0 { O 7 vector } dest_13_V_ce0 { O 1 bit } dest_13_V_we0 { O 1 bit } dest_13_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 454 \
    name dest_14_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_14_V \
    op interface \
    ports { dest_14_V_address0 { O 7 vector } dest_14_V_ce0 { O 1 bit } dest_14_V_we0 { O 1 bit } dest_14_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 455 \
    name dest_15_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_15_V \
    op interface \
    ports { dest_15_V_address0 { O 7 vector } dest_15_V_ce0 { O 1 bit } dest_15_V_we0 { O 1 bit } dest_15_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 456 \
    name dest_16_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_16_V \
    op interface \
    ports { dest_16_V_address0 { O 7 vector } dest_16_V_ce0 { O 1 bit } dest_16_V_we0 { O 1 bit } dest_16_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 457 \
    name dest_17_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_17_V \
    op interface \
    ports { dest_17_V_address0 { O 7 vector } dest_17_V_ce0 { O 1 bit } dest_17_V_we0 { O 1 bit } dest_17_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 458 \
    name dest_18_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_18_V \
    op interface \
    ports { dest_18_V_address0 { O 7 vector } dest_18_V_ce0 { O 1 bit } dest_18_V_we0 { O 1 bit } dest_18_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 459 \
    name dest_19_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_19_V \
    op interface \
    ports { dest_19_V_address0 { O 7 vector } dest_19_V_ce0 { O 1 bit } dest_19_V_we0 { O 1 bit } dest_19_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 460 \
    name dest_20_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_20_V \
    op interface \
    ports { dest_20_V_address0 { O 7 vector } dest_20_V_ce0 { O 1 bit } dest_20_V_we0 { O 1 bit } dest_20_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 461 \
    name dest_21_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_21_V \
    op interface \
    ports { dest_21_V_address0 { O 7 vector } dest_21_V_ce0 { O 1 bit } dest_21_V_we0 { O 1 bit } dest_21_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 462 \
    name dest_22_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_22_V \
    op interface \
    ports { dest_22_V_address0 { O 7 vector } dest_22_V_ce0 { O 1 bit } dest_22_V_we0 { O 1 bit } dest_22_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 463 \
    name dest_23_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_23_V \
    op interface \
    ports { dest_23_V_address0 { O 7 vector } dest_23_V_ce0 { O 1 bit } dest_23_V_we0 { O 1 bit } dest_23_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 464 \
    name dest_24_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_24_V \
    op interface \
    ports { dest_24_V_address0 { O 7 vector } dest_24_V_ce0 { O 1 bit } dest_24_V_we0 { O 1 bit } dest_24_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 465 \
    name dest_25_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_25_V \
    op interface \
    ports { dest_25_V_address0 { O 7 vector } dest_25_V_ce0 { O 1 bit } dest_25_V_we0 { O 1 bit } dest_25_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 466 \
    name dest_26_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_26_V \
    op interface \
    ports { dest_26_V_address0 { O 7 vector } dest_26_V_ce0 { O 1 bit } dest_26_V_we0 { O 1 bit } dest_26_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 467 \
    name dest_27_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_27_V \
    op interface \
    ports { dest_27_V_address0 { O 7 vector } dest_27_V_ce0 { O 1 bit } dest_27_V_we0 { O 1 bit } dest_27_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 468 \
    name dest_28_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_28_V \
    op interface \
    ports { dest_28_V_address0 { O 7 vector } dest_28_V_ce0 { O 1 bit } dest_28_V_we0 { O 1 bit } dest_28_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 469 \
    name dest_29_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_29_V \
    op interface \
    ports { dest_29_V_address0 { O 7 vector } dest_29_V_ce0 { O 1 bit } dest_29_V_we0 { O 1 bit } dest_29_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 470 \
    name dest_30_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_30_V \
    op interface \
    ports { dest_30_V_address0 { O 7 vector } dest_30_V_ce0 { O 1 bit } dest_30_V_we0 { O 1 bit } dest_30_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 471 \
    name dest_31_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dest_31_V \
    op interface \
    ports { dest_31_V_address0 { O 7 vector } dest_31_V_ce0 { O 1 bit } dest_31_V_we0 { O 1 bit } dest_31_V_d0 { O 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dest_31_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name src_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_src_V \
    op interface \
    ports { m_axi_src_V_AWVALID { O 1 bit } m_axi_src_V_AWREADY { I 1 bit } m_axi_src_V_AWADDR { O 32 vector } m_axi_src_V_AWID { O 1 vector } m_axi_src_V_AWLEN { O 32 vector } m_axi_src_V_AWSIZE { O 3 vector } m_axi_src_V_AWBURST { O 2 vector } m_axi_src_V_AWLOCK { O 2 vector } m_axi_src_V_AWCACHE { O 4 vector } m_axi_src_V_AWPROT { O 3 vector } m_axi_src_V_AWQOS { O 4 vector } m_axi_src_V_AWREGION { O 4 vector } m_axi_src_V_AWUSER { O 1 vector } m_axi_src_V_WVALID { O 1 bit } m_axi_src_V_WREADY { I 1 bit } m_axi_src_V_WDATA { O 512 vector } m_axi_src_V_WSTRB { O 64 vector } m_axi_src_V_WLAST { O 1 bit } m_axi_src_V_WID { O 1 vector } m_axi_src_V_WUSER { O 1 vector } m_axi_src_V_ARVALID { O 1 bit } m_axi_src_V_ARREADY { I 1 bit } m_axi_src_V_ARADDR { O 32 vector } m_axi_src_V_ARID { O 1 vector } m_axi_src_V_ARLEN { O 32 vector } m_axi_src_V_ARSIZE { O 3 vector } m_axi_src_V_ARBURST { O 2 vector } m_axi_src_V_ARLOCK { O 2 vector } m_axi_src_V_ARCACHE { O 4 vector } m_axi_src_V_ARPROT { O 3 vector } m_axi_src_V_ARQOS { O 4 vector } m_axi_src_V_ARREGION { O 4 vector } m_axi_src_V_ARUSER { O 1 vector } m_axi_src_V_RVALID { I 1 bit } m_axi_src_V_RREADY { O 1 bit } m_axi_src_V_RDATA { I 512 vector } m_axi_src_V_RLAST { I 1 bit } m_axi_src_V_RID { I 1 vector } m_axi_src_V_RUSER { I 1 vector } m_axi_src_V_RRESP { I 2 vector } m_axi_src_V_BVALID { I 1 bit } m_axi_src_V_BREADY { O 1 bit } m_axi_src_V_BRESP { I 2 vector } m_axi_src_V_BID { I 1 vector } m_axi_src_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name src_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_src_V_offset \
    op interface \
    ports { src_V_offset { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 472 \
    name row_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row_offset \
    op interface \
    ports { row_offset { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 473 \
    name col_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_col_offset \
    op interface \
    ports { col_offset { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 474 \
    name ch_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ch_offset \
    op interface \
    ports { ch_offset { I 6 vector } } \
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


