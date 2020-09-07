vlib work
vlib riviera

vlib riviera/xilinx_vip
vlib riviera/xpm
vlib riviera/xil_defaultlib
vlib riviera/axi_infrastructure_v1_1_0
vlib riviera/axi_vip_v1_1_6
vlib riviera/zynq_ultra_ps_e_vip_v1_0_6
vlib riviera/generic_baseblocks_v2_1_0
vlib riviera/fifo_generator_v13_2_5
vlib riviera/axi_data_fifo_v2_1_19
vlib riviera/axi_register_slice_v2_1_20
vlib riviera/axi_protocol_converter_v2_1_20
vlib riviera/axi_clock_converter_v2_1_19
vlib riviera/blk_mem_gen_v8_4_4
vlib riviera/axi_dwidth_converter_v2_1_20
vlib riviera/lib_cdc_v1_0_2
vlib riviera/proc_sys_reset_v5_0_13
vlib riviera/xlconstant_v1_1_6
vlib riviera/smartconnect_v1_0

vmap xilinx_vip riviera/xilinx_vip
vmap xpm riviera/xpm
vmap xil_defaultlib riviera/xil_defaultlib
vmap axi_infrastructure_v1_1_0 riviera/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_6 riviera/axi_vip_v1_1_6
vmap zynq_ultra_ps_e_vip_v1_0_6 riviera/zynq_ultra_ps_e_vip_v1_0_6
vmap generic_baseblocks_v2_1_0 riviera/generic_baseblocks_v2_1_0
vmap fifo_generator_v13_2_5 riviera/fifo_generator_v13_2_5
vmap axi_data_fifo_v2_1_19 riviera/axi_data_fifo_v2_1_19
vmap axi_register_slice_v2_1_20 riviera/axi_register_slice_v2_1_20
vmap axi_protocol_converter_v2_1_20 riviera/axi_protocol_converter_v2_1_20
vmap axi_clock_converter_v2_1_19 riviera/axi_clock_converter_v2_1_19
vmap blk_mem_gen_v8_4_4 riviera/blk_mem_gen_v8_4_4
vmap axi_dwidth_converter_v2_1_20 riviera/axi_dwidth_converter_v2_1_20
vmap lib_cdc_v1_0_2 riviera/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 riviera/proc_sys_reset_v5_0_13
vmap xlconstant_v1_1_6 riviera/xlconstant_v1_1_6
vmap smartconnect_v1_0 riviera/smartconnect_v1_0

vlog -work xilinx_vip  -sv2k12 "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
"C:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/sim/design_1.v" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_6  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/dc12/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work zynq_ultra_ps_e_vip_v1_0_6  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl/zynq_ultra_ps_e_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
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

vlog -work generic_baseblocks_v2_1_0  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_5  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/276e/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_5 -93 \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/276e/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_5  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/276e/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_19  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/60de/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_20  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/72d4/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work axi_protocol_converter_v2_1_20  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/c4a6/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work axi_clock_converter_v2_1_19  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/9e81/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work blk_mem_gen_v8_4_4  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/2985/simulation/blk_mem_gen_v8_4.v" \

vlog -work axi_dwidth_converter_v2_1_20  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/d394/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_auto_ds_2/sim/design_1_auto_ds_2.v" \
"../../../bd/design_1/ip/design_1_auto_pc_3/sim/design_1_auto_pc_3.v" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_rst_ps8_0_199M_0/sim/design_1_rst_ps8_0_199M_0.vhd" \

vlog -work xlconstant_v1_1_6  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/34f7/hdl/xlconstant_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_0/sim/bd_ae83_one_0.v" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_1/sim/bd_ae83_psr_aclk_0.vhd" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/sc_util_v1_0_vl_rfs.sv" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/2508/hdl/sc_mmu_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_2/sim/bd_ae83_s00mmu_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ca72/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_3/sim/bd_ae83_s00tr_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/9d43/hdl/sc_si_converter_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_4/sim/bd_ae83_s00sic_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b89e/hdl/sc_axi2sc_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_5/sim/bd_ae83_s00a2s_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/sc_node_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_6/sim/bd_ae83_sarn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_7/sim/bd_ae83_srn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_8/sim/bd_ae83_sawn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_9/sim/bd_ae83_swn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_10/sim/bd_ae83_sbn_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/7005/hdl/sc_sc2axi_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_11/sim/bd_ae83_m00s2a_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/901a/hdl/sc_exit_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/ip/ip_12/sim/bd_ae83_m00e_0.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/bd_0/sim/bd_ae83.v" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/c012/hdl/sc_switchboard_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_3/sim/design_1_axi_smc_3.v" \
"../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_0/sim/bd_69f9_one_0.v" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/ip/ip_1/sim/bd_69f9_psr_aclk_0.vhd" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
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

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/0eaf/hdl" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3/sim_tlm" "+incdir+../../../../ResNetVivado.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_3" "+incdir+C:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_1_2/bd_0/sim/bd_69f9.v" \
"../../../bd/design_1/ip/design_1_axi_smc_1_2/sim/design_1_axi_smc_1_2.v" \

vlog -work xil_defaultlib \
"glbl.v"

