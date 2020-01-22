`timescale 1ns/1ps
`include "mux_4X1.v"

module mux_4X1_Test;
 
   reg [3:0] a;
   reg [3:0] b;
   reg [3:0] c;
   reg [3:0] d;
   wire [3:0] out;
   reg [1:0] sel;
   integer i;
 
   mux_4X1 uut(
   		.a (a),
                .b (b),
                .c (c),
                .d (d),
                .sel (sel),
                .out (out)
                );
 
initial
begin
      $dumpfile("mux_4X1_Map.vcd");
      $dumpvars(0,mux_4X1_Test);
      $monitor ("sel=0x%0b a=0x%0b b=0x%0b c=0x%0b d=0x%0b out=0x%0b", sel, a, b, c, d, out);
 
       // 1. At time 0, drive random values to a/b/c/d and keep sel = 0
      sel <= 0;
      a <= 0;//$random;
      b <= 1;//$random;
      c <= 2;//$random;
      d <= 3;//$random;
 
      // 2. Change the value of sel after every 5ns
      for (i = 1; i < 4; i=i+1) begin
         #100 sel <= i;
      end
 
      // 3. After Step2 is over, wait for 5ns and finish simulation
      #100;
      $finish;
end
endmodule
 
