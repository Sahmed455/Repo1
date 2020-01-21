`timescale 10ns/10ps
`include "FULL_ADDER.v"

module FA_Test;

reg in1;
reg in2;
reg c0;

wire Sum;
wire Carry;

FULL_ADDER uut(
	.in1(in1),
	.in2(in2),
	.c0(c0),
	.Sum(Sum),
	.Carry(Carry)
);

initial
begin
	$monitor("A=%b\tB=%b\tC0=%b\t\tSum=%b\tCarry=%b\n",in1,in2,c0,Sum,Carry);
	in1=0;
	in2=0;
	c0=0;
	#100;
	
	in1=0;
	in2=0;
	c0=1;
	#100;

	in1=0;
	in2=1;
	c0=0;
	#100;

	in1=0;
	in2=1;
	c0=1;
	#100;

	in1=1;
	in2=0;
	c0=0;
	#100;

	in1=1;
	in2=0;
	c0=1;
	#100;

	in1=1;
	in2=1;
	c0=0;
	#100;

	in1=1;
	in2=1;
	c0=1;
	#100;
	$finish;
end
endmodule
