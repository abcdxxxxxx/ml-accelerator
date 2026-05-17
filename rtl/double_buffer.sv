module double_buffer #(
    parameter N     = 3,   // tile size
    parameter DEPTH = 16   // max elements per bank
)(
    input  logic        clk,
    input  logic        reset,

    // Write port (loading next tile)
    input  logic        wr_en,
    input  logic [$clog2(DEPTH)-1:0] wr_addr,
    input  logic signed [7:0] wr_data,

    // Read port (feeding systolic array)
    input  logic [$clog2(DEPTH)-1:0] rd_addr,
    output logic signed [7:0] rd_data,

    // Swap banks
    input  logic        swap
);
    // Bank select: 0 = bank0 load, bank1 compute
    //              1 = bank1 load, bank0 compute
    logic bank_sel;

    always_ff @(posedge clk) begin
        if (reset)     bank_sel <= 0;
        else if (swap) bank_sel <= ~bank_sel;
    end

    // Bank 0
    logic signed [7:0] rdata0, rdata1;
    sram #(.DEPTH(DEPTH), .WIDTH(8)) bank0 (
        .clk(clk),
        .we(wr_en && !bank_sel),
        .waddr(wr_addr),
        .raddr(rd_addr),
        .wdata(wr_data),
        .rdata(rdata0)
    );

    // Bank 1
    sram #(.DEPTH(DEPTH), .WIDTH(8)) bank1 (
        .clk(clk),
        .we(wr_en && bank_sel),
        .waddr(wr_addr),
        .raddr(rd_addr),
        .wdata(wr_data),
        .rdata(rdata1)
    );

    // Read from compute bank
    assign rd_data = bank_sel ? rdata0 : rdata1;

endmodule
