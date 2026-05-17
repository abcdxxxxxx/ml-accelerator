module pe_tb;

logic clk, reset, enable;
logic signed [7:0] a_in, b_in;
logic signed [7:0] a_out, b_out;
logic signed [31:0] acc_out;

pe dut (.*);

always #5 clk = ~clk;

initial begin
    clk = 0; reset = 1; enable = 0;
    a_in = 0; b_in = 0;
    @(posedge clk); #1;

    // Reset release
    reset = 0;

    // Test 1: 2 * 3 = 6
    enable = 1; a_in = 2; b_in = 3;
    @(posedge clk); #1;
    $display("After 2*3: acc=%0d (expect 6) %s", acc_out, acc_out==6 ? "PASS" : "FAIL");

    // Test 2: accumulate 4*5 = 20, total = 26
    a_in = 4; b_in = 5;
    @(posedge clk); #1;
    $display("After 4*5: acc=%0d (expect 26) %s", acc_out, acc_out==26 ? "PASS" : "FAIL");

    // Test 3: negative -3 * 2 = -6, total = 20
    a_in = -3; b_in = 2;
    @(posedge clk); #1;
    $display("After -3*2: acc=%0d (expect 20) %s", acc_out, acc_out==20 ? "PASS" : "FAIL");

    $display("PE Testbench Done!");
    $finish;
end

endmodule
