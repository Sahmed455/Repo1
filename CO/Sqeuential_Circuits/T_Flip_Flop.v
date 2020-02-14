`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:01:50 02/12/2020 
// Design Name: 
// Module Name:    T_Flip_Flop 
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
module T_Flip_Flop( clk,T, Q);
   input wire clk;
   input wire T;
   output reg Q;
   wire D;

   initial
   begin
      Q<=1'b0;
   end

   assign  D= T ^ Q;

      always @(negedge clk)
       begin
        Q<=D;
       end
endmodule