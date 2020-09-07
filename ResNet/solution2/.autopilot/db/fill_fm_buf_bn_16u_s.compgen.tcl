# This script segment is generated automatically by AutoPilot

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
    id 147 \
    name out_buf0_V_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_0 \
    op interface \
    ports { out_buf0_V_0_address0 { O 7 vector } out_buf0_V_0_ce0 { O 1 bit } out_buf0_V_0_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 148 \
    name fm_buf_V_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_0 \
    op interface \
    ports { fm_buf_V_0_address0 { O 11 vector } fm_buf_V_0_ce0 { O 1 bit } fm_buf_V_0_q0 { I 12 vector } fm_buf_V_0_address1 { O 11 vector } fm_buf_V_0_ce1 { O 1 bit } fm_buf_V_0_we1 { O 1 bit } fm_buf_V_0_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 149 \
    name out_buf0_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_1 \
    op interface \
    ports { out_buf0_V_1_address0 { O 7 vector } out_buf0_V_1_ce0 { O 1 bit } out_buf0_V_1_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 150 \
    name fm_buf_V_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_1 \
    op interface \
    ports { fm_buf_V_1_address0 { O 11 vector } fm_buf_V_1_ce0 { O 1 bit } fm_buf_V_1_q0 { I 12 vector } fm_buf_V_1_address1 { O 11 vector } fm_buf_V_1_ce1 { O 1 bit } fm_buf_V_1_we1 { O 1 bit } fm_buf_V_1_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 151 \
    name out_buf0_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_2 \
    op interface \
    ports { out_buf0_V_2_address0 { O 7 vector } out_buf0_V_2_ce0 { O 1 bit } out_buf0_V_2_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 152 \
    name fm_buf_V_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_2 \
    op interface \
    ports { fm_buf_V_2_address0 { O 11 vector } fm_buf_V_2_ce0 { O 1 bit } fm_buf_V_2_q0 { I 12 vector } fm_buf_V_2_address1 { O 11 vector } fm_buf_V_2_ce1 { O 1 bit } fm_buf_V_2_we1 { O 1 bit } fm_buf_V_2_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 153 \
    name out_buf0_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_3 \
    op interface \
    ports { out_buf0_V_3_address0 { O 7 vector } out_buf0_V_3_ce0 { O 1 bit } out_buf0_V_3_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 154 \
    name fm_buf_V_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_3 \
    op interface \
    ports { fm_buf_V_3_address0 { O 11 vector } fm_buf_V_3_ce0 { O 1 bit } fm_buf_V_3_q0 { I 12 vector } fm_buf_V_3_address1 { O 11 vector } fm_buf_V_3_ce1 { O 1 bit } fm_buf_V_3_we1 { O 1 bit } fm_buf_V_3_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 155 \
    name out_buf0_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_4 \
    op interface \
    ports { out_buf0_V_4_address0 { O 7 vector } out_buf0_V_4_ce0 { O 1 bit } out_buf0_V_4_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 156 \
    name fm_buf_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_4 \
    op interface \
    ports { fm_buf_V_4_address0 { O 11 vector } fm_buf_V_4_ce0 { O 1 bit } fm_buf_V_4_q0 { I 12 vector } fm_buf_V_4_address1 { O 11 vector } fm_buf_V_4_ce1 { O 1 bit } fm_buf_V_4_we1 { O 1 bit } fm_buf_V_4_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 157 \
    name out_buf0_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_5 \
    op interface \
    ports { out_buf0_V_5_address0 { O 7 vector } out_buf0_V_5_ce0 { O 1 bit } out_buf0_V_5_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 158 \
    name fm_buf_V_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_5 \
    op interface \
    ports { fm_buf_V_5_address0 { O 11 vector } fm_buf_V_5_ce0 { O 1 bit } fm_buf_V_5_q0 { I 12 vector } fm_buf_V_5_address1 { O 11 vector } fm_buf_V_5_ce1 { O 1 bit } fm_buf_V_5_we1 { O 1 bit } fm_buf_V_5_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 159 \
    name out_buf0_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_6 \
    op interface \
    ports { out_buf0_V_6_address0 { O 7 vector } out_buf0_V_6_ce0 { O 1 bit } out_buf0_V_6_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 160 \
    name fm_buf_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_6 \
    op interface \
    ports { fm_buf_V_6_address0 { O 11 vector } fm_buf_V_6_ce0 { O 1 bit } fm_buf_V_6_q0 { I 12 vector } fm_buf_V_6_address1 { O 11 vector } fm_buf_V_6_ce1 { O 1 bit } fm_buf_V_6_we1 { O 1 bit } fm_buf_V_6_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 161 \
    name out_buf0_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_7 \
    op interface \
    ports { out_buf0_V_7_address0 { O 7 vector } out_buf0_V_7_ce0 { O 1 bit } out_buf0_V_7_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 162 \
    name fm_buf_V_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_7 \
    op interface \
    ports { fm_buf_V_7_address0 { O 11 vector } fm_buf_V_7_ce0 { O 1 bit } fm_buf_V_7_q0 { I 12 vector } fm_buf_V_7_address1 { O 11 vector } fm_buf_V_7_ce1 { O 1 bit } fm_buf_V_7_we1 { O 1 bit } fm_buf_V_7_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 163 \
    name out_buf0_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_8 \
    op interface \
    ports { out_buf0_V_8_address0 { O 7 vector } out_buf0_V_8_ce0 { O 1 bit } out_buf0_V_8_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 164 \
    name fm_buf_V_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_8 \
    op interface \
    ports { fm_buf_V_8_address0 { O 11 vector } fm_buf_V_8_ce0 { O 1 bit } fm_buf_V_8_q0 { I 12 vector } fm_buf_V_8_address1 { O 11 vector } fm_buf_V_8_ce1 { O 1 bit } fm_buf_V_8_we1 { O 1 bit } fm_buf_V_8_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 165 \
    name out_buf0_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_9 \
    op interface \
    ports { out_buf0_V_9_address0 { O 7 vector } out_buf0_V_9_ce0 { O 1 bit } out_buf0_V_9_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 166 \
    name fm_buf_V_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_9 \
    op interface \
    ports { fm_buf_V_9_address0 { O 11 vector } fm_buf_V_9_ce0 { O 1 bit } fm_buf_V_9_q0 { I 12 vector } fm_buf_V_9_address1 { O 11 vector } fm_buf_V_9_ce1 { O 1 bit } fm_buf_V_9_we1 { O 1 bit } fm_buf_V_9_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 167 \
    name out_buf0_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_10 \
    op interface \
    ports { out_buf0_V_10_address0 { O 7 vector } out_buf0_V_10_ce0 { O 1 bit } out_buf0_V_10_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 168 \
    name fm_buf_V_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_10 \
    op interface \
    ports { fm_buf_V_10_address0 { O 11 vector } fm_buf_V_10_ce0 { O 1 bit } fm_buf_V_10_q0 { I 12 vector } fm_buf_V_10_address1 { O 11 vector } fm_buf_V_10_ce1 { O 1 bit } fm_buf_V_10_we1 { O 1 bit } fm_buf_V_10_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 169 \
    name out_buf0_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_11 \
    op interface \
    ports { out_buf0_V_11_address0 { O 7 vector } out_buf0_V_11_ce0 { O 1 bit } out_buf0_V_11_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 170 \
    name fm_buf_V_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_11 \
    op interface \
    ports { fm_buf_V_11_address0 { O 11 vector } fm_buf_V_11_ce0 { O 1 bit } fm_buf_V_11_q0 { I 12 vector } fm_buf_V_11_address1 { O 11 vector } fm_buf_V_11_ce1 { O 1 bit } fm_buf_V_11_we1 { O 1 bit } fm_buf_V_11_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 171 \
    name out_buf0_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_12 \
    op interface \
    ports { out_buf0_V_12_address0 { O 7 vector } out_buf0_V_12_ce0 { O 1 bit } out_buf0_V_12_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 172 \
    name fm_buf_V_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_12 \
    op interface \
    ports { fm_buf_V_12_address0 { O 11 vector } fm_buf_V_12_ce0 { O 1 bit } fm_buf_V_12_q0 { I 12 vector } fm_buf_V_12_address1 { O 11 vector } fm_buf_V_12_ce1 { O 1 bit } fm_buf_V_12_we1 { O 1 bit } fm_buf_V_12_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 173 \
    name out_buf0_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_13 \
    op interface \
    ports { out_buf0_V_13_address0 { O 7 vector } out_buf0_V_13_ce0 { O 1 bit } out_buf0_V_13_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 174 \
    name fm_buf_V_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_13 \
    op interface \
    ports { fm_buf_V_13_address0 { O 11 vector } fm_buf_V_13_ce0 { O 1 bit } fm_buf_V_13_q0 { I 12 vector } fm_buf_V_13_address1 { O 11 vector } fm_buf_V_13_ce1 { O 1 bit } fm_buf_V_13_we1 { O 1 bit } fm_buf_V_13_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 175 \
    name out_buf0_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_14 \
    op interface \
    ports { out_buf0_V_14_address0 { O 7 vector } out_buf0_V_14_ce0 { O 1 bit } out_buf0_V_14_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 176 \
    name fm_buf_V_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_14 \
    op interface \
    ports { fm_buf_V_14_address0 { O 11 vector } fm_buf_V_14_ce0 { O 1 bit } fm_buf_V_14_q0 { I 12 vector } fm_buf_V_14_address1 { O 11 vector } fm_buf_V_14_ce1 { O 1 bit } fm_buf_V_14_we1 { O 1 bit } fm_buf_V_14_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 177 \
    name out_buf0_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename out_buf0_V_15 \
    op interface \
    ports { out_buf0_V_15_address0 { O 7 vector } out_buf0_V_15_ce0 { O 1 bit } out_buf0_V_15_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_buf0_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 178 \
    name fm_buf_V_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_buf_V_15 \
    op interface \
    ports { fm_buf_V_15_address0 { O 11 vector } fm_buf_V_15_ce0 { O 1 bit } fm_buf_V_15_q0 { I 12 vector } fm_buf_V_15_address1 { O 11 vector } fm_buf_V_15_ce1 { O 1 bit } fm_buf_V_15_we1 { O 1 bit } fm_buf_V_15_d1 { O 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_buf_V_15'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name row \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row \
    op interface \
    ports { row { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name col \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_col \
    op interface \
    ports { col { I 3 vector } } \
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


