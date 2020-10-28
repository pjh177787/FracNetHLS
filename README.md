# FracNetHLS
An HLS Implementation of FracNet

## Update 10/27:
### To debug:

I spent an entire afternoon and evening to rewrite most of the code in the testbench and consolidated some python notebooks to generate necessary files to debug. 

Currently, we have a software testbench that, instead of read from bin for parameters, it reads them from a header file, like the hardware does. The notebook that writes the parameters to a header files is included in the notebook folder.

There is another notebook that converts numpy arrays to bin files. It is useful to write the inputs. 

The bin files contain a thousand images and their labels. The software accuracy with floating points should be around 96. 

In order to debug, there are different approaches. Typically, we can simply instantiate the top level of the hardware in the software and step through it. Otherwise, we can take parts of the hardware and unit-test them. 

I will keep updating. 
