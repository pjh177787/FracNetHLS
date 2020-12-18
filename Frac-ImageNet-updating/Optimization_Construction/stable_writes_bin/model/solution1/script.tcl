############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project model
set_top FracNet
add_files bnn.cc
add_files bnn.h
add_files dimension_def.h
add_files layer.h
add_files pgconv.h
add_files typedefs.h
add_files -tb array_def.h -cflags "-Wno-unknown-pragmas"
add_files -tb conv1_input.bin -cflags "-Wno-unknown-pragmas"
add_files -tb conv1x1_weights.bin -cflags "-Wno-unknown-pragmas"
add_files -tb conv3x3_weights.bin -cflags "-Wno-unknown-pragmas"
add_files -tb other_weights.bin -cflags "-Wno-unknown-pragmas"
add_files -tb tb.cc -cflags "-Wno-unknown-pragmas"
add_files -tb layer_outputs -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu3eg-sbva484-1-e}
create_clock -period 4 -name default
config_sdx -target none
config_export -format ip_catalog -rtl verilog -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
set_clock_uncertainty 12.5%
#source "./model/solution1/directives.tcl"
csim_design -ldflags {-Wl,--stack,268435456} -clean -O
csynth_design
cosim_design -O -ldflags {-Wl,--stack,268435456}
export_design -flow syn -rtl verilog -format ip_catalog
