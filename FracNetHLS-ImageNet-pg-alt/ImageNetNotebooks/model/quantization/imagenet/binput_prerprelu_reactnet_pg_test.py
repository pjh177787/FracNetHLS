"""
A pre-activation variant of ReActNet as described in paper [2].
ReActNet is a binary model modified from MobileNet V1.

Reference: 
    [1] MobileNet V1 code:
        https://github.com/marvis/pytorch-mobilenet
    [2] Author: Zechun Liu, Zhiqiang Shen, Marios Savvides, 
                Kwang-Ting Cheng
        Title:  ReActNet: Towards Precise Binary Neural 
                Network with Generalized Activation Functions
        URL:    https://arxiv.org/abs/2003.03488
"""


import sys
import time
import torch
import torch.nn as nn
import torch.nn.functional as F
import torchvision

sys.path.append('../../../')
import utils.quantization as q

import numpy as np

class LambdaLayer(nn.Module):
    def __init__(self, lambd):
        super(LambdaLayer, self).__init__()
        self.lambd = lambd

    def forward(self, x):
        return self.lambd(x)

class BuildingBlock(nn.Module):
    def __init__(self, inp, oup, stride, prt):
        super(BuildingBlock, self).__init__()

        self.conv3x3 = nn.Sequential(
            q.PGBinaryConv2d(inp, inp, 3, stride, 1, bias=False),
            nn.BatchNorm2d(inp)
        )

        self.shortcut1 = nn.Sequential()
        if stride == 2:
            '''Average pooling on shortcuts in downsample layers'''
            self.shortcut1 = nn.AvgPool2d(kernel_size=2, stride=2)

        self.pointwise = nn.Sequential(
            q.PGBinaryConv2d(inp, oup, 1, 1, 0, bias=False),
            nn.BatchNorm2d(oup)
        )

        self.shortcut2 = nn.Sequential()
        if oup == 2*inp:
            '''Duplicate activations on the shortcut if #channels doubled'''
            self.shortcut2 = LambdaLayer(lambda x: torch.cat((x, x), dim=1))

        self.rprelu1 = q.RPReLU(in_channels=inp)
        self.rprelu2 = q.RPReLU(in_channels=oup)
        self.shiftbn1 = nn.BatchNorm2d(inp)
        self.shiftbn2 = nn.BatchNorm2d(oup)

        self.binarize = q.QuantSign.apply
        self.prt = prt

    def forward(self, input):
        if self.prt == 'y':
            print('=============================================')
            print('=============================================')
            print('=============================================')
            print('layer_in')
            print(input.shape)
            print(input)

            input_x = self.binarize(input)
#             print('binarize')
#             print(input_x.shape)
#             print(input_x)

            input_x = self.conv3x3(input_x)
#             print('conv3x3')
#             print(input_x.shape)
#             print(input_x)

            input_x = self.rprelu1(input_x)
#             print('rprelu1')
#             print(input_x.shape)
#             print(input_x)

            input_y = self.shortcut1(input)
#             print('shortcut1')
#             print(input_y.shape)
#             print(input_y)

            input = input_x + input_y
#             print('shortcut1_out')
#             print(input.shape)
#             print(input)

            input = self.shiftbn1(input)
#             print('shiftbn1')
#             print(input.shape)
#             print(input)

            input_x = self.binarize(input)
            # print('binarize')
            # print(input_x.shape)
            # print(input_x)

            input_x = self.pointwise(input_x)
            # print('pointwise')
            # print(input_x.shape)
            # print(input_x)

            input_x = self.rprelu2(input_x)
            # print('rprelu2')
            # print(input_x.shape)
            # print(input_x)

            input_y = self.shortcut2(input)
            # print('shortcut2')
            # print(input_y.shape)
            # print(input_y)


            input = input_x + input_y
            # print('shortcut2_out')
            # print(input.shape)
            # print(input)

            input = self.shiftbn2(input)
#             print('shiftbn2')
#             print(input.shape)
#             print(input)
#             print('=============================================')
#             print('=============================================')
#             print('=============================================')
        else:
            input = self.rprelu1(self.conv3x3(self.binarize(input))) + self.shortcut1(input)
            input = self.shiftbn1(input)
            input = self.rprelu2(self.pointwise(self.binarize(input))) + self.shortcut2(input)
            input = self.shiftbn2(input)
        return input

class ReActNet(nn.Module):

    def __init__(self, batch_size, num_gpus):
        super(ReActNet, self).__init__()
        print("* ReActNet with preact RPReLU.")
        print("* Precision gated activations.")
        print("* Binary input layer!")
        
        """ input layer is binarized! """
        def conv_bn(inp, oup, stride):
            return nn.Sequential(
                q.BinaryConv2d(inp, oup, 3, stride, 1, bias=False),
                nn.BatchNorm2d(oup),
                #nn.ReLU(inplace=True)
            )

        def conv_dw(inp, oup, stride, prt='n'):
            if inp == oup or 2*inp == oup:
                return BuildingBlock(inp, oup, stride, prt)
            else:
                raise NotImplementedError("Neither inp == oup nor 2*inp == oup")

        self.model = nn.Sequential(
            conv_bn( 96,  32, 2),
            conv_dw( 32,  64, 1), #1
            conv_dw( 64, 128, 2), #2
            conv_dw(128, 128, 1), #3
            conv_dw(128, 256, 2), #4
            conv_dw(256, 256, 1), #5
            conv_dw(256, 512, 2), #6
            conv_dw(512, 512, 1), #7
            conv_dw(512, 512, 1), #8
            conv_dw(512, 512, 1), #9
            conv_dw(512, 512, 1), #10
            conv_dw(512, 512, 1), #11
            conv_dw(512, 1024, 2), #12
            conv_dw(1024, 1024, 1), #13
            #nn.ReLU(inplace=True),
            nn.AvgPool2d(7),
        )
        self.fc = nn.Linear(1024, 1000)

        ''' N = batch_size / num_gpus '''
        if num_gpus != 0:
            assert batch_size % num_gpus == 0, \
                "Given batch size cannot evenly distributed to available gpus."
            N = batch_size // num_gpus
        else:
            N = 1
        self.encoder = q.InputEncoder(input_size=(N,3,224,224), resolution=8)

        self.teacher = torchvision.models.resnet50(pretrained=True)
        for param in self.teacher.parameters():
            param.requires_grad = False

        self.register_buffer(
            'img_mean', 
            torch.tensor([0.485, 0.456, 0.406]).view(1,-1,1,1)
        )
        self.register_buffer(
            'img_std',
            torch.tensor([0.229, 0.224, 0.225]).view(1,-1,1,1)
        )

    def forward(self, x):
        lesson = self.teacher(x).detach()
        '''Denormalize input images x'''
        print('net_input')
        print(x.shape)
        print(x)

        x = x*self.img_std + self.img_mean
        print('denormalize')
        print(x.shape)
        print(x)
        file_name = 'denormed_golden.npy'
        np.save(file_name, x.cpu().numpy())

        x = self.encoder(x)
        print(x.dtype)
        print('encoder')
        print(x.shape)
        print(x)
        file_name = 'encoder_out_golden.npy'
        np.save(file_name, x.cpu().numpy())


        x = self.model(x)

        x = x.view(-1, 1024)
        x = self.fc(x)
        return x, lesson



def speed(model, name):
    t0 = time.time()
    input = torch.rand(1,3,224,224).cuda()
    t1 = time.time()

    model(input)
    t2 = time.time()

    model(input)
    t3 = time.time()
    
    print('%10s : %f' % (name, t3 - t2))


if __name__ == '__main__':
    reactnet = ReActNet(batch_size=1, num_gpus=1).cuda()
    speed(reactnet, 'reactnet')
