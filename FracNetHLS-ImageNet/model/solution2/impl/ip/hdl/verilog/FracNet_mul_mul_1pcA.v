
`timescale 1 ns / 1 ps

  module FracNet_mul_mul_1pcA_DSP48_9(a, b, p);
input signed [14 - 1 : 0] a;
input signed [11 - 1 : 0] b;
output signed [25 - 1 : 0] p;

assign p = $signed (a) * $signed (b);

endmodule
`timescale 1 ns / 1 ps
module FracNet_mul_mul_1pcA(
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



FracNet_mul_mul_1pcA_DSP48_9 FracNet_mul_mul_1pcA_DSP48_9_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

