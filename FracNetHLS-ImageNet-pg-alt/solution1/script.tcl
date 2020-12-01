############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project FracNetHLS-ImageNet-pg-alt
add_files -tb FracNetHLS-ImageNet-pg-alt/conv1_input.bin
add_files -tb FracNetHLS-ImageNet-pg-alt/conv1x1_weights.bin
add_files -tb FracNetHLS-ImageNet-pg-alt/conv3x3_weights.bin
add_files -tb FracNetHLS-ImageNet-pg-alt/other_weights.bin
add_files -tb FracNetHLS-ImageNet-pg-alt/tb.cc
open_solution "solution1"
set_part {xc7vx485tffg1157-1}
create_clock -period 10 -name default
#source "./FracNetHLS-ImageNet-pg-alt/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -format ip_catalog
