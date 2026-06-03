// ====================================================================================================== //
// This module is the Top-level of PE cluster.
// PE cluster module contains the 3x3 array PEs and PE cluster controller.
// The control signals write_fin are used to control the data in from uppper level module.
// The control signals cal_fin are used to control uppper level module.
// disable signals is used to disable selected PE for physical mapping.
// If disable signals are high, the utilization of PE will be decrease.
// ------------------------------------------------------------------------------------------------------ //
// [Refactor] 內部接線已由「手動展開」改為 generate/array，行為與原攤平版等價。
//   - 規律塊 (PE 實例化 / 控制廣播 / always reg / reduction) 用 genvar 迴圈生成。
//   - 特例「邏輯」原封照搬，只把線接到 array：
//       * psum 縱向 systolic chain 的上下邊界 (gr==0 吐外部 / gr==2 吃 router|south 的 mux)
//       * iact controller 的攤平 port 連接 (含原作者 typo: .iact_from_router_2_data_in_vaild)
//   - module port 介面完全未動，上層 Cluster_Group.v 無需修改。
//   - 注意：PE 實例層次名由 pe00..pe22 變為 PE_INST_R[r].PE_INST_C[c].pe。
// ====================================================================================================== //


module PE_Cluster(
	input  			       	clock,
	input  			       	reset,
	// data signals
	output 			       	iact_0_address_in_ready,
	input  			       	iact_0_address_in_valid,
	input  			[7:0]  	iact_0_address_in,
	output 			       	iact_0_data_in_ready,
	input  			       	iact_0_data_in_valid,
	input  			[12:0] 	iact_0_data_in,
	output 			       	iact_1_address_in_ready,
	input  			       	iact_1_address_in_valid,
	input  			[7:0]  	iact_1_address_in,
	output 			       	iact_1_data_in_ready,
	input  			       	iact_1_data_in_valid,
	input  			[12:0] 	iact_1_data_in,
	output 			       	iact_2_address_in_ready,
	input  			       	iact_2_address_in_valid,
	input  			[7:0]  	iact_2_address_in,
	output 			       	iact_2_data_in_ready,
	input  			       	iact_2_data_in_valid,
	input  			[12:0] 	iact_2_data_in,

	input  			       	weight_0_0_address_in_valid,
	input  			[6:0]  	weight_0_0_address_in,
	input  			       	weight_0_0_data_in_valid,
	input  			[11:0] 	weight_0_0_data_in,
	input  			       	weight_0_1_address_in_valid,
	input  			[6:0]  	weight_0_1_address_in,
	input  			       	weight_0_1_data_in_valid,
	input  			[11:0] 	weight_0_1_data_in,
	input  			       	weight_0_2_address_in_valid,
	input  			[6:0]  	weight_0_2_address_in,
	input  			       	weight_0_2_data_in_valid,
	input  			[11:0] 	weight_0_2_data_in,

	input  			       	weight_1_0_address_in_valid,
	input  			[6:0]  	weight_1_0_address_in,
	input  			       	weight_1_0_data_in_valid,
	input  			[11:0] 	weight_1_0_data_in,
	input  			       	weight_1_1_address_in_valid,
	input  			[6:0]  	weight_1_1_address_in,
	input  			       	weight_1_1_data_in_valid,
	input  			[11:0] 	weight_1_1_data_in,
	input  			       	weight_1_2_address_in_valid,
	input  			[6:0]  	weight_1_2_address_in,
	input  			       	weight_1_2_data_in_valid,
	input  			[11:0] 	weight_1_2_data_in,

	input  			       	weight_2_0_address_in_valid,
	input  			[6:0]  	weight_2_0_address_in,
	input  			       	weight_2_0_data_in_valid,
	input  			[11:0] 	weight_2_0_data_in,
	input  			       	weight_2_1_address_in_valid,
	input  			[6:0]  	weight_2_1_address_in,
	input  			       	weight_2_1_data_in_valid,
	input  			[11:0] 	weight_2_1_data_in,
	input  			       	weight_2_2_address_in_valid,
	input  			[6:0]  	weight_2_2_address_in,
	input  			       	weight_2_2_data_in_valid,
	input  			[11:0] 	weight_2_2_data_in,

	output        			psum_0_in_ready,
	input         			psum_0_in_valid,
	input 	signed 	[20:0] 	psum_0_in,
	output        			psum_1_in_ready,
	input         			psum_1_in_valid,
	input 	signed 	[20:0] 	psum_1_in,
	output       		 	psum_2_in_ready,
	input         			psum_2_in_valid,
	input 	signed 	[20:0] 	psum_2_in,

	input         			psum_0_out_ready,
	output        			psum_0_out_valid,
	output 	signed 	[20:0] 	psum_0_out,
	input         			psum_1_out_ready,
	output        			psum_1_out_valid,
	output 	signed 	[20:0] 	psum_1_out,
	input        			psum_2_out_ready,
	output        			psum_2_out_valid,
	output 	signed 	[20:0] 	psum_2_out,

	output        			psum_0_in_from_south_ready,
	input         			psum_0_in_from_south_valid,
	input 	signed 	[20:0] 	psum_0_in_from_south,
	output       	 		psum_1_in_from_south_ready,
	input        	 		psum_1_in_from_south_valid,
	input 	signed 	[20:0] 	psum_1_in_from_south,
	output       	 		psum_2_in_from_south_ready,
	input        			psum_2_in_from_south_valid,
	input 	signed 	[20:0] 	psum_2_in_from_south,

	// control signals
	input					PE_0_0_disable,
	input					PE_0_1_disable,
	input					PE_0_2_disable,
	input					PE_1_0_disable,
	input					PE_1_1_disable,
	input					PE_1_2_disable,
	input					PE_2_0_disable,
	input					PE_2_1_disable,
	input					PE_2_2_disable,

	input         			psum_load_en,

	input         			iact_data_in_sel,
	input  			[1:0]  	iact_data_out_sel,

	input         			psum_data_in_sel, // true for GLB psum, false for south psum

	input         			do_en,

	input					iact_write_fin_clear,
	input					weight_write_fin_clear,
	output					all_write_fin,

	output        			all_cal_fin,

	input 			[4:0]	PSUM_DEPTH,
	input					psum_spad_clear
);

// ====================================================================	//
// 						 		Parameters  							//
// ====================================================================	//
localparam PSUM_FROM_SOU 	= 1'b0;
localparam PSUM_FROM_ROUTER = 1'b1;

// ====================================================================	//
// 		Internal per-PE signals (3x3 array, 取代原本攤平 wire 宣告)		//
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
wire        [11:0] pe_weight_data_in       [0:2][0:2];
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

// per-column 外部 psum 介面 (攤平 port 收進 array，供下方 generate 索引)
wire               psum_in_v_ext   [0:2];
wire signed [20:0] psum_in_d_ext   [0:2];
wire               psum_in_south_v [0:2];
wire signed [20:0] psum_in_south_d [0:2];
wire               psum_out_rdy_ext[0:2];

assign psum_in_v_ext[0]    = psum_0_in_valid;
assign psum_in_v_ext[1]    = psum_1_in_valid;
assign psum_in_v_ext[2]    = psum_2_in_valid;
assign psum_in_d_ext[0]    = psum_0_in;
assign psum_in_d_ext[1]    = psum_1_in;
assign psum_in_d_ext[2]    = psum_2_in;
assign psum_in_south_v[0]  = psum_0_in_from_south_valid;
assign psum_in_south_v[1]  = psum_1_in_from_south_valid;
assign psum_in_south_v[2]  = psum_2_in_from_south_valid;
assign psum_in_south_d[0]  = psum_0_in_from_south;
assign psum_in_south_d[1]  = psum_1_in_from_south;
assign psum_in_south_d[2]  = psum_2_in_from_south;
assign psum_out_rdy_ext[0] = psum_0_out_ready;
assign psum_out_rdy_ext[1] = psum_1_out_ready;
assign psum_out_rdy_ext[2] = psum_2_out_ready;

// weight 攤平 input port 收進 array (介面橋接，等價於原 weight assign)
assign pe_weight_addr_in_valid[0][0] = weight_0_0_address_in_valid;
assign pe_weight_addr_in      [0][0] = weight_0_0_address_in;
assign pe_weight_data_in_valid[0][0] = weight_0_0_data_in_valid;
assign pe_weight_data_in      [0][0] = weight_0_0_data_in;
assign pe_weight_addr_in_valid[0][1] = weight_0_1_address_in_valid;
assign pe_weight_addr_in      [0][1] = weight_0_1_address_in;
assign pe_weight_data_in_valid[0][1] = weight_0_1_data_in_valid;
assign pe_weight_data_in      [0][1] = weight_0_1_data_in;
assign pe_weight_addr_in_valid[0][2] = weight_0_2_address_in_valid;
assign pe_weight_addr_in      [0][2] = weight_0_2_address_in;
assign pe_weight_data_in_valid[0][2] = weight_0_2_data_in_valid;
assign pe_weight_data_in      [0][2] = weight_0_2_data_in;
assign pe_weight_addr_in_valid[1][0] = weight_1_0_address_in_valid;
assign pe_weight_addr_in      [1][0] = weight_1_0_address_in;
assign pe_weight_data_in_valid[1][0] = weight_1_0_data_in_valid;
assign pe_weight_data_in      [1][0] = weight_1_0_data_in;
assign pe_weight_addr_in_valid[1][1] = weight_1_1_address_in_valid;
assign pe_weight_addr_in      [1][1] = weight_1_1_address_in;
assign pe_weight_data_in_valid[1][1] = weight_1_1_data_in_valid;
assign pe_weight_data_in      [1][1] = weight_1_1_data_in;
assign pe_weight_addr_in_valid[1][2] = weight_1_2_address_in_valid;
assign pe_weight_addr_in      [1][2] = weight_1_2_address_in;
assign pe_weight_data_in_valid[1][2] = weight_1_2_data_in_valid;
assign pe_weight_data_in      [1][2] = weight_1_2_data_in;
assign pe_weight_addr_in_valid[2][0] = weight_2_0_address_in_valid;
assign pe_weight_addr_in      [2][0] = weight_2_0_address_in;
assign pe_weight_data_in_valid[2][0] = weight_2_0_data_in_valid;
assign pe_weight_data_in      [2][0] = weight_2_0_data_in;
assign pe_weight_addr_in_valid[2][1] = weight_2_1_address_in_valid;
assign pe_weight_addr_in      [2][1] = weight_2_1_address_in;
assign pe_weight_data_in_valid[2][1] = weight_2_1_data_in_valid;
assign pe_weight_data_in      [2][1] = weight_2_1_data_in;
assign pe_weight_addr_in_valid[2][2] = weight_2_2_address_in_valid;
assign pe_weight_addr_in      [2][2] = weight_2_2_address_in;
assign pe_weight_data_in_valid[2][2] = weight_2_2_data_in_valid;
assign pe_weight_data_in      [2][2] = weight_2_2_data_in;

// disable 攤平 input port 收進 array
assign pe_disable[0][0] = PE_0_0_disable;
assign pe_disable[0][1] = PE_0_1_disable;
assign pe_disable[0][2] = PE_0_2_disable;
assign pe_disable[1][0] = PE_1_0_disable;
assign pe_disable[1][1] = PE_1_1_disable;
assign pe_disable[1][2] = PE_1_2_disable;
assign pe_disable[2][0] = PE_2_0_disable;
assign pe_disable[2][1] = PE_2_1_disable;
assign pe_disable[2][2] = PE_2_2_disable;

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
// 				外部 psum 輸出 (攤平 output port，照搬)					//
// ====================================================================	//
assign psum_0_in_ready = (psum_data_in_sel == PSUM_FROM_ROUTER) & pe_psum_in_ready[2][0];
assign psum_1_in_ready = (psum_data_in_sel == PSUM_FROM_ROUTER) & pe_psum_in_ready[2][1];
assign psum_2_in_ready = (psum_data_in_sel == PSUM_FROM_ROUTER) & pe_psum_in_ready[2][2];

assign psum_0_out_valid = pe_psum_out_valid[0][0];
assign psum_1_out_valid = pe_psum_out_valid[0][1];
assign psum_2_out_valid = pe_psum_out_valid[0][2];

assign psum_0_out = pe_psum_out[0][0];
assign psum_1_out = pe_psum_out[0][1];
assign psum_2_out = pe_psum_out[0][2];

assign psum_0_in_from_south_ready = (psum_data_in_sel == PSUM_FROM_ROUTER) ? 1'b0 : pe_psum_in_ready[2][0];
assign psum_1_in_from_south_ready = (psum_data_in_sel == PSUM_FROM_ROUTER) ? 1'b0 : pe_psum_in_ready[2][1];
assign psum_2_in_from_south_ready = (psum_data_in_sel == PSUM_FROM_ROUTER) ? 1'b0 : pe_psum_in_ready[2][2];

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

	.iact_from_router_0_address_in_ready(iact_0_address_in_ready	),
	.iact_from_router_0_address_in_valid(iact_0_address_in_valid	),
	.iact_from_router_0_address_in      (iact_0_address_in      	),
	.iact_from_router_0_data_in_ready   (iact_0_data_in_ready  	 	),
	.iact_from_router_0_data_in_valid   (iact_0_data_in_valid   	),
	.iact_from_router_0_data_in         (iact_0_data_in        		),

	.iact_from_router_1_address_in_ready(iact_1_address_in_ready	),
	.iact_from_router_1_address_in_valid(iact_1_address_in_valid	),
	.iact_from_router_1_address_in      (iact_1_address_in      	),
	.iact_from_router_1_data_in_ready   (iact_1_data_in_ready   	),
	.iact_from_router_1_data_in_valid   (iact_1_data_in_valid   	),
	.iact_from_router_1_data_in         (iact_1_data_in         	),

	.iact_from_router_2_address_in_ready(iact_2_address_in_ready),
	.iact_from_router_2_address_in_valid(iact_2_address_in_valid	),
	.iact_from_router_2_address_in      (iact_2_address_in      	),
	.iact_from_router_2_data_in_ready   (iact_2_data_in_ready  	 	),
	.iact_from_router_2_data_in_vaild   (iact_2_data_in_valid    	),
	.iact_from_router_2_data_in         (iact_2_data_in          	)
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
