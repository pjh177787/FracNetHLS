# This script segment is generated automatically by AutoPilot

set id 822
set name FracNet_sdiv_32nsocq
set corename simcore_sdiv_seq
set op sdiv
set stage_num 36
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 32
set in0_signed 0
set in1_width 5
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_sdiv] == "ap_gen_simcore_sdiv"} {
eval "ap_gen_simcore_sdiv { \
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_sdiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op sdiv
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 823
set name FracNet_udiv_4ns_pcA
set corename simcore_udiv_seq
set op udiv
set stage_num 8
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 4
set in0_signed 0
set in1_width 4
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 4
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 824
set name FracNet_mul_32s_8qcK
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 1
set in1_width 8
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
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


set id 825
set name FracNet_mul_7ns_3rcU
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 7
set in0_signed 0
set in1_width 32
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 32
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


set id 828
set name FracNet_mul_9ns_3sc4
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
set in1_width 33
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 40
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


set id 829
set name FracNet_mac_muladtde
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 6
set in0_signed 0
set in1_width 7
set in1_signed 0
set in2_width 32
set in2_signed 0
set out_width 32
set exp i0*i1+i2
set arg_lists {i0 {6 0 +} i1 {7 0 +} m {13 0 +} i2 {32 0 +} p {32 0 +} c_reg {1} rnd {0} acc {0} }
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


set id 830
set name FracNet_mac_muladudo
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 4
set in0_signed 0
set in1_width 4
set in1_signed 0
set in2_width 3
set in2_signed 0
set out_width 5
set exp i0*i1+i2
set arg_lists {i0 {4 0 +} i1 {4 0 +} m {5 0 +} i2 {3 0 +} p {5 0 +} c_reg {1} rnd {0} acc {0} }
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


set id 832
set name FracNet_mac_muladvdy
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 4
set in0_signed 0
set in1_width 7
set in1_signed 0
set in2_width 1
set in2_signed 0
set out_width 8
set exp i0*i1+i2
set arg_lists {i0 {4 0 +} i1 {7 0 +} m {8 0 +} i2 {1 0 +} p {8 0 +} c_reg {1} rnd {0} acc {0} }
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


set id 833
set name FracNet_mac_muladwdI
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 7
set in0_signed 0
set in1_width 5
set in1_signed 0
set in2_width 8
set in2_signed 0
set out_width 12
set exp i0*i1+i2
set arg_lists {i0 {7 0 +} i1 {5 0 +} m {12 0 +} i2 {8 0 +} p {12 0 +} c_reg {1} rnd {0} acc {0} }
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


set id 834
set name FracNet_mul_mul_1xdS
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 12
set in0_signed 0
set in1_width 16
set in1_signed 1
set out_width 28
set exp i0*i1
set arg_lists {i0 {12 0 +} i1 {16 1 +} p {28 1 +} acc {0} }
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


set id 866
set name FracNet_mul_mul_1yd2
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 11
set in0_signed 0
set in1_width 16
set in1_signed 1
set out_width 27
set exp i0*i1
set arg_lists {i0 {11 0 +} i1 {16 1 +} p {27 1 +} acc {0} }
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
    id 1263 \
    name out_buf_all_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_0_V \
    op interface \
    ports { out_buf_all_0_V_address0 { O 11 vector } out_buf_all_0_V_ce0 { O 1 bit } out_buf_all_0_V_q0 { I 16 vector } out_buf_all_0_V_address1 { O 11 vector } out_buf_all_0_V_ce1 { O 1 bit } out_buf_all_0_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1264 \
    name out_buf_all_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_1_V \
    op interface \
    ports { out_buf_all_1_V_address0 { O 11 vector } out_buf_all_1_V_ce0 { O 1 bit } out_buf_all_1_V_q0 { I 16 vector } out_buf_all_1_V_address1 { O 11 vector } out_buf_all_1_V_ce1 { O 1 bit } out_buf_all_1_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1265 \
    name out_buf_all_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_2_V \
    op interface \
    ports { out_buf_all_2_V_address0 { O 11 vector } out_buf_all_2_V_ce0 { O 1 bit } out_buf_all_2_V_q0 { I 16 vector } out_buf_all_2_V_address1 { O 11 vector } out_buf_all_2_V_ce1 { O 1 bit } out_buf_all_2_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1266 \
    name out_buf_all_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_3_V \
    op interface \
    ports { out_buf_all_3_V_address0 { O 11 vector } out_buf_all_3_V_ce0 { O 1 bit } out_buf_all_3_V_q0 { I 16 vector } out_buf_all_3_V_address1 { O 11 vector } out_buf_all_3_V_ce1 { O 1 bit } out_buf_all_3_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1267 \
    name out_buf_all_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_4_V \
    op interface \
    ports { out_buf_all_4_V_address0 { O 11 vector } out_buf_all_4_V_ce0 { O 1 bit } out_buf_all_4_V_q0 { I 16 vector } out_buf_all_4_V_address1 { O 11 vector } out_buf_all_4_V_ce1 { O 1 bit } out_buf_all_4_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1268 \
    name out_buf_all_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_5_V \
    op interface \
    ports { out_buf_all_5_V_address0 { O 11 vector } out_buf_all_5_V_ce0 { O 1 bit } out_buf_all_5_V_q0 { I 16 vector } out_buf_all_5_V_address1 { O 11 vector } out_buf_all_5_V_ce1 { O 1 bit } out_buf_all_5_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1269 \
    name out_buf_all_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_6_V \
    op interface \
    ports { out_buf_all_6_V_address0 { O 11 vector } out_buf_all_6_V_ce0 { O 1 bit } out_buf_all_6_V_q0 { I 16 vector } out_buf_all_6_V_address1 { O 11 vector } out_buf_all_6_V_ce1 { O 1 bit } out_buf_all_6_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1270 \
    name out_buf_all_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_7_V \
    op interface \
    ports { out_buf_all_7_V_address0 { O 11 vector } out_buf_all_7_V_ce0 { O 1 bit } out_buf_all_7_V_q0 { I 16 vector } out_buf_all_7_V_address1 { O 11 vector } out_buf_all_7_V_ce1 { O 1 bit } out_buf_all_7_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1271 \
    name out_buf_all_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_8_V \
    op interface \
    ports { out_buf_all_8_V_address0 { O 11 vector } out_buf_all_8_V_ce0 { O 1 bit } out_buf_all_8_V_q0 { I 16 vector } out_buf_all_8_V_address1 { O 11 vector } out_buf_all_8_V_ce1 { O 1 bit } out_buf_all_8_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1272 \
    name out_buf_all_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_9_V \
    op interface \
    ports { out_buf_all_9_V_address0 { O 11 vector } out_buf_all_9_V_ce0 { O 1 bit } out_buf_all_9_V_q0 { I 16 vector } out_buf_all_9_V_address1 { O 11 vector } out_buf_all_9_V_ce1 { O 1 bit } out_buf_all_9_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1273 \
    name out_buf_all_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_10_V \
    op interface \
    ports { out_buf_all_10_V_address0 { O 11 vector } out_buf_all_10_V_ce0 { O 1 bit } out_buf_all_10_V_q0 { I 16 vector } out_buf_all_10_V_address1 { O 11 vector } out_buf_all_10_V_ce1 { O 1 bit } out_buf_all_10_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1274 \
    name out_buf_all_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_11_V \
    op interface \
    ports { out_buf_all_11_V_address0 { O 11 vector } out_buf_all_11_V_ce0 { O 1 bit } out_buf_all_11_V_q0 { I 16 vector } out_buf_all_11_V_address1 { O 11 vector } out_buf_all_11_V_ce1 { O 1 bit } out_buf_all_11_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1275 \
    name out_buf_all_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_12_V \
    op interface \
    ports { out_buf_all_12_V_address0 { O 11 vector } out_buf_all_12_V_ce0 { O 1 bit } out_buf_all_12_V_q0 { I 16 vector } out_buf_all_12_V_address1 { O 11 vector } out_buf_all_12_V_ce1 { O 1 bit } out_buf_all_12_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1276 \
    name out_buf_all_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_13_V \
    op interface \
    ports { out_buf_all_13_V_address0 { O 11 vector } out_buf_all_13_V_ce0 { O 1 bit } out_buf_all_13_V_q0 { I 16 vector } out_buf_all_13_V_address1 { O 11 vector } out_buf_all_13_V_ce1 { O 1 bit } out_buf_all_13_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1277 \
    name out_buf_all_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_14_V \
    op interface \
    ports { out_buf_all_14_V_address0 { O 11 vector } out_buf_all_14_V_ce0 { O 1 bit } out_buf_all_14_V_q0 { I 16 vector } out_buf_all_14_V_address1 { O 11 vector } out_buf_all_14_V_ce1 { O 1 bit } out_buf_all_14_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1278 \
    name out_buf_all_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_15_V \
    op interface \
    ports { out_buf_all_15_V_address0 { O 11 vector } out_buf_all_15_V_ce0 { O 1 bit } out_buf_all_15_V_q0 { I 16 vector } out_buf_all_15_V_address1 { O 11 vector } out_buf_all_15_V_ce1 { O 1 bit } out_buf_all_15_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1279 \
    name out_buf_all_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_16_V \
    op interface \
    ports { out_buf_all_16_V_address0 { O 11 vector } out_buf_all_16_V_ce0 { O 1 bit } out_buf_all_16_V_q0 { I 16 vector } out_buf_all_16_V_address1 { O 11 vector } out_buf_all_16_V_ce1 { O 1 bit } out_buf_all_16_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1280 \
    name out_buf_all_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_17_V \
    op interface \
    ports { out_buf_all_17_V_address0 { O 11 vector } out_buf_all_17_V_ce0 { O 1 bit } out_buf_all_17_V_q0 { I 16 vector } out_buf_all_17_V_address1 { O 11 vector } out_buf_all_17_V_ce1 { O 1 bit } out_buf_all_17_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1281 \
    name out_buf_all_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_18_V \
    op interface \
    ports { out_buf_all_18_V_address0 { O 11 vector } out_buf_all_18_V_ce0 { O 1 bit } out_buf_all_18_V_q0 { I 16 vector } out_buf_all_18_V_address1 { O 11 vector } out_buf_all_18_V_ce1 { O 1 bit } out_buf_all_18_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1282 \
    name out_buf_all_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_19_V \
    op interface \
    ports { out_buf_all_19_V_address0 { O 11 vector } out_buf_all_19_V_ce0 { O 1 bit } out_buf_all_19_V_q0 { I 16 vector } out_buf_all_19_V_address1 { O 11 vector } out_buf_all_19_V_ce1 { O 1 bit } out_buf_all_19_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1283 \
    name out_buf_all_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_20_V \
    op interface \
    ports { out_buf_all_20_V_address0 { O 11 vector } out_buf_all_20_V_ce0 { O 1 bit } out_buf_all_20_V_q0 { I 16 vector } out_buf_all_20_V_address1 { O 11 vector } out_buf_all_20_V_ce1 { O 1 bit } out_buf_all_20_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1284 \
    name out_buf_all_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_21_V \
    op interface \
    ports { out_buf_all_21_V_address0 { O 11 vector } out_buf_all_21_V_ce0 { O 1 bit } out_buf_all_21_V_q0 { I 16 vector } out_buf_all_21_V_address1 { O 11 vector } out_buf_all_21_V_ce1 { O 1 bit } out_buf_all_21_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1285 \
    name out_buf_all_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_22_V \
    op interface \
    ports { out_buf_all_22_V_address0 { O 11 vector } out_buf_all_22_V_ce0 { O 1 bit } out_buf_all_22_V_q0 { I 16 vector } out_buf_all_22_V_address1 { O 11 vector } out_buf_all_22_V_ce1 { O 1 bit } out_buf_all_22_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1286 \
    name out_buf_all_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_23_V \
    op interface \
    ports { out_buf_all_23_V_address0 { O 11 vector } out_buf_all_23_V_ce0 { O 1 bit } out_buf_all_23_V_q0 { I 16 vector } out_buf_all_23_V_address1 { O 11 vector } out_buf_all_23_V_ce1 { O 1 bit } out_buf_all_23_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1287 \
    name out_buf_all_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_24_V \
    op interface \
    ports { out_buf_all_24_V_address0 { O 11 vector } out_buf_all_24_V_ce0 { O 1 bit } out_buf_all_24_V_q0 { I 16 vector } out_buf_all_24_V_address1 { O 11 vector } out_buf_all_24_V_ce1 { O 1 bit } out_buf_all_24_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1288 \
    name out_buf_all_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_25_V \
    op interface \
    ports { out_buf_all_25_V_address0 { O 11 vector } out_buf_all_25_V_ce0 { O 1 bit } out_buf_all_25_V_q0 { I 16 vector } out_buf_all_25_V_address1 { O 11 vector } out_buf_all_25_V_ce1 { O 1 bit } out_buf_all_25_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1289 \
    name out_buf_all_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_26_V \
    op interface \
    ports { out_buf_all_26_V_address0 { O 11 vector } out_buf_all_26_V_ce0 { O 1 bit } out_buf_all_26_V_q0 { I 16 vector } out_buf_all_26_V_address1 { O 11 vector } out_buf_all_26_V_ce1 { O 1 bit } out_buf_all_26_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1290 \
    name out_buf_all_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_27_V \
    op interface \
    ports { out_buf_all_27_V_address0 { O 11 vector } out_buf_all_27_V_ce0 { O 1 bit } out_buf_all_27_V_q0 { I 16 vector } out_buf_all_27_V_address1 { O 11 vector } out_buf_all_27_V_ce1 { O 1 bit } out_buf_all_27_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1291 \
    name out_buf_all_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_28_V \
    op interface \
    ports { out_buf_all_28_V_address0 { O 11 vector } out_buf_all_28_V_ce0 { O 1 bit } out_buf_all_28_V_q0 { I 16 vector } out_buf_all_28_V_address1 { O 11 vector } out_buf_all_28_V_ce1 { O 1 bit } out_buf_all_28_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1292 \
    name out_buf_all_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_29_V \
    op interface \
    ports { out_buf_all_29_V_address0 { O 11 vector } out_buf_all_29_V_ce0 { O 1 bit } out_buf_all_29_V_q0 { I 16 vector } out_buf_all_29_V_address1 { O 11 vector } out_buf_all_29_V_ce1 { O 1 bit } out_buf_all_29_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1293 \
    name out_buf_all_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_30_V \
    op interface \
    ports { out_buf_all_30_V_address0 { O 11 vector } out_buf_all_30_V_ce0 { O 1 bit } out_buf_all_30_V_q0 { I 16 vector } out_buf_all_30_V_address1 { O 11 vector } out_buf_all_30_V_ce1 { O 1 bit } out_buf_all_30_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1294 \
    name out_buf_all_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_all_31_V \
    op interface \
    ports { out_buf_all_31_V_address0 { O 11 vector } out_buf_all_31_V_ce0 { O 1 bit } out_buf_all_31_V_q0 { I 16 vector } out_buf_all_31_V_address1 { O 11 vector } out_buf_all_31_V_ce1 { O 1 bit } out_buf_all_31_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_all_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1295 \
    name out_buf_sc_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_0_V \
    op interface \
    ports { out_buf_sc_0_V_address0 { O 10 vector } out_buf_sc_0_V_ce0 { O 1 bit } out_buf_sc_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1296 \
    name out_buf_sc_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_1_V \
    op interface \
    ports { out_buf_sc_1_V_address0 { O 10 vector } out_buf_sc_1_V_ce0 { O 1 bit } out_buf_sc_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1297 \
    name out_buf_sc_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_2_V \
    op interface \
    ports { out_buf_sc_2_V_address0 { O 10 vector } out_buf_sc_2_V_ce0 { O 1 bit } out_buf_sc_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1298 \
    name out_buf_sc_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_3_V \
    op interface \
    ports { out_buf_sc_3_V_address0 { O 10 vector } out_buf_sc_3_V_ce0 { O 1 bit } out_buf_sc_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1299 \
    name out_buf_sc_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_4_V \
    op interface \
    ports { out_buf_sc_4_V_address0 { O 10 vector } out_buf_sc_4_V_ce0 { O 1 bit } out_buf_sc_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1300 \
    name out_buf_sc_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_5_V \
    op interface \
    ports { out_buf_sc_5_V_address0 { O 10 vector } out_buf_sc_5_V_ce0 { O 1 bit } out_buf_sc_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1301 \
    name out_buf_sc_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_6_V \
    op interface \
    ports { out_buf_sc_6_V_address0 { O 10 vector } out_buf_sc_6_V_ce0 { O 1 bit } out_buf_sc_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1302 \
    name out_buf_sc_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_7_V \
    op interface \
    ports { out_buf_sc_7_V_address0 { O 10 vector } out_buf_sc_7_V_ce0 { O 1 bit } out_buf_sc_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1303 \
    name out_buf_sc_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_8_V \
    op interface \
    ports { out_buf_sc_8_V_address0 { O 10 vector } out_buf_sc_8_V_ce0 { O 1 bit } out_buf_sc_8_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1304 \
    name out_buf_sc_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_9_V \
    op interface \
    ports { out_buf_sc_9_V_address0 { O 10 vector } out_buf_sc_9_V_ce0 { O 1 bit } out_buf_sc_9_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1305 \
    name out_buf_sc_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_10_V \
    op interface \
    ports { out_buf_sc_10_V_address0 { O 10 vector } out_buf_sc_10_V_ce0 { O 1 bit } out_buf_sc_10_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1306 \
    name out_buf_sc_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_11_V \
    op interface \
    ports { out_buf_sc_11_V_address0 { O 10 vector } out_buf_sc_11_V_ce0 { O 1 bit } out_buf_sc_11_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1307 \
    name out_buf_sc_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_12_V \
    op interface \
    ports { out_buf_sc_12_V_address0 { O 10 vector } out_buf_sc_12_V_ce0 { O 1 bit } out_buf_sc_12_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1308 \
    name out_buf_sc_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_13_V \
    op interface \
    ports { out_buf_sc_13_V_address0 { O 10 vector } out_buf_sc_13_V_ce0 { O 1 bit } out_buf_sc_13_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1309 \
    name out_buf_sc_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_14_V \
    op interface \
    ports { out_buf_sc_14_V_address0 { O 10 vector } out_buf_sc_14_V_ce0 { O 1 bit } out_buf_sc_14_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1310 \
    name out_buf_sc_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_15_V \
    op interface \
    ports { out_buf_sc_15_V_address0 { O 10 vector } out_buf_sc_15_V_ce0 { O 1 bit } out_buf_sc_15_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1311 \
    name out_buf_sc_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_16_V \
    op interface \
    ports { out_buf_sc_16_V_address0 { O 10 vector } out_buf_sc_16_V_ce0 { O 1 bit } out_buf_sc_16_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1312 \
    name out_buf_sc_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_17_V \
    op interface \
    ports { out_buf_sc_17_V_address0 { O 10 vector } out_buf_sc_17_V_ce0 { O 1 bit } out_buf_sc_17_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1313 \
    name out_buf_sc_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_18_V \
    op interface \
    ports { out_buf_sc_18_V_address0 { O 10 vector } out_buf_sc_18_V_ce0 { O 1 bit } out_buf_sc_18_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1314 \
    name out_buf_sc_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_19_V \
    op interface \
    ports { out_buf_sc_19_V_address0 { O 10 vector } out_buf_sc_19_V_ce0 { O 1 bit } out_buf_sc_19_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1315 \
    name out_buf_sc_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_20_V \
    op interface \
    ports { out_buf_sc_20_V_address0 { O 10 vector } out_buf_sc_20_V_ce0 { O 1 bit } out_buf_sc_20_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1316 \
    name out_buf_sc_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_21_V \
    op interface \
    ports { out_buf_sc_21_V_address0 { O 10 vector } out_buf_sc_21_V_ce0 { O 1 bit } out_buf_sc_21_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1317 \
    name out_buf_sc_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_22_V \
    op interface \
    ports { out_buf_sc_22_V_address0 { O 10 vector } out_buf_sc_22_V_ce0 { O 1 bit } out_buf_sc_22_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1318 \
    name out_buf_sc_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_23_V \
    op interface \
    ports { out_buf_sc_23_V_address0 { O 10 vector } out_buf_sc_23_V_ce0 { O 1 bit } out_buf_sc_23_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1319 \
    name out_buf_sc_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_24_V \
    op interface \
    ports { out_buf_sc_24_V_address0 { O 10 vector } out_buf_sc_24_V_ce0 { O 1 bit } out_buf_sc_24_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1320 \
    name out_buf_sc_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_25_V \
    op interface \
    ports { out_buf_sc_25_V_address0 { O 10 vector } out_buf_sc_25_V_ce0 { O 1 bit } out_buf_sc_25_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1321 \
    name out_buf_sc_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_26_V \
    op interface \
    ports { out_buf_sc_26_V_address0 { O 10 vector } out_buf_sc_26_V_ce0 { O 1 bit } out_buf_sc_26_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1322 \
    name out_buf_sc_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_27_V \
    op interface \
    ports { out_buf_sc_27_V_address0 { O 10 vector } out_buf_sc_27_V_ce0 { O 1 bit } out_buf_sc_27_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1323 \
    name out_buf_sc_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_28_V \
    op interface \
    ports { out_buf_sc_28_V_address0 { O 10 vector } out_buf_sc_28_V_ce0 { O 1 bit } out_buf_sc_28_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1324 \
    name out_buf_sc_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_29_V \
    op interface \
    ports { out_buf_sc_29_V_address0 { O 10 vector } out_buf_sc_29_V_ce0 { O 1 bit } out_buf_sc_29_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1325 \
    name out_buf_sc_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_30_V \
    op interface \
    ports { out_buf_sc_30_V_address0 { O 10 vector } out_buf_sc_30_V_ce0 { O 1 bit } out_buf_sc_30_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1326 \
    name out_buf_sc_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf_sc_31_V \
    op interface \
    ports { out_buf_sc_31_V_address0 { O 10 vector } out_buf_sc_31_V_ce0 { O 1 bit } out_buf_sc_31_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf_sc_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1327 \
    name feat_buf_all_0_V_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename feat_buf_all_0_V_4 \
    op interface \
    ports { feat_buf_all_0_V_4_address0 { O 16 vector } feat_buf_all_0_V_4_ce0 { O 1 bit } feat_buf_all_0_V_4_we0 { O 1 bit } feat_buf_all_0_V_4_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'feat_buf_all_0_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1334 \
    name feat_buf_all_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename feat_buf_all_1_V \
    op interface \
    ports { feat_buf_all_1_V_address0 { O 16 vector } feat_buf_all_1_V_ce0 { O 1 bit } feat_buf_all_1_V_we0 { O 1 bit } feat_buf_all_1_V_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'feat_buf_all_1_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1005 \
    name conv_threshold_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_0_V_s \
    op interface \
    ports { conv_threshold_0_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1006 \
    name conv_threshold_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_1_V_s \
    op interface \
    ports { conv_threshold_1_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1007 \
    name conv_threshold_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_2_V_s \
    op interface \
    ports { conv_threshold_2_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1008 \
    name conv_threshold_3_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_3_V_s \
    op interface \
    ports { conv_threshold_3_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1009 \
    name conv_threshold_4_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_4_V_s \
    op interface \
    ports { conv_threshold_4_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1010 \
    name conv_threshold_5_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_5_V_s \
    op interface \
    ports { conv_threshold_5_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1011 \
    name conv_threshold_6_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_6_V_s \
    op interface \
    ports { conv_threshold_6_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1012 \
    name conv_threshold_7_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_7_V_s \
    op interface \
    ports { conv_threshold_7_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1013 \
    name conv_threshold_8_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_8_V_s \
    op interface \
    ports { conv_threshold_8_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1014 \
    name conv_threshold_9_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_9_V_s \
    op interface \
    ports { conv_threshold_9_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1015 \
    name conv_threshold_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_10_V_read \
    op interface \
    ports { conv_threshold_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1016 \
    name conv_threshold_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_11_V_read \
    op interface \
    ports { conv_threshold_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1017 \
    name conv_threshold_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_12_V_read \
    op interface \
    ports { conv_threshold_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1018 \
    name conv_threshold_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_13_V_read \
    op interface \
    ports { conv_threshold_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1019 \
    name conv_threshold_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_14_V_read \
    op interface \
    ports { conv_threshold_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1020 \
    name conv_threshold_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_15_V_read \
    op interface \
    ports { conv_threshold_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1021 \
    name conv_threshold_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_16_V_read \
    op interface \
    ports { conv_threshold_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1022 \
    name conv_threshold_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_17_V_read \
    op interface \
    ports { conv_threshold_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1023 \
    name conv_threshold_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_18_V_read \
    op interface \
    ports { conv_threshold_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1024 \
    name conv_threshold_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_19_V_read \
    op interface \
    ports { conv_threshold_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1025 \
    name conv_threshold_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_20_V_read \
    op interface \
    ports { conv_threshold_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1026 \
    name conv_threshold_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_21_V_read \
    op interface \
    ports { conv_threshold_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1027 \
    name conv_threshold_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_22_V_read \
    op interface \
    ports { conv_threshold_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1028 \
    name conv_threshold_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_23_V_read \
    op interface \
    ports { conv_threshold_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1029 \
    name conv_threshold_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_24_V_read \
    op interface \
    ports { conv_threshold_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1030 \
    name conv_threshold_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_25_V_read \
    op interface \
    ports { conv_threshold_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1031 \
    name conv_threshold_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_26_V_read \
    op interface \
    ports { conv_threshold_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1032 \
    name conv_threshold_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_27_V_read \
    op interface \
    ports { conv_threshold_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1033 \
    name conv_threshold_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_28_V_read \
    op interface \
    ports { conv_threshold_28_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1034 \
    name conv_threshold_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_29_V_read \
    op interface \
    ports { conv_threshold_29_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1035 \
    name conv_threshold_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_30_V_read \
    op interface \
    ports { conv_threshold_30_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1036 \
    name conv_threshold_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_threshold_31_V_read \
    op interface \
    ports { conv_threshold_31_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1037 \
    name conv_bn_weight_0_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_0_V_s \
    op interface \
    ports { conv_bn_weight_0_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1038 \
    name conv_bn_weight_1_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_1_V_s \
    op interface \
    ports { conv_bn_weight_1_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1039 \
    name conv_bn_weight_2_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_2_V_s \
    op interface \
    ports { conv_bn_weight_2_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1040 \
    name conv_bn_weight_3_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_3_V_s \
    op interface \
    ports { conv_bn_weight_3_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1041 \
    name conv_bn_weight_4_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_4_V_s \
    op interface \
    ports { conv_bn_weight_4_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1042 \
    name conv_bn_weight_5_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_5_V_s \
    op interface \
    ports { conv_bn_weight_5_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1043 \
    name conv_bn_weight_6_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_6_V_s \
    op interface \
    ports { conv_bn_weight_6_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1044 \
    name conv_bn_weight_7_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_7_V_s \
    op interface \
    ports { conv_bn_weight_7_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1045 \
    name conv_bn_weight_8_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_8_V_s \
    op interface \
    ports { conv_bn_weight_8_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1046 \
    name conv_bn_weight_9_V_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_9_V_s \
    op interface \
    ports { conv_bn_weight_9_V_s { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1047 \
    name conv_bn_weight_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_10_V_read \
    op interface \
    ports { conv_bn_weight_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1048 \
    name conv_bn_weight_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_11_V_read \
    op interface \
    ports { conv_bn_weight_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1049 \
    name conv_bn_weight_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_12_V_read \
    op interface \
    ports { conv_bn_weight_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1050 \
    name conv_bn_weight_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_13_V_read \
    op interface \
    ports { conv_bn_weight_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1051 \
    name conv_bn_weight_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_14_V_read \
    op interface \
    ports { conv_bn_weight_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1052 \
    name conv_bn_weight_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_15_V_read \
    op interface \
    ports { conv_bn_weight_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1053 \
    name conv_bn_weight_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_16_V_read \
    op interface \
    ports { conv_bn_weight_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1054 \
    name conv_bn_weight_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_17_V_read \
    op interface \
    ports { conv_bn_weight_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1055 \
    name conv_bn_weight_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_18_V_read \
    op interface \
    ports { conv_bn_weight_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1056 \
    name conv_bn_weight_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_19_V_read \
    op interface \
    ports { conv_bn_weight_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1057 \
    name conv_bn_weight_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_20_V_read \
    op interface \
    ports { conv_bn_weight_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1058 \
    name conv_bn_weight_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_21_V_read \
    op interface \
    ports { conv_bn_weight_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1059 \
    name conv_bn_weight_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_22_V_read \
    op interface \
    ports { conv_bn_weight_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1060 \
    name conv_bn_weight_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_23_V_read \
    op interface \
    ports { conv_bn_weight_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1061 \
    name conv_bn_weight_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_24_V_read \
    op interface \
    ports { conv_bn_weight_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1062 \
    name conv_bn_weight_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_25_V_read \
    op interface \
    ports { conv_bn_weight_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1063 \
    name conv_bn_weight_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_26_V_read \
    op interface \
    ports { conv_bn_weight_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1064 \
    name conv_bn_weight_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_27_V_read \
    op interface \
    ports { conv_bn_weight_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1065 \
    name conv_bn_weight_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_28_V_read \
    op interface \
    ports { conv_bn_weight_28_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1066 \
    name conv_bn_weight_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_29_V_read \
    op interface \
    ports { conv_bn_weight_29_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1067 \
    name conv_bn_weight_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_30_V_read \
    op interface \
    ports { conv_bn_weight_30_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1068 \
    name conv_bn_weight_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_weight_31_V_read \
    op interface \
    ports { conv_bn_weight_31_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1069 \
    name conv_bn_bias_0_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_0_V_re \
    op interface \
    ports { conv_bn_bias_0_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1070 \
    name conv_bn_bias_1_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_1_V_re \
    op interface \
    ports { conv_bn_bias_1_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1071 \
    name conv_bn_bias_2_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_2_V_re \
    op interface \
    ports { conv_bn_bias_2_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1072 \
    name conv_bn_bias_3_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_3_V_re \
    op interface \
    ports { conv_bn_bias_3_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1073 \
    name conv_bn_bias_4_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_4_V_re \
    op interface \
    ports { conv_bn_bias_4_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1074 \
    name conv_bn_bias_5_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_5_V_re \
    op interface \
    ports { conv_bn_bias_5_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1075 \
    name conv_bn_bias_6_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_6_V_re \
    op interface \
    ports { conv_bn_bias_6_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1076 \
    name conv_bn_bias_7_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_7_V_re \
    op interface \
    ports { conv_bn_bias_7_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1077 \
    name conv_bn_bias_8_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_8_V_re \
    op interface \
    ports { conv_bn_bias_8_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1078 \
    name conv_bn_bias_9_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_9_V_re \
    op interface \
    ports { conv_bn_bias_9_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1079 \
    name conv_bn_bias_10_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_10_V_r \
    op interface \
    ports { conv_bn_bias_10_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1080 \
    name conv_bn_bias_11_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_11_V_r \
    op interface \
    ports { conv_bn_bias_11_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1081 \
    name conv_bn_bias_12_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_12_V_r \
    op interface \
    ports { conv_bn_bias_12_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1082 \
    name conv_bn_bias_13_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_13_V_r \
    op interface \
    ports { conv_bn_bias_13_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1083 \
    name conv_bn_bias_14_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_14_V_r \
    op interface \
    ports { conv_bn_bias_14_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1084 \
    name conv_bn_bias_15_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_15_V_r \
    op interface \
    ports { conv_bn_bias_15_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1085 \
    name conv_bn_bias_16_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_16_V_r \
    op interface \
    ports { conv_bn_bias_16_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1086 \
    name conv_bn_bias_17_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_17_V_r \
    op interface \
    ports { conv_bn_bias_17_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1087 \
    name conv_bn_bias_18_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_18_V_r \
    op interface \
    ports { conv_bn_bias_18_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1088 \
    name conv_bn_bias_19_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_19_V_r \
    op interface \
    ports { conv_bn_bias_19_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1089 \
    name conv_bn_bias_20_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_20_V_r \
    op interface \
    ports { conv_bn_bias_20_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1090 \
    name conv_bn_bias_21_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_21_V_r \
    op interface \
    ports { conv_bn_bias_21_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1091 \
    name conv_bn_bias_22_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_22_V_r \
    op interface \
    ports { conv_bn_bias_22_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1092 \
    name conv_bn_bias_23_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_23_V_r \
    op interface \
    ports { conv_bn_bias_23_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1093 \
    name conv_bn_bias_24_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_24_V_r \
    op interface \
    ports { conv_bn_bias_24_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1094 \
    name conv_bn_bias_25_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_25_V_r \
    op interface \
    ports { conv_bn_bias_25_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1095 \
    name conv_bn_bias_26_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_26_V_r \
    op interface \
    ports { conv_bn_bias_26_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1096 \
    name conv_bn_bias_27_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_27_V_r \
    op interface \
    ports { conv_bn_bias_27_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1097 \
    name conv_bn_bias_28_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_28_V_r \
    op interface \
    ports { conv_bn_bias_28_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1098 \
    name conv_bn_bias_29_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_29_V_r \
    op interface \
    ports { conv_bn_bias_29_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1099 \
    name conv_bn_bias_30_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_30_V_r \
    op interface \
    ports { conv_bn_bias_30_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1100 \
    name conv_bn_bias_31_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_bn_bias_31_V_r \
    op interface \
    ports { conv_bn_bias_31_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1101 \
    name relu_shift_x_0_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_0_V_re \
    op interface \
    ports { relu_shift_x_0_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1102 \
    name relu_shift_x_1_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_1_V_re \
    op interface \
    ports { relu_shift_x_1_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1103 \
    name relu_shift_x_2_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_2_V_re \
    op interface \
    ports { relu_shift_x_2_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1104 \
    name relu_shift_x_3_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_3_V_re \
    op interface \
    ports { relu_shift_x_3_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1105 \
    name relu_shift_x_4_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_4_V_re \
    op interface \
    ports { relu_shift_x_4_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1106 \
    name relu_shift_x_5_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_5_V_re \
    op interface \
    ports { relu_shift_x_5_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1107 \
    name relu_shift_x_6_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_6_V_re \
    op interface \
    ports { relu_shift_x_6_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1108 \
    name relu_shift_x_7_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_7_V_re \
    op interface \
    ports { relu_shift_x_7_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1109 \
    name relu_shift_x_8_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_8_V_re \
    op interface \
    ports { relu_shift_x_8_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1110 \
    name relu_shift_x_9_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_9_V_re \
    op interface \
    ports { relu_shift_x_9_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1111 \
    name relu_shift_x_10_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_10_V_r \
    op interface \
    ports { relu_shift_x_10_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1112 \
    name relu_shift_x_11_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_11_V_r \
    op interface \
    ports { relu_shift_x_11_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1113 \
    name relu_shift_x_12_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_12_V_r \
    op interface \
    ports { relu_shift_x_12_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1114 \
    name relu_shift_x_13_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_13_V_r \
    op interface \
    ports { relu_shift_x_13_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1115 \
    name relu_shift_x_14_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_14_V_r \
    op interface \
    ports { relu_shift_x_14_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1116 \
    name relu_shift_x_15_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_15_V_r \
    op interface \
    ports { relu_shift_x_15_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1117 \
    name relu_shift_x_16_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_16_V_r \
    op interface \
    ports { relu_shift_x_16_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1118 \
    name relu_shift_x_17_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_17_V_r \
    op interface \
    ports { relu_shift_x_17_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1119 \
    name relu_shift_x_18_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_18_V_r \
    op interface \
    ports { relu_shift_x_18_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1120 \
    name relu_shift_x_19_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_19_V_r \
    op interface \
    ports { relu_shift_x_19_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1121 \
    name relu_shift_x_20_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_20_V_r \
    op interface \
    ports { relu_shift_x_20_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1122 \
    name relu_shift_x_21_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_21_V_r \
    op interface \
    ports { relu_shift_x_21_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1123 \
    name relu_shift_x_22_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_22_V_r \
    op interface \
    ports { relu_shift_x_22_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1124 \
    name relu_shift_x_23_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_23_V_r \
    op interface \
    ports { relu_shift_x_23_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1125 \
    name relu_shift_x_24_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_24_V_r \
    op interface \
    ports { relu_shift_x_24_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1126 \
    name relu_shift_x_25_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_25_V_r \
    op interface \
    ports { relu_shift_x_25_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1127 \
    name relu_shift_x_26_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_26_V_r \
    op interface \
    ports { relu_shift_x_26_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1128 \
    name relu_shift_x_27_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_27_V_r \
    op interface \
    ports { relu_shift_x_27_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1129 \
    name relu_shift_x_28_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_28_V_r \
    op interface \
    ports { relu_shift_x_28_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1130 \
    name relu_shift_x_29_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_29_V_r \
    op interface \
    ports { relu_shift_x_29_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1131 \
    name relu_shift_x_30_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_30_V_r \
    op interface \
    ports { relu_shift_x_30_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1132 \
    name relu_shift_x_31_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_x_31_V_r \
    op interface \
    ports { relu_shift_x_31_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1133 \
    name relu_shift_y_0_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_0_V_re \
    op interface \
    ports { relu_shift_y_0_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1134 \
    name relu_shift_y_1_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_1_V_re \
    op interface \
    ports { relu_shift_y_1_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1135 \
    name relu_shift_y_2_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_2_V_re \
    op interface \
    ports { relu_shift_y_2_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1136 \
    name relu_shift_y_3_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_3_V_re \
    op interface \
    ports { relu_shift_y_3_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1137 \
    name relu_shift_y_4_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_4_V_re \
    op interface \
    ports { relu_shift_y_4_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1138 \
    name relu_shift_y_5_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_5_V_re \
    op interface \
    ports { relu_shift_y_5_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1139 \
    name relu_shift_y_6_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_6_V_re \
    op interface \
    ports { relu_shift_y_6_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1140 \
    name relu_shift_y_7_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_7_V_re \
    op interface \
    ports { relu_shift_y_7_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1141 \
    name relu_shift_y_8_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_8_V_re \
    op interface \
    ports { relu_shift_y_8_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1142 \
    name relu_shift_y_9_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_9_V_re \
    op interface \
    ports { relu_shift_y_9_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1143 \
    name relu_shift_y_10_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_10_V_r \
    op interface \
    ports { relu_shift_y_10_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1144 \
    name relu_shift_y_11_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_11_V_r \
    op interface \
    ports { relu_shift_y_11_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1145 \
    name relu_shift_y_12_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_12_V_r \
    op interface \
    ports { relu_shift_y_12_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1146 \
    name relu_shift_y_13_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_13_V_r \
    op interface \
    ports { relu_shift_y_13_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1147 \
    name relu_shift_y_14_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_14_V_r \
    op interface \
    ports { relu_shift_y_14_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1148 \
    name relu_shift_y_15_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_15_V_r \
    op interface \
    ports { relu_shift_y_15_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1149 \
    name relu_shift_y_16_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_16_V_r \
    op interface \
    ports { relu_shift_y_16_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1150 \
    name relu_shift_y_17_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_17_V_r \
    op interface \
    ports { relu_shift_y_17_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1151 \
    name relu_shift_y_18_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_18_V_r \
    op interface \
    ports { relu_shift_y_18_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1152 \
    name relu_shift_y_19_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_19_V_r \
    op interface \
    ports { relu_shift_y_19_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1153 \
    name relu_shift_y_20_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_20_V_r \
    op interface \
    ports { relu_shift_y_20_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1154 \
    name relu_shift_y_21_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_21_V_r \
    op interface \
    ports { relu_shift_y_21_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1155 \
    name relu_shift_y_22_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_22_V_r \
    op interface \
    ports { relu_shift_y_22_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1156 \
    name relu_shift_y_23_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_23_V_r \
    op interface \
    ports { relu_shift_y_23_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1157 \
    name relu_shift_y_24_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_24_V_r \
    op interface \
    ports { relu_shift_y_24_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1158 \
    name relu_shift_y_25_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_25_V_r \
    op interface \
    ports { relu_shift_y_25_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1159 \
    name relu_shift_y_26_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_26_V_r \
    op interface \
    ports { relu_shift_y_26_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1160 \
    name relu_shift_y_27_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_27_V_r \
    op interface \
    ports { relu_shift_y_27_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1161 \
    name relu_shift_y_28_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_28_V_r \
    op interface \
    ports { relu_shift_y_28_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1162 \
    name relu_shift_y_29_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_29_V_r \
    op interface \
    ports { relu_shift_y_29_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1163 \
    name relu_shift_y_30_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_30_V_r \
    op interface \
    ports { relu_shift_y_30_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1164 \
    name relu_shift_y_31_V_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_shift_y_31_V_r \
    op interface \
    ports { relu_shift_y_31_V_r { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1165 \
    name relu_weight_0_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_0_V_rea \
    op interface \
    ports { relu_weight_0_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1166 \
    name relu_weight_1_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_1_V_rea \
    op interface \
    ports { relu_weight_1_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1167 \
    name relu_weight_2_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_2_V_rea \
    op interface \
    ports { relu_weight_2_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1168 \
    name relu_weight_3_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_3_V_rea \
    op interface \
    ports { relu_weight_3_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1169 \
    name relu_weight_4_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_4_V_rea \
    op interface \
    ports { relu_weight_4_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1170 \
    name relu_weight_5_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_5_V_rea \
    op interface \
    ports { relu_weight_5_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1171 \
    name relu_weight_6_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_6_V_rea \
    op interface \
    ports { relu_weight_6_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1172 \
    name relu_weight_7_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_7_V_rea \
    op interface \
    ports { relu_weight_7_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1173 \
    name relu_weight_8_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_8_V_rea \
    op interface \
    ports { relu_weight_8_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1174 \
    name relu_weight_9_V_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_9_V_rea \
    op interface \
    ports { relu_weight_9_V_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1175 \
    name relu_weight_10_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_10_V_re \
    op interface \
    ports { relu_weight_10_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1176 \
    name relu_weight_11_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_11_V_re \
    op interface \
    ports { relu_weight_11_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1177 \
    name relu_weight_12_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_12_V_re \
    op interface \
    ports { relu_weight_12_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1178 \
    name relu_weight_13_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_13_V_re \
    op interface \
    ports { relu_weight_13_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1179 \
    name relu_weight_14_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_14_V_re \
    op interface \
    ports { relu_weight_14_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1180 \
    name relu_weight_15_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_15_V_re \
    op interface \
    ports { relu_weight_15_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1181 \
    name relu_weight_16_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_16_V_re \
    op interface \
    ports { relu_weight_16_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1182 \
    name relu_weight_17_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_17_V_re \
    op interface \
    ports { relu_weight_17_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1183 \
    name relu_weight_18_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_18_V_re \
    op interface \
    ports { relu_weight_18_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1184 \
    name relu_weight_19_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_19_V_re \
    op interface \
    ports { relu_weight_19_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1185 \
    name relu_weight_20_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_20_V_re \
    op interface \
    ports { relu_weight_20_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1186 \
    name relu_weight_21_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_21_V_re \
    op interface \
    ports { relu_weight_21_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1187 \
    name relu_weight_22_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_22_V_re \
    op interface \
    ports { relu_weight_22_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1188 \
    name relu_weight_23_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_23_V_re \
    op interface \
    ports { relu_weight_23_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1189 \
    name relu_weight_24_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_24_V_re \
    op interface \
    ports { relu_weight_24_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1190 \
    name relu_weight_25_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_25_V_re \
    op interface \
    ports { relu_weight_25_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1191 \
    name relu_weight_26_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_26_V_re \
    op interface \
    ports { relu_weight_26_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1192 \
    name relu_weight_27_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_27_V_re \
    op interface \
    ports { relu_weight_27_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1193 \
    name relu_weight_28_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_28_V_re \
    op interface \
    ports { relu_weight_28_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1194 \
    name relu_weight_29_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_29_V_re \
    op interface \
    ports { relu_weight_29_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1195 \
    name relu_weight_30_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_30_V_re \
    op interface \
    ports { relu_weight_30_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1196 \
    name relu_weight_31_V_re \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_relu_weight_31_V_re \
    op interface \
    ports { relu_weight_31_V_re { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1197 \
    name bn_weight_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_0_V_read \
    op interface \
    ports { bn_weight_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1198 \
    name bn_weight_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_1_V_read \
    op interface \
    ports { bn_weight_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1199 \
    name bn_weight_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_2_V_read \
    op interface \
    ports { bn_weight_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1200 \
    name bn_weight_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_3_V_read \
    op interface \
    ports { bn_weight_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1201 \
    name bn_weight_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_4_V_read \
    op interface \
    ports { bn_weight_4_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1202 \
    name bn_weight_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_5_V_read \
    op interface \
    ports { bn_weight_5_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1203 \
    name bn_weight_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_6_V_read \
    op interface \
    ports { bn_weight_6_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1204 \
    name bn_weight_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_7_V_read \
    op interface \
    ports { bn_weight_7_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1205 \
    name bn_weight_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_8_V_read \
    op interface \
    ports { bn_weight_8_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1206 \
    name bn_weight_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_9_V_read \
    op interface \
    ports { bn_weight_9_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1207 \
    name bn_weight_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_10_V_read \
    op interface \
    ports { bn_weight_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1208 \
    name bn_weight_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_11_V_read \
    op interface \
    ports { bn_weight_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1209 \
    name bn_weight_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_12_V_read \
    op interface \
    ports { bn_weight_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1210 \
    name bn_weight_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_13_V_read \
    op interface \
    ports { bn_weight_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1211 \
    name bn_weight_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_14_V_read \
    op interface \
    ports { bn_weight_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1212 \
    name bn_weight_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_15_V_read \
    op interface \
    ports { bn_weight_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1213 \
    name bn_weight_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_16_V_read \
    op interface \
    ports { bn_weight_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1214 \
    name bn_weight_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_17_V_read \
    op interface \
    ports { bn_weight_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1215 \
    name bn_weight_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_18_V_read \
    op interface \
    ports { bn_weight_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1216 \
    name bn_weight_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_19_V_read \
    op interface \
    ports { bn_weight_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1217 \
    name bn_weight_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_20_V_read \
    op interface \
    ports { bn_weight_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1218 \
    name bn_weight_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_21_V_read \
    op interface \
    ports { bn_weight_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1219 \
    name bn_weight_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_22_V_read \
    op interface \
    ports { bn_weight_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1220 \
    name bn_weight_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_23_V_read \
    op interface \
    ports { bn_weight_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1221 \
    name bn_weight_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_24_V_read \
    op interface \
    ports { bn_weight_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1222 \
    name bn_weight_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_25_V_read \
    op interface \
    ports { bn_weight_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1223 \
    name bn_weight_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_26_V_read \
    op interface \
    ports { bn_weight_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1224 \
    name bn_weight_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_27_V_read \
    op interface \
    ports { bn_weight_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1225 \
    name bn_weight_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_28_V_read \
    op interface \
    ports { bn_weight_28_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1226 \
    name bn_weight_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_29_V_read \
    op interface \
    ports { bn_weight_29_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1227 \
    name bn_weight_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_30_V_read \
    op interface \
    ports { bn_weight_30_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1228 \
    name bn_weight_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_31_V_read \
    op interface \
    ports { bn_weight_31_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1229 \
    name bn_bias_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_0_V_read \
    op interface \
    ports { bn_bias_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1230 \
    name bn_bias_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_1_V_read \
    op interface \
    ports { bn_bias_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1231 \
    name bn_bias_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_2_V_read \
    op interface \
    ports { bn_bias_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1232 \
    name bn_bias_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_3_V_read \
    op interface \
    ports { bn_bias_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1233 \
    name bn_bias_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_4_V_read \
    op interface \
    ports { bn_bias_4_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1234 \
    name bn_bias_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_5_V_read \
    op interface \
    ports { bn_bias_5_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1235 \
    name bn_bias_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_6_V_read \
    op interface \
    ports { bn_bias_6_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1236 \
    name bn_bias_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_7_V_read \
    op interface \
    ports { bn_bias_7_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1237 \
    name bn_bias_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_8_V_read \
    op interface \
    ports { bn_bias_8_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1238 \
    name bn_bias_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_9_V_read \
    op interface \
    ports { bn_bias_9_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1239 \
    name bn_bias_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_10_V_read \
    op interface \
    ports { bn_bias_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1240 \
    name bn_bias_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_11_V_read \
    op interface \
    ports { bn_bias_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1241 \
    name bn_bias_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_12_V_read \
    op interface \
    ports { bn_bias_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1242 \
    name bn_bias_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_13_V_read \
    op interface \
    ports { bn_bias_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1243 \
    name bn_bias_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_14_V_read \
    op interface \
    ports { bn_bias_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1244 \
    name bn_bias_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_15_V_read \
    op interface \
    ports { bn_bias_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1245 \
    name bn_bias_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_16_V_read \
    op interface \
    ports { bn_bias_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1246 \
    name bn_bias_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_17_V_read \
    op interface \
    ports { bn_bias_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1247 \
    name bn_bias_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_18_V_read \
    op interface \
    ports { bn_bias_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1248 \
    name bn_bias_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_19_V_read \
    op interface \
    ports { bn_bias_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1249 \
    name bn_bias_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_20_V_read \
    op interface \
    ports { bn_bias_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1250 \
    name bn_bias_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_21_V_read \
    op interface \
    ports { bn_bias_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1251 \
    name bn_bias_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_22_V_read \
    op interface \
    ports { bn_bias_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1252 \
    name bn_bias_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_23_V_read \
    op interface \
    ports { bn_bias_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1253 \
    name bn_bias_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_24_V_read \
    op interface \
    ports { bn_bias_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1254 \
    name bn_bias_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_25_V_read \
    op interface \
    ports { bn_bias_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1255 \
    name bn_bias_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_26_V_read \
    op interface \
    ports { bn_bias_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1256 \
    name bn_bias_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_27_V_read \
    op interface \
    ports { bn_bias_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1257 \
    name bn_bias_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_28_V_read \
    op interface \
    ports { bn_bias_28_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1258 \
    name bn_bias_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_29_V_read \
    op interface \
    ports { bn_bias_29_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1259 \
    name bn_bias_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_30_V_read \
    op interface \
    ports { bn_bias_30_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1260 \
    name bn_bias_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_31_V_read \
    op interface \
    ports { bn_bias_31_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1261 \
    name DDR_buf_V \
    type other \
    dir O \
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
    id 1262 \
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
    id 1328 \
    name H_fmap_in \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_H_fmap_in \
    op interface \
    ports { H_fmap_in { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1329 \
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
    id 1330 \
    name c_out \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_c_out \
    op interface \
    ports { c_out { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1331 \
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
    id 1332 \
    name stride \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_stride \
    op interface \
    ports { stride { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1333 \
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


