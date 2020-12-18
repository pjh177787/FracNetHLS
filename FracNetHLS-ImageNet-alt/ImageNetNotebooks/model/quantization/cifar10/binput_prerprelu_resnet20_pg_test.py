'''
Reference:
    https://github.com/akamaster/pytorch_resnet_cifar10

Properly implemented ResNet-s for CIFAR10 as described in paper [1].
The implementation and structure of this file is hugely influenced by [2]
which is implemented for ImageNet and doesn't have option A for identity.
Moreover, most of the implementations on the web is copy-paste from
torchvision's resnet and has wrong number of params.
Proper ResNet-s for CIFAR10 (for fair comparision and etc.) has following
number of layers and parameters:
name      | layers | params
ResNet20  |    20  | 0.27M
ResNet32  |    32  | 0.46M
ResNet44  |    44  | 0.66M
ResNet56  |    56  | 0.85M
ResNet110 |   110  |  1.7M
ResNet1202|  1202  | 19.4m
which this implementation indeed has.
Reference:
[1] Kaiming He, Xiangyu Zhang, Shaoqing Ren, Jian Sun
    Deep Residual Learning for Image Recognition. arXiv:1512.03385
[2] https://github.com/pytorch/vision/blob/master/torchvision/models/resnet.py
If you use this implementation in you work, please don't forget to mention the
author, Yerlan Idelbayev.
'''
import sys
import torch
import torch.nn as nn
import torch.nn.functional as F

sys.path.append('../../../')
import utils.quantization as q
import numpy as np


__all__ = ['ResNet', 'resnet20', 'resnet32', 'resnet44', 'resnet56', 'resnet110', 'resnet1202']

def _weights_init(m):
    classname = m.__class__.__name__
    #print(classname)
    if isinstance(m, nn.Linear) or isinstance(m, nn.Conv2d):
        nn.init.kaiming_normal_(m.weight)

class LambdaLayer(nn.Module):
    def __init__(self, lambd):
        super(LambdaLayer, self).__init__()
        self.lambd = lambd

    def forward(self, x):
        return self.lambd(x)

class BasicBlock(nn.Module):
    expansion = 1

    def __init__(self, in_planes, planes, stride=1):
        super(BasicBlock, self).__init__()

        self.rprelu1 = q.RPReLU(in_channels=planes)
        self.rprelu2 = q.RPReLU(in_channels=planes)

        self.conv1 = q.PGBinaryConv2d(in_planes, planes, kernel_size=3, stride=stride, padding=1, bias=False)
        self.bn1 = nn.BatchNorm2d(planes)
        self.conv2 = q.PGBinaryConv2d(planes, planes, kernel_size=3, stride=1, padding=1, bias=False)
        self.bn2 = nn.BatchNorm2d(planes)

        self.shortcut = nn.Sequential()
        if stride != 1 or in_planes != planes:
            self.shortcut = nn.Sequential(
                    nn.AvgPool2d(kernel_size=2, stride=2),
                    LambdaLayer(lambda x: torch.cat((x, x), dim=1)),
            )

        self.binarize = q.QuantSign.apply
        self.bn3 = nn.BatchNorm2d(planes)
        self.bn4 = nn.BatchNorm2d(planes)

        self.in_planes = in_planes

    def forward(self, x):
        # file_name = 'middle_results/block' + str(self.in_planes) + '_0_input.npy'
        # np.save(file_name, x.cpu().numpy())

        print('input%d'%(self.in_planes))
        print(x)

        x1 = self.binarize(x)
        # print('binarize%d'%(self.in_planes))
        # print(x1)

        x1 = self.conv1(x1)
        # print('pgconv1%d'%(self.in_planes))
        # print(x1)

        x1 = self.bn1(x1)
        # print('bn1%d'%(self.in_planes))
        # print(x1)

        x1 = self.rprelu1(x1)
        # print('rprelu%d'%(self.in_planes))
        # print(x1)

        # x1 = self.rprelu1(self.bn1(self.conv1(self.binarize(x))))

        x2 = self.shortcut(x)

        # print('rprelu%d'%(self.in_planes))
        # print(x1)
        # print('shortcut%d'%(self.in_planes))
        # print(x2)

        x = x1 + x2
        print('aftershortcut%d'%(self.in_planes))
        print(x)

        x = self.bn3(x)
        print('bn3%d'%(self.in_planes))
        print(x)

        x = self.rprelu2(self.bn2(self.conv2(self.binarize(x)))) + x
        print('aftershortcut2%d'%(self.in_planes))
        print(x)

        x = self.bn4(x)
        print('bn4%d'%(self.in_planes))
        print(x.shape)
        print(x)
        return x


class ResNet(nn.Module):
    def __init__(self, block, num_blocks, num_classes=10):
        super(ResNet, self).__init__()
        self.in_planes = 16

        ''' The input layer is binarized! '''
        self.conv1 = q.BinaryConv2d(96, 16, kernel_size=3, stride=1, padding=1, bias=False)
        self.bn1 = nn.BatchNorm2d(16)
        self.layer1 = self._make_layer(block, 16, num_blocks[0], stride=1)
        self.layer2 = self._make_layer(block, 32, num_blocks[1], stride=2)
        self.layer3 = self._make_layer(block, 64, num_blocks[2], stride=2)
        self.linear = nn.Linear(64, num_classes)

        self.encoder = q.InputEncoder(input_size=(1,3,32,32), resolution=8)

    def _make_layer(self, block, planes, num_blocks, stride):
        strides = [stride] + [1]*(num_blocks-1)
        layers = []
        for stride in strides:
            layers.append(block(self.in_planes, planes, stride))
            self.in_planes = planes * block.expansion

        return nn.Sequential(*layers)

    def forward(self, x):
        print(x.shape)
        print(x)
        x = self.encoder(x)
        # print(x.shape)
        # print(x)

        out = self.conv1(x)
        file_name = 'middle_results/conv1_out.npy'
        np.save(file_name, out.cpu().numpy())

        out = self.bn1(out)
        file_name = 'middle_results/bn1_out.npy'
        np.save(file_name, out.cpu().numpy())

        print('////////////////////////////////////////////////////////////')
        print('///////////////////////////layer1///////////////////////////')
        print('////////////////////////////////////////////////////////////')
        out = self.layer1(out)
        print('layer1out')
        print(out.shape)
        print(out)
        file_name = 'middle_results/layer1_out.npy'
        np.save(file_name, out.cpu().numpy())

        print('////////////////////////////////////////////////////////////')
        print('///////////////////////////layer2///////////////////////////')
        print('////////////////////////////////////////////////////////////')
        out = self.layer2(out)
        print('layer2out')
        print(out.shape)
        print(out)
        file_name = 'middle_results/layer1_out.npy'
        np.save(file_name, out.cpu().numpy())

        print('////////////////////////////////////////////////////////////')
        print('///////////////////////////layer3///////////////////////////')
        print('////////////////////////////////////////////////////////////')
        out = self.layer3(out)
        print('layer3out')
        print(out.shape)
        print(out)
        file_name = 'middle_results/layer1_out.npy'
        np.save(file_name, out.cpu().numpy())

        out = F.avg_pool2d(out, out.size()[3])
        # print(out.shape)
        # print(out)
        out = out.view(out.size(0), -1)
        # print(out.shape)
        # print(out)
        out = self.linear(out)
        return out


def resnet20(num_classes=10):
    print("Binary Input PG PreAct RPrelu ResNet-20 BNN")
    return ResNet(BasicBlock, [3, 3, 3], num_classes=num_classes)


def resnet32():
    return ResNet(BasicBlock, [5, 5, 5])


def resnet44():
    return ResNet(BasicBlock, [7, 7, 7])


def resnet56():
    return ResNet(BasicBlock, [9, 9, 9])


def resnet110():
    return ResNet(BasicBlock, [18, 18, 18])


def resnet1202():
    return ResNet(BasicBlock, [200, 200, 200])


if __name__ == "__main__":
    from thop import profile
    from thop.vision import basic_hooks as hooks
    model = resnet20().cuda()
    input = torch.randn(1, 3, 32, 32)
    output = model(input)

