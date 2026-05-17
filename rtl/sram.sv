module sram #(
    parameter DEPTH = 16,
    parameter WIDTH = 8
)(
    input  logic                      clk,
    input  logic                      we,
    input  logic [$clog2(DEPTH)-1:0] waddr,
    input  logic [$clog2(DEPTH)-1:0] raddr,
    input  logic [WIDTH-1:0]         wdata,
    output logic [WIDTH-1:0]         rdata
);
    logic [WIDTH-1:0] mem [DEPTH];

    always_ff @(posedge clk) begin
        if (we) mem[waddr] <= wdata;
        rdata <= mem[raddr];
    end
endmodule
