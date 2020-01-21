`timescale 1s/100ms
`include "HALF_ADDER.v"

module HA_Test;

reg in1;
reg in2;

wire Sum;
wire Carry;

HALF_ADDER uut(
	.in1(in1),
	.in2(in2),
	.sum(Sum),
	.carry(Carry)
);

initial
begin
	$monitor("A=%b\tB=%b\tSum=%b\tCarry=%b\n",in1,in2,Sum,Carry);
	$dumpfile("HALF_ADDER.vcd");
	//$dumpvars(0,HA_Test);
	in1=0;
	in2=0;
	#100;

	in1=0;
	in2=1;
	#100;

	in1=1;
	in2=0;
	#100;

	in1=1;
	in2=1;
	#100;
	$dumpvars(4,HA_Test);
	$finish;
end
endmodule
