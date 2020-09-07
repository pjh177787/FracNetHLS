# This script segment is generated automatically by AutoPilot

set id 13
set name ResNet_mux_63_16_cud
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 3
set din6_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
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
    id 16 \
    name bottom_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_0_V \
    op interface \
    ports { bottom_0_V_address0 { O 10 vector } bottom_0_V_ce0 { O 1 bit } bottom_0_V_q0 { I 16 vector } bottom_0_V_address1 { O 10 vector } bottom_0_V_ce1 { O 1 bit } bottom_0_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 17 \
    name bottom_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_1_V \
    op interface \
    ports { bottom_1_V_address0 { O 10 vector } bottom_1_V_ce0 { O 1 bit } bottom_1_V_q0 { I 16 vector } bottom_1_V_address1 { O 10 vector } bottom_1_V_ce1 { O 1 bit } bottom_1_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name bottom_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_2_V \
    op interface \
    ports { bottom_2_V_address0 { O 10 vector } bottom_2_V_ce0 { O 1 bit } bottom_2_V_q0 { I 16 vector } bottom_2_V_address1 { O 10 vector } bottom_2_V_ce1 { O 1 bit } bottom_2_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 19 \
    name bottom_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_3_V \
    op interface \
    ports { bottom_3_V_address0 { O 10 vector } bottom_3_V_ce0 { O 1 bit } bottom_3_V_q0 { I 16 vector } bottom_3_V_address1 { O 10 vector } bottom_3_V_ce1 { O 1 bit } bottom_3_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name bottom_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_4_V \
    op interface \
    ports { bottom_4_V_address0 { O 10 vector } bottom_4_V_ce0 { O 1 bit } bottom_4_V_q0 { I 16 vector } bottom_4_V_address1 { O 10 vector } bottom_4_V_ce1 { O 1 bit } bottom_4_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name bottom_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_5_V \
    op interface \
    ports { bottom_5_V_address0 { O 10 vector } bottom_5_V_ce0 { O 1 bit } bottom_5_V_q0 { I 16 vector } bottom_5_V_address1 { O 10 vector } bottom_5_V_ce1 { O 1 bit } bottom_5_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name weights_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_0_V \
    op interface \
    ports { weights_0_V_address0 { O 4 vector } weights_0_V_ce0 { O 1 bit } weights_0_V_q0 { I 2 vector } weights_0_V_address1 { O 4 vector } weights_0_V_ce1 { O 1 bit } weights_0_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name weights_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_1_V \
    op interface \
    ports { weights_1_V_address0 { O 4 vector } weights_1_V_ce0 { O 1 bit } weights_1_V_q0 { I 2 vector } weights_1_V_address1 { O 4 vector } weights_1_V_ce1 { O 1 bit } weights_1_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name weights_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_2_V \
    op interface \
    ports { weights_2_V_address0 { O 4 vector } weights_2_V_ce0 { O 1 bit } weights_2_V_q0 { I 2 vector } weights_2_V_address1 { O 4 vector } weights_2_V_ce1 { O 1 bit } weights_2_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name weights_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_3_V \
    op interface \
    ports { weights_3_V_address0 { O 4 vector } weights_3_V_ce0 { O 1 bit } weights_3_V_q0 { I 2 vector } weights_3_V_address1 { O 4 vector } weights_3_V_ce1 { O 1 bit } weights_3_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name weights_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_4_V \
    op interface \
    ports { weights_4_V_address0 { O 4 vector } weights_4_V_ce0 { O 1 bit } weights_4_V_q0 { I 2 vector } weights_4_V_address1 { O 4 vector } weights_4_V_ce1 { O 1 bit } weights_4_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name weights_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_5_V \
    op interface \
    ports { weights_5_V_address0 { O 4 vector } weights_5_V_ce0 { O 1 bit } weights_5_V_q0 { I 2 vector } weights_5_V_address1 { O 4 vector } weights_5_V_ce1 { O 1 bit } weights_5_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name weights_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_6_V \
    op interface \
    ports { weights_6_V_address0 { O 4 vector } weights_6_V_ce0 { O 1 bit } weights_6_V_q0 { I 2 vector } weights_6_V_address1 { O 4 vector } weights_6_V_ce1 { O 1 bit } weights_6_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name weights_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_7_V \
    op interface \
    ports { weights_7_V_address0 { O 4 vector } weights_7_V_ce0 { O 1 bit } weights_7_V_q0 { I 2 vector } weights_7_V_address1 { O 4 vector } weights_7_V_ce1 { O 1 bit } weights_7_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name weights_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_8_V \
    op interface \
    ports { weights_8_V_address0 { O 4 vector } weights_8_V_ce0 { O 1 bit } weights_8_V_q0 { I 2 vector } weights_8_V_address1 { O 4 vector } weights_8_V_ce1 { O 1 bit } weights_8_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name weights_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_9_V \
    op interface \
    ports { weights_9_V_address0 { O 4 vector } weights_9_V_ce0 { O 1 bit } weights_9_V_q0 { I 2 vector } weights_9_V_address1 { O 4 vector } weights_9_V_ce1 { O 1 bit } weights_9_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name weights_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_10_V \
    op interface \
    ports { weights_10_V_address0 { O 4 vector } weights_10_V_ce0 { O 1 bit } weights_10_V_q0 { I 2 vector } weights_10_V_address1 { O 4 vector } weights_10_V_ce1 { O 1 bit } weights_10_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name weights_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_11_V \
    op interface \
    ports { weights_11_V_address0 { O 4 vector } weights_11_V_ce0 { O 1 bit } weights_11_V_q0 { I 2 vector } weights_11_V_address1 { O 4 vector } weights_11_V_ce1 { O 1 bit } weights_11_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name weights_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_12_V \
    op interface \
    ports { weights_12_V_address0 { O 4 vector } weights_12_V_ce0 { O 1 bit } weights_12_V_q0 { I 2 vector } weights_12_V_address1 { O 4 vector } weights_12_V_ce1 { O 1 bit } weights_12_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name weights_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_13_V \
    op interface \
    ports { weights_13_V_address0 { O 4 vector } weights_13_V_ce0 { O 1 bit } weights_13_V_q0 { I 2 vector } weights_13_V_address1 { O 4 vector } weights_13_V_ce1 { O 1 bit } weights_13_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name weights_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_14_V \
    op interface \
    ports { weights_14_V_address0 { O 4 vector } weights_14_V_ce0 { O 1 bit } weights_14_V_q0 { I 2 vector } weights_14_V_address1 { O 4 vector } weights_14_V_ce1 { O 1 bit } weights_14_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name weights_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_15_V \
    op interface \
    ports { weights_15_V_address0 { O 4 vector } weights_15_V_ce0 { O 1 bit } weights_15_V_q0 { I 2 vector } weights_15_V_address1 { O 4 vector } weights_15_V_ce1 { O 1 bit } weights_15_V_q1 { I 2 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name top_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_0_V \
    op interface \
    ports { top_0_V_address0 { O 10 vector } top_0_V_ce0 { O 1 bit } top_0_V_we0 { O 1 bit } top_0_V_d0 { O 12 vector } top_0_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name top_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_1_V \
    op interface \
    ports { top_1_V_address0 { O 10 vector } top_1_V_ce0 { O 1 bit } top_1_V_we0 { O 1 bit } top_1_V_d0 { O 12 vector } top_1_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name top_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_2_V \
    op interface \
    ports { top_2_V_address0 { O 10 vector } top_2_V_ce0 { O 1 bit } top_2_V_we0 { O 1 bit } top_2_V_d0 { O 12 vector } top_2_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name top_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_3_V \
    op interface \
    ports { top_3_V_address0 { O 10 vector } top_3_V_ce0 { O 1 bit } top_3_V_we0 { O 1 bit } top_3_V_d0 { O 12 vector } top_3_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name top_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_4_V \
    op interface \
    ports { top_4_V_address0 { O 10 vector } top_4_V_ce0 { O 1 bit } top_4_V_we0 { O 1 bit } top_4_V_d0 { O 12 vector } top_4_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name top_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_5_V \
    op interface \
    ports { top_5_V_address0 { O 10 vector } top_5_V_ce0 { O 1 bit } top_5_V_we0 { O 1 bit } top_5_V_d0 { O 12 vector } top_5_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name top_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_6_V \
    op interface \
    ports { top_6_V_address0 { O 10 vector } top_6_V_ce0 { O 1 bit } top_6_V_we0 { O 1 bit } top_6_V_d0 { O 12 vector } top_6_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name top_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_7_V \
    op interface \
    ports { top_7_V_address0 { O 10 vector } top_7_V_ce0 { O 1 bit } top_7_V_we0 { O 1 bit } top_7_V_d0 { O 12 vector } top_7_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name top_8_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_8_V \
    op interface \
    ports { top_8_V_address0 { O 10 vector } top_8_V_ce0 { O 1 bit } top_8_V_we0 { O 1 bit } top_8_V_d0 { O 12 vector } top_8_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name top_9_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_9_V \
    op interface \
    ports { top_9_V_address0 { O 10 vector } top_9_V_ce0 { O 1 bit } top_9_V_we0 { O 1 bit } top_9_V_d0 { O 12 vector } top_9_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name top_10_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_10_V \
    op interface \
    ports { top_10_V_address0 { O 10 vector } top_10_V_ce0 { O 1 bit } top_10_V_we0 { O 1 bit } top_10_V_d0 { O 12 vector } top_10_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name top_11_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_11_V \
    op interface \
    ports { top_11_V_address0 { O 10 vector } top_11_V_ce0 { O 1 bit } top_11_V_we0 { O 1 bit } top_11_V_d0 { O 12 vector } top_11_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name top_12_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_12_V \
    op interface \
    ports { top_12_V_address0 { O 10 vector } top_12_V_ce0 { O 1 bit } top_12_V_we0 { O 1 bit } top_12_V_d0 { O 12 vector } top_12_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name top_13_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_13_V \
    op interface \
    ports { top_13_V_address0 { O 10 vector } top_13_V_ce0 { O 1 bit } top_13_V_we0 { O 1 bit } top_13_V_d0 { O 12 vector } top_13_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name top_14_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_14_V \
    op interface \
    ports { top_14_V_address0 { O 10 vector } top_14_V_ce0 { O 1 bit } top_14_V_we0 { O 1 bit } top_14_V_d0 { O 12 vector } top_14_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name top_15_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_15_V \
    op interface \
    ports { top_15_V_address0 { O 10 vector } top_15_V_ce0 { O 1 bit } top_15_V_we0 { O 1 bit } top_15_V_d0 { O 12 vector } top_15_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_15_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name bottom_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_V_offset \
    op interface \
    ports { bottom_V_offset { I 3 vector } } \
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


