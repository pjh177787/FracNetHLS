<AutoPilot:project xmlns:AutoPilot="com.autoesl.autopilot.project" projectType="C/C++" name="model" top="FracNet">
    <files>
        <file name="../../tb.cc" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../bin/labels.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../bin/conv1_input.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="weights_tb.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="pgconv64.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="pgconv.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="net_hls.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="matmul.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="biconv.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="weights.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions>
        <solution name="solution1" status=""/>
    </solutions>
    <Simulation argv="">
        <SimFlow name="csim" setup="false" optimizeCompile="false" clean="false" ldflags="" mflags=""/>
    </Simulation>
</AutoPilot:project>

