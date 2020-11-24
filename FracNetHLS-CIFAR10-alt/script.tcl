############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project model -reset
set_top FracNet_T
add_files biconv.h
add_files bnn.h
add_files bnn_tiled.cc
add_files dimension_def.h
add_files layer.h
add_files pgconv.h
add_files typedefs.h
add_files weights_fracnet_64.h
add_files -tb bin/conv1_input.bin
add_files -tb bin/labels.bin
add_files -tb tb.cc -cflags "-Wno-unknown-pragmas"
add_files -tb weights_tb.h -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu3eg-sbva484-1-e}
create_clock -period 8 -name default
config_sdx -target none
config_export -format ip_catalog -rtl verilog -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
set_clock_uncertainty 12.5%
#source "./model/solution1/directives.tcl"
#csim_design -clean
#csynth_design
#cosim_design
#export_design -rtl verilog -format ip_catalog
