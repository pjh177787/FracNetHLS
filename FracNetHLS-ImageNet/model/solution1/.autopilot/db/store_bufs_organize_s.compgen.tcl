# This script segment is generated automatically by AutoPilot

set id 1501
set name FracNet_mac_muladqcK
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 15
set in0_signed 0
set in1_width 6
set in1_signed 0
set in2_width 5
set in2_signed 0
set out_width 19
set exp i0*i1+i2
set arg_lists {i0 {15 0 +} i1 {6 0 +} m {19 0 +} i2 {5 0 +} p {19 0 +} c_reg {1} rnd {0} acc {0} }
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
    id 1540 \
    name FM_buf0_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_1 \
    op interface \
    ports { FM_buf0_V_1_address0 { O 7 vector } FM_buf0_V_1_ce0 { O 1 bit } FM_buf0_V_1_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1541 \
    name FM_buf_acc0_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_1 \
    op interface \
    ports { FM_buf_acc0_V_1_address0 { O 7 vector } FM_buf_acc0_V_1_ce0 { O 1 bit } FM_buf_acc0_V_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1542 \
    name FM_buf0_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_2 \
    op interface \
    ports { FM_buf0_V_2_address0 { O 7 vector } FM_buf0_V_2_ce0 { O 1 bit } FM_buf0_V_2_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1543 \
    name FM_buf_acc0_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_2 \
    op interface \
    ports { FM_buf_acc0_V_2_address0 { O 7 vector } FM_buf_acc0_V_2_ce0 { O 1 bit } FM_buf_acc0_V_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1544 \
    name FM_buf0_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_3 \
    op interface \
    ports { FM_buf0_V_3_address0 { O 7 vector } FM_buf0_V_3_ce0 { O 1 bit } FM_buf0_V_3_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1545 \
    name FM_buf_acc0_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_3 \
    op interface \
    ports { FM_buf_acc0_V_3_address0 { O 7 vector } FM_buf_acc0_V_3_ce0 { O 1 bit } FM_buf_acc0_V_3_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1546 \
    name FM_buf0_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_4 \
    op interface \
    ports { FM_buf0_V_4_address0 { O 7 vector } FM_buf0_V_4_ce0 { O 1 bit } FM_buf0_V_4_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1547 \
    name FM_buf_acc0_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_4 \
    op interface \
    ports { FM_buf_acc0_V_4_address0 { O 7 vector } FM_buf_acc0_V_4_ce0 { O 1 bit } FM_buf_acc0_V_4_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1548 \
    name FM_buf0_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_5 \
    op interface \
    ports { FM_buf0_V_5_address0 { O 7 vector } FM_buf0_V_5_ce0 { O 1 bit } FM_buf0_V_5_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1549 \
    name FM_buf_acc0_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_5 \
    op interface \
    ports { FM_buf_acc0_V_5_address0 { O 7 vector } FM_buf_acc0_V_5_ce0 { O 1 bit } FM_buf_acc0_V_5_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1550 \
    name FM_buf0_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_6 \
    op interface \
    ports { FM_buf0_V_6_address0 { O 7 vector } FM_buf0_V_6_ce0 { O 1 bit } FM_buf0_V_6_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1551 \
    name FM_buf_acc0_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_6 \
    op interface \
    ports { FM_buf_acc0_V_6_address0 { O 7 vector } FM_buf_acc0_V_6_ce0 { O 1 bit } FM_buf_acc0_V_6_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1552 \
    name FM_buf0_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_7 \
    op interface \
    ports { FM_buf0_V_7_address0 { O 7 vector } FM_buf0_V_7_ce0 { O 1 bit } FM_buf0_V_7_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1553 \
    name FM_buf_acc0_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_7 \
    op interface \
    ports { FM_buf_acc0_V_7_address0 { O 7 vector } FM_buf_acc0_V_7_ce0 { O 1 bit } FM_buf_acc0_V_7_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1554 \
    name FM_buf0_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_8 \
    op interface \
    ports { FM_buf0_V_8_address0 { O 7 vector } FM_buf0_V_8_ce0 { O 1 bit } FM_buf0_V_8_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1555 \
    name FM_buf_acc0_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_8 \
    op interface \
    ports { FM_buf_acc0_V_8_address0 { O 7 vector } FM_buf_acc0_V_8_ce0 { O 1 bit } FM_buf_acc0_V_8_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1556 \
    name FM_buf0_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_9 \
    op interface \
    ports { FM_buf0_V_9_address0 { O 7 vector } FM_buf0_V_9_ce0 { O 1 bit } FM_buf0_V_9_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1557 \
    name FM_buf_acc0_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_9 \
    op interface \
    ports { FM_buf_acc0_V_9_address0 { O 7 vector } FM_buf_acc0_V_9_ce0 { O 1 bit } FM_buf_acc0_V_9_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1558 \
    name FM_buf0_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_10 \
    op interface \
    ports { FM_buf0_V_10_address0 { O 7 vector } FM_buf0_V_10_ce0 { O 1 bit } FM_buf0_V_10_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1559 \
    name FM_buf_acc0_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_10 \
    op interface \
    ports { FM_buf_acc0_V_10_address0 { O 7 vector } FM_buf_acc0_V_10_ce0 { O 1 bit } FM_buf_acc0_V_10_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1560 \
    name FM_buf0_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_11 \
    op interface \
    ports { FM_buf0_V_11_address0 { O 7 vector } FM_buf0_V_11_ce0 { O 1 bit } FM_buf0_V_11_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1561 \
    name FM_buf_acc0_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_11 \
    op interface \
    ports { FM_buf_acc0_V_11_address0 { O 7 vector } FM_buf_acc0_V_11_ce0 { O 1 bit } FM_buf_acc0_V_11_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1562 \
    name FM_buf0_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_12 \
    op interface \
    ports { FM_buf0_V_12_address0 { O 7 vector } FM_buf0_V_12_ce0 { O 1 bit } FM_buf0_V_12_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1563 \
    name FM_buf_acc0_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_12 \
    op interface \
    ports { FM_buf_acc0_V_12_address0 { O 7 vector } FM_buf_acc0_V_12_ce0 { O 1 bit } FM_buf_acc0_V_12_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1564 \
    name FM_buf0_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_13 \
    op interface \
    ports { FM_buf0_V_13_address0 { O 7 vector } FM_buf0_V_13_ce0 { O 1 bit } FM_buf0_V_13_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1565 \
    name FM_buf_acc0_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_13 \
    op interface \
    ports { FM_buf_acc0_V_13_address0 { O 7 vector } FM_buf_acc0_V_13_ce0 { O 1 bit } FM_buf_acc0_V_13_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1566 \
    name FM_buf0_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_14 \
    op interface \
    ports { FM_buf0_V_14_address0 { O 7 vector } FM_buf0_V_14_ce0 { O 1 bit } FM_buf0_V_14_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1567 \
    name FM_buf_acc0_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_14 \
    op interface \
    ports { FM_buf_acc0_V_14_address0 { O 7 vector } FM_buf_acc0_V_14_ce0 { O 1 bit } FM_buf_acc0_V_14_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1568 \
    name FM_buf0_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_15 \
    op interface \
    ports { FM_buf0_V_15_address0 { O 7 vector } FM_buf0_V_15_ce0 { O 1 bit } FM_buf0_V_15_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1569 \
    name FM_buf_acc0_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_15 \
    op interface \
    ports { FM_buf_acc0_V_15_address0 { O 7 vector } FM_buf_acc0_V_15_ce0 { O 1 bit } FM_buf_acc0_V_15_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1570 \
    name FM_buf0_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_16 \
    op interface \
    ports { FM_buf0_V_16_address0 { O 7 vector } FM_buf0_V_16_ce0 { O 1 bit } FM_buf0_V_16_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1571 \
    name FM_buf_acc0_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_16 \
    op interface \
    ports { FM_buf_acc0_V_16_address0 { O 7 vector } FM_buf_acc0_V_16_ce0 { O 1 bit } FM_buf_acc0_V_16_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1572 \
    name FM_buf0_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_17 \
    op interface \
    ports { FM_buf0_V_17_address0 { O 7 vector } FM_buf0_V_17_ce0 { O 1 bit } FM_buf0_V_17_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1573 \
    name FM_buf_acc0_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_17 \
    op interface \
    ports { FM_buf_acc0_V_17_address0 { O 7 vector } FM_buf_acc0_V_17_ce0 { O 1 bit } FM_buf_acc0_V_17_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1574 \
    name FM_buf0_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_18 \
    op interface \
    ports { FM_buf0_V_18_address0 { O 7 vector } FM_buf0_V_18_ce0 { O 1 bit } FM_buf0_V_18_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1575 \
    name FM_buf_acc0_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_18 \
    op interface \
    ports { FM_buf_acc0_V_18_address0 { O 7 vector } FM_buf_acc0_V_18_ce0 { O 1 bit } FM_buf_acc0_V_18_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1576 \
    name FM_buf0_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_19 \
    op interface \
    ports { FM_buf0_V_19_address0 { O 7 vector } FM_buf0_V_19_ce0 { O 1 bit } FM_buf0_V_19_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1577 \
    name FM_buf_acc0_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_19 \
    op interface \
    ports { FM_buf_acc0_V_19_address0 { O 7 vector } FM_buf_acc0_V_19_ce0 { O 1 bit } FM_buf_acc0_V_19_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1578 \
    name FM_buf0_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_20 \
    op interface \
    ports { FM_buf0_V_20_address0 { O 7 vector } FM_buf0_V_20_ce0 { O 1 bit } FM_buf0_V_20_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1579 \
    name FM_buf_acc0_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_20 \
    op interface \
    ports { FM_buf_acc0_V_20_address0 { O 7 vector } FM_buf_acc0_V_20_ce0 { O 1 bit } FM_buf_acc0_V_20_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1580 \
    name FM_buf0_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_21 \
    op interface \
    ports { FM_buf0_V_21_address0 { O 7 vector } FM_buf0_V_21_ce0 { O 1 bit } FM_buf0_V_21_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1581 \
    name FM_buf_acc0_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_21 \
    op interface \
    ports { FM_buf_acc0_V_21_address0 { O 7 vector } FM_buf_acc0_V_21_ce0 { O 1 bit } FM_buf_acc0_V_21_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1582 \
    name FM_buf0_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_22 \
    op interface \
    ports { FM_buf0_V_22_address0 { O 7 vector } FM_buf0_V_22_ce0 { O 1 bit } FM_buf0_V_22_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1583 \
    name FM_buf_acc0_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_22 \
    op interface \
    ports { FM_buf_acc0_V_22_address0 { O 7 vector } FM_buf_acc0_V_22_ce0 { O 1 bit } FM_buf_acc0_V_22_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1584 \
    name FM_buf0_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_23 \
    op interface \
    ports { FM_buf0_V_23_address0 { O 7 vector } FM_buf0_V_23_ce0 { O 1 bit } FM_buf0_V_23_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1585 \
    name FM_buf_acc0_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_23 \
    op interface \
    ports { FM_buf_acc0_V_23_address0 { O 7 vector } FM_buf_acc0_V_23_ce0 { O 1 bit } FM_buf_acc0_V_23_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1586 \
    name FM_buf0_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_24 \
    op interface \
    ports { FM_buf0_V_24_address0 { O 7 vector } FM_buf0_V_24_ce0 { O 1 bit } FM_buf0_V_24_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1587 \
    name FM_buf_acc0_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_24 \
    op interface \
    ports { FM_buf_acc0_V_24_address0 { O 7 vector } FM_buf_acc0_V_24_ce0 { O 1 bit } FM_buf_acc0_V_24_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1588 \
    name FM_buf0_V_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_25 \
    op interface \
    ports { FM_buf0_V_25_address0 { O 7 vector } FM_buf0_V_25_ce0 { O 1 bit } FM_buf0_V_25_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1589 \
    name FM_buf_acc0_V_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_25 \
    op interface \
    ports { FM_buf_acc0_V_25_address0 { O 7 vector } FM_buf_acc0_V_25_ce0 { O 1 bit } FM_buf_acc0_V_25_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1590 \
    name FM_buf0_V_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_26 \
    op interface \
    ports { FM_buf0_V_26_address0 { O 7 vector } FM_buf0_V_26_ce0 { O 1 bit } FM_buf0_V_26_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1591 \
    name FM_buf_acc0_V_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_26 \
    op interface \
    ports { FM_buf_acc0_V_26_address0 { O 7 vector } FM_buf_acc0_V_26_ce0 { O 1 bit } FM_buf_acc0_V_26_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1592 \
    name FM_buf0_V_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_27 \
    op interface \
    ports { FM_buf0_V_27_address0 { O 7 vector } FM_buf0_V_27_ce0 { O 1 bit } FM_buf0_V_27_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1593 \
    name FM_buf_acc0_V_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_27 \
    op interface \
    ports { FM_buf_acc0_V_27_address0 { O 7 vector } FM_buf_acc0_V_27_ce0 { O 1 bit } FM_buf_acc0_V_27_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1594 \
    name FM_buf0_V_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_28 \
    op interface \
    ports { FM_buf0_V_28_address0 { O 7 vector } FM_buf0_V_28_ce0 { O 1 bit } FM_buf0_V_28_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1595 \
    name FM_buf_acc0_V_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_28 \
    op interface \
    ports { FM_buf_acc0_V_28_address0 { O 7 vector } FM_buf_acc0_V_28_ce0 { O 1 bit } FM_buf_acc0_V_28_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1596 \
    name FM_buf0_V_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_29 \
    op interface \
    ports { FM_buf0_V_29_address0 { O 7 vector } FM_buf0_V_29_ce0 { O 1 bit } FM_buf0_V_29_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1597 \
    name FM_buf_acc0_V_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_29 \
    op interface \
    ports { FM_buf_acc0_V_29_address0 { O 7 vector } FM_buf_acc0_V_29_ce0 { O 1 bit } FM_buf_acc0_V_29_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1598 \
    name FM_buf0_V_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_30 \
    op interface \
    ports { FM_buf0_V_30_address0 { O 7 vector } FM_buf0_V_30_ce0 { O 1 bit } FM_buf0_V_30_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1599 \
    name FM_buf_acc0_V_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_30 \
    op interface \
    ports { FM_buf_acc0_V_30_address0 { O 7 vector } FM_buf_acc0_V_30_ce0 { O 1 bit } FM_buf_acc0_V_30_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1600 \
    name FM_buf0_V_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_31 \
    op interface \
    ports { FM_buf0_V_31_address0 { O 7 vector } FM_buf0_V_31_ce0 { O 1 bit } FM_buf0_V_31_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1601 \
    name FM_buf_acc0_V_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_31 \
    op interface \
    ports { FM_buf_acc0_V_31_address0 { O 7 vector } FM_buf_acc0_V_31_ce0 { O 1 bit } FM_buf_acc0_V_31_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1602 \
    name FM_buf0_V_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf0_V_0 \
    op interface \
    ports { FM_buf0_V_0_address0 { O 7 vector } FM_buf0_V_0_ce0 { O 1 bit } FM_buf0_V_0_q0 { I 9 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf0_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1603 \
    name FM_buf_acc0_V_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FM_buf_acc0_V_0 \
    op interface \
    ports { FM_buf_acc0_V_0_address0 { O 7 vector } FM_buf_acc0_V_0_ce0 { O 1 bit } FM_buf_acc0_V_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FM_buf_acc0_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1604 \
    name pg_buf_all_V_31 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_31 \
    op interface \
    ports { pg_buf_all_V_31_address0 { O 14 vector } pg_buf_all_V_31_ce0 { O 1 bit } pg_buf_all_V_31_we0 { O 1 bit } pg_buf_all_V_31_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1605 \
    name pg_buf_all_V_63 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_63 \
    op interface \
    ports { pg_buf_all_V_63_address0 { O 14 vector } pg_buf_all_V_63_ce0 { O 1 bit } pg_buf_all_V_63_we0 { O 1 bit } pg_buf_all_V_63_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_63'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1606 \
    name pg_buf_all_V_30 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_30 \
    op interface \
    ports { pg_buf_all_V_30_address0 { O 14 vector } pg_buf_all_V_30_ce0 { O 1 bit } pg_buf_all_V_30_we0 { O 1 bit } pg_buf_all_V_30_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1607 \
    name pg_buf_all_V_62 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_62 \
    op interface \
    ports { pg_buf_all_V_62_address0 { O 14 vector } pg_buf_all_V_62_ce0 { O 1 bit } pg_buf_all_V_62_we0 { O 1 bit } pg_buf_all_V_62_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1608 \
    name pg_buf_all_V_29 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_29 \
    op interface \
    ports { pg_buf_all_V_29_address0 { O 14 vector } pg_buf_all_V_29_ce0 { O 1 bit } pg_buf_all_V_29_we0 { O 1 bit } pg_buf_all_V_29_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1609 \
    name pg_buf_all_V_61 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_61 \
    op interface \
    ports { pg_buf_all_V_61_address0 { O 14 vector } pg_buf_all_V_61_ce0 { O 1 bit } pg_buf_all_V_61_we0 { O 1 bit } pg_buf_all_V_61_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1610 \
    name pg_buf_all_V_28 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_28 \
    op interface \
    ports { pg_buf_all_V_28_address0 { O 14 vector } pg_buf_all_V_28_ce0 { O 1 bit } pg_buf_all_V_28_we0 { O 1 bit } pg_buf_all_V_28_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1611 \
    name pg_buf_all_V_60 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_60 \
    op interface \
    ports { pg_buf_all_V_60_address0 { O 14 vector } pg_buf_all_V_60_ce0 { O 1 bit } pg_buf_all_V_60_we0 { O 1 bit } pg_buf_all_V_60_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1612 \
    name pg_buf_all_V_27 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_27 \
    op interface \
    ports { pg_buf_all_V_27_address0 { O 14 vector } pg_buf_all_V_27_ce0 { O 1 bit } pg_buf_all_V_27_we0 { O 1 bit } pg_buf_all_V_27_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1613 \
    name pg_buf_all_V_59 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_59 \
    op interface \
    ports { pg_buf_all_V_59_address0 { O 14 vector } pg_buf_all_V_59_ce0 { O 1 bit } pg_buf_all_V_59_we0 { O 1 bit } pg_buf_all_V_59_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1614 \
    name pg_buf_all_V_26 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_26 \
    op interface \
    ports { pg_buf_all_V_26_address0 { O 14 vector } pg_buf_all_V_26_ce0 { O 1 bit } pg_buf_all_V_26_we0 { O 1 bit } pg_buf_all_V_26_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1615 \
    name pg_buf_all_V_58 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_58 \
    op interface \
    ports { pg_buf_all_V_58_address0 { O 14 vector } pg_buf_all_V_58_ce0 { O 1 bit } pg_buf_all_V_58_we0 { O 1 bit } pg_buf_all_V_58_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1616 \
    name pg_buf_all_V_25 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_25 \
    op interface \
    ports { pg_buf_all_V_25_address0 { O 14 vector } pg_buf_all_V_25_ce0 { O 1 bit } pg_buf_all_V_25_we0 { O 1 bit } pg_buf_all_V_25_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1617 \
    name pg_buf_all_V_57 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_57 \
    op interface \
    ports { pg_buf_all_V_57_address0 { O 14 vector } pg_buf_all_V_57_ce0 { O 1 bit } pg_buf_all_V_57_we0 { O 1 bit } pg_buf_all_V_57_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1618 \
    name pg_buf_all_V_24 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_24 \
    op interface \
    ports { pg_buf_all_V_24_address0 { O 14 vector } pg_buf_all_V_24_ce0 { O 1 bit } pg_buf_all_V_24_we0 { O 1 bit } pg_buf_all_V_24_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1619 \
    name pg_buf_all_V_56 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_56 \
    op interface \
    ports { pg_buf_all_V_56_address0 { O 14 vector } pg_buf_all_V_56_ce0 { O 1 bit } pg_buf_all_V_56_we0 { O 1 bit } pg_buf_all_V_56_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1620 \
    name pg_buf_all_V_23 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_23 \
    op interface \
    ports { pg_buf_all_V_23_address0 { O 14 vector } pg_buf_all_V_23_ce0 { O 1 bit } pg_buf_all_V_23_we0 { O 1 bit } pg_buf_all_V_23_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1621 \
    name pg_buf_all_V_55 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_55 \
    op interface \
    ports { pg_buf_all_V_55_address0 { O 14 vector } pg_buf_all_V_55_ce0 { O 1 bit } pg_buf_all_V_55_we0 { O 1 bit } pg_buf_all_V_55_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1622 \
    name pg_buf_all_V_22 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_22 \
    op interface \
    ports { pg_buf_all_V_22_address0 { O 14 vector } pg_buf_all_V_22_ce0 { O 1 bit } pg_buf_all_V_22_we0 { O 1 bit } pg_buf_all_V_22_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1623 \
    name pg_buf_all_V_54 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_54 \
    op interface \
    ports { pg_buf_all_V_54_address0 { O 14 vector } pg_buf_all_V_54_ce0 { O 1 bit } pg_buf_all_V_54_we0 { O 1 bit } pg_buf_all_V_54_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1624 \
    name pg_buf_all_V_21 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_21 \
    op interface \
    ports { pg_buf_all_V_21_address0 { O 14 vector } pg_buf_all_V_21_ce0 { O 1 bit } pg_buf_all_V_21_we0 { O 1 bit } pg_buf_all_V_21_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1625 \
    name pg_buf_all_V_53 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_53 \
    op interface \
    ports { pg_buf_all_V_53_address0 { O 14 vector } pg_buf_all_V_53_ce0 { O 1 bit } pg_buf_all_V_53_we0 { O 1 bit } pg_buf_all_V_53_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1626 \
    name pg_buf_all_V_20 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_20 \
    op interface \
    ports { pg_buf_all_V_20_address0 { O 14 vector } pg_buf_all_V_20_ce0 { O 1 bit } pg_buf_all_V_20_we0 { O 1 bit } pg_buf_all_V_20_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1627 \
    name pg_buf_all_V_52 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_52 \
    op interface \
    ports { pg_buf_all_V_52_address0 { O 14 vector } pg_buf_all_V_52_ce0 { O 1 bit } pg_buf_all_V_52_we0 { O 1 bit } pg_buf_all_V_52_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1628 \
    name pg_buf_all_V_19 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_19 \
    op interface \
    ports { pg_buf_all_V_19_address0 { O 14 vector } pg_buf_all_V_19_ce0 { O 1 bit } pg_buf_all_V_19_we0 { O 1 bit } pg_buf_all_V_19_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1629 \
    name pg_buf_all_V_51 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_51 \
    op interface \
    ports { pg_buf_all_V_51_address0 { O 14 vector } pg_buf_all_V_51_ce0 { O 1 bit } pg_buf_all_V_51_we0 { O 1 bit } pg_buf_all_V_51_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1630 \
    name pg_buf_all_V_18 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_18 \
    op interface \
    ports { pg_buf_all_V_18_address0 { O 14 vector } pg_buf_all_V_18_ce0 { O 1 bit } pg_buf_all_V_18_we0 { O 1 bit } pg_buf_all_V_18_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1631 \
    name pg_buf_all_V_50 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_50 \
    op interface \
    ports { pg_buf_all_V_50_address0 { O 14 vector } pg_buf_all_V_50_ce0 { O 1 bit } pg_buf_all_V_50_we0 { O 1 bit } pg_buf_all_V_50_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1632 \
    name pg_buf_all_V_17 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_17 \
    op interface \
    ports { pg_buf_all_V_17_address0 { O 14 vector } pg_buf_all_V_17_ce0 { O 1 bit } pg_buf_all_V_17_we0 { O 1 bit } pg_buf_all_V_17_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1633 \
    name pg_buf_all_V_49 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_49 \
    op interface \
    ports { pg_buf_all_V_49_address0 { O 14 vector } pg_buf_all_V_49_ce0 { O 1 bit } pg_buf_all_V_49_we0 { O 1 bit } pg_buf_all_V_49_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1634 \
    name pg_buf_all_V_16 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_16 \
    op interface \
    ports { pg_buf_all_V_16_address0 { O 14 vector } pg_buf_all_V_16_ce0 { O 1 bit } pg_buf_all_V_16_we0 { O 1 bit } pg_buf_all_V_16_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1635 \
    name pg_buf_all_V_48 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_48 \
    op interface \
    ports { pg_buf_all_V_48_address0 { O 14 vector } pg_buf_all_V_48_ce0 { O 1 bit } pg_buf_all_V_48_we0 { O 1 bit } pg_buf_all_V_48_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1636 \
    name pg_buf_all_V_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_15 \
    op interface \
    ports { pg_buf_all_V_15_address0 { O 14 vector } pg_buf_all_V_15_ce0 { O 1 bit } pg_buf_all_V_15_we0 { O 1 bit } pg_buf_all_V_15_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1637 \
    name pg_buf_all_V_47 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_47 \
    op interface \
    ports { pg_buf_all_V_47_address0 { O 14 vector } pg_buf_all_V_47_ce0 { O 1 bit } pg_buf_all_V_47_we0 { O 1 bit } pg_buf_all_V_47_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1638 \
    name pg_buf_all_V_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_14 \
    op interface \
    ports { pg_buf_all_V_14_address0 { O 14 vector } pg_buf_all_V_14_ce0 { O 1 bit } pg_buf_all_V_14_we0 { O 1 bit } pg_buf_all_V_14_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1639 \
    name pg_buf_all_V_46 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_46 \
    op interface \
    ports { pg_buf_all_V_46_address0 { O 14 vector } pg_buf_all_V_46_ce0 { O 1 bit } pg_buf_all_V_46_we0 { O 1 bit } pg_buf_all_V_46_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1640 \
    name pg_buf_all_V_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_13 \
    op interface \
    ports { pg_buf_all_V_13_address0 { O 14 vector } pg_buf_all_V_13_ce0 { O 1 bit } pg_buf_all_V_13_we0 { O 1 bit } pg_buf_all_V_13_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1641 \
    name pg_buf_all_V_45 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_45 \
    op interface \
    ports { pg_buf_all_V_45_address0 { O 14 vector } pg_buf_all_V_45_ce0 { O 1 bit } pg_buf_all_V_45_we0 { O 1 bit } pg_buf_all_V_45_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1642 \
    name pg_buf_all_V_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_12 \
    op interface \
    ports { pg_buf_all_V_12_address0 { O 14 vector } pg_buf_all_V_12_ce0 { O 1 bit } pg_buf_all_V_12_we0 { O 1 bit } pg_buf_all_V_12_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1643 \
    name pg_buf_all_V_44 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_44 \
    op interface \
    ports { pg_buf_all_V_44_address0 { O 14 vector } pg_buf_all_V_44_ce0 { O 1 bit } pg_buf_all_V_44_we0 { O 1 bit } pg_buf_all_V_44_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1644 \
    name pg_buf_all_V_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_11 \
    op interface \
    ports { pg_buf_all_V_11_address0 { O 14 vector } pg_buf_all_V_11_ce0 { O 1 bit } pg_buf_all_V_11_we0 { O 1 bit } pg_buf_all_V_11_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1645 \
    name pg_buf_all_V_43 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_43 \
    op interface \
    ports { pg_buf_all_V_43_address0 { O 14 vector } pg_buf_all_V_43_ce0 { O 1 bit } pg_buf_all_V_43_we0 { O 1 bit } pg_buf_all_V_43_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1646 \
    name pg_buf_all_V_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_10 \
    op interface \
    ports { pg_buf_all_V_10_address0 { O 14 vector } pg_buf_all_V_10_ce0 { O 1 bit } pg_buf_all_V_10_we0 { O 1 bit } pg_buf_all_V_10_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1647 \
    name pg_buf_all_V_42 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_42 \
    op interface \
    ports { pg_buf_all_V_42_address0 { O 14 vector } pg_buf_all_V_42_ce0 { O 1 bit } pg_buf_all_V_42_we0 { O 1 bit } pg_buf_all_V_42_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1648 \
    name pg_buf_all_V_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_9 \
    op interface \
    ports { pg_buf_all_V_9_address0 { O 14 vector } pg_buf_all_V_9_ce0 { O 1 bit } pg_buf_all_V_9_we0 { O 1 bit } pg_buf_all_V_9_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1649 \
    name pg_buf_all_V_41 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_41 \
    op interface \
    ports { pg_buf_all_V_41_address0 { O 14 vector } pg_buf_all_V_41_ce0 { O 1 bit } pg_buf_all_V_41_we0 { O 1 bit } pg_buf_all_V_41_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1650 \
    name pg_buf_all_V_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_8 \
    op interface \
    ports { pg_buf_all_V_8_address0 { O 14 vector } pg_buf_all_V_8_ce0 { O 1 bit } pg_buf_all_V_8_we0 { O 1 bit } pg_buf_all_V_8_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1651 \
    name pg_buf_all_V_40 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_40 \
    op interface \
    ports { pg_buf_all_V_40_address0 { O 14 vector } pg_buf_all_V_40_ce0 { O 1 bit } pg_buf_all_V_40_we0 { O 1 bit } pg_buf_all_V_40_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1652 \
    name pg_buf_all_V_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_7 \
    op interface \
    ports { pg_buf_all_V_7_address0 { O 14 vector } pg_buf_all_V_7_ce0 { O 1 bit } pg_buf_all_V_7_we0 { O 1 bit } pg_buf_all_V_7_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1653 \
    name pg_buf_all_V_39 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_39 \
    op interface \
    ports { pg_buf_all_V_39_address0 { O 14 vector } pg_buf_all_V_39_ce0 { O 1 bit } pg_buf_all_V_39_we0 { O 1 bit } pg_buf_all_V_39_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1654 \
    name pg_buf_all_V_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_6 \
    op interface \
    ports { pg_buf_all_V_6_address0 { O 14 vector } pg_buf_all_V_6_ce0 { O 1 bit } pg_buf_all_V_6_we0 { O 1 bit } pg_buf_all_V_6_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1655 \
    name pg_buf_all_V_38 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_38 \
    op interface \
    ports { pg_buf_all_V_38_address0 { O 14 vector } pg_buf_all_V_38_ce0 { O 1 bit } pg_buf_all_V_38_we0 { O 1 bit } pg_buf_all_V_38_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1656 \
    name pg_buf_all_V_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_5 \
    op interface \
    ports { pg_buf_all_V_5_address0 { O 14 vector } pg_buf_all_V_5_ce0 { O 1 bit } pg_buf_all_V_5_we0 { O 1 bit } pg_buf_all_V_5_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1657 \
    name pg_buf_all_V_37 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_37 \
    op interface \
    ports { pg_buf_all_V_37_address0 { O 14 vector } pg_buf_all_V_37_ce0 { O 1 bit } pg_buf_all_V_37_we0 { O 1 bit } pg_buf_all_V_37_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1658 \
    name pg_buf_all_V_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_4 \
    op interface \
    ports { pg_buf_all_V_4_address0 { O 14 vector } pg_buf_all_V_4_ce0 { O 1 bit } pg_buf_all_V_4_we0 { O 1 bit } pg_buf_all_V_4_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1659 \
    name pg_buf_all_V_36 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_36 \
    op interface \
    ports { pg_buf_all_V_36_address0 { O 14 vector } pg_buf_all_V_36_ce0 { O 1 bit } pg_buf_all_V_36_we0 { O 1 bit } pg_buf_all_V_36_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1660 \
    name pg_buf_all_V_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_3 \
    op interface \
    ports { pg_buf_all_V_3_address0 { O 14 vector } pg_buf_all_V_3_ce0 { O 1 bit } pg_buf_all_V_3_we0 { O 1 bit } pg_buf_all_V_3_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1661 \
    name pg_buf_all_V_35 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_35 \
    op interface \
    ports { pg_buf_all_V_35_address0 { O 14 vector } pg_buf_all_V_35_ce0 { O 1 bit } pg_buf_all_V_35_we0 { O 1 bit } pg_buf_all_V_35_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1662 \
    name pg_buf_all_V_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_2 \
    op interface \
    ports { pg_buf_all_V_2_address0 { O 14 vector } pg_buf_all_V_2_ce0 { O 1 bit } pg_buf_all_V_2_we0 { O 1 bit } pg_buf_all_V_2_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1663 \
    name pg_buf_all_V_34 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_34 \
    op interface \
    ports { pg_buf_all_V_34_address0 { O 14 vector } pg_buf_all_V_34_ce0 { O 1 bit } pg_buf_all_V_34_we0 { O 1 bit } pg_buf_all_V_34_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1664 \
    name pg_buf_all_V_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_1 \
    op interface \
    ports { pg_buf_all_V_1_address0 { O 14 vector } pg_buf_all_V_1_ce0 { O 1 bit } pg_buf_all_V_1_we0 { O 1 bit } pg_buf_all_V_1_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1665 \
    name pg_buf_all_V_33 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_33 \
    op interface \
    ports { pg_buf_all_V_33_address0 { O 14 vector } pg_buf_all_V_33_ce0 { O 1 bit } pg_buf_all_V_33_we0 { O 1 bit } pg_buf_all_V_33_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1666 \
    name pg_buf_all_V_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_0 \
    op interface \
    ports { pg_buf_all_V_0_address0 { O 14 vector } pg_buf_all_V_0_ce0 { O 1 bit } pg_buf_all_V_0_we0 { O 1 bit } pg_buf_all_V_0_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1667 \
    name pg_buf_all_V_32 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf_all_V_32 \
    op interface \
    ports { pg_buf_all_V_32_address0 { O 14 vector } pg_buf_all_V_32_ce0 { O 1 bit } pg_buf_all_V_32_we0 { O 1 bit } pg_buf_all_V_32_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1668 \
    name bn_weight_buf_V_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_0 \
    op interface \
    ports { bn_weight_buf_V_0_address0 { O 2 vector } bn_weight_buf_V_0_ce0 { O 1 bit } bn_weight_buf_V_0_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1669 \
    name bn_bias_buf_V_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_0 \
    op interface \
    ports { bn_bias_buf_V_0_address0 { O 2 vector } bn_bias_buf_V_0_ce0 { O 1 bit } bn_bias_buf_V_0_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1670 \
    name bn_weight_buf_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_1 \
    op interface \
    ports { bn_weight_buf_V_1_address0 { O 2 vector } bn_weight_buf_V_1_ce0 { O 1 bit } bn_weight_buf_V_1_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1671 \
    name bn_bias_buf_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_1 \
    op interface \
    ports { bn_bias_buf_V_1_address0 { O 2 vector } bn_bias_buf_V_1_ce0 { O 1 bit } bn_bias_buf_V_1_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1672 \
    name bn_weight_buf_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_2 \
    op interface \
    ports { bn_weight_buf_V_2_address0 { O 2 vector } bn_weight_buf_V_2_ce0 { O 1 bit } bn_weight_buf_V_2_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1673 \
    name bn_bias_buf_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_2 \
    op interface \
    ports { bn_bias_buf_V_2_address0 { O 2 vector } bn_bias_buf_V_2_ce0 { O 1 bit } bn_bias_buf_V_2_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1674 \
    name bn_weight_buf_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_3 \
    op interface \
    ports { bn_weight_buf_V_3_address0 { O 2 vector } bn_weight_buf_V_3_ce0 { O 1 bit } bn_weight_buf_V_3_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1675 \
    name bn_bias_buf_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_3 \
    op interface \
    ports { bn_bias_buf_V_3_address0 { O 2 vector } bn_bias_buf_V_3_ce0 { O 1 bit } bn_bias_buf_V_3_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1676 \
    name bn_weight_buf_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_4 \
    op interface \
    ports { bn_weight_buf_V_4_address0 { O 2 vector } bn_weight_buf_V_4_ce0 { O 1 bit } bn_weight_buf_V_4_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1677 \
    name bn_bias_buf_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_4 \
    op interface \
    ports { bn_bias_buf_V_4_address0 { O 2 vector } bn_bias_buf_V_4_ce0 { O 1 bit } bn_bias_buf_V_4_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1678 \
    name bn_weight_buf_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_5 \
    op interface \
    ports { bn_weight_buf_V_5_address0 { O 2 vector } bn_weight_buf_V_5_ce0 { O 1 bit } bn_weight_buf_V_5_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1679 \
    name bn_bias_buf_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_5 \
    op interface \
    ports { bn_bias_buf_V_5_address0 { O 2 vector } bn_bias_buf_V_5_ce0 { O 1 bit } bn_bias_buf_V_5_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1680 \
    name bn_weight_buf_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_6 \
    op interface \
    ports { bn_weight_buf_V_6_address0 { O 2 vector } bn_weight_buf_V_6_ce0 { O 1 bit } bn_weight_buf_V_6_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1681 \
    name bn_bias_buf_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_6 \
    op interface \
    ports { bn_bias_buf_V_6_address0 { O 2 vector } bn_bias_buf_V_6_ce0 { O 1 bit } bn_bias_buf_V_6_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1682 \
    name bn_weight_buf_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_7 \
    op interface \
    ports { bn_weight_buf_V_7_address0 { O 2 vector } bn_weight_buf_V_7_ce0 { O 1 bit } bn_weight_buf_V_7_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1683 \
    name bn_bias_buf_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_7 \
    op interface \
    ports { bn_bias_buf_V_7_address0 { O 2 vector } bn_bias_buf_V_7_ce0 { O 1 bit } bn_bias_buf_V_7_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1684 \
    name bn_weight_buf_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_8 \
    op interface \
    ports { bn_weight_buf_V_8_address0 { O 2 vector } bn_weight_buf_V_8_ce0 { O 1 bit } bn_weight_buf_V_8_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1685 \
    name bn_bias_buf_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_8 \
    op interface \
    ports { bn_bias_buf_V_8_address0 { O 2 vector } bn_bias_buf_V_8_ce0 { O 1 bit } bn_bias_buf_V_8_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1686 \
    name bn_weight_buf_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_9 \
    op interface \
    ports { bn_weight_buf_V_9_address0 { O 2 vector } bn_weight_buf_V_9_ce0 { O 1 bit } bn_weight_buf_V_9_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1687 \
    name bn_bias_buf_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_9 \
    op interface \
    ports { bn_bias_buf_V_9_address0 { O 2 vector } bn_bias_buf_V_9_ce0 { O 1 bit } bn_bias_buf_V_9_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1688 \
    name bn_weight_buf_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_10 \
    op interface \
    ports { bn_weight_buf_V_10_address0 { O 2 vector } bn_weight_buf_V_10_ce0 { O 1 bit } bn_weight_buf_V_10_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1689 \
    name bn_bias_buf_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_10 \
    op interface \
    ports { bn_bias_buf_V_10_address0 { O 2 vector } bn_bias_buf_V_10_ce0 { O 1 bit } bn_bias_buf_V_10_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1690 \
    name bn_weight_buf_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_11 \
    op interface \
    ports { bn_weight_buf_V_11_address0 { O 2 vector } bn_weight_buf_V_11_ce0 { O 1 bit } bn_weight_buf_V_11_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1691 \
    name bn_bias_buf_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_11 \
    op interface \
    ports { bn_bias_buf_V_11_address0 { O 2 vector } bn_bias_buf_V_11_ce0 { O 1 bit } bn_bias_buf_V_11_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1692 \
    name bn_weight_buf_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_12 \
    op interface \
    ports { bn_weight_buf_V_12_address0 { O 2 vector } bn_weight_buf_V_12_ce0 { O 1 bit } bn_weight_buf_V_12_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1693 \
    name bn_bias_buf_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_12 \
    op interface \
    ports { bn_bias_buf_V_12_address0 { O 2 vector } bn_bias_buf_V_12_ce0 { O 1 bit } bn_bias_buf_V_12_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1694 \
    name bn_weight_buf_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_13 \
    op interface \
    ports { bn_weight_buf_V_13_address0 { O 2 vector } bn_weight_buf_V_13_ce0 { O 1 bit } bn_weight_buf_V_13_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1695 \
    name bn_bias_buf_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_13 \
    op interface \
    ports { bn_bias_buf_V_13_address0 { O 2 vector } bn_bias_buf_V_13_ce0 { O 1 bit } bn_bias_buf_V_13_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1696 \
    name bn_weight_buf_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_14 \
    op interface \
    ports { bn_weight_buf_V_14_address0 { O 2 vector } bn_weight_buf_V_14_ce0 { O 1 bit } bn_weight_buf_V_14_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1697 \
    name bn_bias_buf_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_14 \
    op interface \
    ports { bn_bias_buf_V_14_address0 { O 2 vector } bn_bias_buf_V_14_ce0 { O 1 bit } bn_bias_buf_V_14_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1698 \
    name bn_weight_buf_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_15 \
    op interface \
    ports { bn_weight_buf_V_15_address0 { O 2 vector } bn_weight_buf_V_15_ce0 { O 1 bit } bn_weight_buf_V_15_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1699 \
    name bn_bias_buf_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_15 \
    op interface \
    ports { bn_bias_buf_V_15_address0 { O 2 vector } bn_bias_buf_V_15_ce0 { O 1 bit } bn_bias_buf_V_15_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1700 \
    name bn_weight_buf_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_16 \
    op interface \
    ports { bn_weight_buf_V_16_address0 { O 2 vector } bn_weight_buf_V_16_ce0 { O 1 bit } bn_weight_buf_V_16_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1701 \
    name bn_bias_buf_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_16 \
    op interface \
    ports { bn_bias_buf_V_16_address0 { O 2 vector } bn_bias_buf_V_16_ce0 { O 1 bit } bn_bias_buf_V_16_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1702 \
    name bn_weight_buf_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_17 \
    op interface \
    ports { bn_weight_buf_V_17_address0 { O 2 vector } bn_weight_buf_V_17_ce0 { O 1 bit } bn_weight_buf_V_17_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1703 \
    name bn_bias_buf_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_17 \
    op interface \
    ports { bn_bias_buf_V_17_address0 { O 2 vector } bn_bias_buf_V_17_ce0 { O 1 bit } bn_bias_buf_V_17_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1704 \
    name bn_weight_buf_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_18 \
    op interface \
    ports { bn_weight_buf_V_18_address0 { O 2 vector } bn_weight_buf_V_18_ce0 { O 1 bit } bn_weight_buf_V_18_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1705 \
    name bn_bias_buf_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_18 \
    op interface \
    ports { bn_bias_buf_V_18_address0 { O 2 vector } bn_bias_buf_V_18_ce0 { O 1 bit } bn_bias_buf_V_18_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1706 \
    name bn_weight_buf_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_19 \
    op interface \
    ports { bn_weight_buf_V_19_address0 { O 2 vector } bn_weight_buf_V_19_ce0 { O 1 bit } bn_weight_buf_V_19_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1707 \
    name bn_bias_buf_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_19 \
    op interface \
    ports { bn_bias_buf_V_19_address0 { O 2 vector } bn_bias_buf_V_19_ce0 { O 1 bit } bn_bias_buf_V_19_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1708 \
    name bn_weight_buf_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_20 \
    op interface \
    ports { bn_weight_buf_V_20_address0 { O 2 vector } bn_weight_buf_V_20_ce0 { O 1 bit } bn_weight_buf_V_20_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1709 \
    name bn_bias_buf_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_20 \
    op interface \
    ports { bn_bias_buf_V_20_address0 { O 2 vector } bn_bias_buf_V_20_ce0 { O 1 bit } bn_bias_buf_V_20_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1710 \
    name bn_weight_buf_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_21 \
    op interface \
    ports { bn_weight_buf_V_21_address0 { O 2 vector } bn_weight_buf_V_21_ce0 { O 1 bit } bn_weight_buf_V_21_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1711 \
    name bn_bias_buf_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_21 \
    op interface \
    ports { bn_bias_buf_V_21_address0 { O 2 vector } bn_bias_buf_V_21_ce0 { O 1 bit } bn_bias_buf_V_21_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1712 \
    name bn_weight_buf_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_22 \
    op interface \
    ports { bn_weight_buf_V_22_address0 { O 2 vector } bn_weight_buf_V_22_ce0 { O 1 bit } bn_weight_buf_V_22_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1713 \
    name bn_bias_buf_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_22 \
    op interface \
    ports { bn_bias_buf_V_22_address0 { O 2 vector } bn_bias_buf_V_22_ce0 { O 1 bit } bn_bias_buf_V_22_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1714 \
    name bn_weight_buf_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_23 \
    op interface \
    ports { bn_weight_buf_V_23_address0 { O 2 vector } bn_weight_buf_V_23_ce0 { O 1 bit } bn_weight_buf_V_23_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1715 \
    name bn_bias_buf_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_23 \
    op interface \
    ports { bn_bias_buf_V_23_address0 { O 2 vector } bn_bias_buf_V_23_ce0 { O 1 bit } bn_bias_buf_V_23_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1716 \
    name bn_weight_buf_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_24 \
    op interface \
    ports { bn_weight_buf_V_24_address0 { O 2 vector } bn_weight_buf_V_24_ce0 { O 1 bit } bn_weight_buf_V_24_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1717 \
    name bn_bias_buf_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_24 \
    op interface \
    ports { bn_bias_buf_V_24_address0 { O 2 vector } bn_bias_buf_V_24_ce0 { O 1 bit } bn_bias_buf_V_24_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1718 \
    name bn_weight_buf_V_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_25 \
    op interface \
    ports { bn_weight_buf_V_25_address0 { O 2 vector } bn_weight_buf_V_25_ce0 { O 1 bit } bn_weight_buf_V_25_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1719 \
    name bn_bias_buf_V_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_25 \
    op interface \
    ports { bn_bias_buf_V_25_address0 { O 2 vector } bn_bias_buf_V_25_ce0 { O 1 bit } bn_bias_buf_V_25_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1720 \
    name bn_weight_buf_V_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_26 \
    op interface \
    ports { bn_weight_buf_V_26_address0 { O 2 vector } bn_weight_buf_V_26_ce0 { O 1 bit } bn_weight_buf_V_26_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1721 \
    name bn_bias_buf_V_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_26 \
    op interface \
    ports { bn_bias_buf_V_26_address0 { O 2 vector } bn_bias_buf_V_26_ce0 { O 1 bit } bn_bias_buf_V_26_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1722 \
    name bn_weight_buf_V_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_27 \
    op interface \
    ports { bn_weight_buf_V_27_address0 { O 2 vector } bn_weight_buf_V_27_ce0 { O 1 bit } bn_weight_buf_V_27_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1723 \
    name bn_bias_buf_V_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_27 \
    op interface \
    ports { bn_bias_buf_V_27_address0 { O 2 vector } bn_bias_buf_V_27_ce0 { O 1 bit } bn_bias_buf_V_27_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1724 \
    name bn_weight_buf_V_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_28 \
    op interface \
    ports { bn_weight_buf_V_28_address0 { O 2 vector } bn_weight_buf_V_28_ce0 { O 1 bit } bn_weight_buf_V_28_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1725 \
    name bn_bias_buf_V_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_28 \
    op interface \
    ports { bn_bias_buf_V_28_address0 { O 2 vector } bn_bias_buf_V_28_ce0 { O 1 bit } bn_bias_buf_V_28_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1726 \
    name bn_weight_buf_V_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_29 \
    op interface \
    ports { bn_weight_buf_V_29_address0 { O 2 vector } bn_weight_buf_V_29_ce0 { O 1 bit } bn_weight_buf_V_29_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1727 \
    name bn_bias_buf_V_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_29 \
    op interface \
    ports { bn_bias_buf_V_29_address0 { O 2 vector } bn_bias_buf_V_29_ce0 { O 1 bit } bn_bias_buf_V_29_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1728 \
    name bn_weight_buf_V_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_30 \
    op interface \
    ports { bn_weight_buf_V_30_address0 { O 2 vector } bn_weight_buf_V_30_ce0 { O 1 bit } bn_weight_buf_V_30_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1729 \
    name bn_bias_buf_V_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_30 \
    op interface \
    ports { bn_bias_buf_V_30_address0 { O 2 vector } bn_bias_buf_V_30_ce0 { O 1 bit } bn_bias_buf_V_30_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1730 \
    name bn_weight_buf_V_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_buf_V_31 \
    op interface \
    ports { bn_weight_buf_V_31_address0 { O 2 vector } bn_weight_buf_V_31_ce0 { O 1 bit } bn_weight_buf_V_31_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_buf_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1731 \
    name bn_bias_buf_V_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_buf_V_31 \
    op interface \
    ports { bn_bias_buf_V_31_address0 { O 2 vector } bn_bias_buf_V_31_ce0 { O 1 bit } bn_bias_buf_V_31_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_buf_V_31'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1535 \
    name ddr_ptr_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ddr_ptr_V \
    op interface \
    ports { m_axi_ddr_ptr_V_AWVALID { O 1 bit } m_axi_ddr_ptr_V_AWREADY { I 1 bit } m_axi_ddr_ptr_V_AWADDR { O 32 vector } m_axi_ddr_ptr_V_AWID { O 1 vector } m_axi_ddr_ptr_V_AWLEN { O 32 vector } m_axi_ddr_ptr_V_AWSIZE { O 3 vector } m_axi_ddr_ptr_V_AWBURST { O 2 vector } m_axi_ddr_ptr_V_AWLOCK { O 2 vector } m_axi_ddr_ptr_V_AWCACHE { O 4 vector } m_axi_ddr_ptr_V_AWPROT { O 3 vector } m_axi_ddr_ptr_V_AWQOS { O 4 vector } m_axi_ddr_ptr_V_AWREGION { O 4 vector } m_axi_ddr_ptr_V_AWUSER { O 1 vector } m_axi_ddr_ptr_V_WVALID { O 1 bit } m_axi_ddr_ptr_V_WREADY { I 1 bit } m_axi_ddr_ptr_V_WDATA { O 512 vector } m_axi_ddr_ptr_V_WSTRB { O 64 vector } m_axi_ddr_ptr_V_WLAST { O 1 bit } m_axi_ddr_ptr_V_WID { O 1 vector } m_axi_ddr_ptr_V_WUSER { O 1 vector } m_axi_ddr_ptr_V_ARVALID { O 1 bit } m_axi_ddr_ptr_V_ARREADY { I 1 bit } m_axi_ddr_ptr_V_ARADDR { O 32 vector } m_axi_ddr_ptr_V_ARID { O 1 vector } m_axi_ddr_ptr_V_ARLEN { O 32 vector } m_axi_ddr_ptr_V_ARSIZE { O 3 vector } m_axi_ddr_ptr_V_ARBURST { O 2 vector } m_axi_ddr_ptr_V_ARLOCK { O 2 vector } m_axi_ddr_ptr_V_ARCACHE { O 4 vector } m_axi_ddr_ptr_V_ARPROT { O 3 vector } m_axi_ddr_ptr_V_ARQOS { O 4 vector } m_axi_ddr_ptr_V_ARREGION { O 4 vector } m_axi_ddr_ptr_V_ARUSER { O 1 vector } m_axi_ddr_ptr_V_RVALID { I 1 bit } m_axi_ddr_ptr_V_RREADY { O 1 bit } m_axi_ddr_ptr_V_RDATA { I 512 vector } m_axi_ddr_ptr_V_RLAST { I 1 bit } m_axi_ddr_ptr_V_RID { I 1 vector } m_axi_ddr_ptr_V_RUSER { I 1 vector } m_axi_ddr_ptr_V_RRESP { I 2 vector } m_axi_ddr_ptr_V_BVALID { I 1 bit } m_axi_ddr_ptr_V_BREADY { O 1 bit } m_axi_ddr_ptr_V_BRESP { I 2 vector } m_axi_ddr_ptr_V_BID { I 1 vector } m_axi_ddr_ptr_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1536 \
    name ddr_ptr_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ddr_ptr_V_offset \
    op interface \
    ports { ddr_ptr_V_offset { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1537 \
    name row_offset_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row_offset_offset \
    op interface \
    ports { row_offset_offset { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1538 \
    name col_offset_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_col_offset_offset \
    op interface \
    ports { col_offset_offset { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1539 \
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


