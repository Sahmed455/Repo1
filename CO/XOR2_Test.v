`timescale 10ns/10ps
`include "XOR2.v"

module XOR2_Test;

reg in1;
reg in2;

wire Out;

XOR2 uut(
	.in1(in1),
	.in2(in2),
	.Out(Out)
);

initial
begin
	$monitor("A=%b\tB=%b\tOutput=%b\n",in1,in2,Out);
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
	$finish;
end
endmodule

