<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="com.autoesl.autopilot.project" name="model" top="FracNet">
  <files>
    <file name="bnn.cc" sc="0" tb="false" cflags="" blackbox="false"/>
    <file name="bnn.h" sc="0" tb="false" cflags="" blackbox="false"/>
    <file name="dimension_def.h" sc="0" tb="false" cflags="" blackbox="false"/>
    <file name="layer.h" sc="0" tb="false" cflags="" blackbox="false"/>
    <file name="pgconv.h" sc="0" tb="false" cflags="" blackbox="false"/>
    <file name="typedefs.h" sc="0" tb="false" cflags="" blackbox="false"/>
    <file name="weights_conv1_32_ch32.h" sc="0" tb="false" cflags="" blackbox="false"/>
    <file name="../../array_def.h" sc="0" tb="1" cflags=""/>
    <file name="../../conv1_input.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas"/>
    <file name="../../conv1x1_weights.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas"/>
    <file name="../../conv3x3_weights.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas"/>
    <file name="../../other_weights.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas"/>
    <file name="../../tb.cc" sc="0" tb="1" cflags=" -Wno-unknown-pragmas"/>
    <file name="../../layer_outputs" sc="0" tb="1" cflags=""/>
  </files>
  <solutions>
    <solution name="solution1" status="active"/>
  </solutions>
  <includePaths/>
  <libraryPaths/>
  <libraryFlag/>
  <Simulation argv="">
    <SimFlow name="csim" optimizeCompile="true" ldflags="-Wl,--stack,268435456" mflags="" clean="true" csimMode="0" lastCsimMode="0"/>
  </Simulation>
</project>
