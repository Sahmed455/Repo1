`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:57:43 02/14/2020
// Design Name:   Sync_Counter
// Module Name:   C:/Users/user/Desktop/18CS8022/Sqeuential_Circuits/Sync_Test.v
// Project Name:  Sqeuential_Circuits
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sync_Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Sync_Test;

	// Inputs
	reg clk;

	// Outputs
	wire Q1;
	wire Q2;
	wire Q3;
	wire Q4;

	// Instantiate the Unit Under Test (UUT)
	Sync_Counter uut (
		.clk(clk), 
		.Q1(Q1), 
		.Q2(Q2), 
		.Q3(Q3), 
		.Q4(Q4)
	);

	 initial begin
    // Initialize Inputs
    clk <= 1'b1;

      #200 $strobe($time, " %200");
   end

    always #10 clk=~clk;
endmodule

