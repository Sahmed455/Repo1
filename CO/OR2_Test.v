`timescale 10s/1s
`include "OR2.v"

module OR_Test;

reg in1;
reg in2;

wire Out;

OR2 iOR2(in1,in2,Out);

initial
begin
	$monitor(" a=%b, b=%b, OUTPUT=%b", in1, in2, Out);
	in1=0;
	in2=0;
	#10;

	in1=0;
	in2=1;
	#10;

	in1=1;
	in2=0;
	#10;
	
	in1=1;
	in2=1;
	#10;
	$display("Even if I can't Simulate, I can code and OPERATE!!!");
	$finish;

end
endmodule
