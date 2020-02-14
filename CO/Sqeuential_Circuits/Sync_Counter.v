`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:48:43 02/14/2020 
// Design Name: 
// Module Name:    Sync_Counter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Sync_Counter(
	input clk,
   output wire Q1,
   output wire Q2,
   output wire Q3,
   output wire Q4
    );
	// reg t1,t2,t3,t4;
	 T_Flip_Flop       num_1(.clk(clk),.T(1'b1),.Q(Q1));
    T_Flip_Flop       num_2(.clk(clk),.T(Q1),.Q(Q2));
    T_Flip_Flop       num_3(.clk(clk),.T(Q1&Q2),.Q(Q3)); 
    T_Flip_Flop       num_4(.clk(clk),.T(Q1&Q2&Q3),.Q(Q4));
endmodule
