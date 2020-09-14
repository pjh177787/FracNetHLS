<project xmlns="com.autoesl.autopilot.project" name="model" top="FracNet">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="-Wl,--stack,10485670" mflags="" clean="true" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <files xmlns="">
        <file name="../../bn1_fused_bias.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../bn1_fused_weight.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../conv1_input.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../conv1_weight.bin" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../golden_c.cc" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../tb.cc" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="biconv.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="matmul.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="net_hls.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="net_hls.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="pgconv.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="inactive"/>
        <solution name="solution2" status="inactive"/>
        <solution name="solution3" status="active"/>
    </solutions>
</project>

