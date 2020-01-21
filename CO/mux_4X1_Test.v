`timescale 1ns/1ps
`include "mux_4X1.v"



module mux_4X1_Test;
 
   // Declare internal reg variables to drive design inputs
   // Declare wire signals to collect design output
   // Declare other internal variables used in testbench
   reg [3:0] a;
   reg [3:0] b;
   reg [3:0] c;
   reg [3:0] d;
   wire [3:0] out;
   reg [1:0] sel;
   integer i;
 
   // Instantiate one of the designs, in this case, we have used the design with case statement
   // Connect testbench variables declared above with those in the design
   mux_4X1 uut(
   		.a (a),
                .b (b),
                .c (c),
                .d (d),
                .sel (sel),
                .out (out)
                );
 
   // This initial block is the stimulus
initial
begin
      $dumpfile("mux_4X1_Map.vcd");
      $dumpvars(0,mux_4X1_Test);
      // Launch a monitor in background to display values to log whenever a/b/c/d/sel/out changes
      $monitor ("[%0t] sel=0x%0h a=0x%0h b=0x%0h c=0x%0h d=0x%0h out=0x%0h", $time, sel, a, b, c, d, out);
 
       // 1. At time 0, drive random values to a/b/c/d and keep sel = 0
      sel <= 0;
      a <= $random;
      b <= $random;
      c <= $random;
      d <= $random;
 
      // 2. Change the value of sel after every 5ns
      for (i = 1; i < 4; i=i+1) begin
         #100 sel <= i;
      end
 
      // 3. After Step2 is over, wait for 5ns and finish simulation
      #100 $finish;
   end
endmodule
 
