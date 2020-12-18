// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// CTRL
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of image_thermo_V
//        bit 31~0 - image_thermo_V[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of conv_weight_3x3_all_new_V
//        bit 31~0 - conv_weight_3x3_all_new_V[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of conv_weight_1x1_all_new_V
//        bit 31~0 - conv_weight_1x1_all_new_V[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of weights_all_V
//        bit 31~0 - weights_all_V[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of DDR_buf_pack_V
//        bit 31~0 - DDR_buf_pack_V[31:0] (Read/Write)
// 0x34 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XFRACNET_CTRL_ADDR_AP_CTRL                        0x00
#define XFRACNET_CTRL_ADDR_GIE                            0x04
#define XFRACNET_CTRL_ADDR_IER                            0x08
#define XFRACNET_CTRL_ADDR_ISR                            0x0c
#define XFRACNET_CTRL_ADDR_IMAGE_THERMO_V_DATA            0x10
#define XFRACNET_CTRL_BITS_IMAGE_THERMO_V_DATA            32
#define XFRACNET_CTRL_ADDR_CONV_WEIGHT_3X3_ALL_NEW_V_DATA 0x18
#define XFRACNET_CTRL_BITS_CONV_WEIGHT_3X3_ALL_NEW_V_DATA 32
#define XFRACNET_CTRL_ADDR_CONV_WEIGHT_1X1_ALL_NEW_V_DATA 0x20
#define XFRACNET_CTRL_BITS_CONV_WEIGHT_1X1_ALL_NEW_V_DATA 32
#define XFRACNET_CTRL_ADDR_WEIGHTS_ALL_V_DATA             0x28
#define XFRACNET_CTRL_BITS_WEIGHTS_ALL_V_DATA             32
#define XFRACNET_CTRL_ADDR_DDR_BUF_PACK_V_DATA            0x30
#define XFRACNET_CTRL_BITS_DDR_BUF_PACK_V_DATA            32
