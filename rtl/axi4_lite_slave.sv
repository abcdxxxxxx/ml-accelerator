module axi4_lite_slave (
    input  logic        clk,
    input  logic        reset,

    // AXI4-Lite Write Address
    input  logic        awvalid,
    output logic        awready,
    input  logic [7:0]  awaddr,

    // AXI4-Lite Write Data
    input  logic        wvalid,
    output logic        wready,
    input  logic [31:0] wdata,

    // AXI4-Lite Write Response
    output logic        bvalid,
    input  logic        bready,
    output logic [1:0]  bresp,

    // AXI4-Lite Read Address
    input  logic        arvalid,
    output logic        arready,
    input  logic [7:0]  araddr,

    // AXI4-Lite Read Data
    output logic        rvalid,
    input  logic        rready,
    output logic [31:0] rdata,
    output logic [1:0]  rresp,

    // CSR outputs to accelerator
    output logic        start,
    output logic [7:0]  tile_size,
    input  logic        done
);

    // CSR Register Map
    // 0x00 = CTRL    [0]=start
    // 0x04 = STATUS  [0]=done
    // 0x08 = TILE_SIZE

    logic [31:0] csr_ctrl;
    logic [31:0] csr_tile_size;

    assign start     = csr_ctrl[0];
    assign tile_size = csr_tile_size[7:0];

    // Write FSM
    typedef enum logic [1:0] {W_IDLE, W_ADDR, W_DATA, W_RESP} wstate_t;
    wstate_t wstate;
    logic [7:0] wr_addr_reg;

    always_ff @(posedge clk) begin
        if (reset) begin
            wstate <= W_IDLE;
            awready <= 0; wready <= 0; bvalid <= 0;
            csr_ctrl <= 0; csr_tile_size <= 3;
        end else begin
            case (wstate)
                W_IDLE: begin
                    awready <= 1; wready <= 0; bvalid <= 0;
                    if (awvalid) begin
                        wr_addr_reg <= awaddr;
                        awready <= 0;
                        wstate <= W_DATA;
                    end
                end
                W_DATA: begin
                    wready <= 1;
                    if (wvalid) begin
                        wready <= 0;
                        case (wr_addr_reg)
                            8'h00: csr_ctrl      <= wdata;
                            8'h08: csr_tile_size <= wdata;
                            default: ;
                        endcase
                        bvalid <= 1; bresp <= 0;
                        wstate <= W_RESP;
                    end
                end
                W_RESP: begin
                    if (bready) begin
                        bvalid <= 0;
                        wstate <= W_IDLE;
                    end
                end
                default: wstate <= W_IDLE;
            endcase
        end
    end

    // Read FSM
    typedef enum logic [1:0] {R_IDLE, R_DATA} rstate_t;
    rstate_t rstate;

    always_ff @(posedge clk) begin
        if (reset) begin
            arready <= 0; rvalid <= 0; rdata <= 0; rresp <= 0;
            rstate <= R_IDLE;
        end else begin
            case (rstate)
                R_IDLE: begin
                    arready <= 1; rvalid <= 0;
                    if (arvalid) begin
                        arready <= 0;
                        case (araddr)
                            8'h00: rdata <= csr_ctrl;
                            8'h04: rdata <= {31'b0, done};
                            8'h08: rdata <= csr_tile_size;
                            default: rdata <= 32'hDEADBEEF;
                        endcase
                        rvalid <= 1; rresp <= 0;
                        rstate <= R_DATA;
                    end
                end
                R_DATA: begin
                    if (rready) begin
                        rvalid <= 0;
                        rstate <= R_IDLE;
                    end
                end
                default: rstate <= R_IDLE;
            endcase
        end
    end

endmodule
