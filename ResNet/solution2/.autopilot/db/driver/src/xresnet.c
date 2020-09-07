// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xresnet.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XResnet_CfgInitialize(XResnet *InstancePtr, XResnet_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XResnet_Start(XResnet *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_AP_CTRL) & 0x80;
    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XResnet_IsDone(XResnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XResnet_IsIdle(XResnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XResnet_IsReady(XResnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XResnet_EnableAutoRestart(XResnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XResnet_DisableAutoRestart(XResnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_AP_CTRL, 0);
}

void XResnet_Set_image_thermo_V(XResnet *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_IMAGE_THERMO_V_DATA, Data);
}

u32 XResnet_Get_image_thermo_V(XResnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_IMAGE_THERMO_V_DATA);
    return Data;
}

void XResnet_Set_result(XResnet *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_RESULT_DATA, Data);
}

u32 XResnet_Get_result(XResnet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_RESULT_DATA);
    return Data;
}

void XResnet_InterruptGlobalEnable(XResnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_GIE, 1);
}

void XResnet_InterruptGlobalDisable(XResnet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_GIE, 0);
}

void XResnet_InterruptEnable(XResnet *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_IER);
    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_IER, Register | Mask);
}

void XResnet_InterruptDisable(XResnet *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_IER);
    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_IER, Register & (~Mask));
}

void XResnet_InterruptClear(XResnet *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_ISR, Mask);
}

u32 XResnet_InterruptGetEnabled(XResnet *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_IER);
}

u32 XResnet_InterruptGetStatus(XResnet *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET_AXILITES_ADDR_ISR);
}

