// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xfracnet.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XFracnet_CfgInitialize(XFracnet *InstancePtr, XFracnet_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_BaseAddress = ConfigPtr->Ctrl_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XFracnet_Start(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_AP_CTRL) & 0x80;
    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XFracnet_IsDone(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XFracnet_IsIdle(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XFracnet_IsReady(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XFracnet_EnableAutoRestart(XFracnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_AP_CTRL, 0x80);
}

void XFracnet_DisableAutoRestart(XFracnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_AP_CTRL, 0);
}

void XFracnet_Set_image_thermo_V(XFracnet *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_IMAGE_THERMO_V_DATA, Data);
}

u32 XFracnet_Get_image_thermo_V(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_IMAGE_THERMO_V_DATA);
    return Data;
}

void XFracnet_Set_conv_weight_3x3_all_new_V(XFracnet *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_CONV_WEIGHT_3X3_ALL_NEW_V_DATA, Data);
}

u32 XFracnet_Get_conv_weight_3x3_all_new_V(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_CONV_WEIGHT_3X3_ALL_NEW_V_DATA);
    return Data;
}

void XFracnet_Set_conv_weight_1x1_all_new_V(XFracnet *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_CONV_WEIGHT_1X1_ALL_NEW_V_DATA, Data);
}

u32 XFracnet_Get_conv_weight_1x1_all_new_V(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_CONV_WEIGHT_1X1_ALL_NEW_V_DATA);
    return Data;
}

void XFracnet_Set_weights_all_V(XFracnet *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_WEIGHTS_ALL_V_DATA, Data);
}

u32 XFracnet_Get_weights_all_V(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_WEIGHTS_ALL_V_DATA);
    return Data;
}

void XFracnet_Set_DDR_buf_pack_V(XFracnet *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_DDR_BUF_PACK_V_DATA, Data);
}

u32 XFracnet_Get_DDR_buf_pack_V(XFracnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_DDR_BUF_PACK_V_DATA);
    return Data;
}

void XFracnet_InterruptGlobalEnable(XFracnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_GIE, 1);
}

void XFracnet_InterruptGlobalDisable(XFracnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_GIE, 0);
}

void XFracnet_InterruptEnable(XFracnet *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_IER);
    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_IER, Register | Mask);
}

void XFracnet_InterruptDisable(XFracnet *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_IER);
    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_IER, Register & (~Mask));
}

void XFracnet_InterruptClear(XFracnet *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_ISR, Mask);
}

u32 XFracnet_InterruptGetEnabled(XFracnet *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_IER);
}

u32 XFracnet_InterruptGetStatus(XFracnet *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFracnet_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_CTRL_ADDR_ISR);
}

