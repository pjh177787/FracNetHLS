-makelib xcelium_lib/xilinx_vip -sv \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
  "C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/rst_vip_if.sv" \
-endlib
-makelib xcelium_lib/xpm -sv \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/sim/design_1.v" \
-endlib
-makelib xcelium_lib/axi_infrastructure_v1_1_0 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/axi_vip_v1_1_6 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/dc12/hdl/axi_vip_v1_1_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/zynq_ultra_ps_e_vip_v1_0_6 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl/zynq_ultra_ps_e_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim/design_1_zynq_ultra_ps_e_0_3_vip_wrapper.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/batch_norm.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/biconv16.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/compute_engine_16.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/compute_engine_16bkb.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/compute_engine_64.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/compute_engine_64eOg.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/fill_fm_buf.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/fill_fm_buf_bn_16u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/fill_fm_buf_bn_32u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/fill_fm_buf_bn_64u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/fill_fm_buf_inputdEe.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/matmul.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/matmul_linear_weikbM.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/pgconv64_16u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/pgconv64_32u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/pgconv64_64u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/pgconv64s2_16u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/pgconv64s2_32u_s.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/relu.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_AXILiteS_s_axi.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_BUS32_m_axi.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_conv1_out_0.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_conv1_out_4.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_conv1_weigKfY.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_conv1_weigwdI.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_fm_buf_V_0.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_fm_buf_V_16.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_image_buf_Ee0.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_IMG_m_axi.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_input_buf_xdS.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mac_muladdjbC.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_42_1_1_1.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_42_11_hbi.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_42_64_g8j.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_63_16_cud.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_104_12vdy.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_646_11ibs.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_646_12udo.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_mux_646_64fYi.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet_out_buf0_V_0.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/sum_engine.v" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/5e5d/hdl/verilog/ResNet.v" \
  "../../../bd/design_1/ip/design_1_ResNet_0_5/sim/design_1_ResNet_0_5.v" \
-endlib
-makelib xcelium_lib/generic_baseblocks_v2_1_0 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/fifo_generator_v13_2_5 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/276e/simulation/fifo_generator_vlog_beh.v" \
-endlib
-makelib xcelium_lib/fifo_generator_v13_2_5 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/276e/hdl/fifo_generator_v13_2_rfs.vhd" \
-endlib
-makelib xcelium_lib/fifo_generator_v13_2_5 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/276e/hdl/fifo_generator_v13_2_rfs.v" \
-endlib
-makelib xcelium_lib/axi_data_fifo_v2_1_19 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/60de/hdl/axi_data_fifo_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/axi_register_slice_v2_1_20 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/72d4/hdl/axi_register_slice_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/axi_protocol_converter_v2_1_20 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/c4a6/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/axi_clock_converter_v2_1_19 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/9e81/hdl/axi_clock_converter_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/blk_mem_gen_v8_4_4 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/2985/simulation/blk_mem_gen_v8_4.v" \
-endlib
-makelib xcelium_lib/axi_dwidth_converter_v2_1_20 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/d394/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_auto_ds_2/sim/design_1_auto_ds_2.v" \
  "../../../bd/design_1/ip/design_1_auto_pc_3/sim/design_1_auto_pc_3.v" \
-endlib
-makelib xcelium_lib/lib_cdc_v1_0_2 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \
-endlib
-makelib xcelium_lib/proc_sys_reset_v5_0_13 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_rst_ps8_0_199M_0/sim/design_1_rst_ps8_0_199M_0.vhd" \
-endlib
-makelib xcelium_lib/xlconstant_v1_1_6 \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/34f7/hdl/xlconstant_v1_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_0/sim/bd_ae83_one_0.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_1/sim/bd_ae83_psr_aclk_0.vhd" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/sc_util_v1_0_vl_rfs.sv" \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/2508/hdl/sc_mmu_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_2/sim/bd_ae83_s00mmu_0.sv" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ca72/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_3/sim/bd_ae83_s00tr_0.sv" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/9d43/hdl/sc_si_converter_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_4/sim/bd_ae83_s00sic_0.sv" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b89e/hdl/sc_axi2sc_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_5/sim/bd_ae83_s00a2s_0.sv" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/sc_node_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_6/sim/bd_ae83_sarn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_7/sim/bd_ae83_srn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_8/sim/bd_ae83_sawn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_9/sim/bd_ae83_swn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_10/sim/bd_ae83_sbn_0.sv" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/7005/hdl/sc_sc2axi_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_11/sim/bd_ae83_m00s2a_0.sv" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/901a/hdl/sc_exit_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_12/sim/bd_ae83_m00e_0.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/sim/bd_ae83.v" \
-endlib
-makelib xcelium_lib/smartconnect_v1_0 -sv \
  "../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/c012/hdl/sc_switchboard_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_axi_smc_3/sim/design_1_axi_smc_3.v" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_0/sim/bd_69f9_one_0.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_1/sim/bd_69f9_psr_aclk_0.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib -sv \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_2/sim/bd_69f9_s00mmu_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_3/sim/bd_69f9_s00tr_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_4/sim/bd_69f9_s00sic_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_5/sim/bd_69f9_s00a2s_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_6/sim/bd_69f9_sarn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_7/sim/bd_69f9_srn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_8/sim/bd_69f9_sawn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_9/sim/bd_69f9_swn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_10/sim/bd_69f9_sbn_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_11/sim/bd_69f9_m00s2a_0.sv" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_12/sim/bd_69f9_m00e_0.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/sim/bd_69f9.v" \
  "../../../bd/design_1/ip/design_1_axi_smc_1_2/sim/design_1_axi_smc_1_2.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

