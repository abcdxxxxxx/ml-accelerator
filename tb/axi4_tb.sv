module axi4_tb;

logic        clk, reset;
logic        awvalid, awready, wvalid, wready, bvalid, bready;
logic [7:0]  awaddr;
logic [31:0] wdata;
logic [1:0]  bresp;
logic        arvalid, arready, rvalid, rready;
logic [7:0]  araddr;
logic [31:0] rdata;
logic [1:0]  rresp;
logic        start, done;
logic [7:0]  tile_size;

assign done = 1'b1;

axi4_lite_slave dut (.*);

always #5 clk = ~clk;

// Write task - clock based
task axi_write(input [7:0] addr, input [31:0] data);
    integer timeout;
    // Address
    awvalid=1; awaddr=addr; wvalid=0; bready=0;
    timeout=0;
    @(posedge clk); #1;
    while (!awready && timeout<20) begin @(posedge clk); #1; timeout++; end
    awvalid=0;
    // Data
    wvalid=1; wdata=data;
    timeout=0;
    @(posedge clk); #1;
    while (!wready && timeout<20) begin @(posedge clk); #1; timeout++; end
    wvalid=0;
    // Response
    bready=1;
    timeout=0;
    @(posedge clk); #1;
    while (!bvalid && timeout<20) begin @(posedge clk); #1; timeout++; end
    bready=0;
    @(posedge clk); #1;
endtask

task axi_read(input [7:0] addr, output [31:0] data);
    integer timeout;
    arvalid=1; araddr=addr; rready=0;
    timeout=0;
    @(posedge clk); #1;
    while (!arready && timeout<20) begin @(posedge clk); #1; timeout++; end
    arvalid=0;
    rready=1;
    timeout=0;
    @(posedge clk); #1;
    while (!rvalid && timeout<20) begin @(posedge clk); #1; timeout++; end
    data = rdata;
    rready=0;
    @(posedge clk); #1;
endtask

logic [31:0] rd;

initial begin
    clk=0; reset=1;
    awvalid=0; wvalid=0; bready=0;
    arvalid=0; rready=0;
    awaddr=0; wdata=0; araddr=0;
    repeat(3) @(posedge clk); #1;
    reset=0;
    @(posedge clk); #1;

    $display("Writing TILE_SIZE=3...");
    axi_write(8'h08, 32'd3);
    $display("Done.");

    $display("Writing CTRL start=1...");
    axi_write(8'h00, 32'h1);
    $display("Done.");

    $display("Reading STATUS...");
    axi_read(8'h04, rd);
    $display("STATUS=%0d (expect 1) %s", rd, rd==1 ? "PASS" : "FAIL");

    axi_read(8'h08, rd);
    $display("TILE_SIZE=%0d (expect 3) %s", rd, rd==3 ? "PASS" : "FAIL");

    $display("start=%0b (expect 1) %s", start, start==1 ? "PASS" : "FAIL");
    $display("tile_size=%0d (expect 3) %s", tile_size, tile_size==3 ? "PASS" : "FAIL");

    $display("AXI4-Lite Test DONE!");
    $finish;
end
endmodule
