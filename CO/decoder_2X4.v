module dec_2X4(
		input in1,
		input in2,
		output [0:3] Out
		);
assign Out=((in2==0)?((in1==0)?0:1):((in1==0)?2:3));
endmodule
