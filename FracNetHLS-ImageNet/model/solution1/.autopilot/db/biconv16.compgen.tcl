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
    id 30 \
    name bottom_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom_V \
    op interface \
    ports { bottom_V_address0 { O 7 vector } bottom_V_ce0 { O 1 bit } bottom_V_q0 { I 16 vector } bottom_V_address1 { O 7 vector } bottom_V_ce1 { O 1 bit } bottom_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name weights_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_0_V \
    op interface \
    ports { weights_0_V_address0 { O 6 vector } weights_0_V_ce0 { O 1 bit } weights_0_V_q0 { I 16 vector } weights_0_V_address1 { O 6 vector } weights_0_V_ce1 { O 1 bit } weights_0_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name weights_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_1_V \
    op interface \
    ports { weights_1_V_address0 { O 6 vector } weights_1_V_ce0 { O 1 bit } weights_1_V_q0 { I 16 vector } weights_1_V_address1 { O 6 vector } weights_1_V_ce1 { O 1 bit } weights_1_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name weights_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_2_V \
    op interface \
    ports { weights_2_V_address0 { O 6 vector } weights_2_V_ce0 { O 1 bit } weights_2_V_q0 { I 16 vector } weights_2_V_address1 { O 6 vector } weights_2_V_ce1 { O 1 bit } weights_2_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name weights_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_3_V \
    op interface \
    ports { weights_3_V_address0 { O 6 vector } weights_3_V_ce0 { O 1 bit } weights_3_V_q0 { I 16 vector } weights_3_V_address1 { O 6 vector } weights_3_V_ce1 { O 1 bit } weights_3_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name weights_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_4_V \
    op interface \
    ports { weights_4_V_address0 { O 6 vector } weights_4_V_ce0 { O 1 bit } weights_4_V_q0 { I 16 vector } weights_4_V_address1 { O 6 vector } weights_4_V_ce1 { O 1 bit } weights_4_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name weights_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_5_V \
    op interface \
    ports { weights_5_V_address0 { O 6 vector } weights_5_V_ce0 { O 1 bit } weights_5_V_q0 { I 16 vector } weights_5_V_address1 { O 6 vector } weights_5_V_ce1 { O 1 bit } weights_5_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name weights_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_6_V \
    op interface \
    ports { weights_6_V_address0 { O 6 vector } weights_6_V_ce0 { O 1 bit } weights_6_V_q0 { I 16 vector } weights_6_V_address1 { O 6 vector } weights_6_V_ce1 { O 1 bit } weights_6_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name weights_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_7_V \
    op interface \
    ports { weights_7_V_address0 { O 6 vector } weights_7_V_ce0 { O 1 bit } weights_7_V_q0 { I 16 vector } weights_7_V_address1 { O 6 vector } weights_7_V_ce1 { O 1 bit } weights_7_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name weights_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_8_V \
    op interface \
    ports { weights_8_V_address0 { O 6 vector } weights_8_V_ce0 { O 1 bit } weights_8_V_q0 { I 16 vector } weights_8_V_address1 { O 6 vector } weights_8_V_ce1 { O 1 bit } weights_8_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name weights_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_9_V \
    op interface \
    ports { weights_9_V_address0 { O 6 vector } weights_9_V_ce0 { O 1 bit } weights_9_V_q0 { I 16 vector } weights_9_V_address1 { O 6 vector } weights_9_V_ce1 { O 1 bit } weights_9_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name weights_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_10_V \
    op interface \
    ports { weights_10_V_address0 { O 6 vector } weights_10_V_ce0 { O 1 bit } weights_10_V_q0 { I 16 vector } weights_10_V_address1 { O 6 vector } weights_10_V_ce1 { O 1 bit } weights_10_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name weights_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_11_V \
    op interface \
    ports { weights_11_V_address0 { O 6 vector } weights_11_V_ce0 { O 1 bit } weights_11_V_q0 { I 16 vector } weights_11_V_address1 { O 6 vector } weights_11_V_ce1 { O 1 bit } weights_11_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name weights_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_12_V \
    op interface \
    ports { weights_12_V_address0 { O 6 vector } weights_12_V_ce0 { O 1 bit } weights_12_V_q0 { I 16 vector } weights_12_V_address1 { O 6 vector } weights_12_V_ce1 { O 1 bit } weights_12_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name weights_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_13_V \
    op interface \
    ports { weights_13_V_address0 { O 6 vector } weights_13_V_ce0 { O 1 bit } weights_13_V_q0 { I 16 vector } weights_13_V_address1 { O 6 vector } weights_13_V_ce1 { O 1 bit } weights_13_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name weights_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_14_V \
    op interface \
    ports { weights_14_V_address0 { O 6 vector } weights_14_V_ce0 { O 1 bit } weights_14_V_q0 { I 16 vector } weights_14_V_address1 { O 6 vector } weights_14_V_ce1 { O 1 bit } weights_14_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name weights_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_15_V \
    op interface \
    ports { weights_15_V_address0 { O 6 vector } weights_15_V_ce0 { O 1 bit } weights_15_V_q0 { I 16 vector } weights_15_V_address1 { O 6 vector } weights_15_V_ce1 { O 1 bit } weights_15_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name weights_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_16_V \
    op interface \
    ports { weights_16_V_address0 { O 6 vector } weights_16_V_ce0 { O 1 bit } weights_16_V_q0 { I 16 vector } weights_16_V_address1 { O 6 vector } weights_16_V_ce1 { O 1 bit } weights_16_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name weights_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_17_V \
    op interface \
    ports { weights_17_V_address0 { O 6 vector } weights_17_V_ce0 { O 1 bit } weights_17_V_q0 { I 16 vector } weights_17_V_address1 { O 6 vector } weights_17_V_ce1 { O 1 bit } weights_17_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name weights_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_18_V \
    op interface \
    ports { weights_18_V_address0 { O 6 vector } weights_18_V_ce0 { O 1 bit } weights_18_V_q0 { I 16 vector } weights_18_V_address1 { O 6 vector } weights_18_V_ce1 { O 1 bit } weights_18_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name weights_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_19_V \
    op interface \
    ports { weights_19_V_address0 { O 6 vector } weights_19_V_ce0 { O 1 bit } weights_19_V_q0 { I 16 vector } weights_19_V_address1 { O 6 vector } weights_19_V_ce1 { O 1 bit } weights_19_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name weights_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_20_V \
    op interface \
    ports { weights_20_V_address0 { O 6 vector } weights_20_V_ce0 { O 1 bit } weights_20_V_q0 { I 16 vector } weights_20_V_address1 { O 6 vector } weights_20_V_ce1 { O 1 bit } weights_20_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name weights_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_21_V \
    op interface \
    ports { weights_21_V_address0 { O 6 vector } weights_21_V_ce0 { O 1 bit } weights_21_V_q0 { I 16 vector } weights_21_V_address1 { O 6 vector } weights_21_V_ce1 { O 1 bit } weights_21_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name weights_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_22_V \
    op interface \
    ports { weights_22_V_address0 { O 6 vector } weights_22_V_ce0 { O 1 bit } weights_22_V_q0 { I 16 vector } weights_22_V_address1 { O 6 vector } weights_22_V_ce1 { O 1 bit } weights_22_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name weights_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_23_V \
    op interface \
    ports { weights_23_V_address0 { O 6 vector } weights_23_V_ce0 { O 1 bit } weights_23_V_q0 { I 16 vector } weights_23_V_address1 { O 6 vector } weights_23_V_ce1 { O 1 bit } weights_23_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name weights_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_24_V \
    op interface \
    ports { weights_24_V_address0 { O 6 vector } weights_24_V_ce0 { O 1 bit } weights_24_V_q0 { I 16 vector } weights_24_V_address1 { O 6 vector } weights_24_V_ce1 { O 1 bit } weights_24_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name weights_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_25_V \
    op interface \
    ports { weights_25_V_address0 { O 6 vector } weights_25_V_ce0 { O 1 bit } weights_25_V_q0 { I 16 vector } weights_25_V_address1 { O 6 vector } weights_25_V_ce1 { O 1 bit } weights_25_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name weights_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_26_V \
    op interface \
    ports { weights_26_V_address0 { O 6 vector } weights_26_V_ce0 { O 1 bit } weights_26_V_q0 { I 16 vector } weights_26_V_address1 { O 6 vector } weights_26_V_ce1 { O 1 bit } weights_26_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name weights_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_27_V \
    op interface \
    ports { weights_27_V_address0 { O 6 vector } weights_27_V_ce0 { O 1 bit } weights_27_V_q0 { I 16 vector } weights_27_V_address1 { O 6 vector } weights_27_V_ce1 { O 1 bit } weights_27_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name weights_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_28_V \
    op interface \
    ports { weights_28_V_address0 { O 6 vector } weights_28_V_ce0 { O 1 bit } weights_28_V_q0 { I 16 vector } weights_28_V_address1 { O 6 vector } weights_28_V_ce1 { O 1 bit } weights_28_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name weights_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_29_V \
    op interface \
    ports { weights_29_V_address0 { O 6 vector } weights_29_V_ce0 { O 1 bit } weights_29_V_q0 { I 16 vector } weights_29_V_address1 { O 6 vector } weights_29_V_ce1 { O 1 bit } weights_29_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name weights_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_30_V \
    op interface \
    ports { weights_30_V_address0 { O 6 vector } weights_30_V_ce0 { O 1 bit } weights_30_V_q0 { I 16 vector } weights_30_V_address1 { O 6 vector } weights_30_V_ce1 { O 1 bit } weights_30_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name weights_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_31_V \
    op interface \
    ports { weights_31_V_address0 { O 6 vector } weights_31_V_ce0 { O 1 bit } weights_31_V_q0 { I 16 vector } weights_31_V_address1 { O 6 vector } weights_31_V_ce1 { O 1 bit } weights_31_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name bn_weight_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V \
    op interface \
    ports { bn_weight_V_address0 { O 2 vector } bn_weight_V_ce0 { O 1 bit } bn_weight_V_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 65 \
    name bn_weight_V32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V32 \
    op interface \
    ports { bn_weight_V32_address0 { O 2 vector } bn_weight_V32_ce0 { O 1 bit } bn_weight_V32_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 66 \
    name bn_weight_V33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V33 \
    op interface \
    ports { bn_weight_V33_address0 { O 2 vector } bn_weight_V33_ce0 { O 1 bit } bn_weight_V33_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name bn_weight_V34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V34 \
    op interface \
    ports { bn_weight_V34_address0 { O 2 vector } bn_weight_V34_ce0 { O 1 bit } bn_weight_V34_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name bn_weight_V35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V35 \
    op interface \
    ports { bn_weight_V35_address0 { O 2 vector } bn_weight_V35_ce0 { O 1 bit } bn_weight_V35_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name bn_weight_V36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V36 \
    op interface \
    ports { bn_weight_V36_address0 { O 2 vector } bn_weight_V36_ce0 { O 1 bit } bn_weight_V36_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name bn_weight_V37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V37 \
    op interface \
    ports { bn_weight_V37_address0 { O 2 vector } bn_weight_V37_ce0 { O 1 bit } bn_weight_V37_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name bn_weight_V38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V38 \
    op interface \
    ports { bn_weight_V38_address0 { O 2 vector } bn_weight_V38_ce0 { O 1 bit } bn_weight_V38_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name bn_weight_V39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V39 \
    op interface \
    ports { bn_weight_V39_address0 { O 2 vector } bn_weight_V39_ce0 { O 1 bit } bn_weight_V39_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name bn_weight_V40 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V40 \
    op interface \
    ports { bn_weight_V40_address0 { O 2 vector } bn_weight_V40_ce0 { O 1 bit } bn_weight_V40_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name bn_weight_V41 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V41 \
    op interface \
    ports { bn_weight_V41_address0 { O 2 vector } bn_weight_V41_ce0 { O 1 bit } bn_weight_V41_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name bn_weight_V42 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V42 \
    op interface \
    ports { bn_weight_V42_address0 { O 2 vector } bn_weight_V42_ce0 { O 1 bit } bn_weight_V42_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name bn_weight_V43 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V43 \
    op interface \
    ports { bn_weight_V43_address0 { O 2 vector } bn_weight_V43_ce0 { O 1 bit } bn_weight_V43_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name bn_weight_V44 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V44 \
    op interface \
    ports { bn_weight_V44_address0 { O 2 vector } bn_weight_V44_ce0 { O 1 bit } bn_weight_V44_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name bn_weight_V45 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V45 \
    op interface \
    ports { bn_weight_V45_address0 { O 2 vector } bn_weight_V45_ce0 { O 1 bit } bn_weight_V45_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 79 \
    name bn_weight_V46 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V46 \
    op interface \
    ports { bn_weight_V46_address0 { O 2 vector } bn_weight_V46_ce0 { O 1 bit } bn_weight_V46_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name bn_weight_V47 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V47 \
    op interface \
    ports { bn_weight_V47_address0 { O 2 vector } bn_weight_V47_ce0 { O 1 bit } bn_weight_V47_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name bn_weight_V48 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V48 \
    op interface \
    ports { bn_weight_V48_address0 { O 2 vector } bn_weight_V48_ce0 { O 1 bit } bn_weight_V48_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name bn_weight_V49 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V49 \
    op interface \
    ports { bn_weight_V49_address0 { O 2 vector } bn_weight_V49_ce0 { O 1 bit } bn_weight_V49_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name bn_weight_V50 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V50 \
    op interface \
    ports { bn_weight_V50_address0 { O 2 vector } bn_weight_V50_ce0 { O 1 bit } bn_weight_V50_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name bn_weight_V51 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V51 \
    op interface \
    ports { bn_weight_V51_address0 { O 2 vector } bn_weight_V51_ce0 { O 1 bit } bn_weight_V51_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name bn_weight_V52 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V52 \
    op interface \
    ports { bn_weight_V52_address0 { O 2 vector } bn_weight_V52_ce0 { O 1 bit } bn_weight_V52_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name bn_weight_V53 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V53 \
    op interface \
    ports { bn_weight_V53_address0 { O 2 vector } bn_weight_V53_ce0 { O 1 bit } bn_weight_V53_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name bn_weight_V54 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V54 \
    op interface \
    ports { bn_weight_V54_address0 { O 2 vector } bn_weight_V54_ce0 { O 1 bit } bn_weight_V54_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name bn_weight_V55 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V55 \
    op interface \
    ports { bn_weight_V55_address0 { O 2 vector } bn_weight_V55_ce0 { O 1 bit } bn_weight_V55_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name bn_weight_V56 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V56 \
    op interface \
    ports { bn_weight_V56_address0 { O 2 vector } bn_weight_V56_ce0 { O 1 bit } bn_weight_V56_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name bn_weight_V57 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V57 \
    op interface \
    ports { bn_weight_V57_address0 { O 2 vector } bn_weight_V57_ce0 { O 1 bit } bn_weight_V57_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name bn_weight_V58 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V58 \
    op interface \
    ports { bn_weight_V58_address0 { O 2 vector } bn_weight_V58_ce0 { O 1 bit } bn_weight_V58_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name bn_weight_V59 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V59 \
    op interface \
    ports { bn_weight_V59_address0 { O 2 vector } bn_weight_V59_ce0 { O 1 bit } bn_weight_V59_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name bn_weight_V60 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V60 \
    op interface \
    ports { bn_weight_V60_address0 { O 2 vector } bn_weight_V60_ce0 { O 1 bit } bn_weight_V60_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name bn_weight_V61 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V61 \
    op interface \
    ports { bn_weight_V61_address0 { O 2 vector } bn_weight_V61_ce0 { O 1 bit } bn_weight_V61_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name bn_weight_V62 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_weight_V62 \
    op interface \
    ports { bn_weight_V62_address0 { O 2 vector } bn_weight_V62_ce0 { O 1 bit } bn_weight_V62_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_weight_V62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name bn_bias_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V \
    op interface \
    ports { bn_bias_V_address0 { O 2 vector } bn_bias_V_ce0 { O 1 bit } bn_bias_V_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name bn_bias_V63 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V63 \
    op interface \
    ports { bn_bias_V63_address0 { O 2 vector } bn_bias_V63_ce0 { O 1 bit } bn_bias_V63_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V63'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name bn_bias_V64 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V64 \
    op interface \
    ports { bn_bias_V64_address0 { O 2 vector } bn_bias_V64_ce0 { O 1 bit } bn_bias_V64_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V64'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name bn_bias_V65 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V65 \
    op interface \
    ports { bn_bias_V65_address0 { O 2 vector } bn_bias_V65_ce0 { O 1 bit } bn_bias_V65_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V65'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name bn_bias_V66 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V66 \
    op interface \
    ports { bn_bias_V66_address0 { O 2 vector } bn_bias_V66_ce0 { O 1 bit } bn_bias_V66_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V66'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name bn_bias_V67 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V67 \
    op interface \
    ports { bn_bias_V67_address0 { O 2 vector } bn_bias_V67_ce0 { O 1 bit } bn_bias_V67_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V67'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name bn_bias_V68 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V68 \
    op interface \
    ports { bn_bias_V68_address0 { O 2 vector } bn_bias_V68_ce0 { O 1 bit } bn_bias_V68_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V68'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 104 \
    name bn_bias_V69 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V69 \
    op interface \
    ports { bn_bias_V69_address0 { O 2 vector } bn_bias_V69_ce0 { O 1 bit } bn_bias_V69_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V69'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 105 \
    name bn_bias_V70 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V70 \
    op interface \
    ports { bn_bias_V70_address0 { O 2 vector } bn_bias_V70_ce0 { O 1 bit } bn_bias_V70_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V70'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 106 \
    name bn_bias_V71 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V71 \
    op interface \
    ports { bn_bias_V71_address0 { O 2 vector } bn_bias_V71_ce0 { O 1 bit } bn_bias_V71_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V71'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 107 \
    name bn_bias_V72 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V72 \
    op interface \
    ports { bn_bias_V72_address0 { O 2 vector } bn_bias_V72_ce0 { O 1 bit } bn_bias_V72_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V72'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 108 \
    name bn_bias_V73 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V73 \
    op interface \
    ports { bn_bias_V73_address0 { O 2 vector } bn_bias_V73_ce0 { O 1 bit } bn_bias_V73_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V73'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 109 \
    name bn_bias_V74 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V74 \
    op interface \
    ports { bn_bias_V74_address0 { O 2 vector } bn_bias_V74_ce0 { O 1 bit } bn_bias_V74_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V74'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 110 \
    name bn_bias_V75 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V75 \
    op interface \
    ports { bn_bias_V75_address0 { O 2 vector } bn_bias_V75_ce0 { O 1 bit } bn_bias_V75_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V75'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 111 \
    name bn_bias_V76 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V76 \
    op interface \
    ports { bn_bias_V76_address0 { O 2 vector } bn_bias_V76_ce0 { O 1 bit } bn_bias_V76_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V76'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name bn_bias_V77 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V77 \
    op interface \
    ports { bn_bias_V77_address0 { O 2 vector } bn_bias_V77_ce0 { O 1 bit } bn_bias_V77_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V77'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 113 \
    name bn_bias_V78 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V78 \
    op interface \
    ports { bn_bias_V78_address0 { O 2 vector } bn_bias_V78_ce0 { O 1 bit } bn_bias_V78_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V78'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 114 \
    name bn_bias_V79 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V79 \
    op interface \
    ports { bn_bias_V79_address0 { O 2 vector } bn_bias_V79_ce0 { O 1 bit } bn_bias_V79_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V79'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 115 \
    name bn_bias_V80 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V80 \
    op interface \
    ports { bn_bias_V80_address0 { O 2 vector } bn_bias_V80_ce0 { O 1 bit } bn_bias_V80_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V80'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 116 \
    name bn_bias_V81 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V81 \
    op interface \
    ports { bn_bias_V81_address0 { O 2 vector } bn_bias_V81_ce0 { O 1 bit } bn_bias_V81_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V81'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 117 \
    name bn_bias_V82 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V82 \
    op interface \
    ports { bn_bias_V82_address0 { O 2 vector } bn_bias_V82_ce0 { O 1 bit } bn_bias_V82_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V82'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 118 \
    name bn_bias_V83 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V83 \
    op interface \
    ports { bn_bias_V83_address0 { O 2 vector } bn_bias_V83_ce0 { O 1 bit } bn_bias_V83_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V83'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 119 \
    name bn_bias_V84 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V84 \
    op interface \
    ports { bn_bias_V84_address0 { O 2 vector } bn_bias_V84_ce0 { O 1 bit } bn_bias_V84_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V84'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 120 \
    name bn_bias_V85 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V85 \
    op interface \
    ports { bn_bias_V85_address0 { O 2 vector } bn_bias_V85_ce0 { O 1 bit } bn_bias_V85_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V85'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 121 \
    name bn_bias_V86 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V86 \
    op interface \
    ports { bn_bias_V86_address0 { O 2 vector } bn_bias_V86_ce0 { O 1 bit } bn_bias_V86_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V86'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 122 \
    name bn_bias_V87 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V87 \
    op interface \
    ports { bn_bias_V87_address0 { O 2 vector } bn_bias_V87_ce0 { O 1 bit } bn_bias_V87_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V87'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 123 \
    name bn_bias_V88 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V88 \
    op interface \
    ports { bn_bias_V88_address0 { O 2 vector } bn_bias_V88_ce0 { O 1 bit } bn_bias_V88_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V88'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 124 \
    name bn_bias_V89 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V89 \
    op interface \
    ports { bn_bias_V89_address0 { O 2 vector } bn_bias_V89_ce0 { O 1 bit } bn_bias_V89_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V89'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 125 \
    name bn_bias_V90 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V90 \
    op interface \
    ports { bn_bias_V90_address0 { O 2 vector } bn_bias_V90_ce0 { O 1 bit } bn_bias_V90_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V90'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 126 \
    name bn_bias_V91 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V91 \
    op interface \
    ports { bn_bias_V91_address0 { O 2 vector } bn_bias_V91_ce0 { O 1 bit } bn_bias_V91_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V91'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 127 \
    name bn_bias_V92 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V92 \
    op interface \
    ports { bn_bias_V92_address0 { O 2 vector } bn_bias_V92_ce0 { O 1 bit } bn_bias_V92_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V92'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 128 \
    name bn_bias_V93 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bn_bias_V93 \
    op interface \
    ports { bn_bias_V93_address0 { O 2 vector } bn_bias_V93_ce0 { O 1 bit } bn_bias_V93_q0 { I 11 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bn_bias_V93'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 130 \
    name top_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_0_V \
    op interface \
    ports { top_0_V_address0 { O 7 vector } top_0_V_ce0 { O 1 bit } top_0_V_we0 { O 1 bit } top_0_V_d0 { O 14 vector } top_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 131 \
    name top_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_1_V \
    op interface \
    ports { top_1_V_address0 { O 7 vector } top_1_V_ce0 { O 1 bit } top_1_V_we0 { O 1 bit } top_1_V_d0 { O 14 vector } top_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 132 \
    name top_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_2_V \
    op interface \
    ports { top_2_V_address0 { O 7 vector } top_2_V_ce0 { O 1 bit } top_2_V_we0 { O 1 bit } top_2_V_d0 { O 14 vector } top_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 133 \
    name top_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_3_V \
    op interface \
    ports { top_3_V_address0 { O 7 vector } top_3_V_ce0 { O 1 bit } top_3_V_we0 { O 1 bit } top_3_V_d0 { O 14 vector } top_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 134 \
    name top_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_4_V \
    op interface \
    ports { top_4_V_address0 { O 7 vector } top_4_V_ce0 { O 1 bit } top_4_V_we0 { O 1 bit } top_4_V_d0 { O 14 vector } top_4_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 135 \
    name top_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_5_V \
    op interface \
    ports { top_5_V_address0 { O 7 vector } top_5_V_ce0 { O 1 bit } top_5_V_we0 { O 1 bit } top_5_V_d0 { O 14 vector } top_5_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 136 \
    name top_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_6_V \
    op interface \
    ports { top_6_V_address0 { O 7 vector } top_6_V_ce0 { O 1 bit } top_6_V_we0 { O 1 bit } top_6_V_d0 { O 14 vector } top_6_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 137 \
    name top_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_7_V \
    op interface \
    ports { top_7_V_address0 { O 7 vector } top_7_V_ce0 { O 1 bit } top_7_V_we0 { O 1 bit } top_7_V_d0 { O 14 vector } top_7_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 138 \
    name top_8_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_8_V \
    op interface \
    ports { top_8_V_address0 { O 7 vector } top_8_V_ce0 { O 1 bit } top_8_V_we0 { O 1 bit } top_8_V_d0 { O 14 vector } top_8_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 139 \
    name top_9_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_9_V \
    op interface \
    ports { top_9_V_address0 { O 7 vector } top_9_V_ce0 { O 1 bit } top_9_V_we0 { O 1 bit } top_9_V_d0 { O 14 vector } top_9_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 140 \
    name top_10_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_10_V \
    op interface \
    ports { top_10_V_address0 { O 7 vector } top_10_V_ce0 { O 1 bit } top_10_V_we0 { O 1 bit } top_10_V_d0 { O 14 vector } top_10_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 141 \
    name top_11_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_11_V \
    op interface \
    ports { top_11_V_address0 { O 7 vector } top_11_V_ce0 { O 1 bit } top_11_V_we0 { O 1 bit } top_11_V_d0 { O 14 vector } top_11_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 142 \
    name top_12_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_12_V \
    op interface \
    ports { top_12_V_address0 { O 7 vector } top_12_V_ce0 { O 1 bit } top_12_V_we0 { O 1 bit } top_12_V_d0 { O 14 vector } top_12_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 143 \
    name top_13_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_13_V \
    op interface \
    ports { top_13_V_address0 { O 7 vector } top_13_V_ce0 { O 1 bit } top_13_V_we0 { O 1 bit } top_13_V_d0 { O 14 vector } top_13_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 144 \
    name top_14_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_14_V \
    op interface \
    ports { top_14_V_address0 { O 7 vector } top_14_V_ce0 { O 1 bit } top_14_V_we0 { O 1 bit } top_14_V_d0 { O 14 vector } top_14_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 145 \
    name top_15_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_15_V \
    op interface \
    ports { top_15_V_address0 { O 7 vector } top_15_V_ce0 { O 1 bit } top_15_V_we0 { O 1 bit } top_15_V_d0 { O 14 vector } top_15_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 146 \
    name top_16_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_16_V \
    op interface \
    ports { top_16_V_address0 { O 7 vector } top_16_V_ce0 { O 1 bit } top_16_V_we0 { O 1 bit } top_16_V_d0 { O 14 vector } top_16_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 147 \
    name top_17_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_17_V \
    op interface \
    ports { top_17_V_address0 { O 7 vector } top_17_V_ce0 { O 1 bit } top_17_V_we0 { O 1 bit } top_17_V_d0 { O 14 vector } top_17_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 148 \
    name top_18_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_18_V \
    op interface \
    ports { top_18_V_address0 { O 7 vector } top_18_V_ce0 { O 1 bit } top_18_V_we0 { O 1 bit } top_18_V_d0 { O 14 vector } top_18_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 149 \
    name top_19_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_19_V \
    op interface \
    ports { top_19_V_address0 { O 7 vector } top_19_V_ce0 { O 1 bit } top_19_V_we0 { O 1 bit } top_19_V_d0 { O 14 vector } top_19_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 150 \
    name top_20_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_20_V \
    op interface \
    ports { top_20_V_address0 { O 7 vector } top_20_V_ce0 { O 1 bit } top_20_V_we0 { O 1 bit } top_20_V_d0 { O 14 vector } top_20_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 151 \
    name top_21_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_21_V \
    op interface \
    ports { top_21_V_address0 { O 7 vector } top_21_V_ce0 { O 1 bit } top_21_V_we0 { O 1 bit } top_21_V_d0 { O 14 vector } top_21_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 152 \
    name top_22_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_22_V \
    op interface \
    ports { top_22_V_address0 { O 7 vector } top_22_V_ce0 { O 1 bit } top_22_V_we0 { O 1 bit } top_22_V_d0 { O 14 vector } top_22_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 153 \
    name top_23_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_23_V \
    op interface \
    ports { top_23_V_address0 { O 7 vector } top_23_V_ce0 { O 1 bit } top_23_V_we0 { O 1 bit } top_23_V_d0 { O 14 vector } top_23_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 154 \
    name top_24_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_24_V \
    op interface \
    ports { top_24_V_address0 { O 7 vector } top_24_V_ce0 { O 1 bit } top_24_V_we0 { O 1 bit } top_24_V_d0 { O 14 vector } top_24_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 155 \
    name top_25_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_25_V \
    op interface \
    ports { top_25_V_address0 { O 7 vector } top_25_V_ce0 { O 1 bit } top_25_V_we0 { O 1 bit } top_25_V_d0 { O 14 vector } top_25_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 156 \
    name top_26_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_26_V \
    op interface \
    ports { top_26_V_address0 { O 7 vector } top_26_V_ce0 { O 1 bit } top_26_V_we0 { O 1 bit } top_26_V_d0 { O 14 vector } top_26_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 157 \
    name top_27_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_27_V \
    op interface \
    ports { top_27_V_address0 { O 7 vector } top_27_V_ce0 { O 1 bit } top_27_V_we0 { O 1 bit } top_27_V_d0 { O 14 vector } top_27_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 158 \
    name top_28_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_28_V \
    op interface \
    ports { top_28_V_address0 { O 7 vector } top_28_V_ce0 { O 1 bit } top_28_V_q0 { I 14 vector } top_28_V_address1 { O 7 vector } top_28_V_ce1 { O 1 bit } top_28_V_we1 { O 1 bit } top_28_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 159 \
    name top_29_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_29_V \
    op interface \
    ports { top_29_V_address0 { O 7 vector } top_29_V_ce0 { O 1 bit } top_29_V_q0 { I 14 vector } top_29_V_address1 { O 7 vector } top_29_V_ce1 { O 1 bit } top_29_V_we1 { O 1 bit } top_29_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 160 \
    name top_30_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_30_V \
    op interface \
    ports { top_30_V_address0 { O 7 vector } top_30_V_ce0 { O 1 bit } top_30_V_q0 { I 14 vector } top_30_V_address1 { O 7 vector } top_30_V_ce1 { O 1 bit } top_30_V_we1 { O 1 bit } top_30_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 161 \
    name top_31_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_31_V \
    op interface \
    ports { top_31_V_address0 { O 7 vector } top_31_V_ce0 { O 1 bit } top_31_V_q0 { I 14 vector } top_31_V_address1 { O 7 vector } top_31_V_ce1 { O 1 bit } top_31_V_we1 { O 1 bit } top_31_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_31_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name weights_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_V_offset \
    op interface \
    ports { weights_V_offset { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 96 \
    name bn_weight_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_weight_V_offset \
    op interface \
    ports { bn_weight_V_offset { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name bn_bias_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bn_bias_V_offset \
    op interface \
    ports { bn_bias_V_offset { I 3 vector } } \
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


