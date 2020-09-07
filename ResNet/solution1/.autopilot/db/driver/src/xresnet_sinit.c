// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xresnet.h"

extern XResnet_Config XResnet_ConfigTable[];

XResnet_Config *XResnet_LookupConfig(u16 DeviceId) {
	XResnet_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XRESNET_NUM_INSTANCES; Index++) {
		if (XResnet_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XResnet_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XResnet_Initialize(XResnet *InstancePtr, u16 DeviceId) {
	XResnet_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XResnet_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XResnet_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

