`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:05:54 02/12/2020
// Design Name:   Ripple_Counter
// Module Name:   C:/Users/user/Desktop/18CS8022/Sqeuential_Circuits/RC_Test.v
// Project Name:  Sqeuential_Circuits
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ripple_Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

 module RC_Test;

  // Inputs
 reg clk;

// Outputs
wire Q1;
wire Q2;
wire Q3;
wire Q4;

// Instantiate the Unit Under Test (UUT)
Ripple_Counter uut (
    .clk(clk),
    .Q1(Q1), 
    .Q2(Q2), 
    .Q3(Q3), 
    .Q4(Q4)
    );

   initial begin
    // Initialize Inputs
    clk <= 1'b1;

      #200 $strobe($time, " %2000");
   end

    always #10 clk=~clk;

endmodule