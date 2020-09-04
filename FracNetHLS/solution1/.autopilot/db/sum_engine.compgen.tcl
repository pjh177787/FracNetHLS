# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name t0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t0_V \
    op interface \
    ports { t0_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name t1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t1_V \
    op interface \
    ports { t1_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name t2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t2_V \
    op interface \
    ports { t2_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name t3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t3_V \
    op interface \
    ports { t3_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name t4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t4_V \
    op interface \
    ports { t4_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name t5_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t5_V \
    op interface \
    ports { t5_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name t6_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t6_V \
    op interface \
    ports { t6_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name t7_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t7_V \
    op interface \
    ports { t7_V { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name t8_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_t8_V \
    op interface \
    ports { t8_V { I 6 vector } } \
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
    ports { ap_ready { O 1 bit } } \
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
    ports { ap_return { O 8 vector } } \
} "
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


