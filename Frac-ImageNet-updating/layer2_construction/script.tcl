############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project model -reset
add_files -tb conv1_input.bin
add_files -tb conv1x1_weights.bin
add_files -tb conv3x3_weights.bin
add_files -tb other_weights.bin
add_files -tb tb.cc
open_solution "solution1"
set_part {xc7vx485t-ffg1157-1}
create_clock -period 10 -name default
#source "./FracNetHLS-ImageNet-pg-alt/solution1/directives.tcl"
csim_design -clean -ldflags {-Wl,--stack,10485760} 
#csynth_design
#cosim_design -ldflags {-Wl,--stack,10485760} 
export_design -format ip_catalog
