// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xfracnet.h"

extern XFracnet_Config XFracnet_ConfigTable[];

XFracnet_Config *XFracnet_LookupConfig(u16 DeviceId) {
	XFracnet_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XFRACNET_NUM_INSTANCES; Index++) {
		if (XFracnet_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XFracnet_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XFracnet_Initialize(XFracnet *InstancePtr, u16 DeviceId) {
	XFracnet_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XFracnet_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XFracnet_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

