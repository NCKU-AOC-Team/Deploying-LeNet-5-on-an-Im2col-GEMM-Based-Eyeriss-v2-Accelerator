// ====================================================================================================== //
// This module is the Top-level of PE cluster.
// PE cluster module contains the 3x3 array PEs and PE cluster controller.
// The control signals write_fin are used to control the data in from uppper level module.
// The control signals cal_fin are used to control uppper level module.
// disable signals is used to disable selected PE for physical mapping.
// If disable signals are high, the utilization of PE will be decrease.
// ------------------------------------------------------------------------------------------------------ //
// [Refactor] ?©é?æ®µé?æ§‹ï?è¡Œç‚º?‡å??¤å¹³?ˆç??¹ï?diff 50 å¼µé?è­‰ï?ï¼?
//   ?æ®µ1ï¼ˆå…§?¨æ¥ç·šï?ï¼šæ??•å??‹æ”¹??generate/array ?”â€?PE å¯¦ä???/ ?§åˆ¶å»?’­ / always reg /
//                      reduction ??genvar è¿´å?ï¼›ç‰¹ä¾‹é?è¼¯å?å°ç…§?¬ï??ªæ”¹??arrayï¼?
//                        * psum ç¸±å? systolic chain ä¸Šä??Šç? (gr==0 ?å???/ gr==2 ??router|south mux)
//                        * iact controller ??port ??¥ (?«å?ä½œè€?typo: .iact_from_router_2_data_in_vaild)
//   ?æ®µ2ï¼ˆport ä»‹é¢ï¼‰ï?module port ä¹?array ?–ï?iact [0:2]?weight / PE_disable [0:2][0:2]?psum [0:2] signedï¼‰ï?
//                      ?¤å¹³ ???§éƒ¨ array ??adapter ?¶æ? generate è¿´å?ï¼ˆè?ä¸‹æ–¹ *_ADAPTï¼‰ã€?
//                      ??æ­¤å±¤ port ä¸€?¹ï?ä¸Šå±¤ Cluster_Group.v ??PE_Cluster_inst å¿…é?ä¸€èµ·æ”¹ï¼ˆå·²?Œæ­¥ï¼‰ã€?
//   - PE å¯¦ä?å±¤æ¬¡?ï?PE_INST_R[r].PE_INST_C[c].pe??
// ====================================================================================================== //


`ifndef BOYU_LATER_STREAM_RANGE
`define BOYU_LATER_STREAM_RANGE 15:0
`endif
module PE_Cluster(
	input  clock,
	input  reset,

	// ----- iact : per-row [0:2], addr[7:0] / data[12:0] -----
	output               iact_address_in_ready [0:2],
	input                iact_address_in_valid [0:2],
	input        [7:0]   iact_address_in       [0:2],
	output               iact_data_in_ready    [0:2],
	input                iact_data_in_valid    [0:2],
	input        [12:0]  iact_data_in          [0:2],

	// ----- weight : per-PE [0:2][0:2], addr[6:0] / data[11:0] (no ready) -----
	input                weight_address_in_valid [0:2][0:2],
	input        [6:0]   weight_address_in       [0:2][0:2],
	input                weight_data_in_valid    [0:2][0:2],
	input        [`BOYU_LATER_STREAM_RANGE]  weight_data_in          [0:2][0:2],

	// ----- psum : per-column [0:2], signed [20:0] -----
	output               psum_in_ready            [0:2],
	input                psum_in_valid            [0:2],
	input  signed [20:0] psum_in                  [0:2],
	input                psum_out_ready           [0:2],
	output               psum_out_valid           [0:2],
	output signed [20:0] psum_out                 [0:2],
	output               psum_in_from_south_ready [0:2],
	input                psum_in_from_south_valid [0:2],
	input  signed [20:0] psum_in_from_south       [0:2],

	// ----- control -----
	input                PE_disable [0:2][0:2],
	input         psum_load_en,
	input         iact_data_in_sel,
	input  [1:0]  iact_data_out_sel,
	input         psum_data_in_sel, // true for GLB psum, false for south psum
	input         do_en,
	input         iact_write_fin_clear,
	input         weight_write_fin_clear,
	output        all_write_fin,
	output        all_cal_fin,
	input  [4:0]  PSUM_DEPTH,
	input         psum_spad_clear,
	input         int4_former_weight_mode,
	input         int4_later_weight_mode
);

// ====================================================================	//
// 						 		Parameters  							//
// ====================================================================	//
localparam PSUM_FROM_SOU 	= 1'b0;
localparam PSUM_FROM_ROUTER = 1'b1;

// ====================================================================	//
// 		Internal per-PE signals (3x3 array, ?–ä»£?Ÿæœ¬?¤å¹³ wire å®??)		//
// ====================================================================	//
wire               pe_psum_in_ready        [0:2][0:2];
wire               pe_psum_in_valid        [0:2][0:2];
wire signed [20:0] pe_psum_in              [0:2][0:2];
wire               pe_psum_out_ready       [0:2][0:2];
wire               pe_psum_out_valid       [0:2][0:2];
wire signed [20:0] pe_psum_out             [0:2][0:2];
wire               pe_iact_addr_in_valid   [0:2][0:2];
wire        [7:0]  pe_iact_addr_in         [0:2][0:2];
wire               pe_iact_data_in_valid   [0:2][0:2];
wire        [12:0] pe_iact_data_in         [0:2][0:2];
wire               pe_weight_addr_in_valid [0:2][0:2];
wire        [6:0]  pe_weight_addr_in       [0:2][0:2];
wire               pe_weight_data_in_valid [0:2][0:2];
wire        [`BOYU_LATER_STREAM_RANGE] pe_weight_data_in       [0:2][0:2];
wire               pe_iact_addr_write_fin  [0:2][0:2];
wire               pe_iact_data_write_fin  [0:2][0:2];
wire               pe_psum_add_fin         [0:2][0:2];
wire               pe_psum_enq_en          [0:2][0:2];
wire               pe_do_load_en           [0:2][0:2];
wire               pe_cal_fin              [0:2][0:2];
wire               pe_iact_write_fin_clear [0:2][0:2];
wire               pe_weight_write_fin_clear[0:2][0:2];
wire               pe_write_fin            [0:2][0:2];
wire               pe_disable              [0:2][0:2];

reg                pe_cal_fin_reg          [0:2][0:2];
reg                pe_write_fin_reg        [0:2][0:2];

// per-column psum ä¸­ç¹¼ç·šï?systolic ?Šç?è¦ç”¨ï¼Œä???adapter å¾?array port å¡«å…¥
wire               psum_in_v_ext   [0:2];
wire signed [20:0] psum_in_d_ext   [0:2];
wire               psum_in_south_v [0:2];
wire signed [20:0] psum_in_south_d [0:2];
wire               psum_out_rdy_ext[0:2];

// adapterï¼šarray port ???§éƒ¨ arrayï¼ˆpsum ä¸­ç¹¼ç·?/ weight / disableï¼‰ï?ç­‰åƒ¹?¼å??¤å¹³ assign
genvar ai, aj;
generate
	for (aj = 0; aj < 3; aj = aj + 1) begin: PSUM_EXT_ADAPT
		assign psum_in_v_ext   [aj] = psum_in_valid           [aj];
		assign psum_in_d_ext   [aj] = psum_in                 [aj];
		assign psum_in_south_v [aj] = psum_in_from_south_valid[aj];
		assign psum_in_south_d [aj] = psum_in_from_south      [aj];
		assign psum_out_rdy_ext[aj] = psum_out_ready          [aj];
	end
	for (ai = 0; ai < 3; ai = ai + 1) begin: WEIGHT_DISABLE_ADAPT_R
		for (aj = 0; aj < 3; aj = aj + 1) begin: WEIGHT_DISABLE_ADAPT_C
			assign pe_weight_addr_in_valid[ai][aj] = weight_address_in_valid[ai][aj];
			assign pe_weight_addr_in      [ai][aj] = weight_address_in      [ai][aj];
			assign pe_weight_data_in_valid[ai][aj] = weight_data_in_valid   [ai][aj];
			assign pe_weight_data_in      [ai][aj] = weight_data_in         [ai][aj];
			assign pe_disable             [ai][aj] = PE_disable             [ai][aj];
		end
	end
endgenerate

// ====================================================================	//
// 				PE array (3x3) å¯¦ä???+ è¦å??§åˆ¶å»?’­ (generate)			//
// ====================================================================	//
genvar gr, gc;
generate
	for (gr = 0; gr < 3; gr = gr + 1) begin: PE_INST_R
		for (gc = 0; gc < 3; gc = gc + 1) begin: PE_INST_C
			ProcessingElement pe (
				.clock					(clock),
				.reset					(reset),
				.psum_in_ready       	(pe_psum_in_ready        [gr][gc]),
				.psum_in_valid       	(pe_psum_in_valid        [gr][gc]),
				.psum_in             	(pe_psum_in              [gr][gc]),
				.psum_out_ready       	(pe_psum_out_ready       [gr][gc]),
				.psum_out_valid      	(pe_psum_out_valid       [gr][gc]),
				.psum_out         	    (pe_psum_out             [gr][gc]),
				.iact_address_in_valid	(pe_iact_addr_in_valid   [gr][gc]),
				.iact_address_in      	(pe_iact_addr_in         [gr][gc]),
				.iact_data_in_valid    	(pe_iact_data_in_valid   [gr][gc]),
				.iact_data_in      		(pe_iact_data_in         [gr][gc]),
				.weight_address_in_valid(pe_weight_addr_in_valid [gr][gc]),
				.weight_address_in     	(pe_weight_addr_in       [gr][gc]),
				.weight_data_in_valid  	(pe_weight_data_in_valid [gr][gc]),
				.weight_data_in    		(pe_weight_data_in       [gr][gc]),
				.iact_address_write_fin	(pe_iact_addr_write_fin  [gr][gc]),
				.iact_data_write_fin   	(pe_iact_data_write_fin  [gr][gc]),
				.psum_add_fin          	(pe_psum_add_fin         [gr][gc]),
				.psum_enq_en         	(pe_psum_enq_en          [gr][gc]),
				.do_load_en         	(pe_do_load_en           [gr][gc]),
				.cal_fin             	(pe_cal_fin              [gr][gc]),
				.iact_write_fin_clear	(pe_iact_write_fin_clear [gr][gc]),
				.weight_write_fin_clear	(pe_weight_write_fin_clear[gr][gc]),
				.all_write_fin			(pe_write_fin            [gr][gc]),
				.PSUM_DEPTH				(PSUM_DEPTH),
				.psum_spad_clear		(psum_spad_clear),
				.int4_former_weight_mode(int4_former_weight_mode),
				.int4_later_weight_mode	(int4_later_weight_mode)
			);

			// è¦å??„æ§?¶ä¿¡??(å»?’­ / æ¯?PE ?ªèº« gating)ï¼Œç??¹æ–¼?Ÿæ”¤å¹?assign
			assign pe_psum_enq_en          [gr][gc] = psum_load_en;
			assign pe_do_load_en           [gr][gc] = do_en & ~pe_cal_fin_reg[gr][gc];
			assign pe_iact_write_fin_clear [gr][gc] = iact_write_fin_clear;
			assign pe_weight_write_fin_clear[gr][gc] = weight_write_fin_clear;
		end
	end
endgenerate

// ====================================================================	//
// 		psum ç¸±å? systolic chainï¼šå???gr==2)?ƒå??¨ï??‚æ?(gr==0)?å???	//
//		æ­¤å??ºã€Œç‰¹ä¾‹é?è¼¯ã€ï??Ÿå??§æ¬ï¼Œå??¹æ¥ array (gr ?±ä?å¾€ä¸Šç´¯??			//
// ====================================================================	//
generate
	for (gc = 0; gc < 3; gc = gc + 1) begin: PSUM_C
		for (gr = 0; gr < 3; gr = gr + 1) begin: PSUM_R
			if (gr == 2) begin: PSUM_IN_SEL
				// åº•æ?ï¼špsum_in ä¾†è‡ª router psum ??south psum (??psum_data_in_sel ??
				assign pe_psum_in_valid[gr][gc] = (psum_data_in_sel == PSUM_FROM_ROUTER) ? psum_in_v_ext[gc] : psum_in_south_v[gc];
				assign pe_psum_in      [gr][gc] = (psum_data_in_sel == PSUM_FROM_ROUTER) ? psum_in_d_ext[gc] : psum_in_south_d[gc];
			end else begin: PSUM_IN_SEL
				// ä¸­é?/ä¸Šæ?ï¼špsum_in ä¾†è‡ªä¸‹ä??’ç? psum_out
				assign pe_psum_in_valid[gr][gc] = pe_psum_out_valid[gr+1][gc];
				assign pe_psum_in      [gr][gc] = pe_psum_out      [gr+1][gc];
			end

			if (gr == 0) begin: PSUM_OUT_RDY
				// ?‚æ?ï¼špsum_out ??ready ä¾†è‡ªå¤–éƒ¨
				assign pe_psum_out_ready[gr][gc] = psum_out_rdy_ext[gc];
			end else begin: PSUM_OUT_RDY
				// ?¶é?ï¼špsum_out ??ready ä¾†è‡ªä¸Šä??’ç? psum_in_ready
				assign pe_psum_out_ready[gr][gc] = pe_psum_in_ready[gr-1][gc];
			end
		end
	end
endgenerate

// ====================================================================	//
// 				å¤–éƒ¨ psum è¼¸å‡ºï¼šarray output port ??PE array (per-column è¿´å?)					//
// ====================================================================	//
generate
	for (aj = 0; aj < 3; aj = aj + 1) begin: PSUM_OUT_ADAPT
		assign psum_in_ready[aj]            = (psum_data_in_sel == PSUM_FROM_ROUTER) & pe_psum_in_ready[2][aj];
		assign psum_out_valid[aj]           = pe_psum_out_valid[0][aj];
		assign psum_out[aj]                 = pe_psum_out[0][aj];
		assign psum_in_from_south_ready[aj] = (psum_data_in_sel == PSUM_FROM_ROUTER) ? 1'b0 : pe_psum_in_ready[2][aj];
	end
endgenerate

// ====================================================================	//
// 					reductionï¼šå…¨ PE å®Œæ??æ?é«?						//
// ====================================================================	//
assign all_write_fin = pe_write_fin_reg[0][0] & pe_write_fin_reg[0][1] & pe_write_fin_reg[0][2] &
                       pe_write_fin_reg[1][0] & pe_write_fin_reg[1][1] & pe_write_fin_reg[1][2] &
                       pe_write_fin_reg[2][0] & pe_write_fin_reg[2][1] & pe_write_fin_reg[2][2];

assign all_cal_fin   = pe_cal_fin_reg[0][0] & pe_cal_fin_reg[0][1] & pe_cal_fin_reg[0][2] &
                       pe_cal_fin_reg[1][0] & pe_cal_fin_reg[1][1] & pe_cal_fin_reg[1][2] &
                       pe_cal_fin_reg[2][0] & pe_cal_fin_reg[2][1] & pe_cal_fin_reg[2][2];

// ====================================================================	//
// 			iact controller (?¤å¹³ port ??¥ï¼Œå«?Ÿä???typoï¼Œç…§??			//
// ====================================================================	//
PE_Cluster_controller PE_Cluster_controller_inst (
	.iact_data_in_sel                   (iact_data_in_sel				),
	.iact_data_out_sel                  (iact_data_out_sel 				),

	.iact_to_PE_0_0_address_out_valid	(pe_iact_addr_in_valid[0][0]	),
	.iact_to_PE_0_1_address_out_valid   (pe_iact_addr_in_valid[0][1]	),
	.iact_to_PE_0_2_address_out_valid   (pe_iact_addr_in_valid[0][2]	),
	.iact_to_PE_1_0_address_out_valid   (pe_iact_addr_in_valid[1][0]	),
	.iact_to_PE_1_1_address_out_valid   (pe_iact_addr_in_valid[1][1]	),
	.iact_to_PE_1_2_address_out_valid   (pe_iact_addr_in_valid[1][2]	),
	.iact_to_PE_2_0_address_out_valid   (pe_iact_addr_in_valid[2][0]	),
	.iact_to_PE_2_1_address_out_valid   (pe_iact_addr_in_valid[2][1]	),
	.iact_to_PE_2_2_address_out_valid   (pe_iact_addr_in_valid[2][2]	),

	.iact_to_PE_0_0_data_out_valid      (pe_iact_data_in_valid[0][0]	),
	.iact_to_PE_0_1_data_out_valid      (pe_iact_data_in_valid[0][1]	),
	.iact_to_PE_0_2_data_out_valid      (pe_iact_data_in_valid[0][2]	),
	.iact_to_PE_1_0_data_out_valid      (pe_iact_data_in_valid[1][0]	),
	.iact_to_PE_1_1_data_out_valid      (pe_iact_data_in_valid[1][1]	),
	.iact_to_PE_1_2_data_out_valid      (pe_iact_data_in_valid[1][2]	),
	.iact_to_PE_2_0_data_out_valid      (pe_iact_data_in_valid[2][0]	),
	.iact_to_PE_2_1_data_out_valid      (pe_iact_data_in_valid[2][1]	),
	.iact_to_PE_2_2_data_out_valid      (pe_iact_data_in_valid[2][2]	),

	.iact_to_PE_0_0_address_out_bits    (pe_iact_addr_in[0][0]    ),
	.iact_to_PE_0_1_address_out_bits    (pe_iact_addr_in[0][1]    ),
	.iact_to_PE_0_2_address_out_bits    (pe_iact_addr_in[0][2]    ),
	.iact_to_PE_1_0_address_out_bits    (pe_iact_addr_in[1][0]    ),
	.iact_to_PE_1_1_address_out_bits    (pe_iact_addr_in[1][1]    ),
	.iact_to_PE_1_2_address_out_bits    (pe_iact_addr_in[1][2]    ),
	.iact_to_PE_2_0_address_out_bits    (pe_iact_addr_in[2][0]    ),
	.iact_to_PE_2_1_address_out_bits    (pe_iact_addr_in[2][1]    ),
	.iact_to_PE_2_2_address_out_bits    (pe_iact_addr_in[2][2]    ),

	.iact_to_PE_0_0_data_out_bits       (pe_iact_data_in[0][0]       ),
	.iact_to_PE_0_1_data_out_bits       (pe_iact_data_in[0][1]       ),
	.iact_to_PE_0_2_data_out_bits       (pe_iact_data_in[0][2]       ),
	.iact_to_PE_1_0_data_out_bits       (pe_iact_data_in[1][0]       ),
	.iact_to_PE_1_1_data_out_bits	    (pe_iact_data_in[1][1]	   ),
	.iact_to_PE_1_2_data_out_bits	    (pe_iact_data_in[1][2]	   ),
	.iact_to_PE_2_0_data_out_bits       (pe_iact_data_in[2][0]       ),
	.iact_to_PE_2_1_data_out_bits       (pe_iact_data_in[2][1]       ),
	.iact_to_PE_2_2_data_out_bits       (pe_iact_data_in[2][2]       ),

	.iact_from_router_0_address_in_ready(iact_address_in_ready[0]	),
	.iact_from_router_0_address_in_valid(iact_address_in_valid[0]	),
	.iact_from_router_0_address_in      (iact_address_in[0]      	),
	.iact_from_router_0_data_in_ready   (iact_data_in_ready[0]  	 	),
	.iact_from_router_0_data_in_valid   (iact_data_in_valid[0]   	),
	.iact_from_router_0_data_in         (iact_data_in[0]        		),

	.iact_from_router_1_address_in_ready(iact_address_in_ready[1]	),
	.iact_from_router_1_address_in_valid(iact_address_in_valid[1]	),
	.iact_from_router_1_address_in      (iact_address_in[1]      	),
	.iact_from_router_1_data_in_ready   (iact_data_in_ready[1]   	),
	.iact_from_router_1_data_in_valid   (iact_data_in_valid[1]   	),
	.iact_from_router_1_data_in         (iact_data_in[1]         	),

	.iact_from_router_2_address_in_ready(iact_address_in_ready[2]),
	.iact_from_router_2_address_in_valid(iact_address_in_valid[2]	),
	.iact_from_router_2_address_in      (iact_address_in[2]      	),
	.iact_from_router_2_data_in_ready   (iact_data_in_ready[2]  	 	),
	.iact_from_router_2_data_in_vaild   (iact_data_in_valid[2]    	),
	.iact_from_router_2_data_in         (iact_data_in[2]          	)
);

// ====================================================================	//
// 						 		Sequential  							//
// ====================================================================	//
integer i, j;

always @(posedge clock) begin
	for (i = 0; i < 3; i = i + 1) begin
		for (j = 0; j < 3; j = j + 1) begin
			if (reset)
				pe_write_fin_reg[i][j] <= 1'b0;
			else if (all_cal_fin)
				pe_write_fin_reg[i][j] <= 1'b0;
			else
				pe_write_fin_reg[i][j] <= pe_write_fin[i][j] | pe_write_fin_reg[i][j] | pe_disable[i][j];
		end
	end
end

always @(posedge clock) begin
	for (i = 0; i < 3; i = i + 1) begin
		for (j = 0; j < 3; j = j + 1) begin
			if (reset)
				pe_cal_fin_reg[i][j] <= 1'b0;
			else if (all_cal_fin)
				pe_cal_fin_reg[i][j] <= 1'b0;
			else
				pe_cal_fin_reg[i][j] <= pe_cal_fin[i][j] | pe_cal_fin_reg[i][j] | pe_disable[i][j];
		end
	end
end


endmodule
