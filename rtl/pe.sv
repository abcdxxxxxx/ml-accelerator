module pe(
    input  logic        clk,
    input  logic        reset,
    input  logic        enable,
    // Data inputs
    input  logic signed [7:0]  a_in,    // from left
    input  logic signed [7:0]  b_in,    // from top
    // Data outputs (pass to next PE)
    output logic signed [7:0]  a_out,   // to right
    output logic signed [7:0]  b_out,   // to bottom
    // Accumulator
    output logic signed [31:0] acc_out
);

    logic signed [31:0] acc;

    always_ff @(posedge clk) begin
        if (reset) begin
            acc   <= 32'h0;
            a_out <= 8'h0;
            b_out <= 8'h0;
        end else if (enable) begin
            // MAC operation: acc += a * b
            acc   <= acc + (a_in * b_in);
            // Pass data to next PE
            a_out <= a_in;
            b_out <= b_in;
        end
    end

    assign acc_out = acc;

endmodule
