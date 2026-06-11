module ClusterGroup_array(

	input			clock,
	input			reset,
	
	input	     	psum_acc_fin,
	input	     	CG_PE_cluster_iact_data_in_sel [0:1][0:1],
	input	[1:0]	CG_PE_cluster_iact_data_out_sel [0:1][0:1],
	input	     	CG_PE_cluster_psum_data_in_sel [0:1][0:1],
						
	input	[1:0]	CG_router_cluster_iact_data_in_sel [0:1][0:1],
	input	[1:0]	CG_router_cluster_iact_data_out_sel [0:1][0:1],
	input			CG_router_cluster_weight_data_in_sel [0:1][0:1],
	input			CG_router_cluster_weight_data_out_sel [0:1][0:1],
	input			CG_router_cluster_psum_data_in_sel [0:1][0:1],
	input			CG_router_cluster_psum_data_out_sel [0:1][0:1],

	input			CG_src_GLB_load_fin [0:1][0:1],
	input			CG_cg_en [0:1][0:1],
	input			CG_read_psum_en [0:1][0:1],
	input			CG_psum_SRAM_Bank_0_read_out_en [0:1][0:1],
	input			CG_psum_SRAM_Bank_1_read_out_en [0:1][0:1],
	input			CG_psum_SRAM_Bank_2_read_out_en [0:1][0:1],
	input			CG_GLB_psum_write_en [0:1][0:1],
	input			CG_psum_spad_clear [0:1][0:1],
	input			CG_iact_write_fin_clear [0:1][0:1],
	input			CG_weight_write_fin_clear [0:1][0:1],

	output			CG_cal_fin [0:1][0:1],
	output			CG_PE_weight_load_en [0:1][0:1],
	output			CG_GLB_iact_load_en [0:1][0:1],
	

	// ---------------------------- CG_0_0 ---------------------------- //

	input					CG_0_0_PE_disable [0:2][0:2],

	// ================================================================ //
	//                               GLB                                //
	// ================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	input			[9:0]	CG_0_0_GLB_iact_read_addr [0:2][0:2],
	input			[9:0]	CG_0_0_GLB_psum_write_addr [0:2],
	input			[9:0]	CG_0_0_GLB_psum_read_addr [0:2],
	
	// GLB iact address & data
	output			      	CG_0_0_GLB_iact_address_in_ready [0:2][0:2],
	input 			      	CG_0_0_GLB_iact_address_in_valid [0:2][0:2],
	input 			[6:0]  	CG_0_0_GLB_iact_address_in [0:2][0:2],
	output			      	CG_0_0_GLB_iact_data_in_ready [0:2][0:2],
	input 			      	CG_0_0_GLB_iact_data_in_valid [0:2][0:2],
	input 			[11:0] 	CG_0_0_GLB_iact_data_in [0:2][0:2],

	// GLB weight address & data			
	output			       	CG_0_0_GLB_weight_address_in_ready [0:2],
	input 			       	CG_0_0_GLB_weight_address_in_valid [0:2],
	input 			[7:0]  	CG_0_0_GLB_weight_address_in [0:2],
	output			       	CG_0_0_GLB_weight_data_in_ready [0:2],
	input 			       	CG_0_0_GLB_weight_data_in_valid [0:2],
	input 			[12:0] 	CG_0_0_GLB_weight_data_in [0:2],
	
	// GLB psum address & data in/out
	output        			CG_0_0_GLB_psum_0_data_in_ready,
	input         			CG_0_0_GLB_psum_0_data_in_valid,
	input	signed 	[20:0] 	CG_0_0_GLB_psum_0_data_in,
	input         			CG_0_0_GLB_psum_0_data_out_ready,
	output        			CG_0_0_GLB_psum_0_data_out_valid,
	output 	signed 	[20:0] 	CG_0_0_GLB_psum_0_data_out,
	output        			CG_0_0_GLB_psum_1_data_in_ready,
	input         			CG_0_0_GLB_psum_1_data_in_valid,
	input 	signed 	[20:0] 	CG_0_0_GLB_psum_1_data_in,
	input         			CG_0_0_GLB_psum_1_data_out_ready,
	output        			CG_0_0_GLB_psum_1_data_out_valid,
	output 	signed 	[20:0] 	CG_0_0_GLB_psum_1_data_out,
	output        			CG_0_0_GLB_psum_2_data_in_ready,
	input         			CG_0_0_GLB_psum_2_data_in_valid,
	input 	signed 	[20:0] 	CG_0_0_GLB_psum_2_data_in,
	input         			CG_0_0_GLB_psum_2_data_out_ready,
	output        			CG_0_0_GLB_psum_2_data_out_valid,
	output 	signed 	[20:0] 	CG_0_0_GLB_psum_2_data_out,
	// ================================================================ //
	
	input			[4:0]	CG_0_0_PSUM_DEPTH,



	// ---------------------------- CG_0_1 ---------------------------- //

	input					CG_0_1_PE_disable [0:2][0:2],

	// ================================================================ //
	//                               GLB                                //
	// ================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	input			[9:0]	CG_0_1_GLB_iact_read_addr [0:2][0:2],
	input			[9:0]	CG_0_1_GLB_psum_write_addr [0:2],
	input			[9:0]	CG_0_1_GLB_psum_read_addr [0:2],
	
	// GLB iact address & data
	output			      	CG_0_1_GLB_iact_address_in_ready [0:2][0:2],
	input 			      	CG_0_1_GLB_iact_address_in_valid [0:2][0:2],
	input 			[6:0]  	CG_0_1_GLB_iact_address_in [0:2][0:2],
	output			      	CG_0_1_GLB_iact_data_in_ready [0:2][0:2],
	input 			      	CG_0_1_GLB_iact_data_in_valid [0:2][0:2],
	input 			[11:0] 	CG_0_1_GLB_iact_data_in [0:2][0:2],

	// GLB weight address & data			
	output			       	CG_0_1_GLB_weight_address_in_ready [0:2],
	input 			       	CG_0_1_GLB_weight_address_in_valid [0:2],
	input 			[7:0]  	CG_0_1_GLB_weight_address_in [0:2],
	output			       	CG_0_1_GLB_weight_data_in_ready [0:2],
	input 			       	CG_0_1_GLB_weight_data_in_valid [0:2],
	input 			[12:0] 	CG_0_1_GLB_weight_data_in [0:2],
	
	// GLB psum address & data in/out
	output        			CG_0_1_GLB_psum_0_data_in_ready,
	input         			CG_0_1_GLB_psum_0_data_in_valid,
	input	signed 	[20:0] 	CG_0_1_GLB_psum_0_data_in,
	input         			CG_0_1_GLB_psum_0_data_out_ready,
	output        			CG_0_1_GLB_psum_0_data_out_valid,
	output 	signed 	[20:0] 	CG_0_1_GLB_psum_0_data_out,
	output        			CG_0_1_GLB_psum_1_data_in_ready,
	input         			CG_0_1_GLB_psum_1_data_in_valid,
	input 	signed 	[20:0] 	CG_0_1_GLB_psum_1_data_in,
	input         			CG_0_1_GLB_psum_1_data_out_ready,
	output        			CG_0_1_GLB_psum_1_data_out_valid,
	output 	signed 	[20:0] 	CG_0_1_GLB_psum_1_data_out,
	output        			CG_0_1_GLB_psum_2_data_in_ready,
	input         			CG_0_1_GLB_psum_2_data_in_valid,
	input 	signed 	[20:0] 	CG_0_1_GLB_psum_2_data_in,
	input         			CG_0_1_GLB_psum_2_data_out_ready,
	output        			CG_0_1_GLB_psum_2_data_out_valid,
	output 	signed 	[20:0] 	CG_0_1_GLB_psum_2_data_out,
	// ================================================================ //
	
	input			[4:0]	CG_0_1_PSUM_DEPTH,



	// ---------------------------- CG_1_0 ---------------------------- //

	input					CG_1_0_PE_disable [0:2][0:2],

	// ================================================================ //
	//                               GLB                                //
	// ================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	input			[9:0]	CG_1_0_GLB_iact_read_addr [0:2][0:2],
	input			[9:0]	CG_1_0_GLB_psum_write_addr [0:2],
	input			[9:0]	CG_1_0_GLB_psum_read_addr [0:2],
	
	// GLB iact address & data
	output			      	CG_1_0_GLB_iact_address_in_ready [0:2][0:2],
	input 			      	CG_1_0_GLB_iact_address_in_valid [0:2][0:2],
	input 			[6:0]  	CG_1_0_GLB_iact_address_in [0:2][0:2],
	output			      	CG_1_0_GLB_iact_data_in_ready [0:2][0:2],
	input 			      	CG_1_0_GLB_iact_data_in_valid [0:2][0:2],
	input 			[11:0] 	CG_1_0_GLB_iact_data_in [0:2][0:2],

	// GLB weight address & data			
	output			       	CG_1_0_GLB_weight_address_in_ready [0:2],
	input 			       	CG_1_0_GLB_weight_address_in_valid [0:2],
	input 			[7:0]  	CG_1_0_GLB_weight_address_in [0:2],
	output			       	CG_1_0_GLB_weight_data_in_ready [0:2],
	input 			       	CG_1_0_GLB_weight_data_in_valid [0:2],
	input 			[12:0] 	CG_1_0_GLB_weight_data_in [0:2],
	
	// GLB psum address & data in/out
	output        			CG_1_0_GLB_psum_0_data_in_ready,
	input         			CG_1_0_GLB_psum_0_data_in_valid,
	input	signed 	[20:0] 	CG_1_0_GLB_psum_0_data_in,
	input         			CG_1_0_GLB_psum_0_data_out_ready,
	output        			CG_1_0_GLB_psum_0_data_out_valid,
	output 	signed 	[20:0] 	CG_1_0_GLB_psum_0_data_out,
	output        			CG_1_0_GLB_psum_1_data_in_ready,
	input         			CG_1_0_GLB_psum_1_data_in_valid,
	input 	signed 	[20:0] 	CG_1_0_GLB_psum_1_data_in,
	input         			CG_1_0_GLB_psum_1_data_out_ready,
	output        			CG_1_0_GLB_psum_1_data_out_valid,
	output 	signed 	[20:0] 	CG_1_0_GLB_psum_1_data_out,
	output        			CG_1_0_GLB_psum_2_data_in_ready,
	input         			CG_1_0_GLB_psum_2_data_in_valid,
	input 	signed 	[20:0] 	CG_1_0_GLB_psum_2_data_in,
	input         			CG_1_0_GLB_psum_2_data_out_ready,
	output        			CG_1_0_GLB_psum_2_data_out_valid,
	output 	signed 	[20:0] 	CG_1_0_GLB_psum_2_data_out,
	// ================================================================ //
	
	input			[4:0]	CG_1_0_PSUM_DEPTH,



	// ---------------------------- CG_1_1 ---------------------------- //

	input					CG_1_1_PE_disable [0:2][0:2],

	// ================================================================ //
	//                               GLB                                //
	// ================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	input			[9:0]	CG_1_1_GLB_iact_read_addr [0:2][0:2],
	input			[9:0]	CG_1_1_GLB_psum_write_addr [0:2],
	input			[9:0]	CG_1_1_GLB_psum_read_addr [0:2],
	
	// GLB iact address & data
	output			      	CG_1_1_GLB_iact_address_in_ready [0:2][0:2],
	input 			      	CG_1_1_GLB_iact_address_in_valid [0:2][0:2],
	input 			[6:0]  	CG_1_1_GLB_iact_address_in [0:2][0:2],
	output			      	CG_1_1_GLB_iact_data_in_ready [0:2][0:2],
	input 			      	CG_1_1_GLB_iact_data_in_valid [0:2][0:2],
	input 			[11:0] 	CG_1_1_GLB_iact_data_in [0:2][0:2],

	// GLB weight address & data			
	output			       	CG_1_1_GLB_weight_address_in_ready [0:2],
	input 			       	CG_1_1_GLB_weight_address_in_valid [0:2],
	input 			[7:0]  	CG_1_1_GLB_weight_address_in [0:2],
	output			       	CG_1_1_GLB_weight_data_in_ready [0:2],
	input 			       	CG_1_1_GLB_weight_data_in_valid [0:2],
	input 			[12:0] 	CG_1_1_GLB_weight_data_in [0:2],
	
	// GLB psum address & data in/out
	output        			CG_1_1_GLB_psum_0_data_in_ready,
	input         			CG_1_1_GLB_psum_0_data_in_valid,
	input	signed 	[20:0] 	CG_1_1_GLB_psum_0_data_in,
	input         			CG_1_1_GLB_psum_0_data_out_ready,
	output        			CG_1_1_GLB_psum_0_data_out_valid,
	output 	signed 	[20:0] 	CG_1_1_GLB_psum_0_data_out,
	output        			CG_1_1_GLB_psum_1_data_in_ready,
	input         			CG_1_1_GLB_psum_1_data_in_valid,
	input 	signed 	[20:0] 	CG_1_1_GLB_psum_1_data_in,
	input         			CG_1_1_GLB_psum_1_data_out_ready,
	output        			CG_1_1_GLB_psum_1_data_out_valid,
	output 	signed 	[20:0] 	CG_1_1_GLB_psum_1_data_out,
	output        			CG_1_1_GLB_psum_2_data_in_ready,
	input         			CG_1_1_GLB_psum_2_data_in_valid,
	input 	signed 	[20:0] 	CG_1_1_GLB_psum_2_data_in,
	input         			CG_1_1_GLB_psum_2_data_out_ready,
	output        			CG_1_1_GLB_psum_2_data_out_valid,
	output 	signed 	[20:0] 	CG_1_1_GLB_psum_2_data_out,
	// ================================================================ //
	
	input			[4:0]	CG_1_1_PSUM_DEPTH
);


// --------------------- CG_0_0 --------------------- //
// tile-chain 介面（source-named：每條 wire 由 CG_0_0 對應 output port 驅動）
wire 		       	CG_0_0_iact_north_address_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_0_iact_north_address_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		[6:0]  	CG_0_0_iact_north_address_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_0_iact_north_data_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_0_iact_north_data_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		[11:0] 	CG_0_0_iact_north_data_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_0_iact_south_address_in_ready [0:2][0:2];
wire 		       	CG_0_0_iact_south_address_out_valid [0:2][0:2];
wire 		[6:0]  	CG_0_0_iact_south_address_out_bits [0:2][0:2];
wire 		       	CG_0_0_iact_south_data_in_ready [0:2][0:2];
wire 		       	CG_0_0_iact_south_data_out_valid [0:2][0:2];
wire 		[11:0] 	CG_0_0_iact_south_data_out_bits [0:2][0:2];
wire 		       	CG_0_0_iact_horiz_address_in_ready [0:2][0:2];
wire 		       	CG_0_0_iact_horiz_address_out_valid [0:2][0:2];
wire 		[6:0]  	CG_0_0_iact_horiz_address_out_bits [0:2][0:2];
wire 		       	CG_0_0_iact_horiz_data_in_ready [0:2][0:2];
wire 		       	CG_0_0_iact_horiz_data_out_valid [0:2][0:2];
wire 		[11:0] 	CG_0_0_iact_horiz_data_out_bits [0:2][0:2];
wire 		       	CG_0_0_weight_horiz_address_in_ready [0:2];
wire 		       	CG_0_0_weight_horiz_address_out_valid [0:2];
wire 		[7:0]  	CG_0_0_weight_horiz_address_out_bits [0:2];
wire 		       	CG_0_0_weight_horiz_data_in_ready [0:2];
wire 		       	CG_0_0_weight_horiz_data_out_valid [0:2];
wire 		[12:0] 	CG_0_0_weight_horiz_data_out_bits [0:2];
wire 	       		CG_0_0_psum_north_in_ready [0:2];	// 懸空：無鄰 CG 讀取
wire 	       		CG_0_0_psum_south_out_valid [0:2];
wire signed	[20:0] 	CG_0_0_psum_south_out_bits [0:2];
wire 	       		CG_0_0_cg_south_psum_in_ready [0:2];
wire 	       		CG_0_0_cg_north_psum_out_valid [0:2];	// 懸空：無鄰 CG 讀取
wire signed	[20:0] 	CG_0_0_cg_north_psum_out [0:2];	// 懸空：無鄰 CG 讀取


// --------------------- CG_0_1 --------------------- //
// tile-chain 介面（source-named：每條 wire 由 CG_0_1 對應 output port 驅動）
wire 		       	CG_0_1_iact_north_address_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_1_iact_north_address_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		[6:0]  	CG_0_1_iact_north_address_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_1_iact_north_data_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_1_iact_north_data_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		[11:0] 	CG_0_1_iact_north_data_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 		       	CG_0_1_iact_south_address_in_ready [0:2][0:2];
wire 		       	CG_0_1_iact_south_address_out_valid [0:2][0:2];
wire 		[6:0]  	CG_0_1_iact_south_address_out_bits [0:2][0:2];
wire 		       	CG_0_1_iact_south_data_in_ready [0:2][0:2];
wire 		       	CG_0_1_iact_south_data_out_valid [0:2][0:2];
wire 		[11:0] 	CG_0_1_iact_south_data_out_bits [0:2][0:2];
wire 		       	CG_0_1_iact_horiz_address_in_ready [0:2][0:2];
wire 		       	CG_0_1_iact_horiz_address_out_valid [0:2][0:2];
wire 		[6:0]  	CG_0_1_iact_horiz_address_out_bits [0:2][0:2];
wire 		       	CG_0_1_iact_horiz_data_in_ready [0:2][0:2];
wire 		       	CG_0_1_iact_horiz_data_out_valid [0:2][0:2];
wire 		[11:0] 	CG_0_1_iact_horiz_data_out_bits [0:2][0:2];
wire 		       	CG_0_1_weight_horiz_address_in_ready [0:2];
wire 		       	CG_0_1_weight_horiz_address_out_valid [0:2];
wire 		[7:0]  	CG_0_1_weight_horiz_address_out_bits [0:2];
wire 		       	CG_0_1_weight_horiz_data_in_ready [0:2];
wire 		       	CG_0_1_weight_horiz_data_out_valid [0:2];
wire 		[12:0] 	CG_0_1_weight_horiz_data_out_bits [0:2];
wire 	       		CG_0_1_psum_north_in_ready [0:2];	// 懸空：無鄰 CG 讀取
wire 	       		CG_0_1_psum_south_out_valid [0:2];
wire signed	[20:0] 	CG_0_1_psum_south_out_bits [0:2];
wire 	       		CG_0_1_cg_south_psum_in_ready [0:2];
wire 	       		CG_0_1_cg_north_psum_out_valid [0:2];	// 懸空：無鄰 CG 讀取
wire signed	[20:0] 	CG_0_1_cg_north_psum_out [0:2];	// 懸空：無鄰 CG 讀取
// ⚠ 特例照搬原碼（保等價）：iact_north_address_out_ready 來源逐 element 不一致
wire 				CG_0_1_iact_north_address_out_ready_src [0:2][0:2];
assign CG_0_1_iact_north_address_out_ready_src[0][0] = 1'b0;	// ⚠ 原碼 'd0，全系統唯一
assign CG_0_1_iact_north_address_out_ready_src[0][1] = 1'b1;
assign CG_0_1_iact_north_address_out_ready_src[0][2] = 1'b1;
assign CG_0_1_iact_north_address_out_ready_src[1][0] = 1'b1;
assign CG_0_1_iact_north_address_out_ready_src[1][1] = 1'b1;
assign CG_0_1_iact_north_address_out_ready_src[1][2] = 1'b1;
assign CG_0_1_iact_north_address_out_ready_src[2][0] = 1'b1;
assign CG_0_1_iact_north_address_out_ready_src[2][1] = 1'b1;
assign CG_0_1_iact_north_address_out_ready_src[2][2] = 1'b1;
// ⚠ 特例照搬原碼（保等價）：weight_horiz_address_out_ready 來源逐 element 不一致
wire 	       	CG_0_1_weight_horiz_address_out_ready_src [0:2];
assign CG_0_1_weight_horiz_address_out_ready_src[0] = CG_0_1_weight_horiz_address_in_ready[0];	// ⚠ 原碼接自己（self-loop）
assign CG_0_1_weight_horiz_address_out_ready_src[1] = CG_0_0_weight_horiz_address_in_ready[1];
assign CG_0_1_weight_horiz_address_out_ready_src[2] = CG_0_0_weight_horiz_address_in_ready[2];


// --------------------- CG_1_0 --------------------- //
// tile-chain 介面（source-named：每條 wire 由 CG_1_0 對應 output port 驅動）
wire 	       	CG_1_0_iact_north_address_in_ready [0:2][0:2];
wire 	       	CG_1_0_iact_north_address_out_valid [0:2][0:2];
wire 	[6:0]  	CG_1_0_iact_north_address_out_bits [0:2][0:2];
wire 	       	CG_1_0_iact_north_data_in_ready [0:2][0:2];
wire 	       	CG_1_0_iact_north_data_out_valid [0:2][0:2];
wire 	[11:0] 	CG_1_0_iact_north_data_out_bits [0:2][0:2];
wire 	       	CG_1_0_iact_south_address_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_0_iact_south_address_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	[6:0]  	CG_1_0_iact_south_address_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_0_iact_south_data_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_0_iact_south_data_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	[11:0] 	CG_1_0_iact_south_data_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_0_iact_horiz_address_in_ready [0:2][0:2];
wire 	       	CG_1_0_iact_horiz_address_out_valid [0:2][0:2];
wire 	[6:0]  	CG_1_0_iact_horiz_address_out_bits [0:2][0:2];
wire 	       	CG_1_0_iact_horiz_data_in_ready [0:2][0:2];
wire 	       	CG_1_0_iact_horiz_data_out_valid [0:2][0:2];
wire 	[11:0] 	CG_1_0_iact_horiz_data_out_bits [0:2][0:2];
wire 	       	CG_1_0_weight_horiz_address_in_ready [0:2];
wire 	       	CG_1_0_weight_horiz_address_out_valid [0:2];
wire 	[7:0]  	CG_1_0_weight_horiz_address_out_bits [0:2];
wire 	       	CG_1_0_weight_horiz_data_in_ready [0:2];
wire 	       	CG_1_0_weight_horiz_data_out_valid [0:2];
wire 	[12:0] 	CG_1_0_weight_horiz_data_out_bits [0:2];
wire 	       	CG_1_0_psum_north_in_ready [0:2];
wire 	       	CG_1_0_psum_south_out_valid [0:2];	// 懸空：無鄰 CG 讀取
wire signed	[20:0] 	CG_1_0_psum_south_out_bits [0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_0_cg_south_psum_in_ready [0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_0_cg_north_psum_out_valid [0:2];
wire signed	[20:0] 	CG_1_0_cg_north_psum_out [0:2];


// --------------------- CG_1_1 --------------------- //
// tile-chain 介面（source-named：每條 wire 由 CG_1_1 對應 output port 驅動）
wire 	       	CG_1_1_iact_north_address_in_ready [0:2][0:2];
wire 	       	CG_1_1_iact_north_address_out_valid [0:2][0:2];
wire 	[6:0]  	CG_1_1_iact_north_address_out_bits [0:2][0:2];
wire 	       	CG_1_1_iact_north_data_in_ready [0:2][0:2];
wire 	       	CG_1_1_iact_north_data_out_valid [0:2][0:2];
wire 	[11:0] 	CG_1_1_iact_north_data_out_bits [0:2][0:2];
wire 	       	CG_1_1_iact_south_address_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_1_iact_south_address_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	[6:0]  	CG_1_1_iact_south_address_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_1_iact_south_data_in_ready [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_1_iact_south_data_out_valid [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	[11:0] 	CG_1_1_iact_south_data_out_bits [0:2][0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_1_iact_horiz_address_in_ready [0:2][0:2];
wire 	       	CG_1_1_iact_horiz_address_out_valid [0:2][0:2];
wire 	[6:0]  	CG_1_1_iact_horiz_address_out_bits [0:2][0:2];
wire 	       	CG_1_1_iact_horiz_data_in_ready [0:2][0:2];
wire 	       	CG_1_1_iact_horiz_data_out_valid [0:2][0:2];
wire 	[11:0] 	CG_1_1_iact_horiz_data_out_bits [0:2][0:2];
wire 	       	CG_1_1_weight_horiz_address_in_ready [0:2];
wire 	       	CG_1_1_weight_horiz_address_out_valid [0:2];
wire 	[7:0]  	CG_1_1_weight_horiz_address_out_bits [0:2];
wire 	       	CG_1_1_weight_horiz_data_in_ready [0:2];
wire 	       	CG_1_1_weight_horiz_data_out_valid [0:2];
wire 	[12:0] 	CG_1_1_weight_horiz_data_out_bits [0:2];
wire 	       	CG_1_1_psum_north_in_ready [0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_1_psum_south_out_valid [0:2];
wire signed	[20:0] 	CG_1_1_psum_south_out_bits [0:2];
wire 	       	CG_1_1_cg_south_psum_in_ready [0:2];	// 懸空：無鄰 CG 讀取
wire 	       	CG_1_1_cg_north_psum_out_valid [0:2];
wire signed	[20:0] 	CG_1_1_cg_north_psum_out [0:2];


// ---------------- tile-chain 邊緣終端（無鄰側：ready 恆 1、valid/bits 恆 0） ----------------
wire 		       	tie_hi_3x3 [0:2][0:2];
wire 		       	tie_lo_3x3 [0:2][0:2];
wire 		[6:0]  	tie_lo_3x3_7b [0:2][0:2];
wire 		[11:0] 	tie_lo_3x3_12b [0:2][0:2];
wire 		       	tie_hi_3 [0:2];
wire 		       	tie_lo_3 [0:2];
wire signed	[20:0] 	tie_lo_3_21b [0:2];
genvar te_r, te_c;
generate
for (te_r = 0; te_r < 3; te_r = te_r + 1) begin : TIE_R
	assign tie_hi_3[te_r]     = 1'b1;
	assign tie_lo_3[te_r]     = 1'b0;
	assign tie_lo_3_21b[te_r] = 21'sd0;
	for (te_c = 0; te_c < 3; te_c = te_c + 1) begin : TIE_C
		assign tie_hi_3x3[te_r][te_c]     = 1'b1;
		assign tie_lo_3x3[te_r][te_c]     = 1'b0;
		assign tie_lo_3x3_7b[te_r][te_c]  = 7'd0;
		assign tie_lo_3x3_12b[te_r][te_c] = 12'd0;
	end
end
endgenerate

wire	CG_0_0_all_cal_fin;
wire	CG_0_1_all_cal_fin;
wire	CG_1_0_all_cal_fin;
wire	CG_1_1_all_cal_fin;
wire	gloabl_cal_fin = CG_0_0_all_cal_fin & CG_0_1_all_cal_fin & CG_1_0_all_cal_fin & CG_1_1_all_cal_fin;

ClusterGroup ClusterGroup_0_0 (
	// ======================================================================================== //
	//                        Cluster_Group_array input/output controls                         //
	// ======================================================================================== //
	.clock										(clock											),
	.reset										(reset											),

	.psum_acc_fin								(psum_acc_fin									),
	.PE_cluster_iact_data_in_sel                (CG_PE_cluster_iact_data_in_sel[0][0]           ),
	.PE_cluster_iact_data_out_sel               (CG_PE_cluster_iact_data_out_sel[0][0]          ),
	.PE_cluster_psum_data_in_sel                (CG_PE_cluster_psum_data_in_sel[0][0]           ),
									            			
	.router_cluster_iact_data_in_sel            (CG_router_cluster_iact_data_in_sel[0][0]   	),
	.router_cluster_iact_data_out_sel           (CG_router_cluster_iact_data_out_sel[0][0]  	),
	.router_cluster_weight_data_in_sel          (CG_router_cluster_weight_data_in_sel[0][0] 	),
	.router_cluster_weight_data_out_sel         (CG_router_cluster_weight_data_out_sel[0][0]	),
	.router_cluster_psum_data_in_sel            (CG_router_cluster_psum_data_in_sel[0][0]   	),
	.router_cluster_psum_data_out_sel           (CG_router_cluster_psum_data_out_sel[0][0]  	),
							                    
	.src_GLB_load_fin							(CG_src_GLB_load_fin[0][0]						),
	.cg_en                                      (CG_cg_en[0][0]                                 ),
	.read_psum_en                               (CG_read_psum_en[0][0]                          ),
	.GLB_psum_write_en							(CG_GLB_psum_write_en[0][0]						),
	.psum_spad_clear                            (CG_psum_spad_clear[0][0]                       ),
	.iact_write_fin_clear                       (CG_iact_write_fin_clear[0][0]                	),
	.weight_write_fin_clear						(CG_weight_write_fin_clear[0][0]				),
	.psum_SRAM_Bank_0_read_out_en				(CG_psum_SRAM_Bank_0_read_out_en[0][0]			),
	.psum_SRAM_Bank_1_read_out_en				(CG_psum_SRAM_Bank_1_read_out_en[0][0]			),
	.psum_SRAM_Bank_2_read_out_en				(CG_psum_SRAM_Bank_2_read_out_en[0][0]			),
	// output
	.cal_fin                                    (CG_cal_fin[0][0]                               ),
	.PE_weight_load_en                          (CG_PE_weight_load_en[0][0]                     ),
	.GLB_iact_load_en                           (CG_GLB_iact_load_en[0][0]                      ),
	// ======================================================================================== //

	// inner wire
	.all_cal_fin								(CG_0_0_all_cal_fin								),
	.psum_acc_en								(gloabl_cal_fin									),


	.PE_disable(CG_0_0_PE_disable),

	// ============================================================================ //
	//                                      GLB                                     //
	// ============================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	.GLB_iact_read_addr(CG_0_0_GLB_iact_read_addr),
	.GLB_psum_write_addr(CG_0_0_GLB_psum_write_addr),
	.GLB_psum_read_addr(CG_0_0_GLB_psum_read_addr),

	// GLB iact address & data								               
	.GLB_iact_address_in_ready(CG_0_0_GLB_iact_address_in_ready),
	.GLB_iact_address_in_valid(CG_0_0_GLB_iact_address_in_valid),
	.GLB_iact_address_in(CG_0_0_GLB_iact_address_in),
	.GLB_iact_data_in_ready(CG_0_0_GLB_iact_data_in_ready),
	.GLB_iact_data_in_valid(CG_0_0_GLB_iact_data_in_valid),
	.GLB_iact_data_in(CG_0_0_GLB_iact_data_in),
										    						
	// GLB weight address & data			
	.GLB_weight_address_in_ready(CG_0_0_GLB_weight_address_in_ready),
	.GLB_weight_address_in_valid(CG_0_0_GLB_weight_address_in_valid),
	.GLB_weight_address_in(CG_0_0_GLB_weight_address_in),
	.GLB_weight_data_in_ready(CG_0_0_GLB_weight_data_in_ready),
	.GLB_weight_data_in_valid(CG_0_0_GLB_weight_data_in_valid),
	.GLB_weight_data_in(CG_0_0_GLB_weight_data_in),
										     
	// GLB psum address & data in/out
	.GLB_psum_0_data_in_ready                   (CG_0_0_GLB_psum_0_data_in_ready 	),
	.GLB_psum_0_data_in_valid                   (CG_0_0_GLB_psum_0_data_in_valid 	),
	.GLB_psum_0_data_in                         (CG_0_0_GLB_psum_0_data_in       	),
	.GLB_psum_0_data_out_ready                  (CG_0_0_GLB_psum_0_data_out_ready	),
	.GLB_psum_0_data_out_valid                  (CG_0_0_GLB_psum_0_data_out_valid	),
	.GLB_psum_0_data_out                        (CG_0_0_GLB_psum_0_data_out      	),
	.GLB_psum_1_data_in_ready                   (CG_0_0_GLB_psum_1_data_in_ready 	),
	.GLB_psum_1_data_in_valid                   (CG_0_0_GLB_psum_1_data_in_valid 	),
	.GLB_psum_1_data_in                         (CG_0_0_GLB_psum_1_data_in       	),
	.GLB_psum_1_data_out_ready                  (CG_0_0_GLB_psum_1_data_out_ready	),
	.GLB_psum_1_data_out_valid                  (CG_0_0_GLB_psum_1_data_out_valid	),
	.GLB_psum_1_data_out                        (CG_0_0_GLB_psum_1_data_out      	),
	.GLB_psum_2_data_in_ready                   (CG_0_0_GLB_psum_2_data_in_ready 	),
	.GLB_psum_2_data_in_valid                   (CG_0_0_GLB_psum_2_data_in_valid 	),
	.GLB_psum_2_data_in                         (CG_0_0_GLB_psum_2_data_in       	),
	.GLB_psum_2_data_out_ready                  (CG_0_0_GLB_psum_2_data_out_ready	),
	.GLB_psum_2_data_out_valid                  (CG_0_0_GLB_psum_2_data_out_valid	),
	.GLB_psum_2_data_out                        (CG_0_0_GLB_psum_2_data_out      	),
	// ============================================================================ //

	.PSUM_DEPTH                                 (CG_0_0_PSUM_DEPTH                  ),
	
											
	// ======== tile-chain：iact / weight / psum router、cg_psum（array 直連） ======== //
	// --- iact --- //
	// north: address_in/out, data_in/out
	.iact_north_address_in_ready    (CG_0_0_iact_north_address_in_ready      		   ),
	.iact_north_address_in_valid    (tie_lo_3x3                              		   ),
	.iact_north_address_in_bits     (tie_lo_3x3_7b                           		   ),
	.iact_north_address_out_ready   (tie_hi_3x3                              		   ),
	.iact_north_address_out_valid   (CG_0_0_iact_north_address_out_valid     		   ),
	.iact_north_address_out_bits    (CG_0_0_iact_north_address_out_bits      		   ),
	.iact_north_data_in_ready       (CG_0_0_iact_north_data_in_ready         		   ),
	.iact_north_data_in_valid       (tie_lo_3x3                              		   ),
	.iact_north_data_in_bits        (tie_lo_3x3_12b                          		   ),
	.iact_north_data_out_ready      (tie_hi_3x3                              		   ),
	.iact_north_data_out_valid      (CG_0_0_iact_north_data_out_valid        		   ),
	.iact_north_data_out_bits       (CG_0_0_iact_north_data_out_bits         		   ),

	// south: address_in/out, data_in/out
	.iact_south_address_in_ready    (CG_0_0_iact_south_address_in_ready      		   ),
	.iact_south_address_in_valid    (CG_1_0_iact_north_address_out_valid     		   ),
	.iact_south_address_in_bits     (CG_1_0_iact_north_address_out_bits      		   ),
	.iact_south_address_out_ready   (CG_1_0_iact_north_address_in_ready      		   ),
	.iact_south_address_out_valid   (CG_0_0_iact_south_address_out_valid     		   ),
	.iact_south_address_out_bits    (CG_0_0_iact_south_address_out_bits      		   ),
	.iact_south_data_in_ready       (CG_0_0_iact_south_data_in_ready         		   ),
	.iact_south_data_in_valid       (CG_1_0_iact_north_data_out_valid        		   ),
	.iact_south_data_in_bits        (CG_1_0_iact_north_data_out_bits         		   ),
	.iact_south_data_out_ready      (CG_1_0_iact_north_data_in_ready         		   ),
	.iact_south_data_out_valid      (CG_0_0_iact_south_data_out_valid        		   ),
	.iact_south_data_out_bits       (CG_0_0_iact_south_data_out_bits         		   ),
	
	// horiz: address_in/out, data_in/out
	.iact_horiz_address_in_ready    (CG_0_0_iact_horiz_address_in_ready      		   ),
	.iact_horiz_address_in_valid    (CG_0_1_iact_horiz_address_out_valid     		   ),
	.iact_horiz_address_in_bits     (CG_0_1_iact_horiz_address_out_bits      		   ),
	.iact_horiz_address_out_ready   (CG_0_1_iact_horiz_address_in_ready      		   ),
	.iact_horiz_address_out_valid   (CG_0_0_iact_horiz_address_out_valid     		   ),
	.iact_horiz_address_out_bits    (CG_0_0_iact_horiz_address_out_bits      		   ),
	.iact_horiz_data_in_ready       (CG_0_0_iact_horiz_data_in_ready         		   ),
	.iact_horiz_data_in_valid       (CG_0_1_iact_horiz_data_out_valid        		   ),
	.iact_horiz_data_in_bits        (CG_0_1_iact_horiz_data_out_bits         		   ),
	.iact_horiz_data_out_ready      (CG_0_1_iact_horiz_data_in_ready         		   ),
	.iact_horiz_data_out_valid      (CG_0_0_iact_horiz_data_out_valid        		   ),
	.iact_horiz_data_out_bits       (CG_0_0_iact_horiz_data_out_bits         		   ),
	

	// --- weight --- //
	// horiz: address_in/out, data_in/out
	.weight_horiz_address_in_ready  (CG_0_0_weight_horiz_address_in_ready    		   ),
	.weight_horiz_address_in_valid  (CG_0_1_weight_horiz_address_out_valid   		   ),
	.weight_horiz_address_in_bits   (CG_0_1_weight_horiz_address_out_bits    		   ),
	.weight_horiz_address_out_ready (CG_0_1_weight_horiz_address_in_ready    		   ),
	.weight_horiz_address_out_valid (CG_0_0_weight_horiz_address_out_valid   		   ),
	.weight_horiz_address_out_bits  (CG_0_0_weight_horiz_address_out_bits    		   ),
	.weight_horiz_data_in_ready     (CG_0_0_weight_horiz_data_in_ready       		   ),
	.weight_horiz_data_in_valid     (CG_0_1_weight_horiz_data_out_valid      		   ),
	.weight_horiz_data_in_bits      (CG_0_1_weight_horiz_data_out_bits       		   ),
	.weight_horiz_data_out_ready    (CG_0_1_weight_horiz_data_in_ready       		   ),
	.weight_horiz_data_out_valid    (CG_0_0_weight_horiz_data_out_valid      		   ),
	.weight_horiz_data_out_bits     (CG_0_0_weight_horiz_data_out_bits       		   ),


	// --- psum --- //
	.psum_north_in_ready            (CG_0_0_psum_north_in_ready              		   ),
	.psum_north_in_valid            (tie_lo_3                                		   ),
	.psum_north_in_bits             (tie_lo_3_21b                            		   ),
	.psum_south_out_ready           (CG_1_0_psum_north_in_ready              		   ),
	.psum_south_out_valid           (CG_0_0_psum_south_out_valid             		   ),
	.psum_south_out_bits            (CG_0_0_psum_south_out_bits              		   ),

	
	// --- cg psum --- //
	.cg_south_psum_in_ready         (CG_0_0_cg_south_psum_in_ready           		   ),
	.cg_south_psum_in_valid         (CG_1_0_cg_north_psum_out_valid          		   ),
	.cg_south_psum_in               (CG_1_0_cg_north_psum_out                		   ),
	.cg_north_psum_out_ready        (tie_hi_3                                		   ),
	.cg_north_psum_out_valid        (CG_0_0_cg_north_psum_out_valid          		   ),
	.cg_north_psum_out              (CG_0_0_cg_north_psum_out                		   )
	// ================================================================================ //
);


ClusterGroup ClusterGroup_0_1 (
	// ======================================================================================== //
	//                        Cluster_Group_array input/output controls                         //
	// ======================================================================================== //
	.clock										(clock											),
	.reset										(reset											),

	.psum_acc_fin								(psum_acc_fin									),
	.PE_cluster_iact_data_in_sel                (CG_PE_cluster_iact_data_in_sel[0][1]           ),
	.PE_cluster_iact_data_out_sel               (CG_PE_cluster_iact_data_out_sel[0][1]          ),
	.PE_cluster_psum_data_in_sel                (CG_PE_cluster_psum_data_in_sel[0][1]           ),
									            			
	.router_cluster_iact_data_in_sel            (CG_router_cluster_iact_data_in_sel[0][1]   	),
	.router_cluster_iact_data_out_sel           (CG_router_cluster_iact_data_out_sel[0][1]  	),
	.router_cluster_weight_data_in_sel          (CG_router_cluster_weight_data_in_sel[0][1] 	),
	.router_cluster_weight_data_out_sel         (CG_router_cluster_weight_data_out_sel[0][1]	),
	.router_cluster_psum_data_in_sel            (CG_router_cluster_psum_data_in_sel[0][1]   	),
	.router_cluster_psum_data_out_sel           (CG_router_cluster_psum_data_out_sel[0][1]  	),
							                    
	.src_GLB_load_fin							(CG_src_GLB_load_fin[0][1]						),
	.cg_en                                      (CG_cg_en[0][1]                                 ),
	.read_psum_en                               (CG_read_psum_en[0][1]                          ),
	.GLB_psum_write_en							(CG_GLB_psum_write_en[0][1]						),
	.psum_spad_clear                            (CG_psum_spad_clear[0][1]                       ),
	.iact_write_fin_clear                       (CG_iact_write_fin_clear[0][1]                	),
	.weight_write_fin_clear						(CG_weight_write_fin_clear[0][1]				),
	.psum_SRAM_Bank_0_read_out_en				(CG_psum_SRAM_Bank_0_read_out_en[0][1]			),
	.psum_SRAM_Bank_1_read_out_en				(CG_psum_SRAM_Bank_1_read_out_en[0][1]			),
	.psum_SRAM_Bank_2_read_out_en				(CG_psum_SRAM_Bank_2_read_out_en[0][1]			),
	// output
	.cal_fin                                    (CG_cal_fin[0][1]                               ),
	.PE_weight_load_en                          (CG_PE_weight_load_en[0][1]                     ),
	.GLB_iact_load_en                           (CG_GLB_iact_load_en[0][1]                      ),
	// ======================================================================================== //

	// inner wire
	.all_cal_fin								(CG_0_1_all_cal_fin								),
	.psum_acc_en								(gloabl_cal_fin									),


	.PE_disable(CG_0_1_PE_disable),

	// ============================================================================ //
	//                                      GLB                                     //
	// ============================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	.GLB_iact_read_addr(CG_0_1_GLB_iact_read_addr),
	.GLB_psum_write_addr(CG_0_1_GLB_psum_write_addr),
	.GLB_psum_read_addr(CG_0_1_GLB_psum_read_addr),

	// GLB iact address & data								               
	.GLB_iact_address_in_ready(CG_0_1_GLB_iact_address_in_ready),
	.GLB_iact_address_in_valid(CG_0_1_GLB_iact_address_in_valid),
	.GLB_iact_address_in(CG_0_1_GLB_iact_address_in),
	.GLB_iact_data_in_ready(CG_0_1_GLB_iact_data_in_ready),
	.GLB_iact_data_in_valid(CG_0_1_GLB_iact_data_in_valid),
	.GLB_iact_data_in(CG_0_1_GLB_iact_data_in),
										    						
	// GLB weight address & data			
	.GLB_weight_address_in_ready(CG_0_1_GLB_weight_address_in_ready),
	.GLB_weight_address_in_valid(CG_0_1_GLB_weight_address_in_valid),
	.GLB_weight_address_in(CG_0_1_GLB_weight_address_in),
	.GLB_weight_data_in_ready(CG_0_1_GLB_weight_data_in_ready),
	.GLB_weight_data_in_valid(CG_0_1_GLB_weight_data_in_valid),
	.GLB_weight_data_in(CG_0_1_GLB_weight_data_in),
										     
	// GLB psum address & data in/out
	.GLB_psum_0_data_in_ready                   (CG_0_1_GLB_psum_0_data_in_ready 	),
	.GLB_psum_0_data_in_valid                   (CG_0_1_GLB_psum_0_data_in_valid 	),
	.GLB_psum_0_data_in                         (CG_0_1_GLB_psum_0_data_in       	),
	.GLB_psum_0_data_out_ready                  (CG_0_1_GLB_psum_0_data_out_ready	),
	.GLB_psum_0_data_out_valid                  (CG_0_1_GLB_psum_0_data_out_valid	),
	.GLB_psum_0_data_out                        (CG_0_1_GLB_psum_0_data_out      	),
	.GLB_psum_1_data_in_ready                   (CG_0_1_GLB_psum_1_data_in_ready 	),
	.GLB_psum_1_data_in_valid                   (CG_0_1_GLB_psum_1_data_in_valid 	),
	.GLB_psum_1_data_in                         (CG_0_1_GLB_psum_1_data_in       	),
	.GLB_psum_1_data_out_ready                  (CG_0_1_GLB_psum_1_data_out_ready	),
	.GLB_psum_1_data_out_valid                  (CG_0_1_GLB_psum_1_data_out_valid	),
	.GLB_psum_1_data_out                        (CG_0_1_GLB_psum_1_data_out      	),
	.GLB_psum_2_data_in_ready                   (CG_0_1_GLB_psum_2_data_in_ready 	),
	.GLB_psum_2_data_in_valid                   (CG_0_1_GLB_psum_2_data_in_valid 	),
	.GLB_psum_2_data_in                         (CG_0_1_GLB_psum_2_data_in       	),
	.GLB_psum_2_data_out_ready                  (CG_0_1_GLB_psum_2_data_out_ready	),
	.GLB_psum_2_data_out_valid                  (CG_0_1_GLB_psum_2_data_out_valid	),
	.GLB_psum_2_data_out                        (CG_0_1_GLB_psum_2_data_out      	),
	// ============================================================================ //

	.PSUM_DEPTH                                 (CG_0_1_PSUM_DEPTH                  ),
	
											
	// ======== tile-chain：iact / weight / psum router、cg_psum（array 直連） ======== //
	// --- iact --- //
	// north: address_in/out, data_in/out
	.iact_north_address_in_ready    (CG_0_1_iact_north_address_in_ready         ),
	.iact_north_address_in_valid    (tie_lo_3x3                                 ),
	.iact_north_address_in_bits     (tie_lo_3x3_7b                              ),
	.iact_north_address_out_ready   (CG_0_1_iact_north_address_out_ready_src    ),
	.iact_north_address_out_valid   (CG_0_1_iact_north_address_out_valid        ),
	.iact_north_address_out_bits    (CG_0_1_iact_north_address_out_bits         ),
	.iact_north_data_in_ready       (CG_0_1_iact_north_data_in_ready            ),
	.iact_north_data_in_valid       (tie_lo_3x3                                 ),
	.iact_north_data_in_bits        (tie_lo_3x3_12b                             ),
	.iact_north_data_out_ready      (tie_hi_3x3                                 ),
	.iact_north_data_out_valid      (CG_0_1_iact_north_data_out_valid           ),
	.iact_north_data_out_bits       (CG_0_1_iact_north_data_out_bits            ),

	// south: address_in/out, data_in/out
	.iact_south_address_in_ready    (CG_0_1_iact_south_address_in_ready         ),
	.iact_south_address_in_valid    (CG_1_1_iact_north_address_out_valid        ),
	.iact_south_address_in_bits     (CG_1_1_iact_north_address_out_bits         ),
	.iact_south_address_out_ready   (CG_1_1_iact_north_address_in_ready         ),
	.iact_south_address_out_valid   (CG_0_1_iact_south_address_out_valid        ),
	.iact_south_address_out_bits    (CG_0_1_iact_south_address_out_bits         ),
	.iact_south_data_in_ready       (CG_0_1_iact_south_data_in_ready            ),
	.iact_south_data_in_valid       (CG_1_1_iact_north_data_out_valid           ),
	.iact_south_data_in_bits        (CG_1_1_iact_north_data_out_bits            ),
	.iact_south_data_out_ready      (CG_1_1_iact_north_data_in_ready            ),
	.iact_south_data_out_valid      (CG_0_1_iact_south_data_out_valid           ),
	.iact_south_data_out_bits       (CG_0_1_iact_south_data_out_bits            ),

	// horiz: address_in/out, data_in/out
	.iact_horiz_address_in_ready    (CG_0_1_iact_horiz_address_in_ready         ),
	.iact_horiz_address_in_valid    (CG_0_0_iact_horiz_address_out_valid        ),
	.iact_horiz_address_in_bits     (CG_0_0_iact_horiz_address_out_bits         ),
	.iact_horiz_address_out_ready   (CG_0_0_iact_horiz_address_in_ready         ),
	.iact_horiz_address_out_valid   (CG_0_1_iact_horiz_address_out_valid        ),
	.iact_horiz_address_out_bits    (CG_0_1_iact_horiz_address_out_bits         ),
	.iact_horiz_data_in_ready       (CG_0_1_iact_horiz_data_in_ready            ),
	.iact_horiz_data_in_valid       (CG_0_0_iact_horiz_data_out_valid           ),
	.iact_horiz_data_in_bits        (CG_0_0_iact_horiz_data_out_bits            ),
	.iact_horiz_data_out_ready      (CG_0_0_iact_horiz_data_in_ready            ),
	.iact_horiz_data_out_valid      (CG_0_1_iact_horiz_data_out_valid           ),
	.iact_horiz_data_out_bits       (CG_0_1_iact_horiz_data_out_bits            ),


	// --- weight --- //
	// horiz: address_in/out, data_in/out
	.weight_horiz_address_in_ready  (CG_0_1_weight_horiz_address_in_ready       ),
	.weight_horiz_address_in_valid  (CG_0_0_weight_horiz_address_out_valid      ),
	.weight_horiz_address_in_bits   (CG_0_0_weight_horiz_address_out_bits       ),
	.weight_horiz_address_out_ready (CG_0_1_weight_horiz_address_out_ready_src  ),
	.weight_horiz_address_out_valid (CG_0_1_weight_horiz_address_out_valid      ),
	.weight_horiz_address_out_bits  (CG_0_1_weight_horiz_address_out_bits       ),
	.weight_horiz_data_in_ready     (CG_0_1_weight_horiz_data_in_ready          ),
	.weight_horiz_data_in_valid     (CG_0_0_weight_horiz_data_out_valid         ),
	.weight_horiz_data_in_bits      (CG_0_0_weight_horiz_data_out_bits          ),
	.weight_horiz_data_out_ready    (CG_0_0_weight_horiz_data_in_ready          ),
	.weight_horiz_data_out_valid    (CG_0_1_weight_horiz_data_out_valid         ),
	.weight_horiz_data_out_bits     (CG_0_1_weight_horiz_data_out_bits          ),


	// --- psum --- //
	.psum_north_in_ready            (CG_0_1_psum_north_in_ready                 ),
	.psum_north_in_valid            (CG_1_1_psum_south_out_valid                ),
	.psum_north_in_bits             (CG_1_1_psum_south_out_bits                 ),
	.psum_south_out_ready           (tie_hi_3                                   ),
	.psum_south_out_valid           (CG_0_1_psum_south_out_valid                ),
	.psum_south_out_bits            (CG_0_1_psum_south_out_bits                 ),


	// --- cg psum --- //
	.cg_south_psum_in_ready         (CG_0_1_cg_south_psum_in_ready              ),
	.cg_south_psum_in_valid         (CG_1_1_cg_north_psum_out_valid             ),
	.cg_south_psum_in               (CG_1_1_cg_north_psum_out                   ),
	.cg_north_psum_out_ready        (tie_hi_3                                   ),
	.cg_north_psum_out_valid        (CG_0_1_cg_north_psum_out_valid             ),
	.cg_north_psum_out              (CG_0_1_cg_north_psum_out                   )
	// ================================================================================ //
);


ClusterGroup ClusterGroup_1_0 (
	// ======================================================================================== //
	//                        Cluster_Group_array input/output controls                         //
	// ======================================================================================== //
	.clock										(clock											),
	.reset										(reset											),

	.psum_acc_fin								(psum_acc_fin									),
	.PE_cluster_iact_data_in_sel                (CG_PE_cluster_iact_data_in_sel[1][0]           ),
	.PE_cluster_iact_data_out_sel               (CG_PE_cluster_iact_data_out_sel[1][0]          ),
	.PE_cluster_psum_data_in_sel                (CG_PE_cluster_psum_data_in_sel[1][0]           ),
									            			
	.router_cluster_iact_data_in_sel            (CG_router_cluster_iact_data_in_sel[1][0]   	),
	.router_cluster_iact_data_out_sel           (CG_router_cluster_iact_data_out_sel[1][0]  	),
	.router_cluster_weight_data_in_sel          (CG_router_cluster_weight_data_in_sel[1][0] 	),
	.router_cluster_weight_data_out_sel         (CG_router_cluster_weight_data_out_sel[1][0]	),
	.router_cluster_psum_data_in_sel            (CG_router_cluster_psum_data_in_sel[1][0]   	),
	.router_cluster_psum_data_out_sel           (CG_router_cluster_psum_data_out_sel[1][0]  	),
							                    
	.src_GLB_load_fin							(CG_src_GLB_load_fin[1][0]						),
	.cg_en                                      (CG_cg_en[1][0]                                 ),
	.read_psum_en                               (CG_read_psum_en[1][0]                          ),
	.GLB_psum_write_en							(CG_GLB_psum_write_en[1][0]						),
	.psum_spad_clear                            (CG_psum_spad_clear[1][0]                       ),
	.iact_write_fin_clear                       (CG_iact_write_fin_clear[1][0]                	),
	.weight_write_fin_clear						(CG_weight_write_fin_clear[1][0]				),
	.psum_SRAM_Bank_0_read_out_en				(CG_psum_SRAM_Bank_0_read_out_en[1][0]			),
	.psum_SRAM_Bank_1_read_out_en				(CG_psum_SRAM_Bank_1_read_out_en[1][0]			),
	.psum_SRAM_Bank_2_read_out_en				(CG_psum_SRAM_Bank_2_read_out_en[1][0]			),
	// output
	.cal_fin                                    (CG_cal_fin[1][0]                               ),
	.PE_weight_load_en                          (CG_PE_weight_load_en[1][0]                     ),
	.GLB_iact_load_en                           (CG_GLB_iact_load_en[1][0]                      ),
	// ======================================================================================== //

	// inner wire
	.all_cal_fin								(CG_1_0_all_cal_fin								),
	.psum_acc_en								(gloabl_cal_fin									),


	.PE_disable(CG_1_0_PE_disable),

	// ============================================================================ //
	//                                      GLB                                     //
	// ============================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	.GLB_iact_read_addr(CG_1_0_GLB_iact_read_addr),
	.GLB_psum_write_addr(CG_1_0_GLB_psum_write_addr),
	.GLB_psum_read_addr(CG_1_0_GLB_psum_read_addr),

	// GLB iact address & data								               
	.GLB_iact_address_in_ready(CG_1_0_GLB_iact_address_in_ready),
	.GLB_iact_address_in_valid(CG_1_0_GLB_iact_address_in_valid),
	.GLB_iact_address_in(CG_1_0_GLB_iact_address_in),
	.GLB_iact_data_in_ready(CG_1_0_GLB_iact_data_in_ready),
	.GLB_iact_data_in_valid(CG_1_0_GLB_iact_data_in_valid),
	.GLB_iact_data_in(CG_1_0_GLB_iact_data_in),
										    						
	// GLB weight address & data			
	.GLB_weight_address_in_ready(CG_1_0_GLB_weight_address_in_ready),
	.GLB_weight_address_in_valid(CG_1_0_GLB_weight_address_in_valid),
	.GLB_weight_address_in(CG_1_0_GLB_weight_address_in),
	.GLB_weight_data_in_ready(CG_1_0_GLB_weight_data_in_ready),
	.GLB_weight_data_in_valid(CG_1_0_GLB_weight_data_in_valid),
	.GLB_weight_data_in(CG_1_0_GLB_weight_data_in),
										     
	// GLB psum address & data in/out
	.GLB_psum_0_data_in_ready                   (CG_1_0_GLB_psum_0_data_in_ready 	),
	.GLB_psum_0_data_in_valid                   (CG_1_0_GLB_psum_0_data_in_valid 	),
	.GLB_psum_0_data_in                         (CG_1_0_GLB_psum_0_data_in       	),
	.GLB_psum_0_data_out_ready                  (CG_1_0_GLB_psum_0_data_out_ready	),
	.GLB_psum_0_data_out_valid                  (CG_1_0_GLB_psum_0_data_out_valid	),
	.GLB_psum_0_data_out                        (CG_1_0_GLB_psum_0_data_out      	),
	.GLB_psum_1_data_in_ready                   (CG_1_0_GLB_psum_1_data_in_ready 	),
	.GLB_psum_1_data_in_valid                   (CG_1_0_GLB_psum_1_data_in_valid 	),
	.GLB_psum_1_data_in                         (CG_1_0_GLB_psum_1_data_in       	),
	.GLB_psum_1_data_out_ready                  (CG_1_0_GLB_psum_1_data_out_ready	),
	.GLB_psum_1_data_out_valid                  (CG_1_0_GLB_psum_1_data_out_valid	),
	.GLB_psum_1_data_out                        (CG_1_0_GLB_psum_1_data_out      	),
	.GLB_psum_2_data_in_ready                   (CG_1_0_GLB_psum_2_data_in_ready 	),
	.GLB_psum_2_data_in_valid                   (CG_1_0_GLB_psum_2_data_in_valid 	),
	.GLB_psum_2_data_in                         (CG_1_0_GLB_psum_2_data_in       	),
	.GLB_psum_2_data_out_ready                  (CG_1_0_GLB_psum_2_data_out_ready	),
	.GLB_psum_2_data_out_valid                  (CG_1_0_GLB_psum_2_data_out_valid	),
	.GLB_psum_2_data_out                        (CG_1_0_GLB_psum_2_data_out      	),
	// ============================================================================ //

	.PSUM_DEPTH                                 (CG_1_0_PSUM_DEPTH                  ),
	
											
	// ======== tile-chain：iact / weight / psum router、cg_psum（array 直連） ======== //
	// --- iact --- //
	// north: address_in/out, data_in/out
	.iact_north_address_in_ready    (CG_1_0_iact_north_address_in_ready         ),
	.iact_north_address_in_valid    (CG_0_0_iact_south_address_out_valid        ),
	.iact_north_address_in_bits     (CG_0_0_iact_south_address_out_bits         ),
	.iact_north_address_out_ready   (CG_0_0_iact_south_address_in_ready         ),
	.iact_north_address_out_valid   (CG_1_0_iact_north_address_out_valid        ),
	.iact_north_address_out_bits    (CG_1_0_iact_north_address_out_bits         ),
	.iact_north_data_in_ready       (CG_1_0_iact_north_data_in_ready            ),
	.iact_north_data_in_valid       (CG_0_0_iact_south_data_out_valid           ),
	.iact_north_data_in_bits        (CG_0_0_iact_south_data_out_bits            ),
	.iact_north_data_out_ready      (CG_0_0_iact_south_data_in_ready            ),
	.iact_north_data_out_valid      (CG_1_0_iact_north_data_out_valid           ),
	.iact_north_data_out_bits       (CG_1_0_iact_north_data_out_bits            ),

	// south: address_in/out, data_in/out
	.iact_south_address_in_ready    (CG_1_0_iact_south_address_in_ready         ),
	.iact_south_address_in_valid    (tie_lo_3x3                                 ),
	.iact_south_address_in_bits     (tie_lo_3x3_7b                              ),
	.iact_south_address_out_ready   (tie_hi_3x3                                 ),
	.iact_south_address_out_valid   (CG_1_0_iact_south_address_out_valid        ),
	.iact_south_address_out_bits    (CG_1_0_iact_south_address_out_bits         ),
	.iact_south_data_in_ready       (CG_1_0_iact_south_data_in_ready            ),
	.iact_south_data_in_valid       (tie_lo_3x3                                 ),
	.iact_south_data_in_bits        (tie_lo_3x3_12b                             ),
	.iact_south_data_out_ready      (tie_hi_3x3                                 ),
	.iact_south_data_out_valid      (CG_1_0_iact_south_data_out_valid           ),
	.iact_south_data_out_bits       (CG_1_0_iact_south_data_out_bits            ),

	// horiz: address_in/out, data_in/out
	.iact_horiz_address_in_ready    (CG_1_0_iact_horiz_address_in_ready         ),
	.iact_horiz_address_in_valid    (CG_1_1_iact_horiz_address_out_valid        ),
	.iact_horiz_address_in_bits     (CG_1_1_iact_horiz_address_out_bits         ),
	.iact_horiz_address_out_ready   (CG_1_1_iact_horiz_address_in_ready         ),
	.iact_horiz_address_out_valid   (CG_1_0_iact_horiz_address_out_valid        ),
	.iact_horiz_address_out_bits    (CG_1_0_iact_horiz_address_out_bits         ),
	.iact_horiz_data_in_ready       (CG_1_0_iact_horiz_data_in_ready            ),
	.iact_horiz_data_in_valid       (CG_1_1_iact_horiz_data_out_valid           ),
	.iact_horiz_data_in_bits        (CG_1_1_iact_horiz_data_out_bits            ),
	.iact_horiz_data_out_ready      (CG_1_1_iact_horiz_data_in_ready            ),
	.iact_horiz_data_out_valid      (CG_1_0_iact_horiz_data_out_valid           ),
	.iact_horiz_data_out_bits       (CG_1_0_iact_horiz_data_out_bits            ),


	// --- weight --- //
	// horiz: address_in/out, data_in/out
	.weight_horiz_address_in_ready  (CG_1_0_weight_horiz_address_in_ready       ),
	.weight_horiz_address_in_valid  (CG_1_1_weight_horiz_address_out_valid      ),
	.weight_horiz_address_in_bits   (CG_1_1_weight_horiz_address_out_bits       ),
	.weight_horiz_address_out_ready (CG_1_1_weight_horiz_address_in_ready       ),
	.weight_horiz_address_out_valid (CG_1_0_weight_horiz_address_out_valid      ),
	.weight_horiz_address_out_bits  (CG_1_0_weight_horiz_address_out_bits       ),
	.weight_horiz_data_in_ready     (CG_1_0_weight_horiz_data_in_ready          ),
	.weight_horiz_data_in_valid     (CG_1_1_weight_horiz_data_out_valid         ),
	.weight_horiz_data_in_bits      (CG_1_1_weight_horiz_data_out_bits          ),
	.weight_horiz_data_out_ready    (CG_1_1_weight_horiz_data_in_ready          ),
	.weight_horiz_data_out_valid    (CG_1_0_weight_horiz_data_out_valid         ),
	.weight_horiz_data_out_bits     (CG_1_0_weight_horiz_data_out_bits          ),


	// --- psum --- //
	.psum_north_in_ready            (CG_1_0_psum_north_in_ready                 ),
	.psum_north_in_valid            (CG_0_0_psum_south_out_valid                ),
	.psum_north_in_bits             (CG_0_0_psum_south_out_bits                 ),
	.psum_south_out_ready           (tie_hi_3                                   ),
	.psum_south_out_valid           (CG_1_0_psum_south_out_valid                ),
	.psum_south_out_bits            (CG_1_0_psum_south_out_bits                 ),


	// --- cg psum --- //
	.cg_south_psum_in_ready         (CG_1_0_cg_south_psum_in_ready              ),
	.cg_south_psum_in_valid         (tie_hi_3                                   ),
	.cg_south_psum_in               (tie_lo_3_21b                               ),
	.cg_north_psum_out_ready        (CG_0_0_cg_south_psum_in_ready              ),
	.cg_north_psum_out_valid        (CG_1_0_cg_north_psum_out_valid             ),
	.cg_north_psum_out              (CG_1_0_cg_north_psum_out                   )
	// ================================================================================ //
);


ClusterGroup ClusterGroup_1_1 (
	// ======================================================================================== //
	//                        Cluster_Group_array input/output controls                         //
	// ======================================================================================== //
	.clock										(clock											),
	.reset										(reset											),

	.psum_acc_fin								(psum_acc_fin									),
	.PE_cluster_iact_data_in_sel                (CG_PE_cluster_iact_data_in_sel[1][1]           ),
	.PE_cluster_iact_data_out_sel               (CG_PE_cluster_iact_data_out_sel[1][1]          ),
	.PE_cluster_psum_data_in_sel                (CG_PE_cluster_psum_data_in_sel[1][1]           ),
									            			
	.router_cluster_iact_data_in_sel            (CG_router_cluster_iact_data_in_sel[1][1]   	),
	.router_cluster_iact_data_out_sel           (CG_router_cluster_iact_data_out_sel[1][1]  	),
	.router_cluster_weight_data_in_sel          (CG_router_cluster_weight_data_in_sel[1][1] 	),
	.router_cluster_weight_data_out_sel         (CG_router_cluster_weight_data_out_sel[1][1]	),
	.router_cluster_psum_data_in_sel            (CG_router_cluster_psum_data_in_sel[1][1]   	),
	.router_cluster_psum_data_out_sel           (CG_router_cluster_psum_data_out_sel[1][1]  	),
							                    
	.src_GLB_load_fin							(CG_src_GLB_load_fin[1][1]						),
	.cg_en                                      (CG_cg_en[1][1]                                 ),
	.read_psum_en                               (CG_read_psum_en[1][1]                          ),
	.GLB_psum_write_en							(CG_GLB_psum_write_en[1][1]						),
	.psum_spad_clear                            (CG_psum_spad_clear[1][1]                       ),
	.iact_write_fin_clear                       (CG_iact_write_fin_clear[1][1]                	),
	.weight_write_fin_clear						(CG_weight_write_fin_clear[1][1]				),
	.psum_SRAM_Bank_0_read_out_en				(CG_psum_SRAM_Bank_0_read_out_en[1][1]			),
	.psum_SRAM_Bank_1_read_out_en				(CG_psum_SRAM_Bank_1_read_out_en[1][1]			),
	.psum_SRAM_Bank_2_read_out_en				(CG_psum_SRAM_Bank_2_read_out_en[1][1]			),
	// output
	.cal_fin                                    (CG_cal_fin[1][1]                               ),
	.PE_weight_load_en                          (CG_PE_weight_load_en[1][1]                     ),
	.GLB_iact_load_en                           (CG_GLB_iact_load_en[1][1]                      ),
	// ======================================================================================== //

	// inner wire
	.all_cal_fin								(CG_1_1_all_cal_fin								),
	.psum_acc_en								(gloabl_cal_fin									),


	.PE_disable(CG_1_1_PE_disable),

	// ============================================================================ //
	//                                      GLB                                     //
	// ============================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	.GLB_iact_read_addr(CG_1_1_GLB_iact_read_addr),
	.GLB_psum_write_addr(CG_1_1_GLB_psum_write_addr),
	.GLB_psum_read_addr(CG_1_1_GLB_psum_read_addr),

	// GLB iact address & data								               
	.GLB_iact_address_in_ready(CG_1_1_GLB_iact_address_in_ready),
	.GLB_iact_address_in_valid(CG_1_1_GLB_iact_address_in_valid),
	.GLB_iact_address_in(CG_1_1_GLB_iact_address_in),
	.GLB_iact_data_in_ready(CG_1_1_GLB_iact_data_in_ready),
	.GLB_iact_data_in_valid(CG_1_1_GLB_iact_data_in_valid),
	.GLB_iact_data_in(CG_1_1_GLB_iact_data_in),
										    						
	// GLB weight address & data			
	.GLB_weight_address_in_ready(CG_1_1_GLB_weight_address_in_ready),
	.GLB_weight_address_in_valid(CG_1_1_GLB_weight_address_in_valid),
	.GLB_weight_address_in(CG_1_1_GLB_weight_address_in),
	.GLB_weight_data_in_ready(CG_1_1_GLB_weight_data_in_ready),
	.GLB_weight_data_in_valid(CG_1_1_GLB_weight_data_in_valid),
	.GLB_weight_data_in(CG_1_1_GLB_weight_data_in),
										     
	// GLB psum address & data in/out
	.GLB_psum_0_data_in_ready                   (CG_1_1_GLB_psum_0_data_in_ready 	),
	.GLB_psum_0_data_in_valid                   (CG_1_1_GLB_psum_0_data_in_valid 	),
	.GLB_psum_0_data_in                         (CG_1_1_GLB_psum_0_data_in       	),
	.GLB_psum_0_data_out_ready                  (CG_1_1_GLB_psum_0_data_out_ready	),
	.GLB_psum_0_data_out_valid                  (CG_1_1_GLB_psum_0_data_out_valid	),
	.GLB_psum_0_data_out                        (CG_1_1_GLB_psum_0_data_out      	),
	.GLB_psum_1_data_in_ready                   (CG_1_1_GLB_psum_1_data_in_ready 	),
	.GLB_psum_1_data_in_valid                   (CG_1_1_GLB_psum_1_data_in_valid 	),
	.GLB_psum_1_data_in                         (CG_1_1_GLB_psum_1_data_in       	),
	.GLB_psum_1_data_out_ready                  (CG_1_1_GLB_psum_1_data_out_ready	),
	.GLB_psum_1_data_out_valid                  (CG_1_1_GLB_psum_1_data_out_valid	),
	.GLB_psum_1_data_out                        (CG_1_1_GLB_psum_1_data_out      	),
	.GLB_psum_2_data_in_ready                   (CG_1_1_GLB_psum_2_data_in_ready 	),
	.GLB_psum_2_data_in_valid                   (CG_1_1_GLB_psum_2_data_in_valid 	),
	.GLB_psum_2_data_in                         (CG_1_1_GLB_psum_2_data_in       	),
	.GLB_psum_2_data_out_ready                  (CG_1_1_GLB_psum_2_data_out_ready	),
	.GLB_psum_2_data_out_valid                  (CG_1_1_GLB_psum_2_data_out_valid	),
	.GLB_psum_2_data_out                        (CG_1_1_GLB_psum_2_data_out      	),
	// ============================================================================ //

	.PSUM_DEPTH                                 (CG_1_1_PSUM_DEPTH                  ),
	
											
	// ======== tile-chain：iact / weight / psum router、cg_psum（array 直連） ======== //
	// --- iact --- //
	// north: address_in/out, data_in/out
	.iact_north_address_in_ready    (CG_1_1_iact_north_address_in_ready         ),
	.iact_north_address_in_valid    (CG_0_1_iact_south_address_out_valid        ),
	.iact_north_address_in_bits     (CG_0_1_iact_south_address_out_bits         ),
	.iact_north_address_out_ready   (CG_0_1_iact_south_address_in_ready         ),
	.iact_north_address_out_valid   (CG_1_1_iact_north_address_out_valid        ),
	.iact_north_address_out_bits    (CG_1_1_iact_north_address_out_bits         ),
	.iact_north_data_in_ready       (CG_1_1_iact_north_data_in_ready            ),
	.iact_north_data_in_valid       (CG_0_1_iact_south_data_out_valid           ),
	.iact_north_data_in_bits        (CG_0_1_iact_south_data_out_bits            ),
	.iact_north_data_out_ready      (CG_0_1_iact_south_data_in_ready            ),
	.iact_north_data_out_valid      (CG_1_1_iact_north_data_out_valid           ),
	.iact_north_data_out_bits       (CG_1_1_iact_north_data_out_bits            ),

	// south: address_in/out, data_in/out
	.iact_south_address_in_ready    (CG_1_1_iact_south_address_in_ready         ),
	.iact_south_address_in_valid    (tie_lo_3x3                                 ),
	.iact_south_address_in_bits     (tie_lo_3x3_7b                              ),
	.iact_south_address_out_ready   (tie_hi_3x3                                 ),
	.iact_south_address_out_valid   (CG_1_1_iact_south_address_out_valid        ),
	.iact_south_address_out_bits    (CG_1_1_iact_south_address_out_bits         ),
	.iact_south_data_in_ready       (CG_1_1_iact_south_data_in_ready            ),
	.iact_south_data_in_valid       (tie_lo_3x3                                 ),
	.iact_south_data_in_bits        (tie_lo_3x3_12b                             ),
	.iact_south_data_out_ready      (tie_hi_3x3                                 ),
	.iact_south_data_out_valid      (CG_1_1_iact_south_data_out_valid           ),
	.iact_south_data_out_bits       (CG_1_1_iact_south_data_out_bits            ),

	// horiz: address_in/out, data_in/out
	.iact_horiz_address_in_ready    (CG_1_1_iact_horiz_address_in_ready         ),
	.iact_horiz_address_in_valid    (CG_1_0_iact_horiz_address_out_valid        ),
	.iact_horiz_address_in_bits     (CG_1_0_iact_horiz_address_out_bits         ),
	.iact_horiz_address_out_ready   (CG_1_0_iact_horiz_address_in_ready         ),
	.iact_horiz_address_out_valid   (CG_1_1_iact_horiz_address_out_valid        ),
	.iact_horiz_address_out_bits    (CG_1_1_iact_horiz_address_out_bits         ),
	.iact_horiz_data_in_ready       (CG_1_1_iact_horiz_data_in_ready            ),
	.iact_horiz_data_in_valid       (CG_1_0_iact_horiz_data_out_valid           ),
	.iact_horiz_data_in_bits        (CG_1_0_iact_horiz_data_out_bits            ),
	.iact_horiz_data_out_ready      (CG_1_0_iact_horiz_data_in_ready            ),
	.iact_horiz_data_out_valid      (CG_1_1_iact_horiz_data_out_valid           ),
	.iact_horiz_data_out_bits       (CG_1_1_iact_horiz_data_out_bits            ),


	// --- weight --- //
	// horiz: address_in/out, data_in/out
	.weight_horiz_address_in_ready  (CG_1_1_weight_horiz_address_in_ready       ),
	.weight_horiz_address_in_valid  (CG_1_0_weight_horiz_address_out_valid      ),
	.weight_horiz_address_in_bits   (CG_1_0_weight_horiz_address_out_bits       ),
	.weight_horiz_address_out_ready (CG_1_0_weight_horiz_address_in_ready       ),
	.weight_horiz_address_out_valid (CG_1_1_weight_horiz_address_out_valid      ),
	.weight_horiz_address_out_bits  (CG_1_1_weight_horiz_address_out_bits       ),
	.weight_horiz_data_in_ready     (CG_1_1_weight_horiz_data_in_ready          ),
	.weight_horiz_data_in_valid     (CG_1_0_weight_horiz_data_out_valid         ),
	.weight_horiz_data_in_bits      (CG_1_0_weight_horiz_data_out_bits          ),
	.weight_horiz_data_out_ready    (CG_1_0_weight_horiz_data_in_ready          ),
	.weight_horiz_data_out_valid    (CG_1_1_weight_horiz_data_out_valid         ),
	.weight_horiz_data_out_bits     (CG_1_1_weight_horiz_data_out_bits          ),


	// --- psum --- //
	.psum_north_in_ready            (CG_1_1_psum_north_in_ready                 ),
	.psum_north_in_valid            (CG_0_1_psum_south_out_valid                ),
	.psum_north_in_bits             (CG_0_1_psum_south_out_bits                 ),
	.psum_south_out_ready           (tie_hi_3                                   ),
	.psum_south_out_valid           (CG_1_1_psum_south_out_valid                ),
	.psum_south_out_bits            (CG_1_1_psum_south_out_bits                 ),


	// --- cg psum --- //
	.cg_south_psum_in_ready         (CG_1_1_cg_south_psum_in_ready              ),
	.cg_south_psum_in_valid         (tie_hi_3                                   ),
	.cg_south_psum_in               (tie_lo_3_21b                               ),
	.cg_north_psum_out_ready        (CG_0_1_cg_south_psum_in_ready              ),
	.cg_north_psum_out_valid        (CG_1_1_cg_north_psum_out_valid             ),
	.cg_north_psum_out              (CG_1_1_cg_north_psum_out                   )
	// ================================================================================ //
);

// ====================================================================	//
// 	       		  Tile-chain 拓樸（共用 wire 直連，無 assign）  		  //
// ====================================================================	//
// 由實例 port 直接對接（接收端 conn 直接吃驅動端 wire）：
//   垂直   ：CG_0_c.iact_south_* ↔ CG_1_c.iact_north_*（iact 位址/資料雙向，valid/ready/bits 全接）
//            router psum 兩個 column 接法不同：
//              col0：CG_0_0.psum_south_out → CG_1_0.psum_north_in（南向單鏈，valid/ready/bits 全接）
//              col1：CG_0_1.psum_south_out → CG_1_1.psum_north_in，且 CG_1_1.psum_south_out 繞回
//                    CG_0_1.psum_north_in（垂直環）；兩條皆只接 valid/bits——雙方 south_out_ready
//                    接 tie_hi、north_in_ready 懸空，無 backpressure
//            CG_1_c.cg_north_psum_out → CG_0_c.cg_south_psum_in（PE psum 向北累加，valid/ready/bits 全接）
//   水平   ：CG_r_0.{iact,weight}_horiz_* ↔ CG_r_1.{iact,weight}_horiz_*（雙向，valid/ready/bits 全接）
//   邊緣   ：北緣(row0)/南緣(row1) 無鄰側 in_valid/in_bits 接 tie_lo、out_ready 接 tie_hi，
//            無人讀的輸出 wire 懸空（見各 CG wire 宣告區註解）。例外三處：
//              1) cg_south_psum_in 南緣 in_valid 接 tie_hi、data 接 0（底排恆收「有效的零 psum」供累加）
//              2) CG_0_1.psum_north_in 雖在北緣但不 tie，改吃 CG_1_1 繞回線（見上 col1）
//              3) 兩處 ⚠ 原碼特例：CG_0_1 iact_north addr out_ready[0][0]='d0、
//                 weight addr out_ready[0] self-loop（詳見 CG_0_1 wire 宣告區）

endmodule
