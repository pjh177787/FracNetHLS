# This script segment is generated automatically by AutoPilot

set id 631
set name FracNet_mul_9ns_3hbi
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 9
set in0_signed 0
set in1_width 32
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 40
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
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
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 632
set name FracNet_mul_8ns_3ibs
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 8
set in0_signed 0
set in1_width 32
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
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
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 633
set name FracNet_mac_muladjbC
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 9
set in0_signed 0
set in1_width 4
set in1_signed 1
set in2_width 10
set in2_signed 0
set out_width 12
set exp i0*i1+i2
set arg_lists {i0 {9 0 +} i1 {4 1 +} m {12 1 +} i2 {10 0 +} p {12 1 +} c_reg {1} rnd {0} acc {0} }
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


set id 634
set name FracNet_mul_mul_1kbM
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 16
set in0_signed 1
set in1_width 16
set in1_signed 1
set out_width 32
set exp i0*i1
set arg_lists {i0 {16 1 +} i1 {16 1 +} p {32 1 +} acc {0} }
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
    id 736 \
    name out_buf_all_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_0_V \
    op interface \
    ports { out_buf_all_0_V_address0 { O 11 vector } out_buf_all_0_V_ce0 { O 1 bit } out_buf_all_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 737 \
    name out_buf_all_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_1_V \
    op interface \
    ports { out_buf_all_1_V_address0 { O 11 vector } out_buf_all_1_V_ce0 { O 1 bit } out_buf_all_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 738 \
    name out_buf_all_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_2_V \
    op interface \
    ports { out_buf_all_2_V_address0 { O 11 vector } out_buf_all_2_V_ce0 { O 1 bit } out_buf_all_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 739 \
    name out_buf_all_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_3_V \
    op interface \
    ports { out_buf_all_3_V_address0 { O 11 vector } out_buf_all_3_V_ce0 { O 1 bit } out_buf_all_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 740 \
    name out_buf_all_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_4_V \
    op interface \
    ports { out_buf_all_4_V_address0 { O 11 vector } out_buf_all_4_V_ce0 { O 1 bit } out_buf_all_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 741 \
    name out_buf_all_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_5_V \
    op interface \
    ports { out_buf_all_5_V_address0 { O 11 vector } out_buf_all_5_V_ce0 { O 1 bit } out_buf_all_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 742 \
    name out_buf_all_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_6_V \
    op interface \
    ports { out_buf_all_6_V_address0 { O 11 vector } out_buf_all_6_V_ce0 { O 1 bit } out_buf_all_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 743 \
    name out_buf_all_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_7_V \
    op interface \
    ports { out_buf_all_7_V_address0 { O 11 vector } out_buf_all_7_V_ce0 { O 1 bit } out_buf_all_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 744 \
    name out_buf_all_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_8_V \
    op interface \
    ports { out_buf_all_8_V_address0 { O 11 vector } out_buf_all_8_V_ce0 { O 1 bit } out_buf_all_8_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 745 \
    name out_buf_all_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_9_V \
    op interface \
    ports { out_buf_all_9_V_address0 { O 11 vector } out_buf_all_9_V_ce0 { O 1 bit } out_buf_all_9_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 746 \
    name out_buf_all_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_10_V \
    op interface \
    ports { out_buf_all_10_V_address0 { O 11 vector } out_buf_all_10_V_ce0 { O 1 bit } out_buf_all_10_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 747 \
    name out_buf_all_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_11_V \
    op interface \
    ports { out_buf_all_11_V_address0 { O 11 vector } out_buf_all_11_V_ce0 { O 1 bit } out_buf_all_11_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 748 \
    name out_buf_all_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_12_V \
    op interface \
    ports { out_buf_all_12_V_address0 { O 11 vector } out_buf_all_12_V_ce0 { O 1 bit } out_buf_all_12_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 749 \
    name out_buf_all_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_13_V \
    op interface \
    ports { out_buf_all_13_V_address0 { O 11 vector } out_buf_all_13_V_ce0 { O 1 bit } out_buf_all_13_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 750 \
    name out_buf_all_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_14_V \
    op interface \
    ports { out_buf_all_14_V_address0 { O 11 vector } out_buf_all_14_V_ce0 { O 1 bit } out_buf_all_14_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 751 \
    name out_buf_all_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_15_V \
    op interface \
    ports { out_buf_all_15_V_address0 { O 11 vector } out_buf_all_15_V_ce0 { O 1 bit } out_buf_all_15_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 752 \
    name out_buf_all_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_16_V \
    op interface \
    ports { out_buf_all_16_V_address0 { O 11 vector } out_buf_all_16_V_ce0 { O 1 bit } out_buf_all_16_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 753 \
    name out_buf_all_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_17_V \
    op interface \
    ports { out_buf_all_17_V_address0 { O 11 vector } out_buf_all_17_V_ce0 { O 1 bit } out_buf_all_17_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 754 \
    name out_buf_all_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_18_V \
    op interface \
    ports { out_buf_all_18_V_address0 { O 11 vector } out_buf_all_18_V_ce0 { O 1 bit } out_buf_all_18_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 755 \
    name out_buf_all_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_19_V \
    op interface \
    ports { out_buf_all_19_V_address0 { O 11 vector } out_buf_all_19_V_ce0 { O 1 bit } out_buf_all_19_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 756 \
    name out_buf_all_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_20_V \
    op interface \
    ports { out_buf_all_20_V_address0 { O 11 vector } out_buf_all_20_V_ce0 { O 1 bit } out_buf_all_20_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 757 \
    name out_buf_all_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_21_V \
    op interface \
    ports { out_buf_all_21_V_address0 { O 11 vector } out_buf_all_21_V_ce0 { O 1 bit } out_buf_all_21_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 758 \
    name out_buf_all_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_22_V \
    op interface \
    ports { out_buf_all_22_V_address0 { O 11 vector } out_buf_all_22_V_ce0 { O 1 bit } out_buf_all_22_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 759 \
    name out_buf_all_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_23_V \
    op interface \
    ports { out_buf_all_23_V_address0 { O 11 vector } out_buf_all_23_V_ce0 { O 1 bit } out_buf_all_23_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 760 \
    name out_buf_all_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_24_V \
    op interface \
    ports { out_buf_all_24_V_address0 { O 11 vector } out_buf_all_24_V_ce0 { O 1 bit } out_buf_all_24_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 761 \
    name out_buf_all_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_25_V \
    op interface \
    ports { out_buf_all_25_V_address0 { O 11 vector } out_buf_all_25_V_ce0 { O 1 bit } out_buf_all_25_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 762 \
    name out_buf_all_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_26_V \
    op interface \
    ports { out_buf_all_26_V_address0 { O 11 vector } out_buf_all_26_V_ce0 { O 1 bit } out_buf_all_26_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 763 \
    name out_buf_all_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_27_V \
    op interface \
    ports { out_buf_all_27_V_address0 { O 11 vector } out_buf_all_27_V_ce0 { O 1 bit } out_buf_all_27_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 764 \
    name out_buf_all_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_28_V \
    op interface \
    ports { out_buf_all_28_V_address0 { O 11 vector } out_buf_all_28_V_ce0 { O 1 bit } out_buf_all_28_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 765 \
    name out_buf_all_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_29_V \
    op interface \
    ports { out_buf_all_29_V_address0 { O 11 vector } out_buf_all_29_V_ce0 { O 1 bit } out_buf_all_29_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 766 \
    name out_buf_all_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_30_V \
    op interface \
    ports { out_buf_all_30_V_address0 { O 11 vector } out_buf_all_30_V_ce0 { O 1 bit } out_buf_all_30_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 767 \
    name out_buf_all_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_31_V \
    op interface \
    ports { out_buf_all_31_V_address0 { O 11 vector } out_buf_all_31_V_ce0 { O 1 bit } out_buf_all_31_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 768 \
    name feat_buf_all_1_V_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename feat_buf_all_1_V_2 \
    op interface \
    ports { feat_buf_all_1_V_2_address0 { O 16 vector } feat_buf_all_1_V_2_ce0 { O 1 bit } feat_buf_all_1_V_2_we0 { O 1 bit } feat_buf_all_1_V_2_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'feat_buf_all_1_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 769 \
    name feat_buf_all_0_V_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename feat_buf_all_0_V_2 \
    op interface \
    ports { feat_buf_all_0_V_2_address0 { O 16 vector } feat_buf_all_0_V_2_ce0 { O 1 bit } feat_buf_all_0_V_2_we0 { O 1 bit } feat_buf_all_0_V_2_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'feat_buf_all_0_V_2'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 670 \
    name bn_weight_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_0_V_read \
    op interface \
    ports { bn_weight_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 671 \
    name bn_weight_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_1_V_read \
    op interface \
    ports { bn_weight_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 672 \
    name bn_weight_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_2_V_read \
    op interface \
    ports { bn_weight_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 673 \
    name bn_weight_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_3_V_read \
    op interface \
    ports { bn_weight_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 674 \
    name bn_weight_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_4_V_read \
    op interface \
    ports { bn_weight_4_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 675 \
    name bn_weight_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_5_V_read \
    op interface \
    ports { bn_weight_5_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 676 \
    name bn_weight_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_6_V_read \
    op interface \
    ports { bn_weight_6_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 677 \
    name bn_weight_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_7_V_read \
    op interface \
    ports { bn_weight_7_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 678 \
    name bn_weight_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_8_V_read \
    op interface \
    ports { bn_weight_8_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 679 \
    name bn_weight_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_9_V_read \
    op interface \
    ports { bn_weight_9_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 680 \
    name bn_weight_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_10_V_read \
    op interface \
    ports { bn_weight_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 681 \
    name bn_weight_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_11_V_read \
    op interface \
    ports { bn_weight_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 682 \
    name bn_weight_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_12_V_read \
    op interface \
    ports { bn_weight_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 683 \
    name bn_weight_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_13_V_read \
    op interface \
    ports { bn_weight_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 684 \
    name bn_weight_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_14_V_read \
    op interface \
    ports { bn_weight_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 685 \
    name bn_weight_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_15_V_read \
    op interface \
    ports { bn_weight_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 686 \
    name bn_weight_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_16_V_read \
    op interface \
    ports { bn_weight_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 687 \
    name bn_weight_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_17_V_read \
    op interface \
    ports { bn_weight_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 688 \
    name bn_weight_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_18_V_read \
    op interface \
    ports { bn_weight_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 689 \
    name bn_weight_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_19_V_read \
    op interface \
    ports { bn_weight_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 690 \
    name bn_weight_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_20_V_read \
    op interface \
    ports { bn_weight_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 691 \
    name bn_weight_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_21_V_read \
    op interface \
    ports { bn_weight_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 692 \
    name bn_weight_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_22_V_read \
    op interface \
    ports { bn_weight_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 693 \
    name bn_weight_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_23_V_read \
    op interface \
    ports { bn_weight_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 694 \
    name bn_weight_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_24_V_read \
    op interface \
    ports { bn_weight_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 695 \
    name bn_weight_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_25_V_read \
    op interface \
    ports { bn_weight_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 696 \
    name bn_weight_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_26_V_read \
    op interface \
    ports { bn_weight_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 697 \
    name bn_weight_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_27_V_read \
    op interface \
    ports { bn_weight_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 698 \
    name bn_weight_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_28_V_read \
    op interface \
    ports { bn_weight_28_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 699 \
    name bn_weight_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_29_V_read \
    op interface \
    ports { bn_weight_29_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 700 \
    name bn_weight_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_30_V_read \
    op interface \
    ports { bn_weight_30_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 701 \
    name bn_weight_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_31_V_read \
    op interface \
    ports { bn_weight_31_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 702 \
    name bn_bias_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_0_V_read \
    op interface \
    ports { bn_bias_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 703 \
    name bn_bias_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_1_V_read \
    op interface \
    ports { bn_bias_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 704 \
    name bn_bias_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_2_V_read \
    op interface \
    ports { bn_bias_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 705 \
    name bn_bias_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_3_V_read \
    op interface \
    ports { bn_bias_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 706 \
    name bn_bias_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_4_V_read \
    op interface \
    ports { bn_bias_4_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 707 \
    name bn_bias_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_5_V_read \
    op interface \
    ports { bn_bias_5_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 708 \
    name bn_bias_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_6_V_read \
    op interface \
    ports { bn_bias_6_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 709 \
    name bn_bias_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_7_V_read \
    op interface \
    ports { bn_bias_7_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 710 \
    name bn_bias_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_8_V_read \
    op interface \
    ports { bn_bias_8_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 711 \
    name bn_bias_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_9_V_read \
    op interface \
    ports { bn_bias_9_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 712 \
    name bn_bias_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_10_V_read \
    op interface \
    ports { bn_bias_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 713 \
    name bn_bias_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_11_V_read \
    op interface \
    ports { bn_bias_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 714 \
    name bn_bias_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_12_V_read \
    op interface \
    ports { bn_bias_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 715 \
    name bn_bias_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_13_V_read \
    op interface \
    ports { bn_bias_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 716 \
    name bn_bias_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_14_V_read \
    op interface \
    ports { bn_bias_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 717 \
    name bn_bias_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_15_V_read \
    op interface \
    ports { bn_bias_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 718 \
    name bn_bias_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_16_V_read \
    op interface \
    ports { bn_bias_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 719 \
    name bn_bias_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_17_V_read \
    op interface \
    ports { bn_bias_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 720 \
    name bn_bias_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_18_V_read \
    op interface \
    ports { bn_bias_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 721 \
    name bn_bias_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_19_V_read \
    op interface \
    ports { bn_bias_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 722 \
    name bn_bias_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_20_V_read \
    op interface \
    ports { bn_bias_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 723 \
    name bn_bias_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_21_V_read \
    op interface \
    ports { bn_bias_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 724 \
    name bn_bias_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_22_V_read \
    op interface \
    ports { bn_bias_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 725 \
    name bn_bias_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_23_V_read \
    op interface \
    ports { bn_bias_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 726 \
    name bn_bias_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_24_V_read \
    op interface \
    ports { bn_bias_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 727 \
    name bn_bias_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_25_V_read \
    op interface \
    ports { bn_bias_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 728 \
    name bn_bias_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_26_V_read \
    op interface \
    ports { bn_bias_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 729 \
    name bn_bias_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_27_V_read \
    op interface \
    ports { bn_bias_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 730 \
    name bn_bias_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_28_V_read \
    op interface \
    ports { bn_bias_28_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 731 \
    name bn_bias_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_29_V_read \
    op interface \
    ports { bn_bias_29_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 732 \
    name bn_bias_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_30_V_read \
    op interface \
    ports { bn_bias_30_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 733 \
    name bn_bias_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_31_V_read \
    op interface \
    ports { bn_bias_31_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 734 \
    name DDR_buf_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_DDR_buf_V \
    op interface \
    ports { m_axi_DDR_buf_V_AWVALID { O 1 bit } m_axi_DDR_buf_V_AWREADY { I 1 bit } m_axi_DDR_buf_V_AWADDR { O 32 vector } m_axi_DDR_buf_V_AWID { O 1 vector } m_axi_DDR_buf_V_AWLEN { O 32 vector } m_axi_DDR_buf_V_AWSIZE { O 3 vector } m_axi_DDR_buf_V_AWBURST { O 2 vector } m_axi_DDR_buf_V_AWLOCK { O 2 vector } m_axi_DDR_buf_V_AWCACHE { O 4 vector } m_axi_DDR_buf_V_AWPROT { O 3 vector } m_axi_DDR_buf_V_AWQOS { O 4 vector } m_axi_DDR_buf_V_AWREGION { O 4 vector } m_axi_DDR_buf_V_AWUSER { O 1 vector } m_axi_DDR_buf_V_WVALID { O 1 bit } m_axi_DDR_buf_V_WREADY { I 1 bit } m_axi_DDR_buf_V_WDATA { O 512 vector } m_axi_DDR_buf_V_WSTRB { O 64 vector } m_axi_DDR_buf_V_WLAST { O 1 bit } m_axi_DDR_buf_V_WID { O 1 vector } m_axi_DDR_buf_V_WUSER { O 1 vector } m_axi_DDR_buf_V_ARVALID { O 1 bit } m_axi_DDR_buf_V_ARREADY { I 1 bit } m_axi_DDR_buf_V_ARADDR { O 32 vector } m_axi_DDR_buf_V_ARID { O 1 vector } m_axi_DDR_buf_V_ARLEN { O 32 vector } m_axi_DDR_buf_V_ARSIZE { O 3 vector } m_axi_DDR_buf_V_ARBURST { O 2 vector } m_axi_DDR_buf_V_ARLOCK { O 2 vector } m_axi_DDR_buf_V_ARCACHE { O 4 vector } m_axi_DDR_buf_V_ARPROT { O 3 vector } m_axi_DDR_buf_V_ARQOS { O 4 vector } m_axi_DDR_buf_V_ARREGION { O 4 vector } m_axi_DDR_buf_V_ARUSER { O 1 vector } m_axi_DDR_buf_V_RVALID { I 1 bit } m_axi_DDR_buf_V_RREADY { O 1 bit } m_axi_DDR_buf_V_RDATA { I 512 vector } m_axi_DDR_buf_V_RLAST { I 1 bit } m_axi_DDR_buf_V_RID { I 1 vector } m_axi_DDR_buf_V_RUSER { I 1 vector } m_axi_DDR_buf_V_RRESP { I 2 vector } m_axi_DDR_buf_V_BVALID { I 1 bit } m_axi_DDR_buf_V_BREADY { O 1 bit } m_axi_DDR_buf_V_BRESP { I 2 vector } m_axi_DDR_buf_V_BID { I 1 vector } m_axi_DDR_buf_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 735 \
    name DDR_buf_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_DDR_buf_V_offset \
    op interface \
    ports { DDR_buf_V_offset { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 770 \
    name row_tile_start \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row_tile_start \
    op interface \
    ports { row_tile_start { I 9 vector } } \
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


