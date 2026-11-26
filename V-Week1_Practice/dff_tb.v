module dff_tb;
    reg clk, d;
    wire q;
    dff uut (
        .clk(clk), .d(d), .q(q)
);
    initial begin
        $dumpfile("dff.vcd");
        $dumpvars(0, dff_tb);
        clk = 0;
        d = 0;
        #5 d = 1;
        #5 d = 0;
        #5 d = 1;
        #5 d = 0;
        #10 $finish;
    end
    always #5 clk = ~clk;
endmodule

