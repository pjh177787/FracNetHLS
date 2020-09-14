# This script segment is generated automatically by AutoPilot

set id 162
set name FracNet_mac_muladg8j
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 7
set in0_signed 0
set in1_width 8
set in1_signed 0
set in2_width 7
set in2_signed 0
set out_width 14
set exp i0*i1+i2
set arg_lists {i0 {7 0 +} i1 {8 0 +} m {14 0 +} i2 {7 0 +} p {14 0 +} c_reg {1} rnd {0} acc {0} }
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
    id 168 \
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
    id 169 \
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
    id 170 \
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
    id 171 \
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
    id 172 \
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
    id 173 \
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
    id 174 \
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
    id 175 \
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
    id 176 \
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
    id 177 \
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
    id 178 \
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
    id 179 \
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
    id 180 \
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
    id 181 \
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
    id 182 \
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
    id 183 \
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
    id 184 \
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
    id 185 \
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
    id 186 \
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
    id 187 \
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
    id 188 \
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
    id 189 \
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
    id 190 \
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
    id 191 \
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
    id 192 \
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
    id 193 \
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
    id 194 \
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
    id 195 \
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
    id 196 \
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
    id 197 \
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
    id 198 \
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
    id 199 \
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


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name dest_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dest_V \
    op interface \
    ports { m_axi_dest_V_AWVALID { O 1 bit } m_axi_dest_V_AWREADY { I 1 bit } m_axi_dest_V_AWADDR { O 32 vector } m_axi_dest_V_AWID { O 1 vector } m_axi_dest_V_AWLEN { O 32 vector } m_axi_dest_V_AWSIZE { O 3 vector } m_axi_dest_V_AWBURST { O 2 vector } m_axi_dest_V_AWLOCK { O 2 vector } m_axi_dest_V_AWCACHE { O 4 vector } m_axi_dest_V_AWPROT { O 3 vector } m_axi_dest_V_AWQOS { O 4 vector } m_axi_dest_V_AWREGION { O 4 vector } m_axi_dest_V_AWUSER { O 1 vector } m_axi_dest_V_WVALID { O 1 bit } m_axi_dest_V_WREADY { I 1 bit } m_axi_dest_V_WDATA { O 512 vector } m_axi_dest_V_WSTRB { O 64 vector } m_axi_dest_V_WLAST { O 1 bit } m_axi_dest_V_WID { O 1 vector } m_axi_dest_V_WUSER { O 1 vector } m_axi_dest_V_ARVALID { O 1 bit } m_axi_dest_V_ARREADY { I 1 bit } m_axi_dest_V_ARADDR { O 32 vector } m_axi_dest_V_ARID { O 1 vector } m_axi_dest_V_ARLEN { O 32 vector } m_axi_dest_V_ARSIZE { O 3 vector } m_axi_dest_V_ARBURST { O 2 vector } m_axi_dest_V_ARLOCK { O 2 vector } m_axi_dest_V_ARCACHE { O 4 vector } m_axi_dest_V_ARPROT { O 3 vector } m_axi_dest_V_ARQOS { O 4 vector } m_axi_dest_V_ARREGION { O 4 vector } m_axi_dest_V_ARUSER { O 1 vector } m_axi_dest_V_RVALID { I 1 bit } m_axi_dest_V_RREADY { O 1 bit } m_axi_dest_V_RDATA { I 512 vector } m_axi_dest_V_RLAST { I 1 bit } m_axi_dest_V_RID { I 1 vector } m_axi_dest_V_RUSER { I 1 vector } m_axi_dest_V_RRESP { I 2 vector } m_axi_dest_V_BVALID { I 1 bit } m_axi_dest_V_BREADY { O 1 bit } m_axi_dest_V_BRESP { I 2 vector } m_axi_dest_V_BID { I 1 vector } m_axi_dest_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name dest_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_dest_V_offset \
    op interface \
    ports { dest_V_offset { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
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
    id 167 \
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


