// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XFRACNET_H
#define XFRACNET_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xfracnet_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XFracnet_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XFracnet;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XFracnet_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XFracnet_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XFracnet_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XFracnet_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XFracnet_Initialize(XFracnet *InstancePtr, u16 DeviceId);
XFracnet_Config* XFracnet_LookupConfig(u16 DeviceId);
int XFracnet_CfgInitialize(XFracnet *InstancePtr, XFracnet_Config *ConfigPtr);
#else
int XFracnet_Initialize(XFracnet *InstancePtr, const char* InstanceName);
int XFracnet_Release(XFracnet *InstancePtr);
#endif

void XFracnet_Start(XFracnet *InstancePtr);
u32 XFracnet_IsDone(XFracnet *InstancePtr);
u32 XFracnet_IsIdle(XFracnet *InstancePtr);
u32 XFracnet_IsReady(XFracnet *InstancePtr);
void XFracnet_EnableAutoRestart(XFracnet *InstancePtr);
void XFracnet_DisableAutoRestart(XFracnet *InstancePtr);

void XFracnet_Set_image_thermo_V(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_image_thermo_V(XFracnet *InstancePtr);
void XFracnet_Set_conv_weight_1x1_all_V(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_conv_weight_1x1_all_V(XFracnet *InstancePtr);
void XFracnet_Set_conv_weight_3x3_all_V(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_conv_weight_3x3_all_V(XFracnet *InstancePtr);
void XFracnet_Set_weights_all_V(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_weights_all_V(XFracnet *InstancePtr);
void XFracnet_Set_linear_weight_all_V(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_linear_weight_all_V(XFracnet *InstancePtr);
void XFracnet_Set_linear_bias_all_V(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_linear_bias_all_V(XFracnet *InstancePtr);
void XFracnet_Set_DDR_buff_merge_V(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_DDR_buff_merge_V(XFracnet *InstancePtr);
void XFracnet_Set_out_r(XFracnet *InstancePtr, u32 Data);
u32 XFracnet_Get_out_r(XFracnet *InstancePtr);

void XFracnet_InterruptGlobalEnable(XFracnet *InstancePtr);
void XFracnet_InterruptGlobalDisable(XFracnet *InstancePtr);
void XFracnet_InterruptEnable(XFracnet *InstancePtr, u32 Mask);
void XFracnet_InterruptDisable(XFracnet *InstancePtr, u32 Mask);
void XFracnet_InterruptClear(XFracnet *InstancePtr, u32 Mask);
u32 XFracnet_InterruptGetEnabled(XFracnet *InstancePtr);
u32 XFracnet_InterruptGetStatus(XFracnet *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
