module systolic_tb;

logic clk, reset, enable;
logic signed [7:0] a_in [3];
logic signed [7:0] b_in [3];
logic signed [31:0] acc_out [3][3];

systolic_array #(.N(3)) dut (.*);

always #5 clk = ~clk;

task cycle(
    input logic signed [7:0] a0, a1, a2,
    input logic signed [7:0] b0, b1, b2
);
    a_in[0]=a0; a_in[1]=a1; a_in[2]=a2;
    b_in[0]=b0; b_in[1]=b1; b_in[2]=b2;
    @(posedge clk); #1;
endtask

initial begin
    clk=0; reset=1; enable=0;
    foreach(a_in[i]) a_in[i]=0;
    foreach(b_in[j]) b_in[j]=0;
    @(posedge clk); #1;
    reset=0; enable=1;

    // A=Identity skewed, B=[[1,2,3],[4,5,6],[7,8,9]] skewed
    // a[i] delayed by i cycles, b[j] delayed by j cycles
    //
    // Cycle: a[0] a[1] a[2] | b[0] b[1] b[2]
    //   1:    1    0    0   |  1    0    0
    //   2:    0    0    0   |  4    2    0
    //   3:    0    1    0   |  7    5    3
    //   4:    0    0    0   |  0    8    6
    //   5:    0    0    1   |  0    0    9
    //   6:    0    0    0   |  0    0    0
    //   7:    0    0    0   |  0    0    0

    cycle( 1, 0, 0,   1, 0, 0);
    cycle( 0, 0, 0,   4, 2, 0);
    cycle( 0, 1, 0,   7, 5, 3);
    cycle( 0, 0, 0,   0, 8, 6);
    cycle( 0, 0, 1,   0, 0, 9);
    cycle( 0, 0, 0,   0, 0, 0);
    cycle( 0, 0, 0,   0, 0, 0);

    // Drain
    repeat(5) @(posedge clk); #1;

    $display("Got:");
    for (int i=0; i<3; i++) begin
        for (int j=0; j<3; j++)
            $write("%0d\t", acc_out[i][j]);
        $display("");
    end
    $display("Expected:");
    $display("1  2  3");
    $display("4  5  6");
    $display("7  8  9");

    $finish;
end
endmodule
