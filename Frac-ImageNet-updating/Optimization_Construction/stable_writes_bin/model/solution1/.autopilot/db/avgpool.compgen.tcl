# This script segment is generated automatically by AutoPilot

set id 1421
set name FracNet_mac_muladBew
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 0
set in1_width 5
set in1_signed 1
set in2_width 7
set in2_signed 0
set out_width 11
set exp i0*i1+i2
set arg_lists {i0 {8 0 +} i1 {5 1 +} m {11 1 +} i2 {7 0 +} p {11 1 +} c_reg {1} rnd {0} acc {0} }
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
    id 1425 \
    name out_buf_sc_V_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_0 \
    op interface \
    ports { out_buf_sc_V_0_address0 { O 10 vector } out_buf_sc_V_0_ce0 { O 1 bit } out_buf_sc_V_0_we0 { O 1 bit } out_buf_sc_V_0_d0 { O 16 vector } out_buf_sc_V_0_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1426 \
    name out_buf_sc_V_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_1 \
    op interface \
    ports { out_buf_sc_V_1_address0 { O 10 vector } out_buf_sc_V_1_ce0 { O 1 bit } out_buf_sc_V_1_we0 { O 1 bit } out_buf_sc_V_1_d0 { O 16 vector } out_buf_sc_V_1_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1427 \
    name out_buf_sc_V_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_2 \
    op interface \
    ports { out_buf_sc_V_2_address0 { O 10 vector } out_buf_sc_V_2_ce0 { O 1 bit } out_buf_sc_V_2_we0 { O 1 bit } out_buf_sc_V_2_d0 { O 16 vector } out_buf_sc_V_2_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1428 \
    name out_buf_sc_V_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_3 \
    op interface \
    ports { out_buf_sc_V_3_address0 { O 10 vector } out_buf_sc_V_3_ce0 { O 1 bit } out_buf_sc_V_3_we0 { O 1 bit } out_buf_sc_V_3_d0 { O 16 vector } out_buf_sc_V_3_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1429 \
    name out_buf_sc_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_4 \
    op interface \
    ports { out_buf_sc_V_4_address0 { O 10 vector } out_buf_sc_V_4_ce0 { O 1 bit } out_buf_sc_V_4_we0 { O 1 bit } out_buf_sc_V_4_d0 { O 16 vector } out_buf_sc_V_4_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1430 \
    name out_buf_sc_V_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_5 \
    op interface \
    ports { out_buf_sc_V_5_address0 { O 10 vector } out_buf_sc_V_5_ce0 { O 1 bit } out_buf_sc_V_5_we0 { O 1 bit } out_buf_sc_V_5_d0 { O 16 vector } out_buf_sc_V_5_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1431 \
    name out_buf_sc_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_6 \
    op interface \
    ports { out_buf_sc_V_6_address0 { O 10 vector } out_buf_sc_V_6_ce0 { O 1 bit } out_buf_sc_V_6_we0 { O 1 bit } out_buf_sc_V_6_d0 { O 16 vector } out_buf_sc_V_6_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1432 \
    name out_buf_sc_V_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_7 \
    op interface \
    ports { out_buf_sc_V_7_address0 { O 10 vector } out_buf_sc_V_7_ce0 { O 1 bit } out_buf_sc_V_7_we0 { O 1 bit } out_buf_sc_V_7_d0 { O 16 vector } out_buf_sc_V_7_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1433 \
    name out_buf_sc_V_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_8 \
    op interface \
    ports { out_buf_sc_V_8_address0 { O 10 vector } out_buf_sc_V_8_ce0 { O 1 bit } out_buf_sc_V_8_we0 { O 1 bit } out_buf_sc_V_8_d0 { O 16 vector } out_buf_sc_V_8_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1434 \
    name out_buf_sc_V_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_9 \
    op interface \
    ports { out_buf_sc_V_9_address0 { O 10 vector } out_buf_sc_V_9_ce0 { O 1 bit } out_buf_sc_V_9_we0 { O 1 bit } out_buf_sc_V_9_d0 { O 16 vector } out_buf_sc_V_9_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1435 \
    name out_buf_sc_V_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_10 \
    op interface \
    ports { out_buf_sc_V_10_address0 { O 10 vector } out_buf_sc_V_10_ce0 { O 1 bit } out_buf_sc_V_10_we0 { O 1 bit } out_buf_sc_V_10_d0 { O 16 vector } out_buf_sc_V_10_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1436 \
    name out_buf_sc_V_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_11 \
    op interface \
    ports { out_buf_sc_V_11_address0 { O 10 vector } out_buf_sc_V_11_ce0 { O 1 bit } out_buf_sc_V_11_we0 { O 1 bit } out_buf_sc_V_11_d0 { O 16 vector } out_buf_sc_V_11_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1437 \
    name out_buf_sc_V_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_12 \
    op interface \
    ports { out_buf_sc_V_12_address0 { O 10 vector } out_buf_sc_V_12_ce0 { O 1 bit } out_buf_sc_V_12_we0 { O 1 bit } out_buf_sc_V_12_d0 { O 16 vector } out_buf_sc_V_12_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1438 \
    name out_buf_sc_V_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_13 \
    op interface \
    ports { out_buf_sc_V_13_address0 { O 10 vector } out_buf_sc_V_13_ce0 { O 1 bit } out_buf_sc_V_13_we0 { O 1 bit } out_buf_sc_V_13_d0 { O 16 vector } out_buf_sc_V_13_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1439 \
    name out_buf_sc_V_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_14 \
    op interface \
    ports { out_buf_sc_V_14_address0 { O 10 vector } out_buf_sc_V_14_ce0 { O 1 bit } out_buf_sc_V_14_we0 { O 1 bit } out_buf_sc_V_14_d0 { O 16 vector } out_buf_sc_V_14_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1440 \
    name out_buf_sc_V_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_15 \
    op interface \
    ports { out_buf_sc_V_15_address0 { O 10 vector } out_buf_sc_V_15_ce0 { O 1 bit } out_buf_sc_V_15_we0 { O 1 bit } out_buf_sc_V_15_d0 { O 16 vector } out_buf_sc_V_15_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1441 \
    name out_buf_sc_V_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_16 \
    op interface \
    ports { out_buf_sc_V_16_address0 { O 10 vector } out_buf_sc_V_16_ce0 { O 1 bit } out_buf_sc_V_16_we0 { O 1 bit } out_buf_sc_V_16_d0 { O 16 vector } out_buf_sc_V_16_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1442 \
    name out_buf_sc_V_17 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_17 \
    op interface \
    ports { out_buf_sc_V_17_address0 { O 10 vector } out_buf_sc_V_17_ce0 { O 1 bit } out_buf_sc_V_17_we0 { O 1 bit } out_buf_sc_V_17_d0 { O 16 vector } out_buf_sc_V_17_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1443 \
    name out_buf_sc_V_18 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_18 \
    op interface \
    ports { out_buf_sc_V_18_address0 { O 10 vector } out_buf_sc_V_18_ce0 { O 1 bit } out_buf_sc_V_18_we0 { O 1 bit } out_buf_sc_V_18_d0 { O 16 vector } out_buf_sc_V_18_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1444 \
    name out_buf_sc_V_19 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_19 \
    op interface \
    ports { out_buf_sc_V_19_address0 { O 10 vector } out_buf_sc_V_19_ce0 { O 1 bit } out_buf_sc_V_19_we0 { O 1 bit } out_buf_sc_V_19_d0 { O 16 vector } out_buf_sc_V_19_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1445 \
    name out_buf_sc_V_20 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_20 \
    op interface \
    ports { out_buf_sc_V_20_address0 { O 10 vector } out_buf_sc_V_20_ce0 { O 1 bit } out_buf_sc_V_20_we0 { O 1 bit } out_buf_sc_V_20_d0 { O 16 vector } out_buf_sc_V_20_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1446 \
    name out_buf_sc_V_21 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_21 \
    op interface \
    ports { out_buf_sc_V_21_address0 { O 10 vector } out_buf_sc_V_21_ce0 { O 1 bit } out_buf_sc_V_21_we0 { O 1 bit } out_buf_sc_V_21_d0 { O 16 vector } out_buf_sc_V_21_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1447 \
    name out_buf_sc_V_22 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_22 \
    op interface \
    ports { out_buf_sc_V_22_address0 { O 10 vector } out_buf_sc_V_22_ce0 { O 1 bit } out_buf_sc_V_22_we0 { O 1 bit } out_buf_sc_V_22_d0 { O 16 vector } out_buf_sc_V_22_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1448 \
    name out_buf_sc_V_23 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_23 \
    op interface \
    ports { out_buf_sc_V_23_address0 { O 10 vector } out_buf_sc_V_23_ce0 { O 1 bit } out_buf_sc_V_23_we0 { O 1 bit } out_buf_sc_V_23_d0 { O 16 vector } out_buf_sc_V_23_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1449 \
    name out_buf_sc_V_24 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_24 \
    op interface \
    ports { out_buf_sc_V_24_address0 { O 10 vector } out_buf_sc_V_24_ce0 { O 1 bit } out_buf_sc_V_24_we0 { O 1 bit } out_buf_sc_V_24_d0 { O 16 vector } out_buf_sc_V_24_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1450 \
    name out_buf_sc_V_25 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_25 \
    op interface \
    ports { out_buf_sc_V_25_address0 { O 10 vector } out_buf_sc_V_25_ce0 { O 1 bit } out_buf_sc_V_25_we0 { O 1 bit } out_buf_sc_V_25_d0 { O 16 vector } out_buf_sc_V_25_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1451 \
    name out_buf_sc_V_26 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_26 \
    op interface \
    ports { out_buf_sc_V_26_address0 { O 10 vector } out_buf_sc_V_26_ce0 { O 1 bit } out_buf_sc_V_26_we0 { O 1 bit } out_buf_sc_V_26_d0 { O 16 vector } out_buf_sc_V_26_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1452 \
    name out_buf_sc_V_27 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_27 \
    op interface \
    ports { out_buf_sc_V_27_address0 { O 10 vector } out_buf_sc_V_27_ce0 { O 1 bit } out_buf_sc_V_27_we0 { O 1 bit } out_buf_sc_V_27_d0 { O 16 vector } out_buf_sc_V_27_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1453 \
    name out_buf_sc_V_28 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_28 \
    op interface \
    ports { out_buf_sc_V_28_address0 { O 10 vector } out_buf_sc_V_28_ce0 { O 1 bit } out_buf_sc_V_28_we0 { O 1 bit } out_buf_sc_V_28_d0 { O 16 vector } out_buf_sc_V_28_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1454 \
    name out_buf_sc_V_29 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_29 \
    op interface \
    ports { out_buf_sc_V_29_address0 { O 10 vector } out_buf_sc_V_29_ce0 { O 1 bit } out_buf_sc_V_29_we0 { O 1 bit } out_buf_sc_V_29_d0 { O 16 vector } out_buf_sc_V_29_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1455 \
    name out_buf_sc_V_30 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_30 \
    op interface \
    ports { out_buf_sc_V_30_address0 { O 10 vector } out_buf_sc_V_30_ce0 { O 1 bit } out_buf_sc_V_30_we0 { O 1 bit } out_buf_sc_V_30_d0 { O 16 vector } out_buf_sc_V_30_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1456 \
    name out_buf_sc_V_31 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_sc_V_31 \
    op interface \
    ports { out_buf_sc_V_31_address0 { O 10 vector } out_buf_sc_V_31_ce0 { O 1 bit } out_buf_sc_V_31_we0 { O 1 bit } out_buf_sc_V_31_d0 { O 16 vector } out_buf_sc_V_31_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_V_31'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1423 \
    name H_fmap \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_H_fmap \
    op interface \
    ports { H_fmap { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1424 \
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


