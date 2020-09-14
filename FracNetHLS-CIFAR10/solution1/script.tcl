############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project FracNetHLS
set_top pgconv32_2bit
add_files FracNetHLS/biconv.cc
add_files FracNetHLS/matmul.cc
add_files FracNetHLS/net_hls.h
add_files FracNetHLS/pgconv.cc
open_solution "solution1"
set_part {xczu3eg-sbva484-1-e}
create_clock -period 10 -name default
config_sdx -optimization_level none -target none
config_export -vivado_optimization_level 2
#source "./FracNetHLS/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
