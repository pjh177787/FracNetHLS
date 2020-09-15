# This script segment is generated automatically by AutoPilot

set id 475
set name FracNet_mac_muladkbM
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 11
set in0_signed 0
set in1_width 5
set in1_signed 0
set in2_width 8
set in2_signed 1
set out_width 15
set exp i0*i1+i2
set arg_lists {i0 {11 0 +} i1 {5 0 +} m {15 0 +} i2 {8 1 +} p {15 1 +} c_reg {1} rnd {0} acc {0} }
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
    id 479 \
    name pg_buf_all_V_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_0 \
    op interface \
    ports { pg_buf_all_V_0_address0 { O 14 vector } pg_buf_all_V_0_ce0 { O 1 bit } pg_buf_all_V_0_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 480 \
    name pg_buf_all_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_1 \
    op interface \
    ports { pg_buf_all_V_1_address0 { O 14 vector } pg_buf_all_V_1_ce0 { O 1 bit } pg_buf_all_V_1_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 481 \
    name pg_buf_all_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_2 \
    op interface \
    ports { pg_buf_all_V_2_address0 { O 14 vector } pg_buf_all_V_2_ce0 { O 1 bit } pg_buf_all_V_2_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 482 \
    name pg_buf_all_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_3 \
    op interface \
    ports { pg_buf_all_V_3_address0 { O 14 vector } pg_buf_all_V_3_ce0 { O 1 bit } pg_buf_all_V_3_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 483 \
    name pg_buf_all_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_4 \
    op interface \
    ports { pg_buf_all_V_4_address0 { O 14 vector } pg_buf_all_V_4_ce0 { O 1 bit } pg_buf_all_V_4_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 484 \
    name pg_buf_all_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_5 \
    op interface \
    ports { pg_buf_all_V_5_address0 { O 14 vector } pg_buf_all_V_5_ce0 { O 1 bit } pg_buf_all_V_5_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 485 \
    name pg_buf_all_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_6 \
    op interface \
    ports { pg_buf_all_V_6_address0 { O 14 vector } pg_buf_all_V_6_ce0 { O 1 bit } pg_buf_all_V_6_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 486 \
    name pg_buf_all_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_7 \
    op interface \
    ports { pg_buf_all_V_7_address0 { O 14 vector } pg_buf_all_V_7_ce0 { O 1 bit } pg_buf_all_V_7_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 487 \
    name pg_buf_all_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_8 \
    op interface \
    ports { pg_buf_all_V_8_address0 { O 14 vector } pg_buf_all_V_8_ce0 { O 1 bit } pg_buf_all_V_8_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 488 \
    name pg_buf_all_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_9 \
    op interface \
    ports { pg_buf_all_V_9_address0 { O 14 vector } pg_buf_all_V_9_ce0 { O 1 bit } pg_buf_all_V_9_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 489 \
    name pg_buf_all_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_10 \
    op interface \
    ports { pg_buf_all_V_10_address0 { O 14 vector } pg_buf_all_V_10_ce0 { O 1 bit } pg_buf_all_V_10_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 490 \
    name pg_buf_all_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_11 \
    op interface \
    ports { pg_buf_all_V_11_address0 { O 14 vector } pg_buf_all_V_11_ce0 { O 1 bit } pg_buf_all_V_11_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 491 \
    name pg_buf_all_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_12 \
    op interface \
    ports { pg_buf_all_V_12_address0 { O 14 vector } pg_buf_all_V_12_ce0 { O 1 bit } pg_buf_all_V_12_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 492 \
    name pg_buf_all_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_13 \
    op interface \
    ports { pg_buf_all_V_13_address0 { O 14 vector } pg_buf_all_V_13_ce0 { O 1 bit } pg_buf_all_V_13_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 493 \
    name pg_buf_all_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_14 \
    op interface \
    ports { pg_buf_all_V_14_address0 { O 14 vector } pg_buf_all_V_14_ce0 { O 1 bit } pg_buf_all_V_14_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 494 \
    name pg_buf_all_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_15 \
    op interface \
    ports { pg_buf_all_V_15_address0 { O 14 vector } pg_buf_all_V_15_ce0 { O 1 bit } pg_buf_all_V_15_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 495 \
    name pg_buf_all_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_16 \
    op interface \
    ports { pg_buf_all_V_16_address0 { O 14 vector } pg_buf_all_V_16_ce0 { O 1 bit } pg_buf_all_V_16_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 496 \
    name pg_buf_all_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_17 \
    op interface \
    ports { pg_buf_all_V_17_address0 { O 14 vector } pg_buf_all_V_17_ce0 { O 1 bit } pg_buf_all_V_17_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 497 \
    name pg_buf_all_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_18 \
    op interface \
    ports { pg_buf_all_V_18_address0 { O 14 vector } pg_buf_all_V_18_ce0 { O 1 bit } pg_buf_all_V_18_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 498 \
    name pg_buf_all_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_19 \
    op interface \
    ports { pg_buf_all_V_19_address0 { O 14 vector } pg_buf_all_V_19_ce0 { O 1 bit } pg_buf_all_V_19_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 499 \
    name pg_buf_all_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_20 \
    op interface \
    ports { pg_buf_all_V_20_address0 { O 14 vector } pg_buf_all_V_20_ce0 { O 1 bit } pg_buf_all_V_20_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 500 \
    name pg_buf_all_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_21 \
    op interface \
    ports { pg_buf_all_V_21_address0 { O 14 vector } pg_buf_all_V_21_ce0 { O 1 bit } pg_buf_all_V_21_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 501 \
    name pg_buf_all_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_22 \
    op interface \
    ports { pg_buf_all_V_22_address0 { O 14 vector } pg_buf_all_V_22_ce0 { O 1 bit } pg_buf_all_V_22_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 502 \
    name pg_buf_all_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_23 \
    op interface \
    ports { pg_buf_all_V_23_address0 { O 14 vector } pg_buf_all_V_23_ce0 { O 1 bit } pg_buf_all_V_23_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 503 \
    name pg_buf_all_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_24 \
    op interface \
    ports { pg_buf_all_V_24_address0 { O 14 vector } pg_buf_all_V_24_ce0 { O 1 bit } pg_buf_all_V_24_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 504 \
    name pg_buf_all_V_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_25 \
    op interface \
    ports { pg_buf_all_V_25_address0 { O 14 vector } pg_buf_all_V_25_ce0 { O 1 bit } pg_buf_all_V_25_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 505 \
    name pg_buf_all_V_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_26 \
    op interface \
    ports { pg_buf_all_V_26_address0 { O 14 vector } pg_buf_all_V_26_ce0 { O 1 bit } pg_buf_all_V_26_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 506 \
    name pg_buf_all_V_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_27 \
    op interface \
    ports { pg_buf_all_V_27_address0 { O 14 vector } pg_buf_all_V_27_ce0 { O 1 bit } pg_buf_all_V_27_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 507 \
    name pg_buf_all_V_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_28 \
    op interface \
    ports { pg_buf_all_V_28_address0 { O 14 vector } pg_buf_all_V_28_ce0 { O 1 bit } pg_buf_all_V_28_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 508 \
    name pg_buf_all_V_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_29 \
    op interface \
    ports { pg_buf_all_V_29_address0 { O 14 vector } pg_buf_all_V_29_ce0 { O 1 bit } pg_buf_all_V_29_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 509 \
    name pg_buf_all_V_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_30 \
    op interface \
    ports { pg_buf_all_V_30_address0 { O 14 vector } pg_buf_all_V_30_ce0 { O 1 bit } pg_buf_all_V_30_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 510 \
    name pg_buf_all_V_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_31 \
    op interface \
    ports { pg_buf_all_V_31_address0 { O 14 vector } pg_buf_all_V_31_ce0 { O 1 bit } pg_buf_all_V_31_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 511 \
    name pg_buf_all_V_32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_32 \
    op interface \
    ports { pg_buf_all_V_32_address0 { O 14 vector } pg_buf_all_V_32_ce0 { O 1 bit } pg_buf_all_V_32_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 512 \
    name pg_buf_all_V_33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_33 \
    op interface \
    ports { pg_buf_all_V_33_address0 { O 14 vector } pg_buf_all_V_33_ce0 { O 1 bit } pg_buf_all_V_33_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 513 \
    name pg_buf_all_V_34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_34 \
    op interface \
    ports { pg_buf_all_V_34_address0 { O 14 vector } pg_buf_all_V_34_ce0 { O 1 bit } pg_buf_all_V_34_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 514 \
    name pg_buf_all_V_35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_35 \
    op interface \
    ports { pg_buf_all_V_35_address0 { O 14 vector } pg_buf_all_V_35_ce0 { O 1 bit } pg_buf_all_V_35_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 515 \
    name pg_buf_all_V_36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_36 \
    op interface \
    ports { pg_buf_all_V_36_address0 { O 14 vector } pg_buf_all_V_36_ce0 { O 1 bit } pg_buf_all_V_36_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 516 \
    name pg_buf_all_V_37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_37 \
    op interface \
    ports { pg_buf_all_V_37_address0 { O 14 vector } pg_buf_all_V_37_ce0 { O 1 bit } pg_buf_all_V_37_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 517 \
    name pg_buf_all_V_38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_38 \
    op interface \
    ports { pg_buf_all_V_38_address0 { O 14 vector } pg_buf_all_V_38_ce0 { O 1 bit } pg_buf_all_V_38_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 518 \
    name pg_buf_all_V_39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_39 \
    op interface \
    ports { pg_buf_all_V_39_address0 { O 14 vector } pg_buf_all_V_39_ce0 { O 1 bit } pg_buf_all_V_39_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 519 \
    name pg_buf_all_V_40 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_40 \
    op interface \
    ports { pg_buf_all_V_40_address0 { O 14 vector } pg_buf_all_V_40_ce0 { O 1 bit } pg_buf_all_V_40_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 520 \
    name pg_buf_all_V_41 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_41 \
    op interface \
    ports { pg_buf_all_V_41_address0 { O 14 vector } pg_buf_all_V_41_ce0 { O 1 bit } pg_buf_all_V_41_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 521 \
    name pg_buf_all_V_42 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_42 \
    op interface \
    ports { pg_buf_all_V_42_address0 { O 14 vector } pg_buf_all_V_42_ce0 { O 1 bit } pg_buf_all_V_42_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 522 \
    name pg_buf_all_V_43 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_43 \
    op interface \
    ports { pg_buf_all_V_43_address0 { O 14 vector } pg_buf_all_V_43_ce0 { O 1 bit } pg_buf_all_V_43_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 523 \
    name pg_buf_all_V_44 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_44 \
    op interface \
    ports { pg_buf_all_V_44_address0 { O 14 vector } pg_buf_all_V_44_ce0 { O 1 bit } pg_buf_all_V_44_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 524 \
    name pg_buf_all_V_45 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_45 \
    op interface \
    ports { pg_buf_all_V_45_address0 { O 14 vector } pg_buf_all_V_45_ce0 { O 1 bit } pg_buf_all_V_45_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 525 \
    name pg_buf_all_V_46 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_46 \
    op interface \
    ports { pg_buf_all_V_46_address0 { O 14 vector } pg_buf_all_V_46_ce0 { O 1 bit } pg_buf_all_V_46_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 526 \
    name pg_buf_all_V_47 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_47 \
    op interface \
    ports { pg_buf_all_V_47_address0 { O 14 vector } pg_buf_all_V_47_ce0 { O 1 bit } pg_buf_all_V_47_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 527 \
    name pg_buf_all_V_48 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_48 \
    op interface \
    ports { pg_buf_all_V_48_address0 { O 14 vector } pg_buf_all_V_48_ce0 { O 1 bit } pg_buf_all_V_48_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 528 \
    name pg_buf_all_V_49 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_49 \
    op interface \
    ports { pg_buf_all_V_49_address0 { O 14 vector } pg_buf_all_V_49_ce0 { O 1 bit } pg_buf_all_V_49_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 529 \
    name pg_buf_all_V_50 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_50 \
    op interface \
    ports { pg_buf_all_V_50_address0 { O 14 vector } pg_buf_all_V_50_ce0 { O 1 bit } pg_buf_all_V_50_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 530 \
    name pg_buf_all_V_51 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_51 \
    op interface \
    ports { pg_buf_all_V_51_address0 { O 14 vector } pg_buf_all_V_51_ce0 { O 1 bit } pg_buf_all_V_51_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 531 \
    name pg_buf_all_V_52 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_52 \
    op interface \
    ports { pg_buf_all_V_52_address0 { O 14 vector } pg_buf_all_V_52_ce0 { O 1 bit } pg_buf_all_V_52_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 532 \
    name pg_buf_all_V_53 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_53 \
    op interface \
    ports { pg_buf_all_V_53_address0 { O 14 vector } pg_buf_all_V_53_ce0 { O 1 bit } pg_buf_all_V_53_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 533 \
    name pg_buf_all_V_54 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_54 \
    op interface \
    ports { pg_buf_all_V_54_address0 { O 14 vector } pg_buf_all_V_54_ce0 { O 1 bit } pg_buf_all_V_54_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 534 \
    name pg_buf_all_V_55 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_55 \
    op interface \
    ports { pg_buf_all_V_55_address0 { O 14 vector } pg_buf_all_V_55_ce0 { O 1 bit } pg_buf_all_V_55_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 535 \
    name pg_buf_all_V_56 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_56 \
    op interface \
    ports { pg_buf_all_V_56_address0 { O 14 vector } pg_buf_all_V_56_ce0 { O 1 bit } pg_buf_all_V_56_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 536 \
    name pg_buf_all_V_57 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_57 \
    op interface \
    ports { pg_buf_all_V_57_address0 { O 14 vector } pg_buf_all_V_57_ce0 { O 1 bit } pg_buf_all_V_57_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 537 \
    name pg_buf_all_V_58 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_58 \
    op interface \
    ports { pg_buf_all_V_58_address0 { O 14 vector } pg_buf_all_V_58_ce0 { O 1 bit } pg_buf_all_V_58_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 538 \
    name pg_buf_all_V_59 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_59 \
    op interface \
    ports { pg_buf_all_V_59_address0 { O 14 vector } pg_buf_all_V_59_ce0 { O 1 bit } pg_buf_all_V_59_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 539 \
    name pg_buf_all_V_60 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_60 \
    op interface \
    ports { pg_buf_all_V_60_address0 { O 14 vector } pg_buf_all_V_60_ce0 { O 1 bit } pg_buf_all_V_60_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 540 \
    name pg_buf_all_V_61 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_61 \
    op interface \
    ports { pg_buf_all_V_61_address0 { O 14 vector } pg_buf_all_V_61_ce0 { O 1 bit } pg_buf_all_V_61_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 541 \
    name pg_buf_all_V_62 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_62 \
    op interface \
    ports { pg_buf_all_V_62_address0 { O 14 vector } pg_buf_all_V_62_ce0 { O 1 bit } pg_buf_all_V_62_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 542 \
    name pg_buf_all_V_63 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename pg_buf_all_V_63 \
    op interface \
    ports { pg_buf_all_V_63_address0 { O 14 vector } pg_buf_all_V_63_ce0 { O 1 bit } pg_buf_all_V_63_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf_all_V_63'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 543 \
    name pg_buf0_V_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_0 \
    op interface \
    ports { pg_buf0_V_0_address0 { O 4 vector } pg_buf0_V_0_ce0 { O 1 bit } pg_buf0_V_0_we0 { O 1 bit } pg_buf0_V_0_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 544 \
    name pg_buf0_V_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_1 \
    op interface \
    ports { pg_buf0_V_1_address0 { O 4 vector } pg_buf0_V_1_ce0 { O 1 bit } pg_buf0_V_1_we0 { O 1 bit } pg_buf0_V_1_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 545 \
    name pg_buf0_V_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_2 \
    op interface \
    ports { pg_buf0_V_2_address0 { O 4 vector } pg_buf0_V_2_ce0 { O 1 bit } pg_buf0_V_2_we0 { O 1 bit } pg_buf0_V_2_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 546 \
    name pg_buf0_V_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_3 \
    op interface \
    ports { pg_buf0_V_3_address0 { O 4 vector } pg_buf0_V_3_ce0 { O 1 bit } pg_buf0_V_3_we0 { O 1 bit } pg_buf0_V_3_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 547 \
    name pg_buf0_V_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_4 \
    op interface \
    ports { pg_buf0_V_4_address0 { O 4 vector } pg_buf0_V_4_ce0 { O 1 bit } pg_buf0_V_4_we0 { O 1 bit } pg_buf0_V_4_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 548 \
    name pg_buf0_V_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_5 \
    op interface \
    ports { pg_buf0_V_5_address0 { O 4 vector } pg_buf0_V_5_ce0 { O 1 bit } pg_buf0_V_5_we0 { O 1 bit } pg_buf0_V_5_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 549 \
    name pg_buf0_V_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_6 \
    op interface \
    ports { pg_buf0_V_6_address0 { O 4 vector } pg_buf0_V_6_ce0 { O 1 bit } pg_buf0_V_6_we0 { O 1 bit } pg_buf0_V_6_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 550 \
    name pg_buf0_V_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_7 \
    op interface \
    ports { pg_buf0_V_7_address0 { O 4 vector } pg_buf0_V_7_ce0 { O 1 bit } pg_buf0_V_7_we0 { O 1 bit } pg_buf0_V_7_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 551 \
    name pg_buf0_V_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename pg_buf0_V_8 \
    op interface \
    ports { pg_buf0_V_8_address0 { O 4 vector } pg_buf0_V_8_ce0 { O 1 bit } pg_buf0_V_8_we0 { O 1 bit } pg_buf0_V_8_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'pg_buf0_V_8'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 477 \
    name row \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row \
    op interface \
    ports { row { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 478 \
    name col \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_col \
    op interface \
    ports { col { I 5 vector } } \
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


