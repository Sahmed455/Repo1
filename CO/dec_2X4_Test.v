`timescale 1ns/1ps
`include "decoder_2X4.v"

module dec_2X4_Test;

reg in1;
reg in2;
wire [0:3] Out;

dec_2X4 uut(
		.in1(in1),
		.in2(in2),
		.Out(Out)
		);

initial
begin
	$dumpfile("dec_2X4_Map.vcd");
	$dumpvars(0,dec_2X4_Test);
	
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
	
end
endmodule
