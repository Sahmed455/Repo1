`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:03:26 02/12/2020 
// Design Name: 
// Module Name:    Ripple_Counter 
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
module Ripple_Counter( clk,Q1,Q2,Q3,Q4);
   input clk;
   output wire Q1;
   output wire Q2;
   output wire Q3;
   output wire Q4;

    T_Flip_Flop       num_1(.clk(clk),.T(1'b1),.Q(Q1));
    T_Flip_Flop       num_2(.clk(Q1),.T(1'b1),.Q(Q2));
    T_Flip_Flop       num_3(.clk(Q2),.T(1'b1),.Q(Q3)); 
    T_Flip_Flop       num_4(.clk(Q3),.T(1'b1),.Q(Q4));

 endmodule