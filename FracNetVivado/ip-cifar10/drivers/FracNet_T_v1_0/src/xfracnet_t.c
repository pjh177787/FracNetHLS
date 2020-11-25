// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xfracnet_t.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XFracnet_t_CfgInitialize(XFracnet_t *InstancePtr, XFracnet_t_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_BaseAddress = ConfigPtr->Ctrl_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XFracnet_t_Start(XFracnet_t *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_AP_CTRL) & 0x80;
    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XFracnet_t_IsDone(XFracnet_t *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XFracnet_t_IsIdle(XFracnet_t *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XFracnet_t_IsReady(XFracnet_t *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XFracnet_t_EnableAutoRestart(XFracnet_t *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_AP_CTRL, 0x80);
}

void XFracnet_t_DisableAutoRestart(XFracnet_t *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_AP_CTRL, 0);
}

void XFracnet_t_Set_image_V(XFracnet_t *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_IMAGE_V_DATA, Data);
}

u32 XFracnet_t_Get_image_V(XFracnet_t *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_IMAGE_V_DATA);
    return Data;
}

void XFracnet_t_Set_output_r(XFracnet_t *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_OUTPUT_R_DATA, Data);
}

u32 XFracnet_t_Get_output_r(XFracnet_t *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_OUTPUT_R_DATA);
    return Data;
}

void XFracnet_t_InterruptGlobalEnable(XFracnet_t *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_GIE, 1);
}

void XFracnet_t_InterruptGlobalDisable(XFracnet_t *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_GIE, 0);
}

void XFracnet_t_InterruptEnable(XFracnet_t *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_IER);
    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_IER, Register | Mask);
}

void XFracnet_t_InterruptDisable(XFracnet_t *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_IER);
    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_IER, Register & (~Mask));
}

void XFracnet_t_InterruptClear(XFracnet_t *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFracnet_t_WriteReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_ISR, Mask);
}

u32 XFracnet_t_InterruptGetEnabled(XFracnet_t *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_IER);
}

u32 XFracnet_t_InterruptGetStatus(XFracnet_t *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFracnet_t_ReadReg(InstancePtr->Ctrl_BaseAddress, XFRACNET_T_CTRL_ADDR_ISR);
}

