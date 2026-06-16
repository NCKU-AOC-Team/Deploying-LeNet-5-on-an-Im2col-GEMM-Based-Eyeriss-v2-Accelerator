// ====================================================================================================== //
// This module is router cluster.
// router cluster module integrates 9 iact routers, 3 weight routers, 3 psum routers.
// This module is one of the main parts in this accelerator architecture.
// Its iact   routers are connected to all PEs            in PE cluster (one-to-one).
// Its weight routers are connected to all rows    of PEs in PE cluster (one-to-row).
// Its psum   routers are connected to all columns of PEs in PE cluster (one-to-column).
//
// router cluster is the core of the Hierarchical mesh-NoC, which provides flexibility to the accelerator.
// This architecture can support all kinds of dataflow topology with data_in_sel / data_out_sel controls.
// ------------------------------------------------------------------------------------------------------ //
// [Refactor] port 介面 array 化、15 個 router 收成 3 個 generate（行為與原攤平版等價，diff 50 張驗證）。
//   - iact   ×9：array [0:2][0:2]（per-PE, one-to-one）、addr[6:0]/data[11:0]、4 src 向(GLB/north/south/horiz in)+4 dst 向。
//   - weight ×3：array [0:2]（per-row, one-to-row）、addr[7:0]/data[12:0]、PE_out 無 ready（只有 valid+bits）。
//   - psum   ×3：array [0:2]（per-col, one-to-column）、signed [20:0]、in: PE/GLB/north  out: PE/GLB/south。
//   - data_in_sel / data_out_sel 維持攤平 port（可能來自 TOP，不 array 化以免連動上層）+ 內部 adapter；iact sel 為 per-row。
//   - 葉子 Iact/Weight/Psum_Router 是純組合 MUX（circuit switching），未更動。
// ====================================================================================================== //

module Router_Cluster (
	// ===== control：data_in_sel / data_out_sel（攤平；iact per-row、weight/psum per-router）=====
	input  [1:0] iact_0_data_in_sel,
	input  [1:0] iact_0_data_out_sel,
	input  [1:0] iact_1_data_in_sel,
	input  [1:0] iact_1_data_out_sel,
	input  [1:0] iact_2_data_in_sel,
	input  [1:0] iact_2_data_out_sel,
	input        weight_0_data_in_sel,
	input        weight_0_data_out_sel,
	input        weight_1_data_in_sel,
	input        weight_1_data_out_sel,
	input        weight_2_data_in_sel,
	input        weight_2_data_out_sel,
	input        psum_0_data_in_sel,
	input        psum_0_data_out_sel,
	input        psum_1_data_in_sel,
	input        psum_1_data_out_sel,
	input        psum_2_data_in_sel,
	input        psum_2_data_out_sel,

	// ===== iact routers ×9（one-to-one to PEs）— array [0:2][0:2] =====
	//   src ports: GLB / north / south / horiz   (address + data in)
	output [0:2][0:2][0:0]  iact_GLB_address_in_ready,
	input  [0:2][0:2][0:0]  iact_GLB_address_in_valid,
	input  [0:2][0:2][6:0]  iact_GLB_address_in_bits,
	output [0:2][0:2][0:0]  iact_GLB_data_in_ready,
	input  [0:2][0:2][0:0]  iact_GLB_data_in_valid,
	input  [0:2][0:2][11:0] iact_GLB_data_in_bits,
	output [0:2][0:2][0:0]  iact_north_address_in_ready,
	input  [0:2][0:2][0:0]  iact_north_address_in_valid,
	input  [0:2][0:2][6:0]  iact_north_address_in_bits,
	output [0:2][0:2][0:0]  iact_north_data_in_ready,
	input  [0:2][0:2][0:0]  iact_north_data_in_valid,
	input  [0:2][0:2][11:0] iact_north_data_in_bits,
	output [0:2][0:2][0:0]  iact_south_address_in_ready,
	input  [0:2][0:2][0:0]  iact_south_address_in_valid,
	input  [0:2][0:2][6:0]  iact_south_address_in_bits,
	output [0:2][0:2][0:0]  iact_south_data_in_ready,
	input  [0:2][0:2][0:0]  iact_south_data_in_valid,
	input  [0:2][0:2][11:0] iact_south_data_in_bits,
	output [0:2][0:2][0:0]  iact_horiz_address_in_ready,
	input  [0:2][0:2][0:0]  iact_horiz_address_in_valid,
	input  [0:2][0:2][6:0]  iact_horiz_address_in_bits,
	output [0:2][0:2][0:0]  iact_horiz_data_in_ready,
	input  [0:2][0:2][0:0]  iact_horiz_data_in_valid,
	input  [0:2][0:2][11:0] iact_horiz_data_in_bits,

	//   dst ports: PE / north / south / horiz    (address + data out)
	input  [0:2][0:2][0:0]  iact_PE_address_out_ready,
	output [0:2][0:2][0:0]  iact_PE_address_out_valid,
	output [0:2][0:2][6:0]  iact_PE_address_out_bits,
	input  [0:2][0:2][0:0]  iact_PE_data_out_ready,
	output [0:2][0:2][0:0]  iact_PE_data_out_valid,
	output [0:2][0:2][11:0] iact_PE_data_out_bits,
	input  [0:2][0:2][0:0]  iact_north_address_out_ready,
	output [0:2][0:2][0:0]  iact_north_address_out_valid,
	output [0:2][0:2][6:0]  iact_north_address_out_bits,
	input  [0:2][0:2][0:0]  iact_north_data_out_ready,
	output [0:2][0:2][0:0]  iact_north_data_out_valid,
	output [0:2][0:2][11:0] iact_north_data_out_bits,
	input  [0:2][0:2][0:0]  iact_south_address_out_ready,
	output [0:2][0:2][0:0]  iact_south_address_out_valid,
	output [0:2][0:2][6:0]  iact_south_address_out_bits,
	input  [0:2][0:2][0:0]  iact_south_data_out_ready,
	output [0:2][0:2][0:0]  iact_south_data_out_valid,
	output [0:2][0:2][11:0] iact_south_data_out_bits,
	input  [0:2][0:2][0:0]  iact_horiz_address_out_ready,
	output [0:2][0:2][0:0]  iact_horiz_address_out_valid,
	output [0:2][0:2][6:0]  iact_horiz_address_out_bits,
	input  [0:2][0:2][0:0]  iact_horiz_data_out_ready,
	output [0:2][0:2][0:0]  iact_horiz_data_out_valid,
	output [0:2][0:2][11:0] iact_horiz_data_out_bits,

	// ===== weight routers ×3（one-to-row）— array [0:2]；PE_out 無 ready（只有 valid+bits）=====
	//   src: GLB / horiz (in)    dst: PE / horiz (out)
	output [0:2]       weight_GLB_address_in_ready,
	input  [0:2]       weight_GLB_address_in_valid,
	input  [0:2][7:0]  weight_GLB_address_in_bits,
	output [0:2]       weight_GLB_data_in_ready,
	input  [0:2]       weight_GLB_data_in_valid,
	input  [0:2][12:0] weight_GLB_data_in_bits,
	output [0:2]       weight_horiz_address_in_ready,
	input  [0:2]       weight_horiz_address_in_valid,
	input  [0:2][7:0]  weight_horiz_address_in_bits,
	output [0:2]       weight_horiz_data_in_ready,
	input  [0:2]       weight_horiz_data_in_valid,
	input  [0:2][12:0] weight_horiz_data_in_bits,
	output [0:2]       weight_PE_address_out_valid,
	output [0:2][7:0]  weight_PE_address_out_bits,
	output [0:2]       weight_PE_data_out_valid,
	output [0:2][12:0] weight_PE_data_out_bits,
	input  [0:2]       weight_horiz_address_out_ready,
	output [0:2]       weight_horiz_address_out_valid,
	output [0:2][7:0]  weight_horiz_address_out_bits,
	input  [0:2]       weight_horiz_data_out_ready,
	output [0:2]       weight_horiz_data_out_valid,
	output [0:2][12:0] weight_horiz_data_out_bits,

	// ===== psum routers ×3（one-to-column）— array [0:2]；signed [20:0] =====
	//   src: PE / GLB / north (in)    dst: PE / GLB / south (out)
	output        [0:2]       psum_PE_in_ready,
	input         [0:2]       psum_PE_in_valid,
	input signed  [0:2][20:0] psum_PE_in_bits,
	output        [0:2]       psum_GLB_in_ready,
	input         [0:2]       psum_GLB_in_valid,
	input signed  [0:2][20:0] psum_GLB_in_bits,
	output        [0:2]       psum_north_in_ready,
	input         [0:2]       psum_north_in_valid,
	input signed  [0:2][20:0] psum_north_in_bits,
	input         [0:2]       psum_PE_out_ready,
	output        [0:2]       psum_PE_out_valid,
	output signed [0:2][20:0] psum_PE_out_bits,
	input         [0:2]       psum_GLB_out_ready,
	output        [0:2]       psum_GLB_out_valid,
	output signed [0:2][20:0] psum_GLB_out_bits,
	input         [0:2]       psum_south_out_ready,
	output        [0:2]       psum_south_out_valid,
	output signed [0:2][20:0] psum_south_out_bits
);

genvar r,c,i;

// ----------------------------------------------------------------------------------------- //
// sel adapter：data_in_sel / data_out_sel 維持攤平 port，這裡收進 array 餵下面的 generate。
//   iact 的 sel 是 per-row（iact_0/1/2 給整個 row 共用），weight / psum 則是 per-router。
// ----------------------------------------------------------------------------------------- //
wire [0:2][1:0] iact_sd;    wire [0:2][1:0] iact_so;    // iact   data_in/out_sel (per-row)
wire [0:2]      weight_sd;  wire [0:2]      weight_so;  // weight data_in/out_sel
wire [0:2]      psum_sd;    wire [0:2]      psum_so;    // psum   data_in/out_sel

assign iact_sd[0]   = iact_0_data_in_sel;    assign iact_so[0]   = iact_0_data_out_sel;
assign iact_sd[1]   = iact_1_data_in_sel;    assign iact_so[1]   = iact_1_data_out_sel;
assign iact_sd[2]   = iact_2_data_in_sel;    assign iact_so[2]   = iact_2_data_out_sel;

assign weight_sd[0] = weight_0_data_in_sel;  assign weight_so[0] = weight_0_data_out_sel;
assign weight_sd[1] = weight_1_data_in_sel;  assign weight_so[1] = weight_1_data_out_sel;
assign weight_sd[2] = weight_2_data_in_sel;  assign weight_so[2] = weight_2_data_out_sel;

assign psum_sd[0]   = psum_0_data_in_sel;    assign psum_so[0]   = psum_0_data_out_sel;
assign psum_sd[1]   = psum_1_data_in_sel;    assign psum_so[1]   = psum_1_data_out_sel;
assign psum_sd[2]   = psum_2_data_in_sel;    assign psum_so[2]   = psum_2_data_out_sel;

// ===== iact ×9 — per-PE [r][c]；sel 為 per-row → iact_sd[r] / iact_so[r] =====
generate for(r=0;r<3;r=r+1) for(c=0;c<3;c=c+1) begin: IACT_R
	Iact_Router u (
		.GLB_address_in_ready(iact_GLB_address_in_ready[r][c]),
		.GLB_address_in_valid(iact_GLB_address_in_valid[r][c]),
		.GLB_address_in(iact_GLB_address_in_bits[r][c]),
		.GLB_data_in_ready(iact_GLB_data_in_ready[r][c]),
		.GLB_data_in_valid(iact_GLB_data_in_valid[r][c]),
		.GLB_data_in(iact_GLB_data_in_bits[r][c]),
		.north_address_in_ready(iact_north_address_in_ready[r][c]),
		.north_address_in_valid(iact_north_address_in_valid[r][c]),
		.north_address_in(iact_north_address_in_bits[r][c]),
		.north_data_in_ready(iact_north_data_in_ready[r][c]),
		.north_data_in_valid(iact_north_data_in_valid[r][c]),
		.north_data_in(iact_north_data_in_bits[r][c]),
		.south_address_in_ready(iact_south_address_in_ready[r][c]),
		.south_address_in_valid(iact_south_address_in_valid[r][c]),
		.south_address_in(iact_south_address_in_bits[r][c]),
		.south_data_in_ready(iact_south_data_in_ready[r][c]),
		.south_data_in_valid(iact_south_data_in_valid[r][c]),
		.south_data_in(iact_south_data_in_bits[r][c]),
		.horiz_address_in_ready(iact_horiz_address_in_ready[r][c]),
		.horiz_address_in_valid(iact_horiz_address_in_valid[r][c]),
		.horiz_address_in(iact_horiz_address_in_bits[r][c]),
		.horiz_data_in_ready(iact_horiz_data_in_ready[r][c]),
		.horiz_data_in_valid(iact_horiz_data_in_valid[r][c]),
		.horiz_data_in(iact_horiz_data_in_bits[r][c]),
		.PE_address_out_ready(iact_PE_address_out_ready[r][c]),
		.PE_address_out_valid(iact_PE_address_out_valid[r][c]),
		.PE_address_out(iact_PE_address_out_bits[r][c]),
		.PE_data_out_ready(iact_PE_data_out_ready[r][c]),
		.PE_data_out_valid(iact_PE_data_out_valid[r][c]),
		.PE_data_out(iact_PE_data_out_bits[r][c]),
		.north_address_out_ready(iact_north_address_out_ready[r][c]),
		.north_address_out_valid(iact_north_address_out_valid[r][c]),
		.north_address_out(iact_north_address_out_bits[r][c]),
		.north_data_out_ready(iact_north_data_out_ready[r][c]),
		.north_data_out_valid(iact_north_data_out_valid[r][c]),
		.north_data_out(iact_north_data_out_bits[r][c]),
		.south_address_out_ready(iact_south_address_out_ready[r][c]),
		.south_address_out_valid(iact_south_address_out_valid[r][c]),
		.south_address_out(iact_south_address_out_bits[r][c]),
		.south_data_out_ready(iact_south_data_out_ready[r][c]),
		.south_data_out_valid(iact_south_data_out_valid[r][c]),
		.south_data_out(iact_south_data_out_bits[r][c]),
		.horiz_address_out_ready(iact_horiz_address_out_ready[r][c]),
		.horiz_address_out_valid(iact_horiz_address_out_valid[r][c]),
		.horiz_address_out(iact_horiz_address_out_bits[r][c]),
		.horiz_data_out_ready(iact_horiz_data_out_ready[r][c]),
		.horiz_data_out_valid(iact_horiz_data_out_valid[r][c]),
		.horiz_data_out(iact_horiz_data_out_bits[r][c]),
		.data_in_sel(iact_sd[r]),
		.data_out_sel(iact_so[r])
	);
end endgenerate

// ===== weight ×3 — per-row；PE_out 只有 valid+bits（無 ready）=====
generate for(i=0;i<3;i=i+1) begin: WEIGHT_R
	Weight_Router u (
		.GLB_address_in_ready(weight_GLB_address_in_ready[i]),
		.GLB_address_in_valid(weight_GLB_address_in_valid[i]),
		.GLB_address_in(weight_GLB_address_in_bits[i]),
		.GLB_data_in_ready(weight_GLB_data_in_ready[i]),
		.GLB_data_in_valid(weight_GLB_data_in_valid[i]),
		.GLB_data_in(weight_GLB_data_in_bits[i]),
		.horiz_address_in_ready(weight_horiz_address_in_ready[i]),
		.horiz_address_in_valid(weight_horiz_address_in_valid[i]),
		.horiz_address_in(weight_horiz_address_in_bits[i]),
		.horiz_data_in_ready(weight_horiz_data_in_ready[i]),
		.horiz_data_in_valid(weight_horiz_data_in_valid[i]),
		.horiz_data_in(weight_horiz_data_in_bits[i]),
		.PE_address_out_valid(weight_PE_address_out_valid[i]),
		.PE_address_out(weight_PE_address_out_bits[i]),
		.PE_data_out_valid(weight_PE_data_out_valid[i]),
		.PE_data_out(weight_PE_data_out_bits[i]),
		.horiz_address_out_ready(weight_horiz_address_out_ready[i]),
		.horiz_address_out_valid(weight_horiz_address_out_valid[i]),
		.horiz_address_out(weight_horiz_address_out_bits[i]),
		.horiz_data_out_ready(weight_horiz_data_out_ready[i]),
		.horiz_data_out_valid(weight_horiz_data_out_valid[i]),
		.horiz_data_out(weight_horiz_data_out_bits[i]),
		.data_in_sel(weight_sd[i]),
		.data_out_sel(weight_so[i])
	);
end endgenerate

// ===== psum ×3 — per-column；signed datapath（in: PE/GLB/north, out: PE/GLB/south）=====
generate for(i=0;i<3;i=i+1) begin: PSUM_R
	Psum_Router u (
		.PE_in_ready(psum_PE_in_ready[i]),
		.PE_in_valid(psum_PE_in_valid[i]),
		.PE_in(psum_PE_in_bits[i]),
		.GLB_in_ready(psum_GLB_in_ready[i]),
		.GLB_in_valid(psum_GLB_in_valid[i]),
		.GLB_in(psum_GLB_in_bits[i]),
		.north_in_ready(psum_north_in_ready[i]),
		.north_in_valid(psum_north_in_valid[i]),
		.north_in(psum_north_in_bits[i]),
		.PE_out_ready(psum_PE_out_ready[i]),
		.PE_out_valid(psum_PE_out_valid[i]),
		.PE_out(psum_PE_out_bits[i]),
		.GLB_out_ready(psum_GLB_out_ready[i]),
		.GLB_out_valid(psum_GLB_out_valid[i]),
		.GLB_out(psum_GLB_out_bits[i]),
		.south_out_ready(psum_south_out_ready[i]),
		.south_out_valid(psum_south_out_valid[i]),
		.south_out(psum_south_out_bits[i]),
		.data_in_sel(psum_sd[i]),
		.data_out_sel(psum_so[i])
	);
end endgenerate

endmodule
