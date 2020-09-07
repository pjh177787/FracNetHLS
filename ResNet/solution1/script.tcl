############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ResNet
set_top ResNet
add_files ResNet/biconv.cc
add_files ResNet/matmul.cc
add_files ResNet/net_hls.cc
add_files ResNet/net_hls.h
add_files ResNet/pgconv64.h
add_files ResNet/weights.h
open_solution "solution1"
set_part {xczu3eg-sbva484-1-e}
create_clock -period 10 -name default
#source "./ResNet/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
