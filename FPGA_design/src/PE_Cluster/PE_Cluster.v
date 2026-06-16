// ====================================================================================================== //
// This module is the Top-level of PE cluster.
// PE cluster module contains the 3x3 array PEs and PE cluster controller.
// The control signals write_fin are used to control the data in from uppper level module.
// The control signals cal_fin are used to control uppper level module.
// disable signals is used to disable selected PE for physical mapping.
// If disable signals are high, the utilization of PE will be decrease.
// ------------------------------------------------------------------------------------------------------ //
// [Refactor] 兩階段重構，行為與原攤平版等價（diff 50 張驗證）：
//   階段1（內部接線）：手動展開改為 generate/array —— PE 實例化 / 控制廣播 / always reg /
//                      reduction 用 genvar 迴圈；特例邏輯原封照搬，只改接 array：
//                        * psum 縱向 systolic chain 上下邊界 (gr==0 吐外部 / gr==2 吃 router|south mux)
//                        * iact controller 的 port 連接 (含原作者 typo: .iact_from_router_2_data_in_vaild)
//   階段2（port 介面）：module port 也 array 化（iact [0:2]、weight / PE_disable [0:2][0:2]、psum [0:2] signed）；
//                      攤平 → 內部 array 的 adapter 收成 generate 迴圈（見下方 *_ADAPT）。
//                      ★ 此層 port 一改，上層 Cluster_Group.v 的 PE_Cluster_inst 必須一起改（已同步）。
//   - PE 實例層次名：PE_INST_R[r].PE_INST_C[c].pe。
// ====================================================================================================== //


module PE_Cluster(
	input  clock,
	input  reset,

	// ----- iact : per-row [0:2], addr[7:0] / data[12:0] -----
	output [0:2]       iact_address_in_ready,
	input  [0:2]       iact_address_in_valid,
	input  [0:2][7:0]  iact_address_in,
	output [0:2]       iact_data_in_ready,
	input  [0:2]       iact_data_in_valid,
	input  [0:2][12:0] iact_data_in,

	// ----- weight : per-PE [0:2][0:2], addr[6:0] / data[11:0] (no ready) -----
	input [0:2][0:2]       weight_address_in_valid,
	input [0:2][0:2][6:0]  weight_address_in,
	input [0:2][0:2]       weight_data_in_valid,
	input [0:2][0:2][11:0] weight_data_in,

	// ----- psum : per-column [0:2], signed [20:0] -----
	output        [0:2]       psum_in_ready,
	input         [0:2]       psum_in_valid,
	input signed  [0:2][20:0] psum_in,
	input         [0:2]       psum_out_ready,
	output        [0:2]       psum_out_valid,
	output signed [0:2][20:0] psum_out,
	output        [0:2]       psum_in_from_south_ready,
	input         [0:2]       psum_in_from_south_valid,
	input signed  [0:2][20:0] psum_in_from_south,

	// ----- control -----
	input [0:2][0:2] PE_disable,
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
	input         psum_spad_clear
);

// ====================================================================	//
// 						 		Parameters  							//
// ====================================================================	//
localparam PSUM_FROM_SOU 	= 1'b0;
localparam PSUM_FROM_ROUTER = 1'b1;

// ====================================================================	//
// 		Internal per-PE signals (3x3 array, 取代原本攤平 wire 宣告)		//
// ====================================================================	//
wire        [0:2][0:2]       pe_psum_in_ready;
wire        [0:2][0:2]       pe_psum_in_valid;
wire signed [0:2][0:2][20:0] pe_psum_in;
wire        [0:2][0:2]       pe_psum_out_ready;
wire        [0:2][0:2]       pe_psum_out_valid;
wire signed [0:2][0:2][20:0] pe_psum_out;
wire        [0:2][0:2]       pe_iact_addr_in_valid;
wire        [0:2][0:2][7:0]  pe_iact_addr_in;
wire        [0:2][0:2]       pe_iact_data_in_valid;
wire        [0:2][0:2][12:0] pe_iact_data_in;
wire        [0:2][0:2]       pe_weight_addr_in_valid;
wire        [0:2][0:2][6:0]  pe_weight_addr_in;
wire        [0:2][0:2]       pe_weight_data_in_valid;
wire        [0:2][0:2][11:0] pe_weight_data_in;
wire        [0:2][0:2]       pe_iact_addr_write_fin;
wire        [0:2][0:2]       pe_iact_data_write_fin;
wire        [0:2][0:2]       pe_psum_add_fin;
wire        [0:2][0:2]       pe_psum_enq_en;
wire        [0:2][0:2]       pe_do_load_en;
wire        [0:2][0:2]       pe_cal_fin;
wire        [0:2][0:2]       pe_iact_write_fin_clear;
wire        [0:2][0:2]       pe_weight_write_fin_clear;
wire        [0:2][0:2]       pe_write_fin;
wire        [0:2][0:2]       pe_disable;

reg [0:2][0:2] pe_cal_fin_reg;
reg [0:2][0:2] pe_write_fin_reg;

// per-column psum 中繼線：systolic 邊界要用，下方 adapter 從 array port 填入
wire        [0:2]       psum_in_v_ext;
wire signed [0:2][20:0] psum_in_d_ext;
wire        [0:2]       psum_in_south_v;
wire signed [0:2][20:0] psum_in_south_d;
wire        [0:2]       psum_out_rdy_ext;

// adapter：array port → 內部 array（psum 中繼線 / weight / disable），等價於原攤平 assign
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
// 				PE array (3x3) 實例化 + 規律控制廣播 (generate)			//
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
				.psum_spad_clear		(psum_spad_clear)
			);

			// 規律的控制信號 (廣播 / 每 PE 自身 gating)，等價於原攤平 assign
			assign pe_psum_enq_en          [gr][gc] = psum_load_en;
			assign pe_do_load_en           [gr][gc] = do_en & ~pe_cal_fin_reg[gr][gc];
			assign pe_iact_write_fin_clear [gr][gc] = iact_write_fin_clear;
			assign pe_weight_write_fin_clear[gr][gc] = weight_write_fin_clear;
		end
	end
endgenerate

// ====================================================================	//
// 		psum 縱向 systolic chain：底排(gr==2)吃外部，頂排(gr==0)吐外部		//
//		此區為「特例邏輯」，原封照搬，僅改接 array (gr 由下往上累加)			//
// ====================================================================	//
generate
	for (gc = 0; gc < 3; gc = gc + 1) begin: PSUM_C
		for (gr = 0; gr < 3; gr = gr + 1) begin: PSUM_R
			if (gr == 2) begin: PSUM_IN_SEL
				// 底排：psum_in 來自 router psum 或 south psum (由 psum_data_in_sel 選)
				assign pe_psum_in_valid[gr][gc] = (psum_data_in_sel == PSUM_FROM_ROUTER) ? psum_in_v_ext[gc] : psum_in_south_v[gc];
				assign pe_psum_in      [gr][gc] = (psum_data_in_sel == PSUM_FROM_ROUTER) ? psum_in_d_ext[gc] : psum_in_south_d[gc];
			end else begin: PSUM_IN_SEL
				// 中間/上排：psum_in 來自下一排的 psum_out
				assign pe_psum_in_valid[gr][gc] = pe_psum_out_valid[gr+1][gc];
				assign pe_psum_in      [gr][gc] = pe_psum_out      [gr+1][gc];
			end

			if (gr == 0) begin: PSUM_OUT_RDY
				// 頂排：psum_out 的 ready 來自外部
				assign pe_psum_out_ready[gr][gc] = psum_out_rdy_ext[gc];
			end else begin: PSUM_OUT_RDY
				// 其餘：psum_out 的 ready 來自上一排的 psum_in_ready
				assign pe_psum_out_ready[gr][gc] = pe_psum_in_ready[gr-1][gc];
			end
		end
	end
endgenerate

// ====================================================================	//
// 				外部 psum 輸出：array output port ← PE array (per-column 迴圈)					//
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
// 					reduction：全 PE 完成才拉高							//
// ====================================================================	//
assign all_write_fin = pe_write_fin_reg[0][0] & pe_write_fin_reg[0][1] & pe_write_fin_reg[0][2] &
                       pe_write_fin_reg[1][0] & pe_write_fin_reg[1][1] & pe_write_fin_reg[1][2] &
                       pe_write_fin_reg[2][0] & pe_write_fin_reg[2][1] & pe_write_fin_reg[2][2];

assign all_cal_fin   = pe_cal_fin_reg[0][0] & pe_cal_fin_reg[0][1] & pe_cal_fin_reg[0][2] &
                       pe_cal_fin_reg[1][0] & pe_cal_fin_reg[1][1] & pe_cal_fin_reg[1][2] &
                       pe_cal_fin_reg[2][0] & pe_cal_fin_reg[2][1] & pe_cal_fin_reg[2][2];

// ====================================================================	//
// 			iact controller (攤平 port 連接，含原作者 typo，照搬)			//
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
