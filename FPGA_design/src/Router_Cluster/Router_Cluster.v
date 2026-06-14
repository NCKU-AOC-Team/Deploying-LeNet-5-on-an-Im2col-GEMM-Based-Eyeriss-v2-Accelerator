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
// [Refactor] port ä»‹é¢ array ?–ã€?5 ??router ?¶æ? 3 ??generateï¼ˆè??ºè??Ÿæ”¤å¹³ç?ç­‰åƒ¹ï¼Œdiff 50 å¼µé?è­‰ï???
//   - iact   ?9ï¼šarray [0:2][0:2]ï¼ˆper-PE, one-to-oneï¼‰ã€addr[6:0]/data[`BOYU_LATER_STREAM_RANGE]?? src ??GLB/north/south/horiz in)+4 dst ?‘ã€?
//   - weight ?3ï¼šarray [0:2]ï¼ˆper-row, one-to-rowï¼‰ã€addr[7:0]/data[12:0]?PE_out ??readyï¼ˆåª??valid+bitsï¼‰ã€?
//   - psum   ?3ï¼šarray [0:2]ï¼ˆper-col, one-to-columnï¼‰ã€signed [20:0]?in: PE/GLB/north  out: PE/GLB/south??
//   - data_in_sel / data_out_sel ç¶­æ??¤å¹³ portï¼ˆå¯?½ä???TOPï¼Œä? array ?–ä»¥?é€??ä¸Šå±¤ï¼? ?§éƒ¨ adapterï¼›iact sel ??per-row??
//   - ?‰å? Iact/Weight/Psum_Router ?¯ç?çµ„å? MUXï¼ˆcircuit switchingï¼‰ï??ªæ›´?•ã€?
// ====================================================================================================== //

`ifndef BOYU_LATER_STREAM_RANGE
`define BOYU_LATER_STREAM_RANGE 15:0
`endif
module Router_Cluster (
	// ===== controlï¼šdata_in_sel / data_out_selï¼ˆæ”¤å¹³ï?iact per-row?weight/psum per-routerï¼?====
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

	// ===== iact routers ?9ï¼ˆone-to-one to PEsï¼‰â€?array [0:2][0:2] =====
	//   src ports: GLB / north / south / horiz   (address + data in)
	output               iact_GLB_address_in_ready [0:2][0:2],
	input                iact_GLB_address_in_valid [0:2][0:2],
	input  [6:0]         iact_GLB_address_in_bits [0:2][0:2],
	output               iact_GLB_data_in_ready [0:2][0:2],
	input                iact_GLB_data_in_valid [0:2][0:2],
	input  [`BOYU_LATER_STREAM_RANGE]        iact_GLB_data_in_bits [0:2][0:2],
	output               iact_north_address_in_ready [0:2][0:2],
	input                iact_north_address_in_valid [0:2][0:2],
	input  [6:0]         iact_north_address_in_bits [0:2][0:2],
	output               iact_north_data_in_ready [0:2][0:2],
	input                iact_north_data_in_valid [0:2][0:2],
	input  [`BOYU_LATER_STREAM_RANGE]        iact_north_data_in_bits [0:2][0:2],
	output               iact_south_address_in_ready [0:2][0:2],
	input                iact_south_address_in_valid [0:2][0:2],
	input  [6:0]         iact_south_address_in_bits [0:2][0:2],
	output               iact_south_data_in_ready [0:2][0:2],
	input                iact_south_data_in_valid [0:2][0:2],
	input  [`BOYU_LATER_STREAM_RANGE]        iact_south_data_in_bits [0:2][0:2],
	output               iact_horiz_address_in_ready [0:2][0:2],
	input                iact_horiz_address_in_valid [0:2][0:2],
	input  [6:0]         iact_horiz_address_in_bits [0:2][0:2],
	output               iact_horiz_data_in_ready [0:2][0:2],
	input                iact_horiz_data_in_valid [0:2][0:2],
	input  [`BOYU_LATER_STREAM_RANGE]        iact_horiz_data_in_bits [0:2][0:2],

	//   dst ports: PE / north / south / horiz    (address + data out)
	input                iact_PE_address_out_ready [0:2][0:2],
	output               iact_PE_address_out_valid [0:2][0:2],
	output [6:0]         iact_PE_address_out_bits [0:2][0:2],
	input                iact_PE_data_out_ready [0:2][0:2],
	output               iact_PE_data_out_valid [0:2][0:2],
	output [`BOYU_LATER_STREAM_RANGE]        iact_PE_data_out_bits [0:2][0:2],
	input                iact_north_address_out_ready [0:2][0:2],
	output               iact_north_address_out_valid [0:2][0:2],
	output [6:0]         iact_north_address_out_bits [0:2][0:2],
	input                iact_north_data_out_ready [0:2][0:2],
	output               iact_north_data_out_valid [0:2][0:2],
	output [`BOYU_LATER_STREAM_RANGE]        iact_north_data_out_bits [0:2][0:2],
	input                iact_south_address_out_ready [0:2][0:2],
	output               iact_south_address_out_valid [0:2][0:2],
	output [6:0]         iact_south_address_out_bits [0:2][0:2],
	input                iact_south_data_out_ready [0:2][0:2],
	output               iact_south_data_out_valid [0:2][0:2],
	output [`BOYU_LATER_STREAM_RANGE]        iact_south_data_out_bits [0:2][0:2],
	input                iact_horiz_address_out_ready [0:2][0:2],
	output               iact_horiz_address_out_valid [0:2][0:2],
	output [6:0]         iact_horiz_address_out_bits [0:2][0:2],
	input                iact_horiz_data_out_ready [0:2][0:2],
	output               iact_horiz_data_out_valid [0:2][0:2],
	output [`BOYU_LATER_STREAM_RANGE]        iact_horiz_data_out_bits [0:2][0:2],

	// ===== weight routers ?3ï¼ˆone-to-rowï¼‰â€?array [0:2]ï¼›PE_out ??readyï¼ˆåª??valid+bitsï¼?====
	//   src: GLB / horiz (in)    dst: PE / horiz (out)
	output               weight_GLB_address_in_ready [0:2],
	input                weight_GLB_address_in_valid [0:2],
	input  [7:0]         weight_GLB_address_in_bits [0:2],
	output               weight_GLB_data_in_ready [0:2],
	input                weight_GLB_data_in_valid [0:2],
	input  [12:0]        weight_GLB_data_in_bits [0:2],
	output               weight_horiz_address_in_ready [0:2],
	input                weight_horiz_address_in_valid [0:2],
	input  [7:0]         weight_horiz_address_in_bits [0:2],
	output               weight_horiz_data_in_ready [0:2],
	input                weight_horiz_data_in_valid [0:2],
	input  [12:0]        weight_horiz_data_in_bits [0:2],
	output               weight_PE_address_out_valid [0:2],
	output [7:0]         weight_PE_address_out_bits [0:2],
	output               weight_PE_data_out_valid [0:2],
	output [12:0]        weight_PE_data_out_bits [0:2],
	input                weight_horiz_address_out_ready [0:2],
	output               weight_horiz_address_out_valid [0:2],
	output [7:0]         weight_horiz_address_out_bits [0:2],
	input                weight_horiz_data_out_ready [0:2],
	output               weight_horiz_data_out_valid [0:2],
	output [12:0]        weight_horiz_data_out_bits [0:2],

	// ===== psum routers ?3ï¼ˆone-to-columnï¼‰â€?array [0:2]ï¼›signed [20:0] =====
	//   src: PE / GLB / north (in)    dst: PE / GLB / south (out)
	output               psum_PE_in_ready [0:2],
	input                psum_PE_in_valid [0:2],
	input  signed [20:0] psum_PE_in_bits [0:2],
	output               psum_GLB_in_ready [0:2],
	input                psum_GLB_in_valid [0:2],
	input  signed [20:0] psum_GLB_in_bits [0:2],
	output               psum_north_in_ready [0:2],
	input                psum_north_in_valid [0:2],
	input  signed [20:0] psum_north_in_bits [0:2],
	input                psum_PE_out_ready [0:2],
	output               psum_PE_out_valid [0:2],
	output signed [20:0] psum_PE_out_bits [0:2],
	input                psum_GLB_out_ready [0:2],
	output               psum_GLB_out_valid [0:2],
	output signed [20:0] psum_GLB_out_bits [0:2],
	input                psum_south_out_ready [0:2],
	output               psum_south_out_valid [0:2],
	output signed [20:0] psum_south_out_bits [0:2]
);

genvar r,c,i;

// ----------------------------------------------------------------------------------------- //
// sel adapterï¼šdata_in_sel / data_out_sel ç¶­æ??¤å¹³ portï¼Œé€™è£¡?¶é€?array é¤µä??¢ç? generate??
//   iact ??sel ??per-rowï¼ˆiact_0/1/2 çµ¦æ•´??row ?±ç”¨ï¼‰ï?weight / psum ?‡æ˜¯ per-router??
// ----------------------------------------------------------------------------------------- //
wire [1:0] iact_sd   [0:2];  wire [1:0] iact_so   [0:2];  // iact   data_in/out_sel (per-row)
wire       weight_sd [0:2];  wire       weight_so [0:2];  // weight data_in/out_sel
wire       psum_sd   [0:2];  wire       psum_so   [0:2];  // psum   data_in/out_sel

assign iact_sd[0]   = iact_0_data_in_sel;    assign iact_so[0]   = iact_0_data_out_sel;
assign iact_sd[1]   = iact_1_data_in_sel;    assign iact_so[1]   = iact_1_data_out_sel;
assign iact_sd[2]   = iact_2_data_in_sel;    assign iact_so[2]   = iact_2_data_out_sel;

assign weight_sd[0] = weight_0_data_in_sel;  assign weight_so[0] = weight_0_data_out_sel;
assign weight_sd[1] = weight_1_data_in_sel;  assign weight_so[1] = weight_1_data_out_sel;
assign weight_sd[2] = weight_2_data_in_sel;  assign weight_so[2] = weight_2_data_out_sel;

assign psum_sd[0]   = psum_0_data_in_sel;    assign psum_so[0]   = psum_0_data_out_sel;
assign psum_sd[1]   = psum_1_data_in_sel;    assign psum_so[1]   = psum_1_data_out_sel;
assign psum_sd[2]   = psum_2_data_in_sel;    assign psum_so[2]   = psum_2_data_out_sel;

// ===== iact ?9 ??per-PE [r][c]ï¼›sel ??per-row ??iact_sd[r] / iact_so[r] =====
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

// ===== weight ?3 ??per-rowï¼›PE_out ?ªæ? valid+bitsï¼ˆç„¡ readyï¼?====
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

// ===== psum ?3 ??per-columnï¼›signed datapathï¼ˆin: PE/GLB/north, out: PE/GLB/southï¼?====
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
