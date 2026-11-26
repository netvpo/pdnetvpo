`timescale 1ns / 1ps
module dff_rst_tb;
  reg clk;
  reg rst;
  reg d;
  wire q;
  dff_rst uut(
       .clk(clk), .rst(rst), .d(d), .q(q)
  );
  always #5 clk = ~clk;
  initial begin
      $dumpfile("dff_rst.vcd");
      $dumpvars(0, dff_rst_tb);
      clk = 0;  rst = 1; d = 0;
      #12;
      rst = 0;
      d = 1;
      #10;
      d = 0;
      #10;
      #3 d = 1;
      #2 rst = 1;
      #10;
      $finish;
  end
endmodule
