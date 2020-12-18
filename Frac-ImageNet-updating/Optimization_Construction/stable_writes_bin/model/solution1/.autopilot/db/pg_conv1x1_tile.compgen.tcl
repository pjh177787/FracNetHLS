# This script segment is generated automatically by AutoPilot

set id 1348
set name FracNet_mac_muladzec
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 0
set in1_width 13
set in1_signed 1
set in2_width 15
set in2_signed 0
set out_width 20
set exp i0*i1+i2
set arg_lists {i0 {8 0 +} i1 {13 1 +} m {20 1 +} i2 {15 0 +} p {20 1 +} c_reg {1} rnd {0} acc {0} }
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


set id 1349
set name FracNet_ama_addmuAem
set corename simcore_ama
set op ama
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 3
set in0_signed 0
set in1_width 3
set in1_signed 0
set in2_width 7
set in2_signed 0
set in3_width 11
set in3_signed 0
set out_width 11
set exp (i0+i1)*i2+i3
set arg_lists {i0 {3 0 +} i1 {3 0 +} s {4 0 +} i2 {7 0 +} m {11 0 +} i3 {11 0 +} p {11 0 +} c_expval {c} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_ama] == "ap_gen_simcore_ama"} {
eval "ap_gen_simcore_ama { \
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
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_ama, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op ama
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
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
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
    id 1352 \
    name inputs_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename inputs_V \
    op interface \
    ports { inputs_V_address0 { O 16 vector } inputs_V_ce0 { O 1 bit } inputs_V_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'inputs_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1389 \
    name out_buf_all_V_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_0 \
    op interface \
    ports { out_buf_all_V_0_address0 { O 11 vector } out_buf_all_V_0_ce0 { O 1 bit } out_buf_all_V_0_q0 { I 16 vector } out_buf_all_V_0_address1 { O 11 vector } out_buf_all_V_0_ce1 { O 1 bit } out_buf_all_V_0_we1 { O 1 bit } out_buf_all_V_0_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1390 \
    name out_buf_all_V_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_1 \
    op interface \
    ports { out_buf_all_V_1_address0 { O 11 vector } out_buf_all_V_1_ce0 { O 1 bit } out_buf_all_V_1_q0 { I 16 vector } out_buf_all_V_1_address1 { O 11 vector } out_buf_all_V_1_ce1 { O 1 bit } out_buf_all_V_1_we1 { O 1 bit } out_buf_all_V_1_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1391 \
    name out_buf_all_V_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_2 \
    op interface \
    ports { out_buf_all_V_2_address0 { O 11 vector } out_buf_all_V_2_ce0 { O 1 bit } out_buf_all_V_2_q0 { I 16 vector } out_buf_all_V_2_address1 { O 11 vector } out_buf_all_V_2_ce1 { O 1 bit } out_buf_all_V_2_we1 { O 1 bit } out_buf_all_V_2_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1392 \
    name out_buf_all_V_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_3 \
    op interface \
    ports { out_buf_all_V_3_address0 { O 11 vector } out_buf_all_V_3_ce0 { O 1 bit } out_buf_all_V_3_q0 { I 16 vector } out_buf_all_V_3_address1 { O 11 vector } out_buf_all_V_3_ce1 { O 1 bit } out_buf_all_V_3_we1 { O 1 bit } out_buf_all_V_3_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1393 \
    name out_buf_all_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_4 \
    op interface \
    ports { out_buf_all_V_4_address0 { O 11 vector } out_buf_all_V_4_ce0 { O 1 bit } out_buf_all_V_4_q0 { I 16 vector } out_buf_all_V_4_address1 { O 11 vector } out_buf_all_V_4_ce1 { O 1 bit } out_buf_all_V_4_we1 { O 1 bit } out_buf_all_V_4_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1394 \
    name out_buf_all_V_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_5 \
    op interface \
    ports { out_buf_all_V_5_address0 { O 11 vector } out_buf_all_V_5_ce0 { O 1 bit } out_buf_all_V_5_q0 { I 16 vector } out_buf_all_V_5_address1 { O 11 vector } out_buf_all_V_5_ce1 { O 1 bit } out_buf_all_V_5_we1 { O 1 bit } out_buf_all_V_5_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1395 \
    name out_buf_all_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_6 \
    op interface \
    ports { out_buf_all_V_6_address0 { O 11 vector } out_buf_all_V_6_ce0 { O 1 bit } out_buf_all_V_6_q0 { I 16 vector } out_buf_all_V_6_address1 { O 11 vector } out_buf_all_V_6_ce1 { O 1 bit } out_buf_all_V_6_we1 { O 1 bit } out_buf_all_V_6_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1396 \
    name out_buf_all_V_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_7 \
    op interface \
    ports { out_buf_all_V_7_address0 { O 11 vector } out_buf_all_V_7_ce0 { O 1 bit } out_buf_all_V_7_q0 { I 16 vector } out_buf_all_V_7_address1 { O 11 vector } out_buf_all_V_7_ce1 { O 1 bit } out_buf_all_V_7_we1 { O 1 bit } out_buf_all_V_7_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1397 \
    name out_buf_all_V_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_8 \
    op interface \
    ports { out_buf_all_V_8_address0 { O 11 vector } out_buf_all_V_8_ce0 { O 1 bit } out_buf_all_V_8_q0 { I 16 vector } out_buf_all_V_8_address1 { O 11 vector } out_buf_all_V_8_ce1 { O 1 bit } out_buf_all_V_8_we1 { O 1 bit } out_buf_all_V_8_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1398 \
    name out_buf_all_V_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_9 \
    op interface \
    ports { out_buf_all_V_9_address0 { O 11 vector } out_buf_all_V_9_ce0 { O 1 bit } out_buf_all_V_9_q0 { I 16 vector } out_buf_all_V_9_address1 { O 11 vector } out_buf_all_V_9_ce1 { O 1 bit } out_buf_all_V_9_we1 { O 1 bit } out_buf_all_V_9_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1399 \
    name out_buf_all_V_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_10 \
    op interface \
    ports { out_buf_all_V_10_address0 { O 11 vector } out_buf_all_V_10_ce0 { O 1 bit } out_buf_all_V_10_q0 { I 16 vector } out_buf_all_V_10_address1 { O 11 vector } out_buf_all_V_10_ce1 { O 1 bit } out_buf_all_V_10_we1 { O 1 bit } out_buf_all_V_10_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1400 \
    name out_buf_all_V_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_11 \
    op interface \
    ports { out_buf_all_V_11_address0 { O 11 vector } out_buf_all_V_11_ce0 { O 1 bit } out_buf_all_V_11_q0 { I 16 vector } out_buf_all_V_11_address1 { O 11 vector } out_buf_all_V_11_ce1 { O 1 bit } out_buf_all_V_11_we1 { O 1 bit } out_buf_all_V_11_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1401 \
    name out_buf_all_V_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_12 \
    op interface \
    ports { out_buf_all_V_12_address0 { O 11 vector } out_buf_all_V_12_ce0 { O 1 bit } out_buf_all_V_12_q0 { I 16 vector } out_buf_all_V_12_address1 { O 11 vector } out_buf_all_V_12_ce1 { O 1 bit } out_buf_all_V_12_we1 { O 1 bit } out_buf_all_V_12_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1402 \
    name out_buf_all_V_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_13 \
    op interface \
    ports { out_buf_all_V_13_address0 { O 11 vector } out_buf_all_V_13_ce0 { O 1 bit } out_buf_all_V_13_q0 { I 16 vector } out_buf_all_V_13_address1 { O 11 vector } out_buf_all_V_13_ce1 { O 1 bit } out_buf_all_V_13_we1 { O 1 bit } out_buf_all_V_13_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1403 \
    name out_buf_all_V_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_14 \
    op interface \
    ports { out_buf_all_V_14_address0 { O 11 vector } out_buf_all_V_14_ce0 { O 1 bit } out_buf_all_V_14_q0 { I 16 vector } out_buf_all_V_14_address1 { O 11 vector } out_buf_all_V_14_ce1 { O 1 bit } out_buf_all_V_14_we1 { O 1 bit } out_buf_all_V_14_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1404 \
    name out_buf_all_V_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_15 \
    op interface \
    ports { out_buf_all_V_15_address0 { O 11 vector } out_buf_all_V_15_ce0 { O 1 bit } out_buf_all_V_15_q0 { I 16 vector } out_buf_all_V_15_address1 { O 11 vector } out_buf_all_V_15_ce1 { O 1 bit } out_buf_all_V_15_we1 { O 1 bit } out_buf_all_V_15_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1405 \
    name out_buf_all_V_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_16 \
    op interface \
    ports { out_buf_all_V_16_address0 { O 11 vector } out_buf_all_V_16_ce0 { O 1 bit } out_buf_all_V_16_q0 { I 16 vector } out_buf_all_V_16_address1 { O 11 vector } out_buf_all_V_16_ce1 { O 1 bit } out_buf_all_V_16_we1 { O 1 bit } out_buf_all_V_16_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1406 \
    name out_buf_all_V_17 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_17 \
    op interface \
    ports { out_buf_all_V_17_address0 { O 11 vector } out_buf_all_V_17_ce0 { O 1 bit } out_buf_all_V_17_q0 { I 16 vector } out_buf_all_V_17_address1 { O 11 vector } out_buf_all_V_17_ce1 { O 1 bit } out_buf_all_V_17_we1 { O 1 bit } out_buf_all_V_17_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1407 \
    name out_buf_all_V_18 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_18 \
    op interface \
    ports { out_buf_all_V_18_address0 { O 11 vector } out_buf_all_V_18_ce0 { O 1 bit } out_buf_all_V_18_q0 { I 16 vector } out_buf_all_V_18_address1 { O 11 vector } out_buf_all_V_18_ce1 { O 1 bit } out_buf_all_V_18_we1 { O 1 bit } out_buf_all_V_18_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1408 \
    name out_buf_all_V_19 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_19 \
    op interface \
    ports { out_buf_all_V_19_address0 { O 11 vector } out_buf_all_V_19_ce0 { O 1 bit } out_buf_all_V_19_q0 { I 16 vector } out_buf_all_V_19_address1 { O 11 vector } out_buf_all_V_19_ce1 { O 1 bit } out_buf_all_V_19_we1 { O 1 bit } out_buf_all_V_19_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1409 \
    name out_buf_all_V_20 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_20 \
    op interface \
    ports { out_buf_all_V_20_address0 { O 11 vector } out_buf_all_V_20_ce0 { O 1 bit } out_buf_all_V_20_q0 { I 16 vector } out_buf_all_V_20_address1 { O 11 vector } out_buf_all_V_20_ce1 { O 1 bit } out_buf_all_V_20_we1 { O 1 bit } out_buf_all_V_20_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1410 \
    name out_buf_all_V_21 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_21 \
    op interface \
    ports { out_buf_all_V_21_address0 { O 11 vector } out_buf_all_V_21_ce0 { O 1 bit } out_buf_all_V_21_q0 { I 16 vector } out_buf_all_V_21_address1 { O 11 vector } out_buf_all_V_21_ce1 { O 1 bit } out_buf_all_V_21_we1 { O 1 bit } out_buf_all_V_21_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1411 \
    name out_buf_all_V_22 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_22 \
    op interface \
    ports { out_buf_all_V_22_address0 { O 11 vector } out_buf_all_V_22_ce0 { O 1 bit } out_buf_all_V_22_q0 { I 16 vector } out_buf_all_V_22_address1 { O 11 vector } out_buf_all_V_22_ce1 { O 1 bit } out_buf_all_V_22_we1 { O 1 bit } out_buf_all_V_22_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1412 \
    name out_buf_all_V_23 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_23 \
    op interface \
    ports { out_buf_all_V_23_address0 { O 11 vector } out_buf_all_V_23_ce0 { O 1 bit } out_buf_all_V_23_q0 { I 16 vector } out_buf_all_V_23_address1 { O 11 vector } out_buf_all_V_23_ce1 { O 1 bit } out_buf_all_V_23_we1 { O 1 bit } out_buf_all_V_23_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1413 \
    name out_buf_all_V_24 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_24 \
    op interface \
    ports { out_buf_all_V_24_address0 { O 11 vector } out_buf_all_V_24_ce0 { O 1 bit } out_buf_all_V_24_q0 { I 16 vector } out_buf_all_V_24_address1 { O 11 vector } out_buf_all_V_24_ce1 { O 1 bit } out_buf_all_V_24_we1 { O 1 bit } out_buf_all_V_24_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1414 \
    name out_buf_all_V_25 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_25 \
    op interface \
    ports { out_buf_all_V_25_address0 { O 11 vector } out_buf_all_V_25_ce0 { O 1 bit } out_buf_all_V_25_q0 { I 16 vector } out_buf_all_V_25_address1 { O 11 vector } out_buf_all_V_25_ce1 { O 1 bit } out_buf_all_V_25_we1 { O 1 bit } out_buf_all_V_25_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1415 \
    name out_buf_all_V_26 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_26 \
    op interface \
    ports { out_buf_all_V_26_address0 { O 11 vector } out_buf_all_V_26_ce0 { O 1 bit } out_buf_all_V_26_q0 { I 16 vector } out_buf_all_V_26_address1 { O 11 vector } out_buf_all_V_26_ce1 { O 1 bit } out_buf_all_V_26_we1 { O 1 bit } out_buf_all_V_26_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1416 \
    name out_buf_all_V_27 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_27 \
    op interface \
    ports { out_buf_all_V_27_address0 { O 11 vector } out_buf_all_V_27_ce0 { O 1 bit } out_buf_all_V_27_q0 { I 16 vector } out_buf_all_V_27_address1 { O 11 vector } out_buf_all_V_27_ce1 { O 1 bit } out_buf_all_V_27_we1 { O 1 bit } out_buf_all_V_27_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1417 \
    name out_buf_all_V_28 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_28 \
    op interface \
    ports { out_buf_all_V_28_address0 { O 11 vector } out_buf_all_V_28_ce0 { O 1 bit } out_buf_all_V_28_q0 { I 16 vector } out_buf_all_V_28_address1 { O 11 vector } out_buf_all_V_28_ce1 { O 1 bit } out_buf_all_V_28_we1 { O 1 bit } out_buf_all_V_28_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1418 \
    name out_buf_all_V_29 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_29 \
    op interface \
    ports { out_buf_all_V_29_address0 { O 11 vector } out_buf_all_V_29_ce0 { O 1 bit } out_buf_all_V_29_q0 { I 16 vector } out_buf_all_V_29_address1 { O 11 vector } out_buf_all_V_29_ce1 { O 1 bit } out_buf_all_V_29_we1 { O 1 bit } out_buf_all_V_29_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1419 \
    name out_buf_all_V_30 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_30 \
    op interface \
    ports { out_buf_all_V_30_address0 { O 11 vector } out_buf_all_V_30_ce0 { O 1 bit } out_buf_all_V_30_q0 { I 16 vector } out_buf_all_V_30_address1 { O 11 vector } out_buf_all_V_30_ce1 { O 1 bit } out_buf_all_V_30_we1 { O 1 bit } out_buf_all_V_30_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1420 \
    name out_buf_all_V_31 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_buf_all_V_31 \
    op interface \
    ports { out_buf_all_V_31_address0 { O 11 vector } out_buf_all_V_31_ce0 { O 1 bit } out_buf_all_V_31_q0 { I 16 vector } out_buf_all_V_31_address1 { O 11 vector } out_buf_all_V_31_ce1 { O 1 bit } out_buf_all_V_31_we1 { O 1 bit } out_buf_all_V_31_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_V_31'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1353 \
    name weights_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_V_read \
    op interface \
    ports { weights_0_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1354 \
    name weights_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_V_read \
    op interface \
    ports { weights_1_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1355 \
    name weights_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_V_read \
    op interface \
    ports { weights_2_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1356 \
    name weights_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_V_read \
    op interface \
    ports { weights_3_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1357 \
    name weights_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_V_read \
    op interface \
    ports { weights_4_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1358 \
    name weights_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_V_read \
    op interface \
    ports { weights_5_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1359 \
    name weights_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_V_read \
    op interface \
    ports { weights_6_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1360 \
    name weights_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_V_read \
    op interface \
    ports { weights_7_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1361 \
    name weights_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_V_read \
    op interface \
    ports { weights_8_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1362 \
    name weights_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_V_read \
    op interface \
    ports { weights_9_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1363 \
    name weights_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_V_read \
    op interface \
    ports { weights_10_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1364 \
    name weights_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_V_read \
    op interface \
    ports { weights_11_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1365 \
    name weights_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_V_read \
    op interface \
    ports { weights_12_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1366 \
    name weights_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_V_read \
    op interface \
    ports { weights_13_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1367 \
    name weights_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_V_read \
    op interface \
    ports { weights_14_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1368 \
    name weights_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_V_read \
    op interface \
    ports { weights_15_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1369 \
    name weights_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_V_read \
    op interface \
    ports { weights_16_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1370 \
    name weights_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_V_read \
    op interface \
    ports { weights_17_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1371 \
    name weights_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_V_read \
    op interface \
    ports { weights_18_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1372 \
    name weights_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_V_read \
    op interface \
    ports { weights_19_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1373 \
    name weights_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_V_read \
    op interface \
    ports { weights_20_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1374 \
    name weights_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_V_read \
    op interface \
    ports { weights_21_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1375 \
    name weights_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_V_read \
    op interface \
    ports { weights_22_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1376 \
    name weights_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_V_read \
    op interface \
    ports { weights_23_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1377 \
    name weights_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_V_read \
    op interface \
    ports { weights_24_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1378 \
    name weights_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_V_read \
    op interface \
    ports { weights_25_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1379 \
    name weights_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_V_read \
    op interface \
    ports { weights_26_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1380 \
    name weights_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_V_read \
    op interface \
    ports { weights_27_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1381 \
    name weights_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_V_read \
    op interface \
    ports { weights_28_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1382 \
    name weights_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_V_read \
    op interface \
    ports { weights_29_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1383 \
    name weights_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_V_read \
    op interface \
    ports { weights_30_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1384 \
    name weights_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_V_read \
    op interface \
    ports { weights_31_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1385 \
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
    id 1386 \
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
    id 1387 \
    name row_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row_offset \
    op interface \
    ports { row_offset { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1388 \
    name out_buf_start \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_buf_start \
    op interface \
    ports { out_buf_start { I 12 vector } } \
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


