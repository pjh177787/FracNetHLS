create_project [lindex $argv 0] [lindex $argv 1]/[lindex $argv 0]/ -part xczu3eg-sbva484-1-e

set_property board_part em.avnet.com:ultra96v2:part0:1.0 [current_project]
set_property  ip_repo_paths  ./ip [current_project]
update_ip_catalog

create_bd_design "design_1"
update_compile_order -fileset sources_1

startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:zynq_ultra_ps_e:3.3 zynq_ultra_ps_e_0
endgroup

apply_bd_automation -rule xilinx.com:bd_rule:zynq_ultra_ps_e -config {apply_board_preset "1" }  [get_bd_cells zynq_ultra_ps_e_0]
set_property -dict [list CONFIG.PSU__CRL_APB__PL0_REF_CTRL__SRCSEL {IOPLL}] [get_bd_cells zynq_ultra_ps_e_0]
set_property -dict [list CONFIG.PSU__USE__S_AXI_GP2 {1} CONFIG.PSU__USE__S_AXI_GP3 {1} CONFIG.PSU__USE__S_AXI_GP4 {1}] [get_bd_cells zynq_ultra_ps_e_0]
set_property -dict [list CONFIG.PSU__USE__M_AXI_GP1 {0}] [get_bd_cells zynq_ultra_ps_e_0]

startgroup
create_bd_cell -type ip -vlnv xilinx.com:hls:FracNet:1.0 FracNet_0
endgroup

startgroup
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {Auto} Clk_slave {Auto} Clk_xbar {Auto} Master {/zynq_ultra_ps_e_0/M_AXI_HPM0_FPD} Slave {/FracNet_0/s_axi_CTRL} ddr_seg {Auto} intc_ip {New AXI Interconnect} master_apm {0}}  [get_bd_intf_pins FracNet_0/s_axi_CTRL]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {Auto} Clk_slave {Auto} Clk_xbar {Auto} Master {/FracNet_0/m_axi_BUS32} Slave {/zynq_ultra_ps_e_0/S_AXI_HP0_FPD} ddr_seg {Auto} intc_ip {New AXI SmartConnect} master_apm {0}}  [get_bd_intf_pins zynq_ultra_ps_e_0/S_AXI_HP0_FPD]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {Auto} Clk_slave {Auto} Clk_xbar {Auto} Master {/FracNet_0/m_axi_BUS512} Slave {/zynq_ultra_ps_e_0/S_AXI_HP1_FPD} ddr_seg {Auto} intc_ip {New AXI SmartConnect} master_apm {0}}  [get_bd_intf_pins zynq_ultra_ps_e_0/S_AXI_HP1_FPD]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {Auto} Clk_slave {Auto} Clk_xbar {Auto} Master {/FracNet_0/m_axi_DDR512} Slave {/zynq_ultra_ps_e_0/S_AXI_HP2_FPD} ddr_seg {Auto} intc_ip {New AXI SmartConnect} master_apm {0}}  [get_bd_intf_pins zynq_ultra_ps_e_0/S_AXI_HP2_FPD]
endgroup

generate_target all [get_files  [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].srcs/sources_1/bd/design_1/design_1.bd]
catch { config_ip_cache -export [get_ips -all design_1_zynq_ultra_ps_e_0_0] }
catch { config_ip_cache -export [get_ips -all design_1_FracNet_0_1] }
catch { config_ip_cache -export [get_ips -all design_1_auto_ds_0] }
catch { config_ip_cache -export [get_ips -all design_1_auto_pc_0] }
catch { config_ip_cache -export [get_ips -all design_1_rst_ps8_0_250M_0] }
catch { config_ip_cache -export [get_ips -all design_1_axi_smc_0] }
catch { config_ip_cache -export [get_ips -all design_1_axi_smc_1_0] }
catch { config_ip_cache -export [get_ips -all design_1_axi_smc_2_0] }
export_ip_user_files -of_objects [get_files [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].srcs/sources_1/bd/design_1/design_1.bd] -no_script -sync -force -quiet
create_ip_run [get_files -of_objects [get_fileset sources_1] [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].srcs/sources_1/bd/design_1/design_1.bd]
launch_runs -jobs 12 {design_1_zynq_ultra_ps_e_0_0_synth_1 design_1_FracNet_0_1_synth_1 design_1_auto_ds_0_synth_1 design_1_auto_pc_0_synth_1 design_1_rst_ps8_0_250M_0_synth_1 design_1_axi_smc_0_synth_1 design_1_axi_smc_1_0_synth_1 design_1_axi_smc_2_0_synth_1}
export_simulation -of_objects [get_files [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].srcs/sources_1/bd/design_1/design_1.bd] -directory [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].ip_user_files/sim_scripts -ip_user_files_dir [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].ip_user_files -ipstatic_source_dir [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].ip_user_files/ipstatic -lib_map_path [list {modelsim=[lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].cache/compile_simlib/modelsim} {questa=[lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].cache/compile_simlib/questa} {riviera=[lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].cache/compile_simlib/riviera} {activehdl=[lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].cache/compile_simlib/activehdl}] -use_ip_compiled_libs -force -quiet

make_wrapper -files [get_files [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].srcs/sources_1/bd/design_1/design_1.bd] -top
add_files -norecurse [lindex $argv 1]/[lindex $argv 0]/[lindex $argv 0].srcs/sources_1/bd/design_1/hdl/design_1_wrapper.v

launch_runs impl_1 -to_step write_bitstream -jobs 12
