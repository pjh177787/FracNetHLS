# This script segment is generated automatically by AutoPilot

set id 301
set name FracNet_mac_muladfYi
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 4
set in0_signed 0
set in1_width 8
set in1_signed 0
set in2_width 11
set in2_signed 0
set out_width 12
set exp i0*i1+i2
set arg_lists {i0 {4 0 +} i1 {8 0 +} m {12 0 +} i2 {11 0 +} p {12 0 +} c_reg {1} rnd {0} acc {0} }
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


set id 302
set name FracNet_mac_muladg8j
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 0
set in1_width 14
set in1_signed 1
set in2_width 8
set in2_signed 0
set out_width 22
set exp i0*i1+i2
set arg_lists {i0 {8 0 +} i1 {14 1 +} m {22 1 +} i2 {8 0 +} p {22 1 +} c_reg {1} rnd {0} acc {0} }
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


# Memory (RAM/ROM)  definition:
set ID 305
set hasByteEnable 0
set MemName pg_conv3x3_tile_mdEe
set CoreName ap_simcore_mem
set PortList { 1 0 }
set DataWd 32
set AddrRange 225
set AddrWd 8
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.352
set ClkPeriod 4
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
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
    id 306 \
    name msb_inputs_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename msb_inputs_V \
    op interface \
    ports { msb_inputs_V_address0 { O 16 vector } msb_inputs_V_ce0 { O 1 bit } msb_inputs_V_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_inputs_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 595 \
    name msb_outputs_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_0_V \
    op interface \
    ports { msb_outputs_0_V_address0 { O 11 vector } msb_outputs_0_V_ce0 { O 1 bit } msb_outputs_0_V_q0 { I 16 vector } msb_outputs_0_V_address1 { O 11 vector } msb_outputs_0_V_ce1 { O 1 bit } msb_outputs_0_V_we1 { O 1 bit } msb_outputs_0_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 596 \
    name msb_outputs_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_1_V \
    op interface \
    ports { msb_outputs_1_V_address0 { O 11 vector } msb_outputs_1_V_ce0 { O 1 bit } msb_outputs_1_V_q0 { I 16 vector } msb_outputs_1_V_address1 { O 11 vector } msb_outputs_1_V_ce1 { O 1 bit } msb_outputs_1_V_we1 { O 1 bit } msb_outputs_1_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 597 \
    name msb_outputs_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_2_V \
    op interface \
    ports { msb_outputs_2_V_address0 { O 11 vector } msb_outputs_2_V_ce0 { O 1 bit } msb_outputs_2_V_q0 { I 16 vector } msb_outputs_2_V_address1 { O 11 vector } msb_outputs_2_V_ce1 { O 1 bit } msb_outputs_2_V_we1 { O 1 bit } msb_outputs_2_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 598 \
    name msb_outputs_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_3_V \
    op interface \
    ports { msb_outputs_3_V_address0 { O 11 vector } msb_outputs_3_V_ce0 { O 1 bit } msb_outputs_3_V_q0 { I 16 vector } msb_outputs_3_V_address1 { O 11 vector } msb_outputs_3_V_ce1 { O 1 bit } msb_outputs_3_V_we1 { O 1 bit } msb_outputs_3_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 599 \
    name msb_outputs_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_4_V \
    op interface \
    ports { msb_outputs_4_V_address0 { O 11 vector } msb_outputs_4_V_ce0 { O 1 bit } msb_outputs_4_V_q0 { I 16 vector } msb_outputs_4_V_address1 { O 11 vector } msb_outputs_4_V_ce1 { O 1 bit } msb_outputs_4_V_we1 { O 1 bit } msb_outputs_4_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 600 \
    name msb_outputs_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_5_V \
    op interface \
    ports { msb_outputs_5_V_address0 { O 11 vector } msb_outputs_5_V_ce0 { O 1 bit } msb_outputs_5_V_q0 { I 16 vector } msb_outputs_5_V_address1 { O 11 vector } msb_outputs_5_V_ce1 { O 1 bit } msb_outputs_5_V_we1 { O 1 bit } msb_outputs_5_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 601 \
    name msb_outputs_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_6_V \
    op interface \
    ports { msb_outputs_6_V_address0 { O 11 vector } msb_outputs_6_V_ce0 { O 1 bit } msb_outputs_6_V_q0 { I 16 vector } msb_outputs_6_V_address1 { O 11 vector } msb_outputs_6_V_ce1 { O 1 bit } msb_outputs_6_V_we1 { O 1 bit } msb_outputs_6_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 602 \
    name msb_outputs_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_7_V \
    op interface \
    ports { msb_outputs_7_V_address0 { O 11 vector } msb_outputs_7_V_ce0 { O 1 bit } msb_outputs_7_V_q0 { I 16 vector } msb_outputs_7_V_address1 { O 11 vector } msb_outputs_7_V_ce1 { O 1 bit } msb_outputs_7_V_we1 { O 1 bit } msb_outputs_7_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 603 \
    name msb_outputs_8_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_8_V \
    op interface \
    ports { msb_outputs_8_V_address0 { O 11 vector } msb_outputs_8_V_ce0 { O 1 bit } msb_outputs_8_V_q0 { I 16 vector } msb_outputs_8_V_address1 { O 11 vector } msb_outputs_8_V_ce1 { O 1 bit } msb_outputs_8_V_we1 { O 1 bit } msb_outputs_8_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 604 \
    name msb_outputs_9_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_9_V \
    op interface \
    ports { msb_outputs_9_V_address0 { O 11 vector } msb_outputs_9_V_ce0 { O 1 bit } msb_outputs_9_V_q0 { I 16 vector } msb_outputs_9_V_address1 { O 11 vector } msb_outputs_9_V_ce1 { O 1 bit } msb_outputs_9_V_we1 { O 1 bit } msb_outputs_9_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 605 \
    name msb_outputs_10_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_10_V \
    op interface \
    ports { msb_outputs_10_V_address0 { O 11 vector } msb_outputs_10_V_ce0 { O 1 bit } msb_outputs_10_V_q0 { I 16 vector } msb_outputs_10_V_address1 { O 11 vector } msb_outputs_10_V_ce1 { O 1 bit } msb_outputs_10_V_we1 { O 1 bit } msb_outputs_10_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 606 \
    name msb_outputs_11_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_11_V \
    op interface \
    ports { msb_outputs_11_V_address0 { O 11 vector } msb_outputs_11_V_ce0 { O 1 bit } msb_outputs_11_V_q0 { I 16 vector } msb_outputs_11_V_address1 { O 11 vector } msb_outputs_11_V_ce1 { O 1 bit } msb_outputs_11_V_we1 { O 1 bit } msb_outputs_11_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 607 \
    name msb_outputs_12_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_12_V \
    op interface \
    ports { msb_outputs_12_V_address0 { O 11 vector } msb_outputs_12_V_ce0 { O 1 bit } msb_outputs_12_V_q0 { I 16 vector } msb_outputs_12_V_address1 { O 11 vector } msb_outputs_12_V_ce1 { O 1 bit } msb_outputs_12_V_we1 { O 1 bit } msb_outputs_12_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 608 \
    name msb_outputs_13_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_13_V \
    op interface \
    ports { msb_outputs_13_V_address0 { O 11 vector } msb_outputs_13_V_ce0 { O 1 bit } msb_outputs_13_V_q0 { I 16 vector } msb_outputs_13_V_address1 { O 11 vector } msb_outputs_13_V_ce1 { O 1 bit } msb_outputs_13_V_we1 { O 1 bit } msb_outputs_13_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 609 \
    name msb_outputs_14_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_14_V \
    op interface \
    ports { msb_outputs_14_V_address0 { O 11 vector } msb_outputs_14_V_ce0 { O 1 bit } msb_outputs_14_V_q0 { I 16 vector } msb_outputs_14_V_address1 { O 11 vector } msb_outputs_14_V_ce1 { O 1 bit } msb_outputs_14_V_we1 { O 1 bit } msb_outputs_14_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 610 \
    name msb_outputs_15_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_15_V \
    op interface \
    ports { msb_outputs_15_V_address0 { O 11 vector } msb_outputs_15_V_ce0 { O 1 bit } msb_outputs_15_V_q0 { I 16 vector } msb_outputs_15_V_address1 { O 11 vector } msb_outputs_15_V_ce1 { O 1 bit } msb_outputs_15_V_we1 { O 1 bit } msb_outputs_15_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 611 \
    name msb_outputs_16_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_16_V \
    op interface \
    ports { msb_outputs_16_V_address0 { O 11 vector } msb_outputs_16_V_ce0 { O 1 bit } msb_outputs_16_V_q0 { I 16 vector } msb_outputs_16_V_address1 { O 11 vector } msb_outputs_16_V_ce1 { O 1 bit } msb_outputs_16_V_we1 { O 1 bit } msb_outputs_16_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 612 \
    name msb_outputs_17_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_17_V \
    op interface \
    ports { msb_outputs_17_V_address0 { O 11 vector } msb_outputs_17_V_ce0 { O 1 bit } msb_outputs_17_V_q0 { I 16 vector } msb_outputs_17_V_address1 { O 11 vector } msb_outputs_17_V_ce1 { O 1 bit } msb_outputs_17_V_we1 { O 1 bit } msb_outputs_17_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 613 \
    name msb_outputs_18_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_18_V \
    op interface \
    ports { msb_outputs_18_V_address0 { O 11 vector } msb_outputs_18_V_ce0 { O 1 bit } msb_outputs_18_V_q0 { I 16 vector } msb_outputs_18_V_address1 { O 11 vector } msb_outputs_18_V_ce1 { O 1 bit } msb_outputs_18_V_we1 { O 1 bit } msb_outputs_18_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 614 \
    name msb_outputs_19_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_19_V \
    op interface \
    ports { msb_outputs_19_V_address0 { O 11 vector } msb_outputs_19_V_ce0 { O 1 bit } msb_outputs_19_V_q0 { I 16 vector } msb_outputs_19_V_address1 { O 11 vector } msb_outputs_19_V_ce1 { O 1 bit } msb_outputs_19_V_we1 { O 1 bit } msb_outputs_19_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 615 \
    name msb_outputs_20_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_20_V \
    op interface \
    ports { msb_outputs_20_V_address0 { O 11 vector } msb_outputs_20_V_ce0 { O 1 bit } msb_outputs_20_V_q0 { I 16 vector } msb_outputs_20_V_address1 { O 11 vector } msb_outputs_20_V_ce1 { O 1 bit } msb_outputs_20_V_we1 { O 1 bit } msb_outputs_20_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 616 \
    name msb_outputs_21_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_21_V \
    op interface \
    ports { msb_outputs_21_V_address0 { O 11 vector } msb_outputs_21_V_ce0 { O 1 bit } msb_outputs_21_V_q0 { I 16 vector } msb_outputs_21_V_address1 { O 11 vector } msb_outputs_21_V_ce1 { O 1 bit } msb_outputs_21_V_we1 { O 1 bit } msb_outputs_21_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 617 \
    name msb_outputs_22_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_22_V \
    op interface \
    ports { msb_outputs_22_V_address0 { O 11 vector } msb_outputs_22_V_ce0 { O 1 bit } msb_outputs_22_V_q0 { I 16 vector } msb_outputs_22_V_address1 { O 11 vector } msb_outputs_22_V_ce1 { O 1 bit } msb_outputs_22_V_we1 { O 1 bit } msb_outputs_22_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 618 \
    name msb_outputs_23_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_23_V \
    op interface \
    ports { msb_outputs_23_V_address0 { O 11 vector } msb_outputs_23_V_ce0 { O 1 bit } msb_outputs_23_V_q0 { I 16 vector } msb_outputs_23_V_address1 { O 11 vector } msb_outputs_23_V_ce1 { O 1 bit } msb_outputs_23_V_we1 { O 1 bit } msb_outputs_23_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 619 \
    name msb_outputs_24_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_24_V \
    op interface \
    ports { msb_outputs_24_V_address0 { O 11 vector } msb_outputs_24_V_ce0 { O 1 bit } msb_outputs_24_V_q0 { I 16 vector } msb_outputs_24_V_address1 { O 11 vector } msb_outputs_24_V_ce1 { O 1 bit } msb_outputs_24_V_we1 { O 1 bit } msb_outputs_24_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 620 \
    name msb_outputs_25_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_25_V \
    op interface \
    ports { msb_outputs_25_V_address0 { O 11 vector } msb_outputs_25_V_ce0 { O 1 bit } msb_outputs_25_V_q0 { I 16 vector } msb_outputs_25_V_address1 { O 11 vector } msb_outputs_25_V_ce1 { O 1 bit } msb_outputs_25_V_we1 { O 1 bit } msb_outputs_25_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 621 \
    name msb_outputs_26_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_26_V \
    op interface \
    ports { msb_outputs_26_V_address0 { O 11 vector } msb_outputs_26_V_ce0 { O 1 bit } msb_outputs_26_V_q0 { I 16 vector } msb_outputs_26_V_address1 { O 11 vector } msb_outputs_26_V_ce1 { O 1 bit } msb_outputs_26_V_we1 { O 1 bit } msb_outputs_26_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 622 \
    name msb_outputs_27_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_27_V \
    op interface \
    ports { msb_outputs_27_V_address0 { O 11 vector } msb_outputs_27_V_ce0 { O 1 bit } msb_outputs_27_V_q0 { I 16 vector } msb_outputs_27_V_address1 { O 11 vector } msb_outputs_27_V_ce1 { O 1 bit } msb_outputs_27_V_we1 { O 1 bit } msb_outputs_27_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 623 \
    name msb_outputs_28_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_28_V \
    op interface \
    ports { msb_outputs_28_V_address0 { O 11 vector } msb_outputs_28_V_ce0 { O 1 bit } msb_outputs_28_V_q0 { I 16 vector } msb_outputs_28_V_address1 { O 11 vector } msb_outputs_28_V_ce1 { O 1 bit } msb_outputs_28_V_we1 { O 1 bit } msb_outputs_28_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 624 \
    name msb_outputs_29_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_29_V \
    op interface \
    ports { msb_outputs_29_V_address0 { O 11 vector } msb_outputs_29_V_ce0 { O 1 bit } msb_outputs_29_V_q0 { I 16 vector } msb_outputs_29_V_address1 { O 11 vector } msb_outputs_29_V_ce1 { O 1 bit } msb_outputs_29_V_we1 { O 1 bit } msb_outputs_29_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 625 \
    name msb_outputs_30_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_30_V \
    op interface \
    ports { msb_outputs_30_V_address0 { O 11 vector } msb_outputs_30_V_ce0 { O 1 bit } msb_outputs_30_V_q0 { I 16 vector } msb_outputs_30_V_address1 { O 11 vector } msb_outputs_30_V_ce1 { O 1 bit } msb_outputs_30_V_we1 { O 1 bit } msb_outputs_30_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 626 \
    name msb_outputs_31_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename msb_outputs_31_V \
    op interface \
    ports { msb_outputs_31_V_address0 { O 11 vector } msb_outputs_31_V_ce0 { O 1 bit } msb_outputs_31_V_q0 { I 16 vector } msb_outputs_31_V_address1 { O 11 vector } msb_outputs_31_V_ce1 { O 1 bit } msb_outputs_31_V_we1 { O 1 bit } msb_outputs_31_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'msb_outputs_31_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 307 \
    name weights_0_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_0_0_V_r \
    op interface \
    ports { weights_0_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 308 \
    name weights_0_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_0_1_V_r \
    op interface \
    ports { weights_0_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 309 \
    name weights_0_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_0_2_V_r \
    op interface \
    ports { weights_0_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 310 \
    name weights_0_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_1_0_V_r \
    op interface \
    ports { weights_0_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 311 \
    name weights_0_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_1_1_V_r \
    op interface \
    ports { weights_0_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 312 \
    name weights_0_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_1_2_V_r \
    op interface \
    ports { weights_0_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 313 \
    name weights_0_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_2_0_V_r \
    op interface \
    ports { weights_0_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 314 \
    name weights_0_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_2_1_V_r \
    op interface \
    ports { weights_0_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 315 \
    name weights_0_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_2_2_V_r \
    op interface \
    ports { weights_0_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 316 \
    name weights_1_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_0_0_V_r \
    op interface \
    ports { weights_1_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 317 \
    name weights_1_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_0_1_V_r \
    op interface \
    ports { weights_1_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 318 \
    name weights_1_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_0_2_V_r \
    op interface \
    ports { weights_1_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 319 \
    name weights_1_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_1_0_V_r \
    op interface \
    ports { weights_1_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 320 \
    name weights_1_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_1_1_V_r \
    op interface \
    ports { weights_1_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 321 \
    name weights_1_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_1_2_V_r \
    op interface \
    ports { weights_1_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 322 \
    name weights_1_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_2_0_V_r \
    op interface \
    ports { weights_1_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 323 \
    name weights_1_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_2_1_V_r \
    op interface \
    ports { weights_1_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 324 \
    name weights_1_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_2_2_V_r \
    op interface \
    ports { weights_1_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 325 \
    name weights_2_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_0_0_V_r \
    op interface \
    ports { weights_2_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 326 \
    name weights_2_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_0_1_V_r \
    op interface \
    ports { weights_2_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 327 \
    name weights_2_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_0_2_V_r \
    op interface \
    ports { weights_2_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 328 \
    name weights_2_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_1_0_V_r \
    op interface \
    ports { weights_2_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 329 \
    name weights_2_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_1_1_V_r \
    op interface \
    ports { weights_2_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 330 \
    name weights_2_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_1_2_V_r \
    op interface \
    ports { weights_2_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 331 \
    name weights_2_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_2_0_V_r \
    op interface \
    ports { weights_2_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 332 \
    name weights_2_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_2_1_V_r \
    op interface \
    ports { weights_2_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 333 \
    name weights_2_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_2_2_V_r \
    op interface \
    ports { weights_2_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 334 \
    name weights_3_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_0_0_V_r \
    op interface \
    ports { weights_3_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 335 \
    name weights_3_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_0_1_V_r \
    op interface \
    ports { weights_3_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 336 \
    name weights_3_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_0_2_V_r \
    op interface \
    ports { weights_3_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 337 \
    name weights_3_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_1_0_V_r \
    op interface \
    ports { weights_3_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 338 \
    name weights_3_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_1_1_V_r \
    op interface \
    ports { weights_3_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 339 \
    name weights_3_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_1_2_V_r \
    op interface \
    ports { weights_3_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 340 \
    name weights_3_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_2_0_V_r \
    op interface \
    ports { weights_3_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 341 \
    name weights_3_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_2_1_V_r \
    op interface \
    ports { weights_3_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 342 \
    name weights_3_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_2_2_V_r \
    op interface \
    ports { weights_3_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 343 \
    name weights_4_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_0_0_V_r \
    op interface \
    ports { weights_4_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 344 \
    name weights_4_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_0_1_V_r \
    op interface \
    ports { weights_4_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 345 \
    name weights_4_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_0_2_V_r \
    op interface \
    ports { weights_4_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 346 \
    name weights_4_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_1_0_V_r \
    op interface \
    ports { weights_4_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 347 \
    name weights_4_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_1_1_V_r \
    op interface \
    ports { weights_4_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 348 \
    name weights_4_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_1_2_V_r \
    op interface \
    ports { weights_4_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 349 \
    name weights_4_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_2_0_V_r \
    op interface \
    ports { weights_4_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 350 \
    name weights_4_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_2_1_V_r \
    op interface \
    ports { weights_4_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 351 \
    name weights_4_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_2_2_V_r \
    op interface \
    ports { weights_4_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 352 \
    name weights_5_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_0_0_V_r \
    op interface \
    ports { weights_5_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 353 \
    name weights_5_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_0_1_V_r \
    op interface \
    ports { weights_5_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 354 \
    name weights_5_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_0_2_V_r \
    op interface \
    ports { weights_5_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 355 \
    name weights_5_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_1_0_V_r \
    op interface \
    ports { weights_5_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 356 \
    name weights_5_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_1_1_V_r \
    op interface \
    ports { weights_5_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 357 \
    name weights_5_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_1_2_V_r \
    op interface \
    ports { weights_5_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 358 \
    name weights_5_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_2_0_V_r \
    op interface \
    ports { weights_5_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 359 \
    name weights_5_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_2_1_V_r \
    op interface \
    ports { weights_5_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 360 \
    name weights_5_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_2_2_V_r \
    op interface \
    ports { weights_5_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 361 \
    name weights_6_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_0_0_V_r \
    op interface \
    ports { weights_6_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 362 \
    name weights_6_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_0_1_V_r \
    op interface \
    ports { weights_6_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 363 \
    name weights_6_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_0_2_V_r \
    op interface \
    ports { weights_6_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 364 \
    name weights_6_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_1_0_V_r \
    op interface \
    ports { weights_6_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 365 \
    name weights_6_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_1_1_V_r \
    op interface \
    ports { weights_6_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 366 \
    name weights_6_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_1_2_V_r \
    op interface \
    ports { weights_6_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 367 \
    name weights_6_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_2_0_V_r \
    op interface \
    ports { weights_6_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 368 \
    name weights_6_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_2_1_V_r \
    op interface \
    ports { weights_6_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 369 \
    name weights_6_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_2_2_V_r \
    op interface \
    ports { weights_6_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 370 \
    name weights_7_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_0_0_V_r \
    op interface \
    ports { weights_7_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 371 \
    name weights_7_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_0_1_V_r \
    op interface \
    ports { weights_7_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 372 \
    name weights_7_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_0_2_V_r \
    op interface \
    ports { weights_7_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 373 \
    name weights_7_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_1_0_V_r \
    op interface \
    ports { weights_7_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 374 \
    name weights_7_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_1_1_V_r \
    op interface \
    ports { weights_7_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 375 \
    name weights_7_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_1_2_V_r \
    op interface \
    ports { weights_7_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 376 \
    name weights_7_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_2_0_V_r \
    op interface \
    ports { weights_7_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 377 \
    name weights_7_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_2_1_V_r \
    op interface \
    ports { weights_7_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 378 \
    name weights_7_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_2_2_V_r \
    op interface \
    ports { weights_7_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 379 \
    name weights_8_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_0_0_V_r \
    op interface \
    ports { weights_8_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 380 \
    name weights_8_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_0_1_V_r \
    op interface \
    ports { weights_8_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 381 \
    name weights_8_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_0_2_V_r \
    op interface \
    ports { weights_8_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 382 \
    name weights_8_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_1_0_V_r \
    op interface \
    ports { weights_8_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 383 \
    name weights_8_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_1_1_V_r \
    op interface \
    ports { weights_8_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 384 \
    name weights_8_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_1_2_V_r \
    op interface \
    ports { weights_8_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 385 \
    name weights_8_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_2_0_V_r \
    op interface \
    ports { weights_8_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 386 \
    name weights_8_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_2_1_V_r \
    op interface \
    ports { weights_8_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 387 \
    name weights_8_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_2_2_V_r \
    op interface \
    ports { weights_8_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 388 \
    name weights_9_0_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_0_0_V_r \
    op interface \
    ports { weights_9_0_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 389 \
    name weights_9_0_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_0_1_V_r \
    op interface \
    ports { weights_9_0_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 390 \
    name weights_9_0_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_0_2_V_r \
    op interface \
    ports { weights_9_0_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 391 \
    name weights_9_1_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_1_0_V_r \
    op interface \
    ports { weights_9_1_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 392 \
    name weights_9_1_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_1_1_V_r \
    op interface \
    ports { weights_9_1_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 393 \
    name weights_9_1_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_1_2_V_r \
    op interface \
    ports { weights_9_1_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 394 \
    name weights_9_2_0_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_2_0_V_r \
    op interface \
    ports { weights_9_2_0_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 395 \
    name weights_9_2_1_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_2_1_V_r \
    op interface \
    ports { weights_9_2_1_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 396 \
    name weights_9_2_2_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_2_2_V_r \
    op interface \
    ports { weights_9_2_2_V_r { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 397 \
    name weights_10_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_0_0_V_s \
    op interface \
    ports { weights_10_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 398 \
    name weights_10_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_0_1_V_s \
    op interface \
    ports { weights_10_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 399 \
    name weights_10_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_0_2_V_s \
    op interface \
    ports { weights_10_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 400 \
    name weights_10_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_1_0_V_s \
    op interface \
    ports { weights_10_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 401 \
    name weights_10_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_1_1_V_s \
    op interface \
    ports { weights_10_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 402 \
    name weights_10_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_1_2_V_s \
    op interface \
    ports { weights_10_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 403 \
    name weights_10_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_2_0_V_s \
    op interface \
    ports { weights_10_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 404 \
    name weights_10_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_2_1_V_s \
    op interface \
    ports { weights_10_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 405 \
    name weights_10_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_10_2_2_V_s \
    op interface \
    ports { weights_10_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 406 \
    name weights_11_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_0_0_V_s \
    op interface \
    ports { weights_11_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 407 \
    name weights_11_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_0_1_V_s \
    op interface \
    ports { weights_11_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 408 \
    name weights_11_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_0_2_V_s \
    op interface \
    ports { weights_11_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 409 \
    name weights_11_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_1_0_V_s \
    op interface \
    ports { weights_11_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 410 \
    name weights_11_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_1_1_V_s \
    op interface \
    ports { weights_11_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 411 \
    name weights_11_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_1_2_V_s \
    op interface \
    ports { weights_11_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 412 \
    name weights_11_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_2_0_V_s \
    op interface \
    ports { weights_11_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 413 \
    name weights_11_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_2_1_V_s \
    op interface \
    ports { weights_11_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 414 \
    name weights_11_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_11_2_2_V_s \
    op interface \
    ports { weights_11_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 415 \
    name weights_12_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_0_0_V_s \
    op interface \
    ports { weights_12_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 416 \
    name weights_12_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_0_1_V_s \
    op interface \
    ports { weights_12_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 417 \
    name weights_12_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_0_2_V_s \
    op interface \
    ports { weights_12_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 418 \
    name weights_12_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_1_0_V_s \
    op interface \
    ports { weights_12_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 419 \
    name weights_12_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_1_1_V_s \
    op interface \
    ports { weights_12_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 420 \
    name weights_12_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_1_2_V_s \
    op interface \
    ports { weights_12_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 421 \
    name weights_12_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_2_0_V_s \
    op interface \
    ports { weights_12_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 422 \
    name weights_12_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_2_1_V_s \
    op interface \
    ports { weights_12_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 423 \
    name weights_12_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_12_2_2_V_s \
    op interface \
    ports { weights_12_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 424 \
    name weights_13_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_0_0_V_s \
    op interface \
    ports { weights_13_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 425 \
    name weights_13_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_0_1_V_s \
    op interface \
    ports { weights_13_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 426 \
    name weights_13_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_0_2_V_s \
    op interface \
    ports { weights_13_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 427 \
    name weights_13_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_1_0_V_s \
    op interface \
    ports { weights_13_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 428 \
    name weights_13_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_1_1_V_s \
    op interface \
    ports { weights_13_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 429 \
    name weights_13_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_1_2_V_s \
    op interface \
    ports { weights_13_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 430 \
    name weights_13_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_2_0_V_s \
    op interface \
    ports { weights_13_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 431 \
    name weights_13_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_2_1_V_s \
    op interface \
    ports { weights_13_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 432 \
    name weights_13_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_13_2_2_V_s \
    op interface \
    ports { weights_13_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 433 \
    name weights_14_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_0_0_V_s \
    op interface \
    ports { weights_14_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 434 \
    name weights_14_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_0_1_V_s \
    op interface \
    ports { weights_14_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 435 \
    name weights_14_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_0_2_V_s \
    op interface \
    ports { weights_14_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 436 \
    name weights_14_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_1_0_V_s \
    op interface \
    ports { weights_14_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 437 \
    name weights_14_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_1_1_V_s \
    op interface \
    ports { weights_14_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name weights_14_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_1_2_V_s \
    op interface \
    ports { weights_14_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name weights_14_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_2_0_V_s \
    op interface \
    ports { weights_14_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 440 \
    name weights_14_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_2_1_V_s \
    op interface \
    ports { weights_14_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 441 \
    name weights_14_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_14_2_2_V_s \
    op interface \
    ports { weights_14_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 442 \
    name weights_15_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_0_0_V_s \
    op interface \
    ports { weights_15_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 443 \
    name weights_15_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_0_1_V_s \
    op interface \
    ports { weights_15_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 444 \
    name weights_15_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_0_2_V_s \
    op interface \
    ports { weights_15_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 445 \
    name weights_15_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_1_0_V_s \
    op interface \
    ports { weights_15_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 446 \
    name weights_15_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_1_1_V_s \
    op interface \
    ports { weights_15_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 447 \
    name weights_15_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_1_2_V_s \
    op interface \
    ports { weights_15_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name weights_15_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_2_0_V_s \
    op interface \
    ports { weights_15_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name weights_15_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_2_1_V_s \
    op interface \
    ports { weights_15_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 450 \
    name weights_15_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_15_2_2_V_s \
    op interface \
    ports { weights_15_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 451 \
    name weights_16_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_0_0_V_s \
    op interface \
    ports { weights_16_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 452 \
    name weights_16_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_0_1_V_s \
    op interface \
    ports { weights_16_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 453 \
    name weights_16_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_0_2_V_s \
    op interface \
    ports { weights_16_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 454 \
    name weights_16_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_1_0_V_s \
    op interface \
    ports { weights_16_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 455 \
    name weights_16_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_1_1_V_s \
    op interface \
    ports { weights_16_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 456 \
    name weights_16_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_1_2_V_s \
    op interface \
    ports { weights_16_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 457 \
    name weights_16_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_2_0_V_s \
    op interface \
    ports { weights_16_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 458 \
    name weights_16_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_2_1_V_s \
    op interface \
    ports { weights_16_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 459 \
    name weights_16_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_16_2_2_V_s \
    op interface \
    ports { weights_16_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 460 \
    name weights_17_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_0_0_V_s \
    op interface \
    ports { weights_17_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 461 \
    name weights_17_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_0_1_V_s \
    op interface \
    ports { weights_17_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 462 \
    name weights_17_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_0_2_V_s \
    op interface \
    ports { weights_17_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 463 \
    name weights_17_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_1_0_V_s \
    op interface \
    ports { weights_17_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 464 \
    name weights_17_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_1_1_V_s \
    op interface \
    ports { weights_17_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 465 \
    name weights_17_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_1_2_V_s \
    op interface \
    ports { weights_17_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 466 \
    name weights_17_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_2_0_V_s \
    op interface \
    ports { weights_17_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 467 \
    name weights_17_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_2_1_V_s \
    op interface \
    ports { weights_17_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 468 \
    name weights_17_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_17_2_2_V_s \
    op interface \
    ports { weights_17_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 469 \
    name weights_18_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_0_0_V_s \
    op interface \
    ports { weights_18_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 470 \
    name weights_18_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_0_1_V_s \
    op interface \
    ports { weights_18_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 471 \
    name weights_18_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_0_2_V_s \
    op interface \
    ports { weights_18_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 472 \
    name weights_18_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_1_0_V_s \
    op interface \
    ports { weights_18_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 473 \
    name weights_18_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_1_1_V_s \
    op interface \
    ports { weights_18_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 474 \
    name weights_18_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_1_2_V_s \
    op interface \
    ports { weights_18_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 475 \
    name weights_18_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_2_0_V_s \
    op interface \
    ports { weights_18_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 476 \
    name weights_18_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_2_1_V_s \
    op interface \
    ports { weights_18_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 477 \
    name weights_18_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_18_2_2_V_s \
    op interface \
    ports { weights_18_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 478 \
    name weights_19_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_0_0_V_s \
    op interface \
    ports { weights_19_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 479 \
    name weights_19_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_0_1_V_s \
    op interface \
    ports { weights_19_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 480 \
    name weights_19_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_0_2_V_s \
    op interface \
    ports { weights_19_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 481 \
    name weights_19_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_1_0_V_s \
    op interface \
    ports { weights_19_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 482 \
    name weights_19_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_1_1_V_s \
    op interface \
    ports { weights_19_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 483 \
    name weights_19_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_1_2_V_s \
    op interface \
    ports { weights_19_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 484 \
    name weights_19_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_2_0_V_s \
    op interface \
    ports { weights_19_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 485 \
    name weights_19_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_2_1_V_s \
    op interface \
    ports { weights_19_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 486 \
    name weights_19_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_19_2_2_V_s \
    op interface \
    ports { weights_19_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 487 \
    name weights_20_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_0_0_V_s \
    op interface \
    ports { weights_20_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 488 \
    name weights_20_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_0_1_V_s \
    op interface \
    ports { weights_20_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 489 \
    name weights_20_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_0_2_V_s \
    op interface \
    ports { weights_20_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 490 \
    name weights_20_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_1_0_V_s \
    op interface \
    ports { weights_20_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 491 \
    name weights_20_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_1_1_V_s \
    op interface \
    ports { weights_20_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 492 \
    name weights_20_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_1_2_V_s \
    op interface \
    ports { weights_20_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 493 \
    name weights_20_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_2_0_V_s \
    op interface \
    ports { weights_20_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 494 \
    name weights_20_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_2_1_V_s \
    op interface \
    ports { weights_20_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 495 \
    name weights_20_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_20_2_2_V_s \
    op interface \
    ports { weights_20_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 496 \
    name weights_21_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_0_0_V_s \
    op interface \
    ports { weights_21_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 497 \
    name weights_21_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_0_1_V_s \
    op interface \
    ports { weights_21_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 498 \
    name weights_21_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_0_2_V_s \
    op interface \
    ports { weights_21_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 499 \
    name weights_21_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_1_0_V_s \
    op interface \
    ports { weights_21_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 500 \
    name weights_21_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_1_1_V_s \
    op interface \
    ports { weights_21_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 501 \
    name weights_21_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_1_2_V_s \
    op interface \
    ports { weights_21_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 502 \
    name weights_21_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_2_0_V_s \
    op interface \
    ports { weights_21_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 503 \
    name weights_21_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_2_1_V_s \
    op interface \
    ports { weights_21_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 504 \
    name weights_21_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_21_2_2_V_s \
    op interface \
    ports { weights_21_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 505 \
    name weights_22_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_0_0_V_s \
    op interface \
    ports { weights_22_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 506 \
    name weights_22_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_0_1_V_s \
    op interface \
    ports { weights_22_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 507 \
    name weights_22_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_0_2_V_s \
    op interface \
    ports { weights_22_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 508 \
    name weights_22_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_1_0_V_s \
    op interface \
    ports { weights_22_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 509 \
    name weights_22_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_1_1_V_s \
    op interface \
    ports { weights_22_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 510 \
    name weights_22_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_1_2_V_s \
    op interface \
    ports { weights_22_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 511 \
    name weights_22_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_2_0_V_s \
    op interface \
    ports { weights_22_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 512 \
    name weights_22_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_2_1_V_s \
    op interface \
    ports { weights_22_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 513 \
    name weights_22_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_22_2_2_V_s \
    op interface \
    ports { weights_22_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 514 \
    name weights_23_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_0_0_V_s \
    op interface \
    ports { weights_23_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 515 \
    name weights_23_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_0_1_V_s \
    op interface \
    ports { weights_23_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 516 \
    name weights_23_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_0_2_V_s \
    op interface \
    ports { weights_23_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 517 \
    name weights_23_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_1_0_V_s \
    op interface \
    ports { weights_23_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 518 \
    name weights_23_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_1_1_V_s \
    op interface \
    ports { weights_23_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 519 \
    name weights_23_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_1_2_V_s \
    op interface \
    ports { weights_23_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 520 \
    name weights_23_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_2_0_V_s \
    op interface \
    ports { weights_23_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 521 \
    name weights_23_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_2_1_V_s \
    op interface \
    ports { weights_23_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 522 \
    name weights_23_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_23_2_2_V_s \
    op interface \
    ports { weights_23_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 523 \
    name weights_24_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_0_0_V_s \
    op interface \
    ports { weights_24_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 524 \
    name weights_24_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_0_1_V_s \
    op interface \
    ports { weights_24_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 525 \
    name weights_24_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_0_2_V_s \
    op interface \
    ports { weights_24_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 526 \
    name weights_24_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_1_0_V_s \
    op interface \
    ports { weights_24_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 527 \
    name weights_24_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_1_1_V_s \
    op interface \
    ports { weights_24_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 528 \
    name weights_24_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_1_2_V_s \
    op interface \
    ports { weights_24_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 529 \
    name weights_24_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_2_0_V_s \
    op interface \
    ports { weights_24_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 530 \
    name weights_24_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_2_1_V_s \
    op interface \
    ports { weights_24_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 531 \
    name weights_24_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_24_2_2_V_s \
    op interface \
    ports { weights_24_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 532 \
    name weights_25_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_0_0_V_s \
    op interface \
    ports { weights_25_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 533 \
    name weights_25_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_0_1_V_s \
    op interface \
    ports { weights_25_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 534 \
    name weights_25_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_0_2_V_s \
    op interface \
    ports { weights_25_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 535 \
    name weights_25_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_1_0_V_s \
    op interface \
    ports { weights_25_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 536 \
    name weights_25_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_1_1_V_s \
    op interface \
    ports { weights_25_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 537 \
    name weights_25_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_1_2_V_s \
    op interface \
    ports { weights_25_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 538 \
    name weights_25_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_2_0_V_s \
    op interface \
    ports { weights_25_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 539 \
    name weights_25_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_2_1_V_s \
    op interface \
    ports { weights_25_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 540 \
    name weights_25_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_25_2_2_V_s \
    op interface \
    ports { weights_25_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 541 \
    name weights_26_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_0_0_V_s \
    op interface \
    ports { weights_26_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 542 \
    name weights_26_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_0_1_V_s \
    op interface \
    ports { weights_26_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 543 \
    name weights_26_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_0_2_V_s \
    op interface \
    ports { weights_26_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 544 \
    name weights_26_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_1_0_V_s \
    op interface \
    ports { weights_26_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 545 \
    name weights_26_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_1_1_V_s \
    op interface \
    ports { weights_26_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 546 \
    name weights_26_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_1_2_V_s \
    op interface \
    ports { weights_26_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 547 \
    name weights_26_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_2_0_V_s \
    op interface \
    ports { weights_26_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 548 \
    name weights_26_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_2_1_V_s \
    op interface \
    ports { weights_26_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 549 \
    name weights_26_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_26_2_2_V_s \
    op interface \
    ports { weights_26_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 550 \
    name weights_27_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_0_0_V_s \
    op interface \
    ports { weights_27_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 551 \
    name weights_27_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_0_1_V_s \
    op interface \
    ports { weights_27_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 552 \
    name weights_27_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_0_2_V_s \
    op interface \
    ports { weights_27_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 553 \
    name weights_27_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_1_0_V_s \
    op interface \
    ports { weights_27_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 554 \
    name weights_27_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_1_1_V_s \
    op interface \
    ports { weights_27_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 555 \
    name weights_27_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_1_2_V_s \
    op interface \
    ports { weights_27_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 556 \
    name weights_27_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_2_0_V_s \
    op interface \
    ports { weights_27_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 557 \
    name weights_27_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_2_1_V_s \
    op interface \
    ports { weights_27_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 558 \
    name weights_27_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_27_2_2_V_s \
    op interface \
    ports { weights_27_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 559 \
    name weights_28_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_0_0_V_s \
    op interface \
    ports { weights_28_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 560 \
    name weights_28_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_0_1_V_s \
    op interface \
    ports { weights_28_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 561 \
    name weights_28_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_0_2_V_s \
    op interface \
    ports { weights_28_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 562 \
    name weights_28_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_1_0_V_s \
    op interface \
    ports { weights_28_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 563 \
    name weights_28_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_1_1_V_s \
    op interface \
    ports { weights_28_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 564 \
    name weights_28_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_1_2_V_s \
    op interface \
    ports { weights_28_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 565 \
    name weights_28_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_2_0_V_s \
    op interface \
    ports { weights_28_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 566 \
    name weights_28_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_2_1_V_s \
    op interface \
    ports { weights_28_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 567 \
    name weights_28_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_28_2_2_V_s \
    op interface \
    ports { weights_28_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 568 \
    name weights_29_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_0_0_V_s \
    op interface \
    ports { weights_29_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 569 \
    name weights_29_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_0_1_V_s \
    op interface \
    ports { weights_29_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 570 \
    name weights_29_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_0_2_V_s \
    op interface \
    ports { weights_29_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 571 \
    name weights_29_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_1_0_V_s \
    op interface \
    ports { weights_29_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 572 \
    name weights_29_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_1_1_V_s \
    op interface \
    ports { weights_29_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 573 \
    name weights_29_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_1_2_V_s \
    op interface \
    ports { weights_29_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 574 \
    name weights_29_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_2_0_V_s \
    op interface \
    ports { weights_29_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 575 \
    name weights_29_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_2_1_V_s \
    op interface \
    ports { weights_29_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 576 \
    name weights_29_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_29_2_2_V_s \
    op interface \
    ports { weights_29_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 577 \
    name weights_30_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_0_0_V_s \
    op interface \
    ports { weights_30_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 578 \
    name weights_30_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_0_1_V_s \
    op interface \
    ports { weights_30_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 579 \
    name weights_30_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_0_2_V_s \
    op interface \
    ports { weights_30_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 580 \
    name weights_30_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_1_0_V_s \
    op interface \
    ports { weights_30_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 581 \
    name weights_30_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_1_1_V_s \
    op interface \
    ports { weights_30_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 582 \
    name weights_30_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_1_2_V_s \
    op interface \
    ports { weights_30_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 583 \
    name weights_30_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_2_0_V_s \
    op interface \
    ports { weights_30_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 584 \
    name weights_30_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_2_1_V_s \
    op interface \
    ports { weights_30_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 585 \
    name weights_30_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_30_2_2_V_s \
    op interface \
    ports { weights_30_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 586 \
    name weights_31_0_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_0_0_V_s \
    op interface \
    ports { weights_31_0_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 587 \
    name weights_31_0_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_0_1_V_s \
    op interface \
    ports { weights_31_0_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 588 \
    name weights_31_0_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_0_2_V_s \
    op interface \
    ports { weights_31_0_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 589 \
    name weights_31_1_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_1_0_V_s \
    op interface \
    ports { weights_31_1_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 590 \
    name weights_31_1_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_1_1_V_s \
    op interface \
    ports { weights_31_1_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 591 \
    name weights_31_1_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_1_2_V_s \
    op interface \
    ports { weights_31_1_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 592 \
    name weights_31_2_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_2_0_V_s \
    op interface \
    ports { weights_31_2_0_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 593 \
    name weights_31_2_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_2_1_V_s \
    op interface \
    ports { weights_31_2_1_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 594 \
    name weights_31_2_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_31_2_2_V_s \
    op interface \
    ports { weights_31_2_2_V_s { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 627 \
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
    id 628 \
    name H_fmap_out \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_H_fmap_out \
    op interface \
    ports { H_fmap_out { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 629 \
    name row_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row_offset \
    op interface \
    ports { row_offset { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 630 \
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


