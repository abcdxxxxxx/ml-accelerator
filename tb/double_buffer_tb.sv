module double_buffer_tb;

logic clk, reset, swap, wr_en;
logic [3:0] wr_addr, rd_addr;
logic signed [7:0] wr_data, rd_data;

double_buffer #(.N(3), .DEPTH(16)) dut (.*);

always #5 clk = ~clk;

initial begin
    clk=0; reset=1; swap=0; wr_en=0;
    wr_addr=0; wr_data=0; rd_addr=0;
    @(posedge clk); #1;
    reset=0;

    // === Load tile A into bank0 ===
    $display("Loading tile A into bank0...");
    for (int i=0; i<9; i++) begin
        wr_en=1; wr_addr=i; wr_data=i+1; // values 1..9
        @(posedge clk); #1;
    end
    wr_en=0;

    // Swap: bank0 -> compute, bank1 -> load
    swap=1; @(posedge clk); #1; swap=0;

    // === Simultaneously: read bank0, load tile B into bank1 ===
    $display("Reading bank0 while loading bank1 (zero idle cycles):");
    for (int i=0; i<9; i++) begin
        rd_addr=i;
        wr_en=1; wr_addr=i; wr_data=(i+1)*10; // values 10,20..90
        @(posedge clk); #1;
        $display("  rd[%0d]=%0d (expect %0d) %s",
            i, rd_data, i+1,
            rd_data==(i+1) ? "PASS" : "FAIL");
    end
    wr_en=0;

    // Swap again: bank1 -> compute
    swap=1; @(posedge clk); #1; swap=0;

    $display("Reading bank1 (tile B):");
    for (int i=0; i<9; i++) begin
        rd_addr=i; @(posedge clk); #1;
        $display("  rd[%0d]=%0d (expect %0d) %s",
            i, rd_data, (i+1)*10,
            rd_data==(i+1)*10 ? "PASS" : "FAIL");
    end

    $display("Double Buffer Test Done!");
    $finish;
end
endmodule
