`include "AND2.v"
`include "XOR2.v"

module HALF_ADDER(
	input in1,
	input in2,
	output sum,
	output carry
);
XOR2 s(in1,in2,sum);
AND2 c(in1,in2,carry);
endmodule
