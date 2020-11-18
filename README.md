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

## Update 11/17:

The current version passes csim. The optimizations are ok. However, there's too much LUTs usage.
Possible reason is that we pack the pgconv into a function. We need to write it the old way.
I will do that when I get up. 

Also, based on testing, ap_fixed<16, 10> for FM and <16, 4> for WT is good enough, giving us 95+ accuracy. 

## Update 11/18:

BRAM is no longer a problem. LUTs is still quite a lot. Too many muxes on the memory ports and stuff. Need to look more into that. 
More simulations say <14, 9> for FM and <10, 3> for WT should be good enough. We can look further into that.
I'll update more after I get some sleep. 