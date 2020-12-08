############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project model
set_top load_layer_1D_weights
add_files bnn.cc
add_files bnn.h
add_files dimension_def.h
add_files layer.h
add_files pgconv.h
add_files typedefs.h
add_files weights_conv1_32_ch32.h
add_files -tb array_def.h
add_files -tb conv1_input.bin -cflags "-Wno-unknown-pragmas"
add_files -tb conv1x1_weights.bin -cflags "-Wno-unknown-pragmas"
add_files -tb conv3x3_weights.bin -cflags "-Wno-unknown-pragmas"
add_files -tb other_weights.bin -cflags "-Wno-unknown-pragmas"
add_files -tb tb.cc -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu3eg-sbva484-1-e}
create_clock -period 10 -name default
config_sdx -optimization_level none -target none
config_export -vivado_optimization_level 2
set_clock_uncertainty 12.5%
#source "./model/solution1/directives.tcl"
csim_design -ldflags {-Wl,--stack,268435456} -clean -O
csynth_design
cosim_design -O -reduce_diskspace -ldflags {-Wl,--stack,268435456}
export_design -rtl verilog -format ip_catalog
