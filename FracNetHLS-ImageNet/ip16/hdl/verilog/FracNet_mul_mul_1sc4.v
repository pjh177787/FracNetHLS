
`timescale 1 ns / 1 ps

  module FracNet_mul_mul_1sc4_DSP48_13(a, b, p);
input signed [11 - 1 : 0] a;
input signed [11 - 1 : 0] b;
output signed [22 - 1 : 0] p;

assign p = $signed (a) * $signed (b);

endmodule
`timescale 1 ns / 1 ps
module FracNet_mul_mul_1sc4(
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



FracNet_mul_mul_1sc4_DSP48_13 FracNet_mul_mul_1sc4_DSP48_13_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

