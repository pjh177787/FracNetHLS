# This script segment is generated automatically by AutoPilot

set id 777
set name FracNet_mul_29s_9lbW
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 29
set in0_signed 1
set in1_width 9
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 36
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


set id 778
set name FracNet_mul_9ns_3mb6
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
set in1_width 36
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 44
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


set id 779
set name FracNet_mac_muladncg
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 0
set in1_width 4
set in1_signed 0
set in2_width 7
set in2_signed 0
set out_width 11
set exp i0*i1+i2
set arg_lists {i0 {8 0 +} i1 {4 0 +} m {11 0 +} i2 {7 0 +} p {11 0 +} c_reg {1} rnd {0} acc {0} }
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
    id 783 \
    name out_buf_sc_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_0_V \
    op interface \
    ports { out_buf_sc_0_V_address0 { O 10 vector } out_buf_sc_0_V_ce0 { O 1 bit } out_buf_sc_0_V_we0 { O 1 bit } out_buf_sc_0_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 784 \
    name out_buf_sc_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_1_V \
    op interface \
    ports { out_buf_sc_1_V_address0 { O 10 vector } out_buf_sc_1_V_ce0 { O 1 bit } out_buf_sc_1_V_we0 { O 1 bit } out_buf_sc_1_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 785 \
    name out_buf_sc_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_2_V \
    op interface \
    ports { out_buf_sc_2_V_address0 { O 10 vector } out_buf_sc_2_V_ce0 { O 1 bit } out_buf_sc_2_V_we0 { O 1 bit } out_buf_sc_2_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 786 \
    name out_buf_sc_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_3_V \
    op interface \
    ports { out_buf_sc_3_V_address0 { O 10 vector } out_buf_sc_3_V_ce0 { O 1 bit } out_buf_sc_3_V_we0 { O 1 bit } out_buf_sc_3_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 787 \
    name out_buf_sc_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_4_V \
    op interface \
    ports { out_buf_sc_4_V_address0 { O 10 vector } out_buf_sc_4_V_ce0 { O 1 bit } out_buf_sc_4_V_we0 { O 1 bit } out_buf_sc_4_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 788 \
    name out_buf_sc_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_5_V \
    op interface \
    ports { out_buf_sc_5_V_address0 { O 10 vector } out_buf_sc_5_V_ce0 { O 1 bit } out_buf_sc_5_V_we0 { O 1 bit } out_buf_sc_5_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 789 \
    name out_buf_sc_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_6_V \
    op interface \
    ports { out_buf_sc_6_V_address0 { O 10 vector } out_buf_sc_6_V_ce0 { O 1 bit } out_buf_sc_6_V_we0 { O 1 bit } out_buf_sc_6_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 790 \
    name out_buf_sc_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_7_V \
    op interface \
    ports { out_buf_sc_7_V_address0 { O 10 vector } out_buf_sc_7_V_ce0 { O 1 bit } out_buf_sc_7_V_we0 { O 1 bit } out_buf_sc_7_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 791 \
    name out_buf_sc_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_8_V \
    op interface \
    ports { out_buf_sc_8_V_address0 { O 10 vector } out_buf_sc_8_V_ce0 { O 1 bit } out_buf_sc_8_V_we0 { O 1 bit } out_buf_sc_8_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 792 \
    name out_buf_sc_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_9_V \
    op interface \
    ports { out_buf_sc_9_V_address0 { O 10 vector } out_buf_sc_9_V_ce0 { O 1 bit } out_buf_sc_9_V_we0 { O 1 bit } out_buf_sc_9_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 793 \
    name out_buf_sc_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_10_V \
    op interface \
    ports { out_buf_sc_10_V_address0 { O 10 vector } out_buf_sc_10_V_ce0 { O 1 bit } out_buf_sc_10_V_we0 { O 1 bit } out_buf_sc_10_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 794 \
    name out_buf_sc_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_11_V \
    op interface \
    ports { out_buf_sc_11_V_address0 { O 10 vector } out_buf_sc_11_V_ce0 { O 1 bit } out_buf_sc_11_V_we0 { O 1 bit } out_buf_sc_11_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 795 \
    name out_buf_sc_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_12_V \
    op interface \
    ports { out_buf_sc_12_V_address0 { O 10 vector } out_buf_sc_12_V_ce0 { O 1 bit } out_buf_sc_12_V_we0 { O 1 bit } out_buf_sc_12_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 796 \
    name out_buf_sc_13_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_13_V \
    op interface \
    ports { out_buf_sc_13_V_address0 { O 10 vector } out_buf_sc_13_V_ce0 { O 1 bit } out_buf_sc_13_V_we0 { O 1 bit } out_buf_sc_13_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 797 \
    name out_buf_sc_14_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_14_V \
    op interface \
    ports { out_buf_sc_14_V_address0 { O 10 vector } out_buf_sc_14_V_ce0 { O 1 bit } out_buf_sc_14_V_we0 { O 1 bit } out_buf_sc_14_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 798 \
    name out_buf_sc_15_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_15_V \
    op interface \
    ports { out_buf_sc_15_V_address0 { O 10 vector } out_buf_sc_15_V_ce0 { O 1 bit } out_buf_sc_15_V_we0 { O 1 bit } out_buf_sc_15_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 799 \
    name out_buf_sc_16_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_16_V \
    op interface \
    ports { out_buf_sc_16_V_address0 { O 10 vector } out_buf_sc_16_V_ce0 { O 1 bit } out_buf_sc_16_V_we0 { O 1 bit } out_buf_sc_16_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 800 \
    name out_buf_sc_17_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_17_V \
    op interface \
    ports { out_buf_sc_17_V_address0 { O 10 vector } out_buf_sc_17_V_ce0 { O 1 bit } out_buf_sc_17_V_we0 { O 1 bit } out_buf_sc_17_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 801 \
    name out_buf_sc_18_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_18_V \
    op interface \
    ports { out_buf_sc_18_V_address0 { O 10 vector } out_buf_sc_18_V_ce0 { O 1 bit } out_buf_sc_18_V_we0 { O 1 bit } out_buf_sc_18_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 802 \
    name out_buf_sc_19_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_19_V \
    op interface \
    ports { out_buf_sc_19_V_address0 { O 10 vector } out_buf_sc_19_V_ce0 { O 1 bit } out_buf_sc_19_V_we0 { O 1 bit } out_buf_sc_19_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 803 \
    name out_buf_sc_20_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_20_V \
    op interface \
    ports { out_buf_sc_20_V_address0 { O 10 vector } out_buf_sc_20_V_ce0 { O 1 bit } out_buf_sc_20_V_we0 { O 1 bit } out_buf_sc_20_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 804 \
    name out_buf_sc_21_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_21_V \
    op interface \
    ports { out_buf_sc_21_V_address0 { O 10 vector } out_buf_sc_21_V_ce0 { O 1 bit } out_buf_sc_21_V_we0 { O 1 bit } out_buf_sc_21_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 805 \
    name out_buf_sc_22_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_22_V \
    op interface \
    ports { out_buf_sc_22_V_address0 { O 10 vector } out_buf_sc_22_V_ce0 { O 1 bit } out_buf_sc_22_V_we0 { O 1 bit } out_buf_sc_22_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 806 \
    name out_buf_sc_23_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_23_V \
    op interface \
    ports { out_buf_sc_23_V_address0 { O 10 vector } out_buf_sc_23_V_ce0 { O 1 bit } out_buf_sc_23_V_we0 { O 1 bit } out_buf_sc_23_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 807 \
    name out_buf_sc_24_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_24_V \
    op interface \
    ports { out_buf_sc_24_V_address0 { O 10 vector } out_buf_sc_24_V_ce0 { O 1 bit } out_buf_sc_24_V_we0 { O 1 bit } out_buf_sc_24_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 808 \
    name out_buf_sc_25_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_25_V \
    op interface \
    ports { out_buf_sc_25_V_address0 { O 10 vector } out_buf_sc_25_V_ce0 { O 1 bit } out_buf_sc_25_V_we0 { O 1 bit } out_buf_sc_25_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 809 \
    name out_buf_sc_26_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_26_V \
    op interface \
    ports { out_buf_sc_26_V_address0 { O 10 vector } out_buf_sc_26_V_ce0 { O 1 bit } out_buf_sc_26_V_we0 { O 1 bit } out_buf_sc_26_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 810 \
    name out_buf_sc_27_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_27_V \
    op interface \
    ports { out_buf_sc_27_V_address0 { O 10 vector } out_buf_sc_27_V_ce0 { O 1 bit } out_buf_sc_27_V_we0 { O 1 bit } out_buf_sc_27_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 811 \
    name out_buf_sc_28_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_28_V \
    op interface \
    ports { out_buf_sc_28_V_address0 { O 10 vector } out_buf_sc_28_V_ce0 { O 1 bit } out_buf_sc_28_V_we0 { O 1 bit } out_buf_sc_28_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 812 \
    name out_buf_sc_29_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_29_V \
    op interface \
    ports { out_buf_sc_29_V_address0 { O 10 vector } out_buf_sc_29_V_ce0 { O 1 bit } out_buf_sc_29_V_we0 { O 1 bit } out_buf_sc_29_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 813 \
    name out_buf_sc_30_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_30_V \
    op interface \
    ports { out_buf_sc_30_V_address0 { O 10 vector } out_buf_sc_30_V_ce0 { O 1 bit } out_buf_sc_30_V_we0 { O 1 bit } out_buf_sc_30_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 814 \
    name out_buf_sc_31_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_buf_sc_31_V \
    op interface \
    ports { out_buf_sc_31_V_address0 { O 10 vector } out_buf_sc_31_V_ce0 { O 1 bit } out_buf_sc_31_V_we0 { O 1 bit } out_buf_sc_31_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_31_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 815 \
    name DDR_buf_V \
    type other \
    dir I \
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
    id 816 \
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
    id 817 \
    name H_fmap_out \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_H_fmap_out \
    op interface \
    ports { H_fmap_out { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 818 \
    name in_channels \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_channels \
    op interface \
    ports { in_channels { I 12 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 819 \
    name out_channel_start \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_channel_start \
    op interface \
    ports { out_channel_start { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 820 \
    name row_tile_start \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row_tile_start \
    op interface \
    ports { row_tile_start { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 821 \
    name switch_bank \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_switch_bank \
    op interface \
    ports { switch_bank { I 1 vector } } \
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


