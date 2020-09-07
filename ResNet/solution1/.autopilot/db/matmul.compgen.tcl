# This script segment is generated automatically by AutoPilot

set id 645
set name ResNet_mux_646_12udo
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 12
set din0_signed 1
set din1_width 12
set din1_signed 1
set din2_width 12
set din2_signed 1
set din3_width 12
set din3_signed 1
set din4_width 12
set din4_signed 1
set din5_width 12
set din5_signed 1
set din6_width 12
set din6_signed 1
set din7_width 12
set din7_signed 1
set din8_width 12
set din8_signed 1
set din9_width 12
set din9_signed 1
set din10_width 12
set din10_signed 1
set din11_width 12
set din11_signed 1
set din12_width 12
set din12_signed 1
set din13_width 12
set din13_signed 1
set din14_width 12
set din14_signed 1
set din15_width 12
set din15_signed 1
set din16_width 12
set din16_signed 1
set din17_width 12
set din17_signed 1
set din18_width 12
set din18_signed 1
set din19_width 12
set din19_signed 1
set din20_width 12
set din20_signed 1
set din21_width 12
set din21_signed 1
set din22_width 12
set din22_signed 1
set din23_width 12
set din23_signed 1
set din24_width 12
set din24_signed 1
set din25_width 12
set din25_signed 1
set din26_width 12
set din26_signed 1
set din27_width 12
set din27_signed 1
set din28_width 12
set din28_signed 1
set din29_width 12
set din29_signed 1
set din30_width 12
set din30_signed 1
set din31_width 12
set din31_signed 1
set din32_width 12
set din32_signed 1
set din33_width 12
set din33_signed 1
set din34_width 12
set din34_signed 1
set din35_width 12
set din35_signed 1
set din36_width 12
set din36_signed 1
set din37_width 12
set din37_signed 1
set din38_width 12
set din38_signed 1
set din39_width 12
set din39_signed 1
set din40_width 12
set din40_signed 1
set din41_width 12
set din41_signed 1
set din42_width 12
set din42_signed 1
set din43_width 12
set din43_signed 1
set din44_width 12
set din44_signed 1
set din45_width 12
set din45_signed 1
set din46_width 12
set din46_signed 1
set din47_width 12
set din47_signed 1
set din48_width 12
set din48_signed 1
set din49_width 12
set din49_signed 1
set din50_width 12
set din50_signed 1
set din51_width 12
set din51_signed 1
set din52_width 12
set din52_signed 1
set din53_width 12
set din53_signed 1
set din54_width 12
set din54_signed 1
set din55_width 12
set din55_signed 1
set din56_width 12
set din56_signed 1
set din57_width 12
set din57_signed 1
set din58_width 12
set din58_signed 1
set din59_width 12
set din59_signed 1
set din60_width 12
set din60_signed 1
set din61_width 12
set din61_signed 1
set din62_width 12
set din62_signed 1
set din63_width 12
set din63_signed 1
set din64_width 6
set din64_signed 0
set dout_width 12
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
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
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
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 646
set name ResNet_mux_104_12vdy
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 12
set din0_signed 0
set din1_width 12
set din1_signed 0
set din2_width 12
set din2_signed 0
set din3_width 12
set din3_signed 0
set din4_width 12
set din4_signed 0
set din5_width 12
set din5_signed 0
set din6_width 12
set din6_signed 0
set din7_width 12
set din7_signed 0
set din8_width 12
set din8_signed 0
set din9_width 12
set din9_signed 0
set din10_width 4
set din10_signed 0
set dout_width 12
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
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
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
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 649
set hasByteEnable 0
set MemName matmul_linear_weikbM
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 1
set AddrRange 64
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.352
set ClkPeriod 10
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
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
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


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 650 \
    name bottom_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_0_V_read \
    op interface \
    ports { bottom_0_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 651 \
    name bottom_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_1_V_read \
    op interface \
    ports { bottom_1_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 652 \
    name bottom_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_2_V_read \
    op interface \
    ports { bottom_2_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 653 \
    name bottom_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_3_V_read \
    op interface \
    ports { bottom_3_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 654 \
    name bottom_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_4_V_read \
    op interface \
    ports { bottom_4_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 655 \
    name bottom_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_5_V_read \
    op interface \
    ports { bottom_5_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 656 \
    name bottom_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_6_V_read \
    op interface \
    ports { bottom_6_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 657 \
    name bottom_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_7_V_read \
    op interface \
    ports { bottom_7_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 658 \
    name bottom_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_8_V_read \
    op interface \
    ports { bottom_8_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 659 \
    name bottom_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_9_V_read \
    op interface \
    ports { bottom_9_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 660 \
    name bottom_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_10_V_read \
    op interface \
    ports { bottom_10_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 661 \
    name bottom_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_11_V_read \
    op interface \
    ports { bottom_11_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 662 \
    name bottom_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_12_V_read \
    op interface \
    ports { bottom_12_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 663 \
    name bottom_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_13_V_read \
    op interface \
    ports { bottom_13_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 664 \
    name bottom_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_14_V_read \
    op interface \
    ports { bottom_14_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 665 \
    name bottom_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_15_V_read \
    op interface \
    ports { bottom_15_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 666 \
    name bottom_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_16_V_read \
    op interface \
    ports { bottom_16_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 667 \
    name bottom_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_17_V_read \
    op interface \
    ports { bottom_17_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 668 \
    name bottom_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_18_V_read \
    op interface \
    ports { bottom_18_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 669 \
    name bottom_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_19_V_read \
    op interface \
    ports { bottom_19_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 670 \
    name bottom_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_20_V_read \
    op interface \
    ports { bottom_20_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 671 \
    name bottom_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_21_V_read \
    op interface \
    ports { bottom_21_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 672 \
    name bottom_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_22_V_read \
    op interface \
    ports { bottom_22_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 673 \
    name bottom_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_23_V_read \
    op interface \
    ports { bottom_23_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 674 \
    name bottom_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_24_V_read \
    op interface \
    ports { bottom_24_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 675 \
    name bottom_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_25_V_read \
    op interface \
    ports { bottom_25_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 676 \
    name bottom_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_26_V_read \
    op interface \
    ports { bottom_26_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 677 \
    name bottom_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_27_V_read \
    op interface \
    ports { bottom_27_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 678 \
    name bottom_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_28_V_read \
    op interface \
    ports { bottom_28_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 679 \
    name bottom_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_29_V_read \
    op interface \
    ports { bottom_29_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 680 \
    name bottom_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_30_V_read \
    op interface \
    ports { bottom_30_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 681 \
    name bottom_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_31_V_read \
    op interface \
    ports { bottom_31_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 682 \
    name bottom_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_32_V_read \
    op interface \
    ports { bottom_32_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 683 \
    name bottom_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_33_V_read \
    op interface \
    ports { bottom_33_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 684 \
    name bottom_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_34_V_read \
    op interface \
    ports { bottom_34_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 685 \
    name bottom_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_35_V_read \
    op interface \
    ports { bottom_35_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 686 \
    name bottom_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_36_V_read \
    op interface \
    ports { bottom_36_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 687 \
    name bottom_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_37_V_read \
    op interface \
    ports { bottom_37_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 688 \
    name bottom_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_38_V_read \
    op interface \
    ports { bottom_38_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 689 \
    name bottom_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_39_V_read \
    op interface \
    ports { bottom_39_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 690 \
    name bottom_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_40_V_read \
    op interface \
    ports { bottom_40_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 691 \
    name bottom_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_41_V_read \
    op interface \
    ports { bottom_41_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 692 \
    name bottom_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_42_V_read \
    op interface \
    ports { bottom_42_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 693 \
    name bottom_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_43_V_read \
    op interface \
    ports { bottom_43_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 694 \
    name bottom_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_44_V_read \
    op interface \
    ports { bottom_44_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 695 \
    name bottom_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_45_V_read \
    op interface \
    ports { bottom_45_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 696 \
    name bottom_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_46_V_read \
    op interface \
    ports { bottom_46_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 697 \
    name bottom_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_47_V_read \
    op interface \
    ports { bottom_47_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 698 \
    name bottom_48_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_48_V_read \
    op interface \
    ports { bottom_48_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 699 \
    name bottom_49_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_49_V_read \
    op interface \
    ports { bottom_49_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 700 \
    name bottom_50_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_50_V_read \
    op interface \
    ports { bottom_50_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 701 \
    name bottom_51_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_51_V_read \
    op interface \
    ports { bottom_51_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 702 \
    name bottom_52_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_52_V_read \
    op interface \
    ports { bottom_52_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 703 \
    name bottom_53_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_53_V_read \
    op interface \
    ports { bottom_53_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 704 \
    name bottom_54_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_54_V_read \
    op interface \
    ports { bottom_54_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 705 \
    name bottom_55_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_55_V_read \
    op interface \
    ports { bottom_55_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 706 \
    name bottom_56_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_56_V_read \
    op interface \
    ports { bottom_56_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 707 \
    name bottom_57_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_57_V_read \
    op interface \
    ports { bottom_57_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 708 \
    name bottom_58_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_58_V_read \
    op interface \
    ports { bottom_58_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 709 \
    name bottom_59_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_59_V_read \
    op interface \
    ports { bottom_59_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 710 \
    name bottom_60_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_60_V_read \
    op interface \
    ports { bottom_60_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 711 \
    name bottom_61_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_61_V_read \
    op interface \
    ports { bottom_61_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 712 \
    name bottom_62_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_62_V_read \
    op interface \
    ports { bottom_62_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 713 \
    name bottom_63_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_63_V_read \
    op interface \
    ports { bottom_63_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 714 \
    name top \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_top \
    op interface \
    ports { m_axi_top_AWVALID { O 1 bit } m_axi_top_AWREADY { I 1 bit } m_axi_top_AWADDR { O 32 vector } m_axi_top_AWID { O 1 vector } m_axi_top_AWLEN { O 32 vector } m_axi_top_AWSIZE { O 3 vector } m_axi_top_AWBURST { O 2 vector } m_axi_top_AWLOCK { O 2 vector } m_axi_top_AWCACHE { O 4 vector } m_axi_top_AWPROT { O 3 vector } m_axi_top_AWQOS { O 4 vector } m_axi_top_AWREGION { O 4 vector } m_axi_top_AWUSER { O 1 vector } m_axi_top_WVALID { O 1 bit } m_axi_top_WREADY { I 1 bit } m_axi_top_WDATA { O 32 vector } m_axi_top_WSTRB { O 4 vector } m_axi_top_WLAST { O 1 bit } m_axi_top_WID { O 1 vector } m_axi_top_WUSER { O 1 vector } m_axi_top_ARVALID { O 1 bit } m_axi_top_ARREADY { I 1 bit } m_axi_top_ARADDR { O 32 vector } m_axi_top_ARID { O 1 vector } m_axi_top_ARLEN { O 32 vector } m_axi_top_ARSIZE { O 3 vector } m_axi_top_ARBURST { O 2 vector } m_axi_top_ARLOCK { O 2 vector } m_axi_top_ARCACHE { O 4 vector } m_axi_top_ARPROT { O 3 vector } m_axi_top_ARQOS { O 4 vector } m_axi_top_ARREGION { O 4 vector } m_axi_top_ARUSER { O 1 vector } m_axi_top_RVALID { I 1 bit } m_axi_top_RREADY { O 1 bit } m_axi_top_RDATA { I 32 vector } m_axi_top_RLAST { I 1 bit } m_axi_top_RID { I 1 vector } m_axi_top_RUSER { I 1 vector } m_axi_top_RRESP { I 2 vector } m_axi_top_BVALID { I 1 bit } m_axi_top_BREADY { O 1 bit } m_axi_top_BRESP { I 2 vector } m_axi_top_BID { I 1 vector } m_axi_top_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 715 \
    name top_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_top_offset \
    op interface \
    ports { top_offset { I 30 vector } } \
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


