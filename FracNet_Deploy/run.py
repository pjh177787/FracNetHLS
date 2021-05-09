import sys, os, time
import numpy as np

from pynq import Xlnk
from pynq import Overlay
import pynq

xlnk = Xlnk()
xlnk.xlnk_reset()

overlay = Overlay("./FracNet_1.bit")
# overlay?
FracNet = overlay.FracNet_0

bus512 = 'B,'*63 + 'B'
dt_512 = np.dtype(bus512)

bus256 = 'B,'*31 + 'B'
dt_256 = np.dtype(bus256)

# print(xlnk.cma_stats())
image_thermo = xlnk.cma_array(shape=(3*224*224), dtype=np.uint32)
conv_weight_3x3_all = xlnk.cma_array(shape=(49104), dtype=dt_512)
conv_weight_1x1_all = xlnk.cma_array(shape=(6132), dtype=dt_512)
other_weight_all = xlnk.cma_array(shape=(2730), dtype=dt_512)
DDR_all = xlnk.cma_array(shape=(64, 114, 114), dtype=dt_512)

# print(xlnk.cma_stats())

image_hw_all_file = np.fromfile("image_hw_all_host.bin", dtype=np.uint32)
# np.copyto(image_thermo, image_hw_all_file.reshape(image_thermo.shape))

conv_weight_3x3_file = np.fromfile("conv3x3_weights_host.bin", dtype=dt_512)
np.copyto(conv_weight_3x3_all, conv_weight_3x3_file.reshape(conv_weight_3x3_all.shape))

conv_weight_1x1_file = np.fromfile("conv1x1_weights_host.bin", dtype=dt_512)
np.copyto(conv_weight_1x1_all, conv_weight_1x1_file.reshape(conv_weight_1x1_all.shape))

other_weights_file = np.fromfile("other_weights_host.bin", dtype=dt_512)
np.copyto(other_weight_all, other_weights_file.reshape(other_weight_all.shape))

FracNet.register_map.image_thermo_V    = image_thermo.physical_address
FracNet.register_map.conv_weight_3x3_all_new_V   = conv_weight_3x3_all.physical_address
FracNet.register_map.conv_weight_1x1_all_new_V    = conv_weight_1x1_all.physical_address
FracNet.register_map.weights_all_V    = other_weight_all.physical_address
FracNet.register_map.DDR_buf_pack_V    = DDR_all.physical_address
FracNet.register_map

from time import perf_counter
idle = FracNet.register_map.CTRL.AP_IDLE
FracNet.register_map.CTRL.AP_START = 0

mgr = Manager()

predicts = mgr.list()

bias = np.random.rand(1000)
weight = np.random.rand(1024, 1000)
bias = bias.astype(np.float32)
weight = weight.astype(np.float32)

conv_out_q = mgr.Queue()


t = 0
correct = 0

num_imgs = 1
for i in range(num_imgs):
    np.copyto(image_thermo, image_hw_all_file)
    idle = 0
    FracNet.register_map.CTRL.AP_START = 1
    
    ts = perf_counter()
    while idle == 0:
        idle = FracNet.register_map.CTRL.AP_IDLE
    tt = perf_counter()
#     conv_results = DDR_all[]
    t += tt - ts
    
print(t)