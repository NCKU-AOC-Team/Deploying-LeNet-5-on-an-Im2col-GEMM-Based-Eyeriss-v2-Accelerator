// ====================================================================================================== //
// This module is GLB cluster.
// GLB cluster module contains 9 iact SRAM and 3 psum SRAM.
// 9 iact SRAM connect to 9 PE in PE clusteer (one-to-one).
// 9 iact SRAM is used to support uni-cast in all layers.
// 9 iact SRAM is mainly to supply sufficient bandwidth.
// If SRAM BW is not a bottlenect for specific application, 9 iact SRAM can be scale down to 3.
//
// GLB cluster contains weight ports, but there is no SRAM to store weight data.
// weight data in GLB cluster will be directly pass to PE cluster and store in PE SPad (SRAM)
// ------------------------------------------------------------------------------------------------------ //
// [Refactor Á¨¨‰??éÊÆµ] port ‰ªãÈù¢?±Êî§Âπ≥Êîπ??SystemVerilog unpacked arrayÔº?
//   iact bank port -> [0:2][0:2]Ôº?x3Ôºâ„ÄÅweight/psum bank port -> [0:2]Ôº?Ôºâ„Ä?
//   9+3 ??bank ?πÁî® generate ÂØ¶‰??ñ„ÄÇË?Ê®°Á? Iact_SRAM_Bank / Psum_SRAM_Bank ?™Êîπ??
//   Ë°åÁÇ∫Á≠âÂÉπÔºàÁ? port ?ìÂ? + ÂØ¶‰??ñÊî∂?ÇÔ??Ç‰?Â±?Cluster_Group ??GLB ÂØ¶‰??ñÈ??åÊ≠•?πÁÇ∫ array??
//   ÂØ¶‰??çÔ?inActSRAM_r_c -> IACT_BANK[r][c].uÔºõpSumSRAMi -> PSUM_BANK[i].u??
// ====================================================================================================== //


`ifndef BOYU_LATER_STREAM_RANGE
`define BOYU_LATER_STREAM_RANGE 15:0
`endif
module GLB_Cluster (
	input        			clock,
	input        			reset,

	// ===== iact SRAM Bank [row][col] = [0:2][0:2] ===== //
	output       			iact_SRAM_Bank_address_in_ready  [0:2][0:2],
	input        			iact_SRAM_Bank_address_in_valid  [0:2][0:2],
	input  [6:0]            iact_SRAM_Bank_address_in        [0:2][0:2],
	output       			iact_SRAM_Bank_data_in_ready     [0:2][0:2],
	input        			iact_SRAM_Bank_data_in_valid     [0:2][0:2],
	input  [`BOYU_LATER_STREAM_RANGE]           iact_SRAM_Bank_data_in           [0:2][0:2],

	input        			iact_SRAM_Bank_address_out_ready [0:2][0:2],
	output       			iact_SRAM_Bank_address_out_valid [0:2][0:2],
	output [6:0]            iact_SRAM_Bank_address_out       [0:2][0:2],
	input        			iact_SRAM_Bank_data_out_ready    [0:2][0:2],
	output       			iact_SRAM_Bank_data_out_valid    [0:2][0:2],
	output [`BOYU_LATER_STREAM_RANGE]           iact_SRAM_Bank_data_out          [0:2][0:2],

	input        			iact_SRAM_Bank_write_en          [0:2][0:2],
	output       			iact_SRAM_Bank_write_done        [0:2][0:2],
	input        			iact_SRAM_Bank_read_en           [0:2][0:2],
	input  [9:0]            iact_SRAM_Bank_read_addr         [0:2][0:2],
	output       			iact_SRAM_Bank_read_done         [0:2][0:2],

	// ===== weight pass-through [0:2]ÔºàÁÑ° SRAMÔºåÁõ¥?•Á©ø??GLB Áµ?PE spadÔº?==== //
	output       			weight_address_in_ready  [0:2],
	input        			weight_address_in_valid  [0:2],
	input  [7:0]            weight_address_in        [0:2],
	output       			weight_data_in_ready     [0:2],
	input        			weight_data_in_valid     [0:2],
	input  [12:0]           weight_data_in           [0:2],

	input        			weight_address_out_ready [0:2],
	output       			weight_address_out_valid [0:2],
	output [7:0]            weight_address_out       [0:2],
	input        			weight_data_out_ready    [0:2],
	output       			weight_data_out_valid    [0:2],
	output [12:0]           weight_data_out          [0:2],

	// ===== psum SRAM Bank [0:2] ===== //
	output       			psum_SRAM_Bank_data_in_ready  [0:2],
	input        			psum_SRAM_Bank_data_in_valid  [0:2],
	input  signed [20:0]    psum_SRAM_Bank_data_in        [0:2],
	input        			psum_SRAM_Bank_data_out_ready [0:2],
	output       			psum_SRAM_Bank_data_out_valid [0:2],
	output signed [20:0]    psum_SRAM_Bank_data_out       [0:2],

	input        			psum_SRAM_Bank_write_en       [0:2],
	input  [9:0]            psum_SRAM_Bank_write_addr     [0:2],
	output       			psum_SRAM_Bank_write_done     [0:2],
	input        			psum_SRAM_Bank_read_out_en    [0:2],
	input        			psum_SRAM_Bank_read_en        [0:2],
	input  [9:0]            psum_SRAM_Bank_read_addr      [0:2],

	input  [4:0]            PSUM_DEPTH
);

genvar r, c, i;

// ====================================================================	//
// 		weights directly pass through GLB cluster (3 Ê¢ùÔ?generate)		//
// ====================================================================	//
generate
	for (i = 0; i < 3; i = i + 1) begin: WEIGHT_PASS
		assign weight_address_in_ready [i] = weight_address_out_ready[i];
		assign weight_data_in_ready    [i] = weight_data_out_ready   [i];
		assign weight_address_out      [i] = weight_address_in       [i];
		assign weight_address_out_valid[i] = weight_address_in_valid [i];
		assign weight_data_out_valid   [i] = weight_data_in_valid    [i];
		assign weight_data_out         [i] = weight_data_in          [i];
	end
endgenerate

// ====================================================================	//
// 				9 ??iact SRAM bankÔº?x3ÔºågenerateÔº?					//
// ====================================================================	//
generate
	for (r = 0; r < 3; r = r + 1) begin: IACT_BANK_R
		for (c = 0; c < 3; c = c + 1) begin: IACT_BANK
			Iact_SRAM_Bank u (
				.clock                  (clock),
				.reset                  (reset),
				.iact_address_in_ready	(iact_SRAM_Bank_address_in_ready  [r][c]),
				.iact_address_in_valid	(iact_SRAM_Bank_address_in_valid  [r][c]),
				.iact_address_in		(iact_SRAM_Bank_address_in        [r][c]),
				.iact_data_in_ready		(iact_SRAM_Bank_data_in_ready     [r][c]),
				.iact_data_in_valid		(iact_SRAM_Bank_data_in_valid     [r][c]),
				.iact_data_in		    (iact_SRAM_Bank_data_in           [r][c]),
				.iact_address_out_ready	(iact_SRAM_Bank_address_out_ready [r][c]),
				.iact_address_out_valid	(iact_SRAM_Bank_address_out_valid [r][c]),
				.iact_address_out		(iact_SRAM_Bank_address_out       [r][c]),
				.iact_data_out_ready	(iact_SRAM_Bank_data_out_ready    [r][c]),
				.iact_data_out_valid	(iact_SRAM_Bank_data_out_valid    [r][c]),
				.iact_data_out		    (iact_SRAM_Bank_data_out          [r][c]),
				.iact_write_en   	    (iact_SRAM_Bank_write_en          [r][c]),
				.iact_write_done      	(iact_SRAM_Bank_write_done        [r][c]),
				.iact_read_en   	    (iact_SRAM_Bank_read_en           [r][c]),
				.iact_read_addr      	(iact_SRAM_Bank_read_addr         [r][c]),
				.iact_read_done      	(iact_SRAM_Bank_read_done         [r][c])
			);
		end
	end
endgenerate

// ====================================================================	//
// 				3 ??psum SRAM bankÔºàgenerateÔº?						//
// ====================================================================	//
generate
	for (i = 0; i < 3; i = i + 1) begin: PSUM_BANK
		Psum_SRAM_Bank u (
			.clock          	(clock),
			.reset          	(reset),
			.psum_data_in_ready (psum_SRAM_Bank_data_in_ready [i]),
			.psum_data_in_valid (psum_SRAM_Bank_data_in_valid [i]),
			.psum_data_in       (psum_SRAM_Bank_data_in       [i]),
			.psum_data_out_ready(psum_SRAM_Bank_data_out_ready[i]),
			.psum_data_out_valid(psum_SRAM_Bank_data_out_valid[i]),
			.psum_data_out      (psum_SRAM_Bank_data_out      [i]),
			.psum_write_en      (psum_SRAM_Bank_write_en      [i]),
			.psum_write_addr    (psum_SRAM_Bank_write_addr    [i]),
			.psum_write_done    (psum_SRAM_Bank_write_done    [i]),
			.psum_read_out_en	(psum_SRAM_Bank_read_out_en   [i]),
			.psum_read_en       (psum_SRAM_Bank_read_en       [i]),
			.psum_read_addr     (psum_SRAM_Bank_read_addr     [i]),
			.PSUM_DEPTH			(PSUM_DEPTH)
		);
	end
endgenerate

endmodule
