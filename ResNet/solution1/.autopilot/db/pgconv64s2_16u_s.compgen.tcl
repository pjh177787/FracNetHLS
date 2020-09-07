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
    id 179 \
    name bottom1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bottom1_V \
    op interface \
    ports { bottom1_V_address0 { O 7 vector } bottom1_V_ce0 { O 1 bit } bottom1_V_q0 { I 64 vector } bottom1_V_address1 { O 7 vector } bottom1_V_ce1 { O 1 bit } bottom1_V_q1 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bottom1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 182 \
    name top_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_0_V \
    op interface \
    ports { top_0_V_address0 { O 7 vector } top_0_V_ce0 { O 1 bit } top_0_V_we0 { O 1 bit } top_0_V_d0 { O 12 vector } top_0_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 183 \
    name top_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_1_V \
    op interface \
    ports { top_1_V_address0 { O 7 vector } top_1_V_ce0 { O 1 bit } top_1_V_we0 { O 1 bit } top_1_V_d0 { O 12 vector } top_1_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 184 \
    name top_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_2_V \
    op interface \
    ports { top_2_V_address0 { O 7 vector } top_2_V_ce0 { O 1 bit } top_2_V_we0 { O 1 bit } top_2_V_d0 { O 12 vector } top_2_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 185 \
    name top_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_3_V \
    op interface \
    ports { top_3_V_address0 { O 7 vector } top_3_V_ce0 { O 1 bit } top_3_V_we0 { O 1 bit } top_3_V_d0 { O 12 vector } top_3_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 186 \
    name top_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_4_V \
    op interface \
    ports { top_4_V_address0 { O 7 vector } top_4_V_ce0 { O 1 bit } top_4_V_we0 { O 1 bit } top_4_V_d0 { O 12 vector } top_4_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 187 \
    name top_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_5_V \
    op interface \
    ports { top_5_V_address0 { O 7 vector } top_5_V_ce0 { O 1 bit } top_5_V_we0 { O 1 bit } top_5_V_d0 { O 12 vector } top_5_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 188 \
    name top_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_6_V \
    op interface \
    ports { top_6_V_address0 { O 7 vector } top_6_V_ce0 { O 1 bit } top_6_V_we0 { O 1 bit } top_6_V_d0 { O 12 vector } top_6_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 189 \
    name top_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_7_V \
    op interface \
    ports { top_7_V_address0 { O 7 vector } top_7_V_ce0 { O 1 bit } top_7_V_we0 { O 1 bit } top_7_V_d0 { O 12 vector } top_7_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 190 \
    name top_8_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_8_V \
    op interface \
    ports { top_8_V_address0 { O 7 vector } top_8_V_ce0 { O 1 bit } top_8_V_we0 { O 1 bit } top_8_V_d0 { O 12 vector } top_8_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 191 \
    name top_9_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_9_V \
    op interface \
    ports { top_9_V_address0 { O 7 vector } top_9_V_ce0 { O 1 bit } top_9_V_we0 { O 1 bit } top_9_V_d0 { O 12 vector } top_9_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 192 \
    name top_10_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_10_V \
    op interface \
    ports { top_10_V_address0 { O 7 vector } top_10_V_ce0 { O 1 bit } top_10_V_we0 { O 1 bit } top_10_V_d0 { O 12 vector } top_10_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 193 \
    name top_11_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_11_V \
    op interface \
    ports { top_11_V_address0 { O 7 vector } top_11_V_ce0 { O 1 bit } top_11_V_we0 { O 1 bit } top_11_V_d0 { O 12 vector } top_11_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 194 \
    name top_12_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_12_V \
    op interface \
    ports { top_12_V_address0 { O 7 vector } top_12_V_ce0 { O 1 bit } top_12_V_we0 { O 1 bit } top_12_V_d0 { O 12 vector } top_12_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 195 \
    name top_13_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_13_V \
    op interface \
    ports { top_13_V_address0 { O 7 vector } top_13_V_ce0 { O 1 bit } top_13_V_we0 { O 1 bit } top_13_V_d0 { O 12 vector } top_13_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 196 \
    name top_14_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_14_V \
    op interface \
    ports { top_14_V_address0 { O 7 vector } top_14_V_ce0 { O 1 bit } top_14_V_we0 { O 1 bit } top_14_V_d0 { O 12 vector } top_14_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 197 \
    name top_15_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename top_15_V \
    op interface \
    ports { top_15_V_address0 { O 7 vector } top_15_V_ce0 { O 1 bit } top_15_V_we0 { O 1 bit } top_15_V_d0 { O 12 vector } top_15_V_q0 { I 12 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'top_15_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name row_off \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row_off \
    op interface \
    ports { row_off { I 2 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name col_off \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_col_off \
    op interface \
    ports { col_off { I 2 vector } } \
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


