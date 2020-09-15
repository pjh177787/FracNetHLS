# This script segment is generated automatically by AutoPilot

set id 1740
set name FracNet_mux_646_1rcU
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 11
set din0_signed 0
set din1_width 11
set din1_signed 0
set din2_width 11
set din2_signed 0
set din3_width 11
set din3_signed 0
set din4_width 11
set din4_signed 0
set din5_width 11
set din5_signed 0
set din6_width 11
set din6_signed 0
set din7_width 11
set din7_signed 0
set din8_width 11
set din8_signed 0
set din9_width 11
set din9_signed 0
set din10_width 11
set din10_signed 0
set din11_width 11
set din11_signed 0
set din12_width 11
set din12_signed 0
set din13_width 11
set din13_signed 0
set din14_width 11
set din14_signed 0
set din15_width 11
set din15_signed 0
set din16_width 11
set din16_signed 0
set din17_width 11
set din17_signed 0
set din18_width 11
set din18_signed 0
set din19_width 11
set din19_signed 0
set din20_width 11
set din20_signed 0
set din21_width 11
set din21_signed 0
set din22_width 11
set din22_signed 0
set din23_width 11
set din23_signed 0
set din24_width 11
set din24_signed 0
set din25_width 11
set din25_signed 0
set din26_width 11
set din26_signed 0
set din27_width 11
set din27_signed 0
set din28_width 11
set din28_signed 0
set din29_width 11
set din29_signed 0
set din30_width 11
set din30_signed 0
set din31_width 11
set din31_signed 0
set din32_width 11
set din32_signed 0
set din33_width 11
set din33_signed 0
set din34_width 11
set din34_signed 0
set din35_width 11
set din35_signed 0
set din36_width 11
set din36_signed 0
set din37_width 11
set din37_signed 0
set din38_width 11
set din38_signed 0
set din39_width 11
set din39_signed 0
set din40_width 11
set din40_signed 0
set din41_width 11
set din41_signed 0
set din42_width 11
set din42_signed 0
set din43_width 11
set din43_signed 0
set din44_width 11
set din44_signed 0
set din45_width 11
set din45_signed 0
set din46_width 11
set din46_signed 0
set din47_width 11
set din47_signed 0
set din48_width 11
set din48_signed 0
set din49_width 11
set din49_signed 0
set din50_width 11
set din50_signed 0
set din51_width 11
set din51_signed 0
set din52_width 11
set din52_signed 0
set din53_width 11
set din53_signed 0
set din54_width 11
set din54_signed 0
set din55_width 11
set din55_signed 0
set din56_width 11
set din56_signed 0
set din57_width 11
set din57_signed 0
set din58_width 11
set din58_signed 0
set din59_width 11
set din59_signed 0
set din60_width 11
set din60_signed 0
set din61_width 11
set din61_signed 0
set din62_width 11
set din62_signed 0
set din63_width 11
set din63_signed 0
set din64_width 6
set din64_signed 0
set dout_width 11
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


set id 1750
set name FracNet_mul_mul_1sc4
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 12
set in0_signed 1
set in1_width 11
set in1_signed 1
set out_width 23
set exp i0*i1
set arg_lists {i0 {12 1 +} i1 {11 1 +} p {23 1 +} acc {0} }
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
    id 1762 \
    name bottom_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_V \
    op interface \
    ports { bottom_V_address0 { O 10 vector } bottom_V_ce0 { O 1 bit } bottom_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1763 \
    name bottom_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bottom_V_offset \
    op interface \
    ports { bottom_V_offset { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1764 \
    name weights_0_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_0_V_read \
    op interface \
    ports { weights_0_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1765 \
    name weights_0_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_1_V_read \
    op interface \
    ports { weights_0_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1766 \
    name weights_0_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_2_V_read \
    op interface \
    ports { weights_0_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1767 \
    name weights_0_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_3_V_read \
    op interface \
    ports { weights_0_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1768 \
    name weights_0_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_4_V_read \
    op interface \
    ports { weights_0_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1769 \
    name weights_0_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_5_V_read \
    op interface \
    ports { weights_0_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1770 \
    name weights_0_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_6_V_read \
    op interface \
    ports { weights_0_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1771 \
    name weights_0_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_7_V_read \
    op interface \
    ports { weights_0_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1772 \
    name weights_0_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_8_V_read \
    op interface \
    ports { weights_0_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1773 \
    name weights_0_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_9_V_read \
    op interface \
    ports { weights_0_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1774 \
    name weights_0_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_10_V_rea \
    op interface \
    ports { weights_0_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1775 \
    name weights_0_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_11_V_rea \
    op interface \
    ports { weights_0_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1776 \
    name weights_0_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_12_V_rea \
    op interface \
    ports { weights_0_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1777 \
    name weights_0_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_13_V_rea \
    op interface \
    ports { weights_0_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1778 \
    name weights_0_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_14_V_rea \
    op interface \
    ports { weights_0_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1779 \
    name weights_0_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_15_V_rea \
    op interface \
    ports { weights_0_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1780 \
    name weights_0_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_16_V_rea \
    op interface \
    ports { weights_0_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1781 \
    name weights_0_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_17_V_rea \
    op interface \
    ports { weights_0_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1782 \
    name weights_0_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_18_V_rea \
    op interface \
    ports { weights_0_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1783 \
    name weights_0_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_19_V_rea \
    op interface \
    ports { weights_0_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1784 \
    name weights_0_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_20_V_rea \
    op interface \
    ports { weights_0_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1785 \
    name weights_0_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_21_V_rea \
    op interface \
    ports { weights_0_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1786 \
    name weights_0_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_22_V_rea \
    op interface \
    ports { weights_0_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1787 \
    name weights_0_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_23_V_rea \
    op interface \
    ports { weights_0_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1788 \
    name weights_0_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_24_V_rea \
    op interface \
    ports { weights_0_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1789 \
    name weights_0_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_25_V_rea \
    op interface \
    ports { weights_0_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1790 \
    name weights_0_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_26_V_rea \
    op interface \
    ports { weights_0_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1791 \
    name weights_0_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_27_V_rea \
    op interface \
    ports { weights_0_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1792 \
    name weights_0_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_28_V_rea \
    op interface \
    ports { weights_0_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1793 \
    name weights_0_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_29_V_rea \
    op interface \
    ports { weights_0_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1794 \
    name weights_0_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_30_V_rea \
    op interface \
    ports { weights_0_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1795 \
    name weights_0_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_31_V_rea \
    op interface \
    ports { weights_0_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1796 \
    name weights_0_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_32_V_rea \
    op interface \
    ports { weights_0_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1797 \
    name weights_0_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_33_V_rea \
    op interface \
    ports { weights_0_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1798 \
    name weights_0_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_34_V_rea \
    op interface \
    ports { weights_0_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1799 \
    name weights_0_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_35_V_rea \
    op interface \
    ports { weights_0_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1800 \
    name weights_0_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_36_V_rea \
    op interface \
    ports { weights_0_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1801 \
    name weights_0_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_37_V_rea \
    op interface \
    ports { weights_0_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1802 \
    name weights_0_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_38_V_rea \
    op interface \
    ports { weights_0_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1803 \
    name weights_0_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_39_V_rea \
    op interface \
    ports { weights_0_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1804 \
    name weights_0_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_40_V_rea \
    op interface \
    ports { weights_0_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1805 \
    name weights_0_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_41_V_rea \
    op interface \
    ports { weights_0_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1806 \
    name weights_0_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_42_V_rea \
    op interface \
    ports { weights_0_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1807 \
    name weights_0_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_43_V_rea \
    op interface \
    ports { weights_0_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1808 \
    name weights_0_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_44_V_rea \
    op interface \
    ports { weights_0_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1809 \
    name weights_0_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_45_V_rea \
    op interface \
    ports { weights_0_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1810 \
    name weights_0_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_46_V_rea \
    op interface \
    ports { weights_0_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1811 \
    name weights_0_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_47_V_rea \
    op interface \
    ports { weights_0_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1812 \
    name weights_0_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_48_V_rea \
    op interface \
    ports { weights_0_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1813 \
    name weights_0_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_49_V_rea \
    op interface \
    ports { weights_0_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1814 \
    name weights_0_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_50_V_rea \
    op interface \
    ports { weights_0_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1815 \
    name weights_0_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_51_V_rea \
    op interface \
    ports { weights_0_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1816 \
    name weights_0_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_52_V_rea \
    op interface \
    ports { weights_0_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1817 \
    name weights_0_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_53_V_rea \
    op interface \
    ports { weights_0_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1818 \
    name weights_0_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_54_V_rea \
    op interface \
    ports { weights_0_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1819 \
    name weights_0_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_55_V_rea \
    op interface \
    ports { weights_0_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1820 \
    name weights_0_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_56_V_rea \
    op interface \
    ports { weights_0_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1821 \
    name weights_0_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_57_V_rea \
    op interface \
    ports { weights_0_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1822 \
    name weights_0_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_58_V_rea \
    op interface \
    ports { weights_0_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1823 \
    name weights_0_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_59_V_rea \
    op interface \
    ports { weights_0_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1824 \
    name weights_0_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_60_V_rea \
    op interface \
    ports { weights_0_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1825 \
    name weights_0_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_61_V_rea \
    op interface \
    ports { weights_0_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1826 \
    name weights_0_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_62_V_rea \
    op interface \
    ports { weights_0_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1827 \
    name weights_0_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_0_63_V_rea \
    op interface \
    ports { weights_0_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1828 \
    name weights_1_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_0_V_read \
    op interface \
    ports { weights_1_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1829 \
    name weights_1_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_1_V_read \
    op interface \
    ports { weights_1_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1830 \
    name weights_1_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_2_V_read \
    op interface \
    ports { weights_1_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1831 \
    name weights_1_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_3_V_read \
    op interface \
    ports { weights_1_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1832 \
    name weights_1_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_4_V_read \
    op interface \
    ports { weights_1_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1833 \
    name weights_1_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_5_V_read \
    op interface \
    ports { weights_1_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1834 \
    name weights_1_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_6_V_read \
    op interface \
    ports { weights_1_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1835 \
    name weights_1_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_7_V_read \
    op interface \
    ports { weights_1_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1836 \
    name weights_1_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_8_V_read \
    op interface \
    ports { weights_1_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1837 \
    name weights_1_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_9_V_read \
    op interface \
    ports { weights_1_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1838 \
    name weights_1_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_10_V_rea \
    op interface \
    ports { weights_1_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1839 \
    name weights_1_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_11_V_rea \
    op interface \
    ports { weights_1_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1840 \
    name weights_1_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_12_V_rea \
    op interface \
    ports { weights_1_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1841 \
    name weights_1_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_13_V_rea \
    op interface \
    ports { weights_1_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1842 \
    name weights_1_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_14_V_rea \
    op interface \
    ports { weights_1_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1843 \
    name weights_1_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_15_V_rea \
    op interface \
    ports { weights_1_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1844 \
    name weights_1_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_16_V_rea \
    op interface \
    ports { weights_1_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1845 \
    name weights_1_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_17_V_rea \
    op interface \
    ports { weights_1_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1846 \
    name weights_1_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_18_V_rea \
    op interface \
    ports { weights_1_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1847 \
    name weights_1_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_19_V_rea \
    op interface \
    ports { weights_1_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1848 \
    name weights_1_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_20_V_rea \
    op interface \
    ports { weights_1_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1849 \
    name weights_1_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_21_V_rea \
    op interface \
    ports { weights_1_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1850 \
    name weights_1_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_22_V_rea \
    op interface \
    ports { weights_1_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1851 \
    name weights_1_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_23_V_rea \
    op interface \
    ports { weights_1_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1852 \
    name weights_1_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_24_V_rea \
    op interface \
    ports { weights_1_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1853 \
    name weights_1_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_25_V_rea \
    op interface \
    ports { weights_1_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1854 \
    name weights_1_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_26_V_rea \
    op interface \
    ports { weights_1_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1855 \
    name weights_1_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_27_V_rea \
    op interface \
    ports { weights_1_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1856 \
    name weights_1_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_28_V_rea \
    op interface \
    ports { weights_1_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1857 \
    name weights_1_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_29_V_rea \
    op interface \
    ports { weights_1_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1858 \
    name weights_1_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_30_V_rea \
    op interface \
    ports { weights_1_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1859 \
    name weights_1_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_31_V_rea \
    op interface \
    ports { weights_1_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1860 \
    name weights_1_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_32_V_rea \
    op interface \
    ports { weights_1_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1861 \
    name weights_1_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_33_V_rea \
    op interface \
    ports { weights_1_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1862 \
    name weights_1_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_34_V_rea \
    op interface \
    ports { weights_1_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1863 \
    name weights_1_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_35_V_rea \
    op interface \
    ports { weights_1_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1864 \
    name weights_1_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_36_V_rea \
    op interface \
    ports { weights_1_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1865 \
    name weights_1_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_37_V_rea \
    op interface \
    ports { weights_1_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1866 \
    name weights_1_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_38_V_rea \
    op interface \
    ports { weights_1_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1867 \
    name weights_1_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_39_V_rea \
    op interface \
    ports { weights_1_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1868 \
    name weights_1_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_40_V_rea \
    op interface \
    ports { weights_1_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1869 \
    name weights_1_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_41_V_rea \
    op interface \
    ports { weights_1_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1870 \
    name weights_1_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_42_V_rea \
    op interface \
    ports { weights_1_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1871 \
    name weights_1_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_43_V_rea \
    op interface \
    ports { weights_1_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1872 \
    name weights_1_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_44_V_rea \
    op interface \
    ports { weights_1_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1873 \
    name weights_1_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_45_V_rea \
    op interface \
    ports { weights_1_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1874 \
    name weights_1_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_46_V_rea \
    op interface \
    ports { weights_1_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1875 \
    name weights_1_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_47_V_rea \
    op interface \
    ports { weights_1_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1876 \
    name weights_1_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_48_V_rea \
    op interface \
    ports { weights_1_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1877 \
    name weights_1_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_49_V_rea \
    op interface \
    ports { weights_1_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1878 \
    name weights_1_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_50_V_rea \
    op interface \
    ports { weights_1_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1879 \
    name weights_1_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_51_V_rea \
    op interface \
    ports { weights_1_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1880 \
    name weights_1_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_52_V_rea \
    op interface \
    ports { weights_1_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1881 \
    name weights_1_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_53_V_rea \
    op interface \
    ports { weights_1_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1882 \
    name weights_1_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_54_V_rea \
    op interface \
    ports { weights_1_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1883 \
    name weights_1_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_55_V_rea \
    op interface \
    ports { weights_1_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1884 \
    name weights_1_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_56_V_rea \
    op interface \
    ports { weights_1_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1885 \
    name weights_1_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_57_V_rea \
    op interface \
    ports { weights_1_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1886 \
    name weights_1_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_58_V_rea \
    op interface \
    ports { weights_1_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1887 \
    name weights_1_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_59_V_rea \
    op interface \
    ports { weights_1_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1888 \
    name weights_1_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_60_V_rea \
    op interface \
    ports { weights_1_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1889 \
    name weights_1_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_61_V_rea \
    op interface \
    ports { weights_1_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1890 \
    name weights_1_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_62_V_rea \
    op interface \
    ports { weights_1_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1891 \
    name weights_1_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_1_63_V_rea \
    op interface \
    ports { weights_1_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1892 \
    name weights_2_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_0_V_read \
    op interface \
    ports { weights_2_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1893 \
    name weights_2_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_1_V_read \
    op interface \
    ports { weights_2_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1894 \
    name weights_2_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_2_V_read \
    op interface \
    ports { weights_2_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1895 \
    name weights_2_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_3_V_read \
    op interface \
    ports { weights_2_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1896 \
    name weights_2_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_4_V_read \
    op interface \
    ports { weights_2_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1897 \
    name weights_2_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_5_V_read \
    op interface \
    ports { weights_2_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1898 \
    name weights_2_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_6_V_read \
    op interface \
    ports { weights_2_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1899 \
    name weights_2_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_7_V_read \
    op interface \
    ports { weights_2_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1900 \
    name weights_2_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_8_V_read \
    op interface \
    ports { weights_2_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1901 \
    name weights_2_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_9_V_read \
    op interface \
    ports { weights_2_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1902 \
    name weights_2_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_10_V_rea \
    op interface \
    ports { weights_2_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1903 \
    name weights_2_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_11_V_rea \
    op interface \
    ports { weights_2_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1904 \
    name weights_2_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_12_V_rea \
    op interface \
    ports { weights_2_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1905 \
    name weights_2_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_13_V_rea \
    op interface \
    ports { weights_2_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1906 \
    name weights_2_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_14_V_rea \
    op interface \
    ports { weights_2_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1907 \
    name weights_2_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_15_V_rea \
    op interface \
    ports { weights_2_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1908 \
    name weights_2_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_16_V_rea \
    op interface \
    ports { weights_2_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1909 \
    name weights_2_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_17_V_rea \
    op interface \
    ports { weights_2_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1910 \
    name weights_2_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_18_V_rea \
    op interface \
    ports { weights_2_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1911 \
    name weights_2_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_19_V_rea \
    op interface \
    ports { weights_2_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1912 \
    name weights_2_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_20_V_rea \
    op interface \
    ports { weights_2_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1913 \
    name weights_2_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_21_V_rea \
    op interface \
    ports { weights_2_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1914 \
    name weights_2_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_22_V_rea \
    op interface \
    ports { weights_2_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1915 \
    name weights_2_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_23_V_rea \
    op interface \
    ports { weights_2_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1916 \
    name weights_2_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_24_V_rea \
    op interface \
    ports { weights_2_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1917 \
    name weights_2_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_25_V_rea \
    op interface \
    ports { weights_2_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1918 \
    name weights_2_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_26_V_rea \
    op interface \
    ports { weights_2_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1919 \
    name weights_2_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_27_V_rea \
    op interface \
    ports { weights_2_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1920 \
    name weights_2_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_28_V_rea \
    op interface \
    ports { weights_2_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1921 \
    name weights_2_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_29_V_rea \
    op interface \
    ports { weights_2_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1922 \
    name weights_2_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_30_V_rea \
    op interface \
    ports { weights_2_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1923 \
    name weights_2_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_31_V_rea \
    op interface \
    ports { weights_2_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1924 \
    name weights_2_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_32_V_rea \
    op interface \
    ports { weights_2_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1925 \
    name weights_2_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_33_V_rea \
    op interface \
    ports { weights_2_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1926 \
    name weights_2_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_34_V_rea \
    op interface \
    ports { weights_2_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1927 \
    name weights_2_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_35_V_rea \
    op interface \
    ports { weights_2_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1928 \
    name weights_2_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_36_V_rea \
    op interface \
    ports { weights_2_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1929 \
    name weights_2_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_37_V_rea \
    op interface \
    ports { weights_2_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1930 \
    name weights_2_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_38_V_rea \
    op interface \
    ports { weights_2_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1931 \
    name weights_2_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_39_V_rea \
    op interface \
    ports { weights_2_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1932 \
    name weights_2_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_40_V_rea \
    op interface \
    ports { weights_2_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1933 \
    name weights_2_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_41_V_rea \
    op interface \
    ports { weights_2_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1934 \
    name weights_2_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_42_V_rea \
    op interface \
    ports { weights_2_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1935 \
    name weights_2_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_43_V_rea \
    op interface \
    ports { weights_2_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1936 \
    name weights_2_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_44_V_rea \
    op interface \
    ports { weights_2_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1937 \
    name weights_2_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_45_V_rea \
    op interface \
    ports { weights_2_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1938 \
    name weights_2_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_46_V_rea \
    op interface \
    ports { weights_2_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1939 \
    name weights_2_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_47_V_rea \
    op interface \
    ports { weights_2_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1940 \
    name weights_2_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_48_V_rea \
    op interface \
    ports { weights_2_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1941 \
    name weights_2_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_49_V_rea \
    op interface \
    ports { weights_2_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1942 \
    name weights_2_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_50_V_rea \
    op interface \
    ports { weights_2_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1943 \
    name weights_2_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_51_V_rea \
    op interface \
    ports { weights_2_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1944 \
    name weights_2_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_52_V_rea \
    op interface \
    ports { weights_2_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1945 \
    name weights_2_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_53_V_rea \
    op interface \
    ports { weights_2_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1946 \
    name weights_2_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_54_V_rea \
    op interface \
    ports { weights_2_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1947 \
    name weights_2_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_55_V_rea \
    op interface \
    ports { weights_2_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1948 \
    name weights_2_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_56_V_rea \
    op interface \
    ports { weights_2_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1949 \
    name weights_2_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_57_V_rea \
    op interface \
    ports { weights_2_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1950 \
    name weights_2_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_58_V_rea \
    op interface \
    ports { weights_2_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1951 \
    name weights_2_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_59_V_rea \
    op interface \
    ports { weights_2_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1952 \
    name weights_2_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_60_V_rea \
    op interface \
    ports { weights_2_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1953 \
    name weights_2_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_61_V_rea \
    op interface \
    ports { weights_2_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1954 \
    name weights_2_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_62_V_rea \
    op interface \
    ports { weights_2_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1955 \
    name weights_2_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_2_63_V_rea \
    op interface \
    ports { weights_2_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1956 \
    name weights_3_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_0_V_read \
    op interface \
    ports { weights_3_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1957 \
    name weights_3_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_1_V_read \
    op interface \
    ports { weights_3_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1958 \
    name weights_3_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_2_V_read \
    op interface \
    ports { weights_3_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1959 \
    name weights_3_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_3_V_read \
    op interface \
    ports { weights_3_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1960 \
    name weights_3_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_4_V_read \
    op interface \
    ports { weights_3_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1961 \
    name weights_3_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_5_V_read \
    op interface \
    ports { weights_3_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1962 \
    name weights_3_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_6_V_read \
    op interface \
    ports { weights_3_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1963 \
    name weights_3_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_7_V_read \
    op interface \
    ports { weights_3_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1964 \
    name weights_3_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_8_V_read \
    op interface \
    ports { weights_3_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1965 \
    name weights_3_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_9_V_read \
    op interface \
    ports { weights_3_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1966 \
    name weights_3_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_10_V_rea \
    op interface \
    ports { weights_3_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1967 \
    name weights_3_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_11_V_rea \
    op interface \
    ports { weights_3_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1968 \
    name weights_3_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_12_V_rea \
    op interface \
    ports { weights_3_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1969 \
    name weights_3_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_13_V_rea \
    op interface \
    ports { weights_3_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1970 \
    name weights_3_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_14_V_rea \
    op interface \
    ports { weights_3_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1971 \
    name weights_3_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_15_V_rea \
    op interface \
    ports { weights_3_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1972 \
    name weights_3_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_16_V_rea \
    op interface \
    ports { weights_3_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1973 \
    name weights_3_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_17_V_rea \
    op interface \
    ports { weights_3_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1974 \
    name weights_3_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_18_V_rea \
    op interface \
    ports { weights_3_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1975 \
    name weights_3_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_19_V_rea \
    op interface \
    ports { weights_3_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1976 \
    name weights_3_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_20_V_rea \
    op interface \
    ports { weights_3_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1977 \
    name weights_3_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_21_V_rea \
    op interface \
    ports { weights_3_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1978 \
    name weights_3_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_22_V_rea \
    op interface \
    ports { weights_3_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1979 \
    name weights_3_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_23_V_rea \
    op interface \
    ports { weights_3_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1980 \
    name weights_3_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_24_V_rea \
    op interface \
    ports { weights_3_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1981 \
    name weights_3_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_25_V_rea \
    op interface \
    ports { weights_3_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1982 \
    name weights_3_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_26_V_rea \
    op interface \
    ports { weights_3_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1983 \
    name weights_3_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_27_V_rea \
    op interface \
    ports { weights_3_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1984 \
    name weights_3_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_28_V_rea \
    op interface \
    ports { weights_3_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1985 \
    name weights_3_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_29_V_rea \
    op interface \
    ports { weights_3_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1986 \
    name weights_3_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_30_V_rea \
    op interface \
    ports { weights_3_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1987 \
    name weights_3_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_31_V_rea \
    op interface \
    ports { weights_3_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1988 \
    name weights_3_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_32_V_rea \
    op interface \
    ports { weights_3_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1989 \
    name weights_3_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_33_V_rea \
    op interface \
    ports { weights_3_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1990 \
    name weights_3_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_34_V_rea \
    op interface \
    ports { weights_3_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1991 \
    name weights_3_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_35_V_rea \
    op interface \
    ports { weights_3_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1992 \
    name weights_3_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_36_V_rea \
    op interface \
    ports { weights_3_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1993 \
    name weights_3_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_37_V_rea \
    op interface \
    ports { weights_3_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1994 \
    name weights_3_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_38_V_rea \
    op interface \
    ports { weights_3_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1995 \
    name weights_3_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_39_V_rea \
    op interface \
    ports { weights_3_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1996 \
    name weights_3_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_40_V_rea \
    op interface \
    ports { weights_3_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1997 \
    name weights_3_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_41_V_rea \
    op interface \
    ports { weights_3_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1998 \
    name weights_3_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_42_V_rea \
    op interface \
    ports { weights_3_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1999 \
    name weights_3_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_43_V_rea \
    op interface \
    ports { weights_3_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2000 \
    name weights_3_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_44_V_rea \
    op interface \
    ports { weights_3_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2001 \
    name weights_3_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_45_V_rea \
    op interface \
    ports { weights_3_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2002 \
    name weights_3_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_46_V_rea \
    op interface \
    ports { weights_3_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2003 \
    name weights_3_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_47_V_rea \
    op interface \
    ports { weights_3_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2004 \
    name weights_3_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_48_V_rea \
    op interface \
    ports { weights_3_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2005 \
    name weights_3_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_49_V_rea \
    op interface \
    ports { weights_3_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2006 \
    name weights_3_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_50_V_rea \
    op interface \
    ports { weights_3_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2007 \
    name weights_3_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_51_V_rea \
    op interface \
    ports { weights_3_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2008 \
    name weights_3_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_52_V_rea \
    op interface \
    ports { weights_3_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2009 \
    name weights_3_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_53_V_rea \
    op interface \
    ports { weights_3_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2010 \
    name weights_3_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_54_V_rea \
    op interface \
    ports { weights_3_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2011 \
    name weights_3_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_55_V_rea \
    op interface \
    ports { weights_3_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2012 \
    name weights_3_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_56_V_rea \
    op interface \
    ports { weights_3_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2013 \
    name weights_3_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_57_V_rea \
    op interface \
    ports { weights_3_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2014 \
    name weights_3_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_58_V_rea \
    op interface \
    ports { weights_3_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2015 \
    name weights_3_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_59_V_rea \
    op interface \
    ports { weights_3_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2016 \
    name weights_3_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_60_V_rea \
    op interface \
    ports { weights_3_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2017 \
    name weights_3_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_61_V_rea \
    op interface \
    ports { weights_3_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2018 \
    name weights_3_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_62_V_rea \
    op interface \
    ports { weights_3_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2019 \
    name weights_3_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_3_63_V_rea \
    op interface \
    ports { weights_3_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2020 \
    name weights_4_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_0_V_read \
    op interface \
    ports { weights_4_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2021 \
    name weights_4_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_1_V_read \
    op interface \
    ports { weights_4_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2022 \
    name weights_4_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_2_V_read \
    op interface \
    ports { weights_4_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2023 \
    name weights_4_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_3_V_read \
    op interface \
    ports { weights_4_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2024 \
    name weights_4_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_4_V_read \
    op interface \
    ports { weights_4_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2025 \
    name weights_4_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_5_V_read \
    op interface \
    ports { weights_4_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2026 \
    name weights_4_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_6_V_read \
    op interface \
    ports { weights_4_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2027 \
    name weights_4_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_7_V_read \
    op interface \
    ports { weights_4_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2028 \
    name weights_4_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_8_V_read \
    op interface \
    ports { weights_4_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2029 \
    name weights_4_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_9_V_read \
    op interface \
    ports { weights_4_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2030 \
    name weights_4_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_10_V_rea \
    op interface \
    ports { weights_4_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2031 \
    name weights_4_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_11_V_rea \
    op interface \
    ports { weights_4_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2032 \
    name weights_4_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_12_V_rea \
    op interface \
    ports { weights_4_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2033 \
    name weights_4_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_13_V_rea \
    op interface \
    ports { weights_4_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2034 \
    name weights_4_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_14_V_rea \
    op interface \
    ports { weights_4_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2035 \
    name weights_4_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_15_V_rea \
    op interface \
    ports { weights_4_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2036 \
    name weights_4_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_16_V_rea \
    op interface \
    ports { weights_4_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2037 \
    name weights_4_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_17_V_rea \
    op interface \
    ports { weights_4_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2038 \
    name weights_4_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_18_V_rea \
    op interface \
    ports { weights_4_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2039 \
    name weights_4_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_19_V_rea \
    op interface \
    ports { weights_4_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2040 \
    name weights_4_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_20_V_rea \
    op interface \
    ports { weights_4_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2041 \
    name weights_4_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_21_V_rea \
    op interface \
    ports { weights_4_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2042 \
    name weights_4_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_22_V_rea \
    op interface \
    ports { weights_4_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2043 \
    name weights_4_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_23_V_rea \
    op interface \
    ports { weights_4_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2044 \
    name weights_4_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_24_V_rea \
    op interface \
    ports { weights_4_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2045 \
    name weights_4_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_25_V_rea \
    op interface \
    ports { weights_4_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2046 \
    name weights_4_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_26_V_rea \
    op interface \
    ports { weights_4_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2047 \
    name weights_4_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_27_V_rea \
    op interface \
    ports { weights_4_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2048 \
    name weights_4_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_28_V_rea \
    op interface \
    ports { weights_4_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2049 \
    name weights_4_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_29_V_rea \
    op interface \
    ports { weights_4_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2050 \
    name weights_4_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_30_V_rea \
    op interface \
    ports { weights_4_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2051 \
    name weights_4_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_31_V_rea \
    op interface \
    ports { weights_4_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2052 \
    name weights_4_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_32_V_rea \
    op interface \
    ports { weights_4_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2053 \
    name weights_4_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_33_V_rea \
    op interface \
    ports { weights_4_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2054 \
    name weights_4_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_34_V_rea \
    op interface \
    ports { weights_4_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2055 \
    name weights_4_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_35_V_rea \
    op interface \
    ports { weights_4_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2056 \
    name weights_4_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_36_V_rea \
    op interface \
    ports { weights_4_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2057 \
    name weights_4_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_37_V_rea \
    op interface \
    ports { weights_4_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2058 \
    name weights_4_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_38_V_rea \
    op interface \
    ports { weights_4_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2059 \
    name weights_4_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_39_V_rea \
    op interface \
    ports { weights_4_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2060 \
    name weights_4_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_40_V_rea \
    op interface \
    ports { weights_4_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2061 \
    name weights_4_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_41_V_rea \
    op interface \
    ports { weights_4_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2062 \
    name weights_4_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_42_V_rea \
    op interface \
    ports { weights_4_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2063 \
    name weights_4_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_43_V_rea \
    op interface \
    ports { weights_4_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2064 \
    name weights_4_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_44_V_rea \
    op interface \
    ports { weights_4_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2065 \
    name weights_4_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_45_V_rea \
    op interface \
    ports { weights_4_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2066 \
    name weights_4_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_46_V_rea \
    op interface \
    ports { weights_4_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2067 \
    name weights_4_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_47_V_rea \
    op interface \
    ports { weights_4_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2068 \
    name weights_4_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_48_V_rea \
    op interface \
    ports { weights_4_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2069 \
    name weights_4_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_49_V_rea \
    op interface \
    ports { weights_4_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2070 \
    name weights_4_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_50_V_rea \
    op interface \
    ports { weights_4_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2071 \
    name weights_4_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_51_V_rea \
    op interface \
    ports { weights_4_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2072 \
    name weights_4_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_52_V_rea \
    op interface \
    ports { weights_4_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2073 \
    name weights_4_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_53_V_rea \
    op interface \
    ports { weights_4_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2074 \
    name weights_4_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_54_V_rea \
    op interface \
    ports { weights_4_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2075 \
    name weights_4_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_55_V_rea \
    op interface \
    ports { weights_4_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2076 \
    name weights_4_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_56_V_rea \
    op interface \
    ports { weights_4_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2077 \
    name weights_4_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_57_V_rea \
    op interface \
    ports { weights_4_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2078 \
    name weights_4_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_58_V_rea \
    op interface \
    ports { weights_4_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2079 \
    name weights_4_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_59_V_rea \
    op interface \
    ports { weights_4_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2080 \
    name weights_4_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_60_V_rea \
    op interface \
    ports { weights_4_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2081 \
    name weights_4_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_61_V_rea \
    op interface \
    ports { weights_4_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2082 \
    name weights_4_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_62_V_rea \
    op interface \
    ports { weights_4_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2083 \
    name weights_4_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_4_63_V_rea \
    op interface \
    ports { weights_4_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2084 \
    name weights_5_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_0_V_read \
    op interface \
    ports { weights_5_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2085 \
    name weights_5_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_1_V_read \
    op interface \
    ports { weights_5_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2086 \
    name weights_5_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_2_V_read \
    op interface \
    ports { weights_5_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2087 \
    name weights_5_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_3_V_read \
    op interface \
    ports { weights_5_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2088 \
    name weights_5_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_4_V_read \
    op interface \
    ports { weights_5_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2089 \
    name weights_5_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_5_V_read \
    op interface \
    ports { weights_5_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2090 \
    name weights_5_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_6_V_read \
    op interface \
    ports { weights_5_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2091 \
    name weights_5_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_7_V_read \
    op interface \
    ports { weights_5_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2092 \
    name weights_5_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_8_V_read \
    op interface \
    ports { weights_5_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2093 \
    name weights_5_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_9_V_read \
    op interface \
    ports { weights_5_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2094 \
    name weights_5_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_10_V_rea \
    op interface \
    ports { weights_5_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2095 \
    name weights_5_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_11_V_rea \
    op interface \
    ports { weights_5_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2096 \
    name weights_5_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_12_V_rea \
    op interface \
    ports { weights_5_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2097 \
    name weights_5_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_13_V_rea \
    op interface \
    ports { weights_5_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2098 \
    name weights_5_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_14_V_rea \
    op interface \
    ports { weights_5_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2099 \
    name weights_5_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_15_V_rea \
    op interface \
    ports { weights_5_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2100 \
    name weights_5_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_16_V_rea \
    op interface \
    ports { weights_5_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2101 \
    name weights_5_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_17_V_rea \
    op interface \
    ports { weights_5_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2102 \
    name weights_5_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_18_V_rea \
    op interface \
    ports { weights_5_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2103 \
    name weights_5_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_19_V_rea \
    op interface \
    ports { weights_5_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2104 \
    name weights_5_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_20_V_rea \
    op interface \
    ports { weights_5_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2105 \
    name weights_5_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_21_V_rea \
    op interface \
    ports { weights_5_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2106 \
    name weights_5_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_22_V_rea \
    op interface \
    ports { weights_5_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2107 \
    name weights_5_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_23_V_rea \
    op interface \
    ports { weights_5_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2108 \
    name weights_5_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_24_V_rea \
    op interface \
    ports { weights_5_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2109 \
    name weights_5_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_25_V_rea \
    op interface \
    ports { weights_5_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2110 \
    name weights_5_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_26_V_rea \
    op interface \
    ports { weights_5_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2111 \
    name weights_5_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_27_V_rea \
    op interface \
    ports { weights_5_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2112 \
    name weights_5_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_28_V_rea \
    op interface \
    ports { weights_5_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2113 \
    name weights_5_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_29_V_rea \
    op interface \
    ports { weights_5_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2114 \
    name weights_5_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_30_V_rea \
    op interface \
    ports { weights_5_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2115 \
    name weights_5_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_31_V_rea \
    op interface \
    ports { weights_5_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2116 \
    name weights_5_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_32_V_rea \
    op interface \
    ports { weights_5_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2117 \
    name weights_5_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_33_V_rea \
    op interface \
    ports { weights_5_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2118 \
    name weights_5_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_34_V_rea \
    op interface \
    ports { weights_5_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2119 \
    name weights_5_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_35_V_rea \
    op interface \
    ports { weights_5_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2120 \
    name weights_5_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_36_V_rea \
    op interface \
    ports { weights_5_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2121 \
    name weights_5_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_37_V_rea \
    op interface \
    ports { weights_5_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2122 \
    name weights_5_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_38_V_rea \
    op interface \
    ports { weights_5_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2123 \
    name weights_5_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_39_V_rea \
    op interface \
    ports { weights_5_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2124 \
    name weights_5_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_40_V_rea \
    op interface \
    ports { weights_5_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2125 \
    name weights_5_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_41_V_rea \
    op interface \
    ports { weights_5_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2126 \
    name weights_5_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_42_V_rea \
    op interface \
    ports { weights_5_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2127 \
    name weights_5_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_43_V_rea \
    op interface \
    ports { weights_5_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2128 \
    name weights_5_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_44_V_rea \
    op interface \
    ports { weights_5_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2129 \
    name weights_5_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_45_V_rea \
    op interface \
    ports { weights_5_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2130 \
    name weights_5_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_46_V_rea \
    op interface \
    ports { weights_5_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2131 \
    name weights_5_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_47_V_rea \
    op interface \
    ports { weights_5_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2132 \
    name weights_5_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_48_V_rea \
    op interface \
    ports { weights_5_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2133 \
    name weights_5_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_49_V_rea \
    op interface \
    ports { weights_5_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2134 \
    name weights_5_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_50_V_rea \
    op interface \
    ports { weights_5_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2135 \
    name weights_5_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_51_V_rea \
    op interface \
    ports { weights_5_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2136 \
    name weights_5_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_52_V_rea \
    op interface \
    ports { weights_5_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2137 \
    name weights_5_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_53_V_rea \
    op interface \
    ports { weights_5_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2138 \
    name weights_5_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_54_V_rea \
    op interface \
    ports { weights_5_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2139 \
    name weights_5_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_55_V_rea \
    op interface \
    ports { weights_5_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2140 \
    name weights_5_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_56_V_rea \
    op interface \
    ports { weights_5_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2141 \
    name weights_5_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_57_V_rea \
    op interface \
    ports { weights_5_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2142 \
    name weights_5_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_58_V_rea \
    op interface \
    ports { weights_5_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2143 \
    name weights_5_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_59_V_rea \
    op interface \
    ports { weights_5_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2144 \
    name weights_5_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_60_V_rea \
    op interface \
    ports { weights_5_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2145 \
    name weights_5_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_61_V_rea \
    op interface \
    ports { weights_5_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2146 \
    name weights_5_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_62_V_rea \
    op interface \
    ports { weights_5_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2147 \
    name weights_5_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_5_63_V_rea \
    op interface \
    ports { weights_5_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2148 \
    name weights_6_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_0_V_read \
    op interface \
    ports { weights_6_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2149 \
    name weights_6_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_1_V_read \
    op interface \
    ports { weights_6_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2150 \
    name weights_6_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_2_V_read \
    op interface \
    ports { weights_6_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2151 \
    name weights_6_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_3_V_read \
    op interface \
    ports { weights_6_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2152 \
    name weights_6_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_4_V_read \
    op interface \
    ports { weights_6_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2153 \
    name weights_6_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_5_V_read \
    op interface \
    ports { weights_6_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2154 \
    name weights_6_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_6_V_read \
    op interface \
    ports { weights_6_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2155 \
    name weights_6_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_7_V_read \
    op interface \
    ports { weights_6_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2156 \
    name weights_6_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_8_V_read \
    op interface \
    ports { weights_6_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2157 \
    name weights_6_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_9_V_read \
    op interface \
    ports { weights_6_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2158 \
    name weights_6_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_10_V_rea \
    op interface \
    ports { weights_6_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2159 \
    name weights_6_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_11_V_rea \
    op interface \
    ports { weights_6_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2160 \
    name weights_6_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_12_V_rea \
    op interface \
    ports { weights_6_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2161 \
    name weights_6_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_13_V_rea \
    op interface \
    ports { weights_6_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2162 \
    name weights_6_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_14_V_rea \
    op interface \
    ports { weights_6_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2163 \
    name weights_6_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_15_V_rea \
    op interface \
    ports { weights_6_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2164 \
    name weights_6_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_16_V_rea \
    op interface \
    ports { weights_6_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2165 \
    name weights_6_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_17_V_rea \
    op interface \
    ports { weights_6_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2166 \
    name weights_6_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_18_V_rea \
    op interface \
    ports { weights_6_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2167 \
    name weights_6_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_19_V_rea \
    op interface \
    ports { weights_6_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2168 \
    name weights_6_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_20_V_rea \
    op interface \
    ports { weights_6_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2169 \
    name weights_6_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_21_V_rea \
    op interface \
    ports { weights_6_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2170 \
    name weights_6_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_22_V_rea \
    op interface \
    ports { weights_6_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2171 \
    name weights_6_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_23_V_rea \
    op interface \
    ports { weights_6_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2172 \
    name weights_6_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_24_V_rea \
    op interface \
    ports { weights_6_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2173 \
    name weights_6_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_25_V_rea \
    op interface \
    ports { weights_6_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2174 \
    name weights_6_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_26_V_rea \
    op interface \
    ports { weights_6_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2175 \
    name weights_6_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_27_V_rea \
    op interface \
    ports { weights_6_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2176 \
    name weights_6_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_28_V_rea \
    op interface \
    ports { weights_6_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2177 \
    name weights_6_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_29_V_rea \
    op interface \
    ports { weights_6_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2178 \
    name weights_6_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_30_V_rea \
    op interface \
    ports { weights_6_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2179 \
    name weights_6_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_31_V_rea \
    op interface \
    ports { weights_6_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2180 \
    name weights_6_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_32_V_rea \
    op interface \
    ports { weights_6_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2181 \
    name weights_6_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_33_V_rea \
    op interface \
    ports { weights_6_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2182 \
    name weights_6_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_34_V_rea \
    op interface \
    ports { weights_6_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2183 \
    name weights_6_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_35_V_rea \
    op interface \
    ports { weights_6_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2184 \
    name weights_6_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_36_V_rea \
    op interface \
    ports { weights_6_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2185 \
    name weights_6_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_37_V_rea \
    op interface \
    ports { weights_6_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2186 \
    name weights_6_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_38_V_rea \
    op interface \
    ports { weights_6_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2187 \
    name weights_6_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_39_V_rea \
    op interface \
    ports { weights_6_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2188 \
    name weights_6_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_40_V_rea \
    op interface \
    ports { weights_6_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2189 \
    name weights_6_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_41_V_rea \
    op interface \
    ports { weights_6_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2190 \
    name weights_6_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_42_V_rea \
    op interface \
    ports { weights_6_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2191 \
    name weights_6_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_43_V_rea \
    op interface \
    ports { weights_6_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2192 \
    name weights_6_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_44_V_rea \
    op interface \
    ports { weights_6_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2193 \
    name weights_6_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_45_V_rea \
    op interface \
    ports { weights_6_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2194 \
    name weights_6_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_46_V_rea \
    op interface \
    ports { weights_6_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2195 \
    name weights_6_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_47_V_rea \
    op interface \
    ports { weights_6_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2196 \
    name weights_6_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_48_V_rea \
    op interface \
    ports { weights_6_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2197 \
    name weights_6_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_49_V_rea \
    op interface \
    ports { weights_6_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2198 \
    name weights_6_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_50_V_rea \
    op interface \
    ports { weights_6_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2199 \
    name weights_6_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_51_V_rea \
    op interface \
    ports { weights_6_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2200 \
    name weights_6_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_52_V_rea \
    op interface \
    ports { weights_6_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2201 \
    name weights_6_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_53_V_rea \
    op interface \
    ports { weights_6_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2202 \
    name weights_6_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_54_V_rea \
    op interface \
    ports { weights_6_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2203 \
    name weights_6_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_55_V_rea \
    op interface \
    ports { weights_6_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2204 \
    name weights_6_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_56_V_rea \
    op interface \
    ports { weights_6_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2205 \
    name weights_6_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_57_V_rea \
    op interface \
    ports { weights_6_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2206 \
    name weights_6_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_58_V_rea \
    op interface \
    ports { weights_6_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2207 \
    name weights_6_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_59_V_rea \
    op interface \
    ports { weights_6_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2208 \
    name weights_6_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_60_V_rea \
    op interface \
    ports { weights_6_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2209 \
    name weights_6_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_61_V_rea \
    op interface \
    ports { weights_6_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2210 \
    name weights_6_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_62_V_rea \
    op interface \
    ports { weights_6_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2211 \
    name weights_6_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_6_63_V_rea \
    op interface \
    ports { weights_6_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2212 \
    name weights_7_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_0_V_read \
    op interface \
    ports { weights_7_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2213 \
    name weights_7_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_1_V_read \
    op interface \
    ports { weights_7_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2214 \
    name weights_7_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_2_V_read \
    op interface \
    ports { weights_7_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2215 \
    name weights_7_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_3_V_read \
    op interface \
    ports { weights_7_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2216 \
    name weights_7_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_4_V_read \
    op interface \
    ports { weights_7_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2217 \
    name weights_7_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_5_V_read \
    op interface \
    ports { weights_7_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2218 \
    name weights_7_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_6_V_read \
    op interface \
    ports { weights_7_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2219 \
    name weights_7_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_7_V_read \
    op interface \
    ports { weights_7_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2220 \
    name weights_7_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_8_V_read \
    op interface \
    ports { weights_7_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2221 \
    name weights_7_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_9_V_read \
    op interface \
    ports { weights_7_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2222 \
    name weights_7_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_10_V_rea \
    op interface \
    ports { weights_7_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2223 \
    name weights_7_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_11_V_rea \
    op interface \
    ports { weights_7_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2224 \
    name weights_7_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_12_V_rea \
    op interface \
    ports { weights_7_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2225 \
    name weights_7_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_13_V_rea \
    op interface \
    ports { weights_7_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2226 \
    name weights_7_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_14_V_rea \
    op interface \
    ports { weights_7_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2227 \
    name weights_7_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_15_V_rea \
    op interface \
    ports { weights_7_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2228 \
    name weights_7_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_16_V_rea \
    op interface \
    ports { weights_7_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2229 \
    name weights_7_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_17_V_rea \
    op interface \
    ports { weights_7_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2230 \
    name weights_7_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_18_V_rea \
    op interface \
    ports { weights_7_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2231 \
    name weights_7_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_19_V_rea \
    op interface \
    ports { weights_7_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2232 \
    name weights_7_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_20_V_rea \
    op interface \
    ports { weights_7_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2233 \
    name weights_7_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_21_V_rea \
    op interface \
    ports { weights_7_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2234 \
    name weights_7_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_22_V_rea \
    op interface \
    ports { weights_7_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2235 \
    name weights_7_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_23_V_rea \
    op interface \
    ports { weights_7_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2236 \
    name weights_7_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_24_V_rea \
    op interface \
    ports { weights_7_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2237 \
    name weights_7_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_25_V_rea \
    op interface \
    ports { weights_7_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2238 \
    name weights_7_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_26_V_rea \
    op interface \
    ports { weights_7_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2239 \
    name weights_7_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_27_V_rea \
    op interface \
    ports { weights_7_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2240 \
    name weights_7_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_28_V_rea \
    op interface \
    ports { weights_7_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2241 \
    name weights_7_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_29_V_rea \
    op interface \
    ports { weights_7_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2242 \
    name weights_7_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_30_V_rea \
    op interface \
    ports { weights_7_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2243 \
    name weights_7_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_31_V_rea \
    op interface \
    ports { weights_7_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2244 \
    name weights_7_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_32_V_rea \
    op interface \
    ports { weights_7_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2245 \
    name weights_7_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_33_V_rea \
    op interface \
    ports { weights_7_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2246 \
    name weights_7_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_34_V_rea \
    op interface \
    ports { weights_7_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2247 \
    name weights_7_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_35_V_rea \
    op interface \
    ports { weights_7_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2248 \
    name weights_7_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_36_V_rea \
    op interface \
    ports { weights_7_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2249 \
    name weights_7_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_37_V_rea \
    op interface \
    ports { weights_7_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2250 \
    name weights_7_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_38_V_rea \
    op interface \
    ports { weights_7_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2251 \
    name weights_7_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_39_V_rea \
    op interface \
    ports { weights_7_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2252 \
    name weights_7_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_40_V_rea \
    op interface \
    ports { weights_7_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2253 \
    name weights_7_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_41_V_rea \
    op interface \
    ports { weights_7_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2254 \
    name weights_7_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_42_V_rea \
    op interface \
    ports { weights_7_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2255 \
    name weights_7_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_43_V_rea \
    op interface \
    ports { weights_7_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2256 \
    name weights_7_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_44_V_rea \
    op interface \
    ports { weights_7_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2257 \
    name weights_7_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_45_V_rea \
    op interface \
    ports { weights_7_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2258 \
    name weights_7_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_46_V_rea \
    op interface \
    ports { weights_7_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2259 \
    name weights_7_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_47_V_rea \
    op interface \
    ports { weights_7_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2260 \
    name weights_7_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_48_V_rea \
    op interface \
    ports { weights_7_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2261 \
    name weights_7_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_49_V_rea \
    op interface \
    ports { weights_7_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2262 \
    name weights_7_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_50_V_rea \
    op interface \
    ports { weights_7_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2263 \
    name weights_7_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_51_V_rea \
    op interface \
    ports { weights_7_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2264 \
    name weights_7_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_52_V_rea \
    op interface \
    ports { weights_7_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2265 \
    name weights_7_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_53_V_rea \
    op interface \
    ports { weights_7_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2266 \
    name weights_7_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_54_V_rea \
    op interface \
    ports { weights_7_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2267 \
    name weights_7_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_55_V_rea \
    op interface \
    ports { weights_7_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2268 \
    name weights_7_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_56_V_rea \
    op interface \
    ports { weights_7_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2269 \
    name weights_7_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_57_V_rea \
    op interface \
    ports { weights_7_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2270 \
    name weights_7_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_58_V_rea \
    op interface \
    ports { weights_7_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2271 \
    name weights_7_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_59_V_rea \
    op interface \
    ports { weights_7_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2272 \
    name weights_7_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_60_V_rea \
    op interface \
    ports { weights_7_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2273 \
    name weights_7_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_61_V_rea \
    op interface \
    ports { weights_7_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2274 \
    name weights_7_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_62_V_rea \
    op interface \
    ports { weights_7_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2275 \
    name weights_7_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_7_63_V_rea \
    op interface \
    ports { weights_7_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2276 \
    name weights_8_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_0_V_read \
    op interface \
    ports { weights_8_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2277 \
    name weights_8_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_1_V_read \
    op interface \
    ports { weights_8_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2278 \
    name weights_8_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_2_V_read \
    op interface \
    ports { weights_8_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2279 \
    name weights_8_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_3_V_read \
    op interface \
    ports { weights_8_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2280 \
    name weights_8_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_4_V_read \
    op interface \
    ports { weights_8_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2281 \
    name weights_8_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_5_V_read \
    op interface \
    ports { weights_8_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2282 \
    name weights_8_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_6_V_read \
    op interface \
    ports { weights_8_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2283 \
    name weights_8_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_7_V_read \
    op interface \
    ports { weights_8_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2284 \
    name weights_8_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_8_V_read \
    op interface \
    ports { weights_8_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2285 \
    name weights_8_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_9_V_read \
    op interface \
    ports { weights_8_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2286 \
    name weights_8_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_10_V_rea \
    op interface \
    ports { weights_8_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2287 \
    name weights_8_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_11_V_rea \
    op interface \
    ports { weights_8_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2288 \
    name weights_8_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_12_V_rea \
    op interface \
    ports { weights_8_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2289 \
    name weights_8_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_13_V_rea \
    op interface \
    ports { weights_8_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2290 \
    name weights_8_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_14_V_rea \
    op interface \
    ports { weights_8_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2291 \
    name weights_8_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_15_V_rea \
    op interface \
    ports { weights_8_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2292 \
    name weights_8_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_16_V_rea \
    op interface \
    ports { weights_8_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2293 \
    name weights_8_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_17_V_rea \
    op interface \
    ports { weights_8_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2294 \
    name weights_8_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_18_V_rea \
    op interface \
    ports { weights_8_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2295 \
    name weights_8_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_19_V_rea \
    op interface \
    ports { weights_8_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2296 \
    name weights_8_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_20_V_rea \
    op interface \
    ports { weights_8_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2297 \
    name weights_8_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_21_V_rea \
    op interface \
    ports { weights_8_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2298 \
    name weights_8_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_22_V_rea \
    op interface \
    ports { weights_8_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2299 \
    name weights_8_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_23_V_rea \
    op interface \
    ports { weights_8_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2300 \
    name weights_8_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_24_V_rea \
    op interface \
    ports { weights_8_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2301 \
    name weights_8_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_25_V_rea \
    op interface \
    ports { weights_8_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2302 \
    name weights_8_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_26_V_rea \
    op interface \
    ports { weights_8_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2303 \
    name weights_8_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_27_V_rea \
    op interface \
    ports { weights_8_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2304 \
    name weights_8_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_28_V_rea \
    op interface \
    ports { weights_8_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2305 \
    name weights_8_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_29_V_rea \
    op interface \
    ports { weights_8_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2306 \
    name weights_8_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_30_V_rea \
    op interface \
    ports { weights_8_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2307 \
    name weights_8_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_31_V_rea \
    op interface \
    ports { weights_8_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2308 \
    name weights_8_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_32_V_rea \
    op interface \
    ports { weights_8_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2309 \
    name weights_8_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_33_V_rea \
    op interface \
    ports { weights_8_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2310 \
    name weights_8_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_34_V_rea \
    op interface \
    ports { weights_8_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2311 \
    name weights_8_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_35_V_rea \
    op interface \
    ports { weights_8_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2312 \
    name weights_8_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_36_V_rea \
    op interface \
    ports { weights_8_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2313 \
    name weights_8_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_37_V_rea \
    op interface \
    ports { weights_8_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2314 \
    name weights_8_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_38_V_rea \
    op interface \
    ports { weights_8_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2315 \
    name weights_8_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_39_V_rea \
    op interface \
    ports { weights_8_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2316 \
    name weights_8_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_40_V_rea \
    op interface \
    ports { weights_8_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2317 \
    name weights_8_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_41_V_rea \
    op interface \
    ports { weights_8_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2318 \
    name weights_8_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_42_V_rea \
    op interface \
    ports { weights_8_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2319 \
    name weights_8_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_43_V_rea \
    op interface \
    ports { weights_8_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2320 \
    name weights_8_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_44_V_rea \
    op interface \
    ports { weights_8_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2321 \
    name weights_8_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_45_V_rea \
    op interface \
    ports { weights_8_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2322 \
    name weights_8_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_46_V_rea \
    op interface \
    ports { weights_8_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2323 \
    name weights_8_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_47_V_rea \
    op interface \
    ports { weights_8_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2324 \
    name weights_8_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_48_V_rea \
    op interface \
    ports { weights_8_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2325 \
    name weights_8_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_49_V_rea \
    op interface \
    ports { weights_8_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2326 \
    name weights_8_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_50_V_rea \
    op interface \
    ports { weights_8_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2327 \
    name weights_8_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_51_V_rea \
    op interface \
    ports { weights_8_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2328 \
    name weights_8_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_52_V_rea \
    op interface \
    ports { weights_8_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2329 \
    name weights_8_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_53_V_rea \
    op interface \
    ports { weights_8_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2330 \
    name weights_8_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_54_V_rea \
    op interface \
    ports { weights_8_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2331 \
    name weights_8_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_55_V_rea \
    op interface \
    ports { weights_8_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2332 \
    name weights_8_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_56_V_rea \
    op interface \
    ports { weights_8_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2333 \
    name weights_8_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_57_V_rea \
    op interface \
    ports { weights_8_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2334 \
    name weights_8_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_58_V_rea \
    op interface \
    ports { weights_8_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2335 \
    name weights_8_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_59_V_rea \
    op interface \
    ports { weights_8_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2336 \
    name weights_8_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_60_V_rea \
    op interface \
    ports { weights_8_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2337 \
    name weights_8_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_61_V_rea \
    op interface \
    ports { weights_8_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2338 \
    name weights_8_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_62_V_rea \
    op interface \
    ports { weights_8_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2339 \
    name weights_8_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_8_63_V_rea \
    op interface \
    ports { weights_8_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2340 \
    name weights_9_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_0_V_read \
    op interface \
    ports { weights_9_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2341 \
    name weights_9_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_1_V_read \
    op interface \
    ports { weights_9_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2342 \
    name weights_9_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_2_V_read \
    op interface \
    ports { weights_9_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2343 \
    name weights_9_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_3_V_read \
    op interface \
    ports { weights_9_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2344 \
    name weights_9_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_4_V_read \
    op interface \
    ports { weights_9_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2345 \
    name weights_9_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_5_V_read \
    op interface \
    ports { weights_9_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2346 \
    name weights_9_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_6_V_read \
    op interface \
    ports { weights_9_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2347 \
    name weights_9_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_7_V_read \
    op interface \
    ports { weights_9_7_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2348 \
    name weights_9_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_8_V_read \
    op interface \
    ports { weights_9_8_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2349 \
    name weights_9_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_9_V_read \
    op interface \
    ports { weights_9_9_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2350 \
    name weights_9_10_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_10_V_rea \
    op interface \
    ports { weights_9_10_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2351 \
    name weights_9_11_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_11_V_rea \
    op interface \
    ports { weights_9_11_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2352 \
    name weights_9_12_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_12_V_rea \
    op interface \
    ports { weights_9_12_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2353 \
    name weights_9_13_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_13_V_rea \
    op interface \
    ports { weights_9_13_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2354 \
    name weights_9_14_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_14_V_rea \
    op interface \
    ports { weights_9_14_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2355 \
    name weights_9_15_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_15_V_rea \
    op interface \
    ports { weights_9_15_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2356 \
    name weights_9_16_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_16_V_rea \
    op interface \
    ports { weights_9_16_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2357 \
    name weights_9_17_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_17_V_rea \
    op interface \
    ports { weights_9_17_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2358 \
    name weights_9_18_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_18_V_rea \
    op interface \
    ports { weights_9_18_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2359 \
    name weights_9_19_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_19_V_rea \
    op interface \
    ports { weights_9_19_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2360 \
    name weights_9_20_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_20_V_rea \
    op interface \
    ports { weights_9_20_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2361 \
    name weights_9_21_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_21_V_rea \
    op interface \
    ports { weights_9_21_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2362 \
    name weights_9_22_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_22_V_rea \
    op interface \
    ports { weights_9_22_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2363 \
    name weights_9_23_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_23_V_rea \
    op interface \
    ports { weights_9_23_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2364 \
    name weights_9_24_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_24_V_rea \
    op interface \
    ports { weights_9_24_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2365 \
    name weights_9_25_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_25_V_rea \
    op interface \
    ports { weights_9_25_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2366 \
    name weights_9_26_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_26_V_rea \
    op interface \
    ports { weights_9_26_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2367 \
    name weights_9_27_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_27_V_rea \
    op interface \
    ports { weights_9_27_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2368 \
    name weights_9_28_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_28_V_rea \
    op interface \
    ports { weights_9_28_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2369 \
    name weights_9_29_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_29_V_rea \
    op interface \
    ports { weights_9_29_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2370 \
    name weights_9_30_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_30_V_rea \
    op interface \
    ports { weights_9_30_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2371 \
    name weights_9_31_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_31_V_rea \
    op interface \
    ports { weights_9_31_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2372 \
    name weights_9_32_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_32_V_rea \
    op interface \
    ports { weights_9_32_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2373 \
    name weights_9_33_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_33_V_rea \
    op interface \
    ports { weights_9_33_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2374 \
    name weights_9_34_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_34_V_rea \
    op interface \
    ports { weights_9_34_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2375 \
    name weights_9_35_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_35_V_rea \
    op interface \
    ports { weights_9_35_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2376 \
    name weights_9_36_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_36_V_rea \
    op interface \
    ports { weights_9_36_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2377 \
    name weights_9_37_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_37_V_rea \
    op interface \
    ports { weights_9_37_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2378 \
    name weights_9_38_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_38_V_rea \
    op interface \
    ports { weights_9_38_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2379 \
    name weights_9_39_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_39_V_rea \
    op interface \
    ports { weights_9_39_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2380 \
    name weights_9_40_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_40_V_rea \
    op interface \
    ports { weights_9_40_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2381 \
    name weights_9_41_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_41_V_rea \
    op interface \
    ports { weights_9_41_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2382 \
    name weights_9_42_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_42_V_rea \
    op interface \
    ports { weights_9_42_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2383 \
    name weights_9_43_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_43_V_rea \
    op interface \
    ports { weights_9_43_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2384 \
    name weights_9_44_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_44_V_rea \
    op interface \
    ports { weights_9_44_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2385 \
    name weights_9_45_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_45_V_rea \
    op interface \
    ports { weights_9_45_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2386 \
    name weights_9_46_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_46_V_rea \
    op interface \
    ports { weights_9_46_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2387 \
    name weights_9_47_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_47_V_rea \
    op interface \
    ports { weights_9_47_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2388 \
    name weights_9_48_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_48_V_rea \
    op interface \
    ports { weights_9_48_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2389 \
    name weights_9_49_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_49_V_rea \
    op interface \
    ports { weights_9_49_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2390 \
    name weights_9_50_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_50_V_rea \
    op interface \
    ports { weights_9_50_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2391 \
    name weights_9_51_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_51_V_rea \
    op interface \
    ports { weights_9_51_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2392 \
    name weights_9_52_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_52_V_rea \
    op interface \
    ports { weights_9_52_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2393 \
    name weights_9_53_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_53_V_rea \
    op interface \
    ports { weights_9_53_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2394 \
    name weights_9_54_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_54_V_rea \
    op interface \
    ports { weights_9_54_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2395 \
    name weights_9_55_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_55_V_rea \
    op interface \
    ports { weights_9_55_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2396 \
    name weights_9_56_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_56_V_rea \
    op interface \
    ports { weights_9_56_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2397 \
    name weights_9_57_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_57_V_rea \
    op interface \
    ports { weights_9_57_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2398 \
    name weights_9_58_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_58_V_rea \
    op interface \
    ports { weights_9_58_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2399 \
    name weights_9_59_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_59_V_rea \
    op interface \
    ports { weights_9_59_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2400 \
    name weights_9_60_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_60_V_rea \
    op interface \
    ports { weights_9_60_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2401 \
    name weights_9_61_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_61_V_rea \
    op interface \
    ports { weights_9_61_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2402 \
    name weights_9_62_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_62_V_rea \
    op interface \
    ports { weights_9_62_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2403 \
    name weights_9_63_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_9_63_V_rea \
    op interface \
    ports { weights_9_63_V_rea { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2404 \
    name bias_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_0_V_read \
    op interface \
    ports { bias_0_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2405 \
    name bias_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_1_V_read \
    op interface \
    ports { bias_1_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2406 \
    name bias_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_2_V_read \
    op interface \
    ports { bias_2_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2407 \
    name bias_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_3_V_read \
    op interface \
    ports { bias_3_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2408 \
    name bias_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_4_V_read \
    op interface \
    ports { bias_4_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2409 \
    name bias_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_5_V_read \
    op interface \
    ports { bias_5_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2410 \
    name bias_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_6_V_read \
    op interface \
    ports { bias_6_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2411 \
    name bias_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_7_V_read \
    op interface \
    ports { bias_7_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2412 \
    name bias_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_8_V_read \
    op interface \
    ports { bias_8_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2413 \
    name bias_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_9_V_read \
    op interface \
    ports { bias_9_V_read { I 10 vector } } \
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

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
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
    id -4 \
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


