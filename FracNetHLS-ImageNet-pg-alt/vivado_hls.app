<project xmlns="com.autoesl.autopilot.project" top="" name="FracNetHLS-ImageNet-pg-alt">
    <files>
        <file name="../conv1_input.bin" sc="0" tb="1" cflags=""/>
        <file name="../conv1x1_weights.bin" sc="0" tb="1" cflags=""/>
        <file name="../conv3x3_weights.bin" sc="0" tb="1" cflags=""/>
        <file name="../other_weights.bin" sc="0" tb="1" cflags=""/>
        <file name="../tb.cc" sc="0" tb="1" cflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

