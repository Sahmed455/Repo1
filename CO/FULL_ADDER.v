`include "HALF_ADDER.v"
//`include "AND2.v"
//`include "XOR2.v"
`include "OR2.v"

module FULL_ADDER(
	input in1,
	input in2,
	input c0,
	output Sum,
	output Carry
);

//reg S;
//reg c1;
//reg c2;

HALF_ADDER s1(in1,in2,S,c1);
HALF_ADDER s2(S,c0,Sum,c2);
OR2 c(c1,c2,Carry);
endmodule
