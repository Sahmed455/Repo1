`timescale 10s/1s
`include "AND2.v"

module AND_Test;

reg in1;
reg in2;

wire Out;

AND2 iAND2(in1,in2,Out);

/*AND_Test uut(
	.in1(in1),
	.in2(in2),
	.Out(Out)
);*/



initial
begin
	$monitor("a=%b, b=%b, OUTPUT=%b",in1,in2,Out);
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
