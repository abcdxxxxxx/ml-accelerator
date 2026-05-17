module systolic_array #(
    parameter N = 3  // NxN array
)(
    input  logic        clk,
    input  logic        reset,
    input  logic        enable,
    input  logic signed [7:0] a_in [N],   // N rows from left
    input  logic signed [7:0] b_in [N],   // N cols from top
    output logic signed [31:0] acc_out [N][N]
);

    // Internal wires between PEs
    logic signed [7:0] a_wire [N][N+1];
    logic signed [7:0] b_wire [N+1][N];

    // Connect inputs
    genvar i, j;
    generate
        for (i = 0; i < N; i++) begin
            assign a_wire[i][0] = a_in[i];
        end
        for (j = 0; j < N; j++) begin
            assign b_wire[0][j] = b_in[j];
        end

        // Instantiate NxN PEs
        for (i = 0; i < N; i++) begin : row
            for (j = 0; j < N; j++) begin : col
                pe pe_inst (
                    .clk(clk),
                    .reset(reset),
                    .enable(enable),
                    .a_in(a_wire[i][j]),
                    .b_in(b_wire[i][j]),
                    .a_out(a_wire[i][j+1]),
                    .b_out(b_wire[i+1][j]),
                    .acc_out(acc_out[i][j])
                );
            end
        end
    endgenerate

endmodule
