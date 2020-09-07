// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XRESNET_H
#define XRESNET_H

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
#include "xresnet_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XResnet_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XResnet;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XResnet_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XResnet_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XResnet_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XResnet_ReadReg(BaseAddress, RegOffset) \
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
int XResnet_Initialize(XResnet *InstancePtr, u16 DeviceId);
XResnet_Config* XResnet_LookupConfig(u16 DeviceId);
int XResnet_CfgInitialize(XResnet *InstancePtr, XResnet_Config *ConfigPtr);
#else
int XResnet_Initialize(XResnet *InstancePtr, const char* InstanceName);
int XResnet_Release(XResnet *InstancePtr);
#endif

void XResnet_Start(XResnet *InstancePtr);
u32 XResnet_IsDone(XResnet *InstancePtr);
u32 XResnet_IsIdle(XResnet *InstancePtr);
u32 XResnet_IsReady(XResnet *InstancePtr);
void XResnet_EnableAutoRestart(XResnet *InstancePtr);
void XResnet_DisableAutoRestart(XResnet *InstancePtr);

void XResnet_Set_image_thermo_V(XResnet *InstancePtr, u32 Data);
u32 XResnet_Get_image_thermo_V(XResnet *InstancePtr);
void XResnet_Set_result(XResnet *InstancePtr, u32 Data);
u32 XResnet_Get_result(XResnet *InstancePtr);

void XResnet_InterruptGlobalEnable(XResnet *InstancePtr);
void XResnet_InterruptGlobalDisable(XResnet *InstancePtr);
void XResnet_InterruptEnable(XResnet *InstancePtr, u32 Mask);
void XResnet_InterruptDisable(XResnet *InstancePtr, u32 Mask);
void XResnet_InterruptClear(XResnet *InstancePtr, u32 Mask);
u32 XResnet_InterruptGetEnabled(XResnet *InstancePtr);
u32 XResnet_InterruptGetStatus(XResnet *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
