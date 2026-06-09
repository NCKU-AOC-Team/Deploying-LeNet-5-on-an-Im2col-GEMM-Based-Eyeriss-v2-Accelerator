// =============================================================================
// Behavioral replacement for Xilinx Block Memory Generator IPs.
//
// Vivado's BMG IPs (IP_*_BRAM) are not available under Verilator, so this file
// supplies same-named pure-RTL modules with matching port lists and widths.
// Only active under Verilator (auto-defined `VERILATOR macro), so Vivado never
// sees these even if the file gets included by mistake.
//
// Widths/depths inferred from per-instantiation port widths in author's RTL.
// =============================================================================
`ifdef VERILATOR

// ----------------------------------------------------------------------------
// Generic Simple Dual-Port: independent write (clka/wea/addra/dina) and
// read (clkb/rstb/addrb/doutb). 1-cycle read latency, output registered.
// ----------------------------------------------------------------------------
module bram_sdp #(
    parameter ADDR_W = 10,
    parameter DATA_W = 8
)(
    input  wire              clka,
    input  wire              wea,
    input  wire [ADDR_W-1:0] addra,
    input  wire [DATA_W-1:0] dina,
    input  wire              clkb,
    input  wire              rstb,
    input  wire [ADDR_W-1:0] addrb,
    output reg  [DATA_W-1:0] doutb
);
    reg [DATA_W-1:0] mem [0:(1<<ADDR_W)-1];

    integer write_count;
    reg [ADDR_W-1:0] max_write_addr;

    always @(posedge clka) begin
        if (wea) begin
            mem[addra] <= dina;
            write_count <= write_count + 1;
            if (addra > max_write_addr) max_write_addr <= addra;
        end
    end
    always @(posedge clkb) begin
        if (rstb) doutb <= {DATA_W{1'b0}};
        else     doutb <= mem[addrb];
    end

    initial begin
        write_count = 0;
        max_write_addr = {ADDR_W{1'b0}};
    end

`ifdef BRAM_OCCUPANCY
    final begin
        $display("[occ] %m writes=%0d max_write_addr=%0d depth=%0d width=%0d",
                 write_count, max_write_addr, (1 << ADDR_W), DATA_W);
    end
`endif
endmodule

// ----------------------------------------------------------------------------
// Generic Single Port: shared addra for read+write, registered output.
// Read-First behavior (douta gets old mem[addra] during simultaneous write).
// ----------------------------------------------------------------------------
module bram_sp #(
    parameter ADDR_W = 10,
    parameter DATA_W = 8
)(
    input  wire              clka,
    input  wire              rsta,
    input  wire              wea,
    input  wire [ADDR_W-1:0] addra,
    input  wire [DATA_W-1:0] dina,
    output reg  [DATA_W-1:0] douta
);
    reg [DATA_W-1:0] mem [0:(1<<ADDR_W)-1];

    integer write_count;
    reg [ADDR_W-1:0] max_write_addr;

    always @(posedge clka) begin
        if (rsta) douta <= {DATA_W{1'b0}};
        else begin
            if (wea) begin
                mem[addra] <= dina;
                write_count <= write_count + 1;
                if (addra > max_write_addr) max_write_addr <= addra;
            end
            douta <= mem[addra];
        end
    end

    initial begin
        write_count = 0;
        max_write_addr = {ADDR_W{1'b0}};
    end

`ifdef BRAM_OCCUPANCY
    final begin
        $display("[occ] %m writes=%0d max_write_addr=%0d depth=%0d width=%0d",
                 write_count, max_write_addr, (1 << ADDR_W), DATA_W);
    end
`endif
endmodule

// =============================================================================
// IP-name wrappers — must match the names Vivado would have generated, since
// the author's RTL instantiates each IP by name (e.g. `IP_ifmap_BRAM u0 (..)`).
// =============================================================================

// 1 KiB x 8b, single-port (ifmap line buffer, holds one 28x28 MNIST image)
module IP_ifmap_BRAM (
    input  wire        clka,
    input  wire        rsta,
    input  wire        wea,
    input  wire [9:0]  addra,
    input  wire [7:0]  dina,
    output wire [7:0]  douta
);
    bram_sp #(.ADDR_W(10), .DATA_W(8)) u (
        .clka(clka), .rsta(rsta), .wea(wea),
        .addra(addra), .dina(dina), .douta(douta));
endmodule

// 2 Ki x 12b SDP (Iact data SRAM in GLB)
module IP_Iact_Data_SRAM_BRAM (
    input  wire        clka,
    input  wire        wea,
    input  wire [10:0] addra,
    input  wire [11:0] dina,
    input  wire        clkb,
    input  wire        rstb,
    input  wire [10:0] addrb,
    output wire [11:0] doutb
);
    bram_sdp #(.ADDR_W(11), .DATA_W(12)) u (
        .clka(clka), .wea(wea), .addra(addra), .dina(dina),
        .clkb(clkb), .rstb(rstb), .addrb(addrb), .doutb(doutb));
endmodule

// 512 x 7b SDP (Iact address SRAM in GLB)
module IP_Iact_Addr_SRAM_BRAM (
    input  wire       clka,
    input  wire       wea,
    input  wire [8:0] addra,
    input  wire [6:0] dina,
    input  wire       clkb,
    input  wire       rstb,
    input  wire [8:0] addrb,
    output wire [6:0] doutb
);
    bram_sdp #(.ADDR_W(9), .DATA_W(7)) u (
        .clka(clka), .wea(wea), .addra(addra), .dina(dina),
        .clkb(clkb), .rstb(rstb), .addrb(addrb), .doutb(doutb));
endmodule

// 512 x 21b SDP (Psum SRAM Bank in GLB)
module IP_Psum_Data_SRAM_BRAM (
    input  wire        clka,
    input  wire        wea,
    input  wire [8:0]  addra,
    input  wire [20:0] dina,
    input  wire        clkb,
    input  wire        rstb,
    input  wire [8:0]  addrb,
    output wire [20:0] doutb
);
    bram_sdp #(.ADDR_W(9), .DATA_W(21)) u (
        .clka(clka), .wea(wea), .addra(addra), .dina(dina),
        .clkb(clkb), .rstb(rstb), .addrb(addrb), .doutb(doutb));
endmodule

// 256 x 13b SP (Iact data scratchpad in PE) — author's RTL instantiates
// this as single-port (clka/rsta/wea/addra/dina/douta), not dual-port.
module IP_Iact_DATA_Spad_BRAM (
    input  wire        clka,
    input  wire        rsta,
    input  wire        wea,
    input  wire [7:0]  addra,
    input  wire [12:0] dina,
    output wire [12:0] douta
);
    bram_sp #(.ADDR_W(8), .DATA_W(13)) u (
        .clka(clka), .rsta(rsta), .wea(wea),
        .addra(addra), .dina(dina), .douta(douta));
endmodule

// 128 x 12b SP (weight data scratchpad in PE) — single-port, see note above.
module IP_Weight_DATA_Spad_BRAM (
    input  wire        clka,
    input  wire        rsta,
    input  wire        wea,
    input  wire [6:0]  addra,
    input  wire [11:0] dina,
    output wire [11:0] douta
);
    bram_sp #(.ADDR_W(7), .DATA_W(12)) u (
        .clka(clka), .rsta(rsta), .wea(wea),
        .addra(addra), .dina(dina), .douta(douta));
endmodule

// 32 x 21b SDP (Psum data scratchpad in PE)
module IP_Psum_DATA_Spad_BRAM (
    input  wire        clka,
    input  wire        wea,
    input  wire [4:0]  addra,
    input  wire [20:0] dina,
    input  wire        clkb,
    input  wire        rstb,
    input  wire [4:0]  addrb,
    output wire [20:0] doutb
);
    bram_sdp #(.ADDR_W(5), .DATA_W(21)) u (
        .clka(clka), .wea(wea), .addra(addra), .dina(dina),
        .clkb(clkb), .rstb(rstb), .addrb(addrb), .doutb(doutb));
endmodule

// 4 Ki x 8b SDP (Psum rearrange buffer in TOP)
module IP_Psum_Rearrange_BRAM (
    input  wire        clka,
    input  wire        wea,
    input  wire [11:0] addra,
    input  wire [7:0]  dina,
    input  wire        clkb,
    input  wire        rstb,
    input  wire [11:0] addrb,
    output wire [7:0]  doutb
);
    bram_sdp #(.ADDR_W(12), .DATA_W(8)) u (
        .clka(clka), .wea(wea), .addra(addra), .dina(dina),
        .clkb(clkb), .rstb(rstb), .addrb(addrb), .doutb(doutb));
endmodule

// ----------------------------------------------------------------------------
// LeNet quantized weight ROM (sparse-encoded: alternating addr/data segments
// per layer, mapping in src/TOP/TOP_interface.v parameters). Vivado BMG is
// 33722 x 16b initialized from ROM_sparse_COE.coe; the Makefile converts that
// .coe to rom_sparse_weight.mem and this module $readmemh's it at sim start.
// Without correct weights, inference is garbage — keep the .mem file in sync.
// ----------------------------------------------------------------------------
module ROM_sparse_weight (
    input  wire        clka,
    input  wire        ena,
    input  wire [15:0] addra,
    output reg  [15:0] douta
);
    reg [15:0] mem [0:65535];  // padded to full 16b addr space; only 0..33721 are valid
    initial begin
        $readmemh("rom_sparse_weight.mem", mem);
    end
    always @(posedge clka) begin
        if (ena) douta <= mem[addra];
    end
endmodule

`endif
