// ====================================================================================================== //
// This module is the integration for all SPad in PE.
// PE_Pad is the core of PE, which is contains all control and datapath.
// This design is based on 5-stage pipeline architecture.
// 
// TODO : read later data should be only one cycle
// TODO : optimaize the state machine converted condition
// ====================================================================================================== //


`ifndef BOYU_LATER_STREAM_RANGE
`define BOYU_LATER_STREAM_RANGE 15:0
`endif
module Processing_Element_core (
	input         			clock,
	input         			reset,
	// data signals
	output        			psum_in_ready,	
	input         			psum_in_valid,
	input 	signed 	[20:0] 	psum_in,
	input  			       	psum_out_ready,
	output 			       	psum_out_valid,
	output 	signed	[20:0] 	psum_out,
				
	input  			       	former_address_in_valid,
	input  			[7:0]  	former_address_in,
	input  			       	former_data_in_valid,
	input  			[12:0] 	former_data_in,
				
	input  			       	later_address_in_valid,
	input  			[6:0]  	later_address_in,
	input  			       	later_data_in_valid,
	input  			[`BOYU_LATER_STREAM_RANGE] 	later_data_in,
	
	// control signals
	input         			mac_en,
	input         			psum_enq_en,
	input         			load_en,
	output        			cal_fin,
	
	output 			       	former_address_write_fin,
	output 			       	former_data_write_fin,
				
	output 			       	later_address_write_fin,
	output 			       	later_data_write_fin,
				
	output 			       	psum_acc_fin,
	
	input			[4:0]	PSUM_DEPTH,
	input					psum_spad_clear,
	input					int4_former_weight_mode,
	input					int4_later_weight_mode
);

// ====================================================================	//
// 						 		Instantiation  							//
// ====================================================================	//
// PSumSPad module
wire					Psum_Spad_psum_in_ready; 
wire					Psum_Spad_psum_in_valid; 
wire	signed [20:0] 	Psum_Spad_psum_in; 
wire  					Psum_Spad_psum_out_ready; 
wire  					Psum_Spad_psum_out_valid; 
wire 	signed	[20:0] 	Psum_Spad_psum_out; 
wire 	signed	[20:0] 	Psum_Spad_psum_out_lane1; 
wire 			[4:0] 	Psum_Spad_read_idx; 
wire 			[4:0] 	Psum_Spad_write_idx; 

// former address spad module
wire 			[7:0] 	former_address_spad_data_out;
wire 			 		former_address_spad_data_in_ready; 
wire 			 		former_address_spad_data_in_valid; 
wire 			[7:0] 	former_address_spad_data_in; 
wire 			 		former_address_spad_write_en; 
wire 			 		former_address_spad_write_fin;
wire 			 		former_address_spad_idx_inc;

// former data spad module
wire 			[7:0] 	former_data_spad_col_num; 
wire 			[17:0] 	former_data_spad_data_out;
wire 			 		former_data_spad_data_in_ready; 
wire 			 		former_data_spad_data_in_valid; 
wire 			[17:0] 	former_data_spad_data_in; 
wire 			 		former_data_spad_write_en; 
wire 			 		former_data_spad_write_fin;
wire 			 		former_data_spad_idx_inc;

// later address spad module
wire 			[6:0] 	later_address_spad_data_out; 
wire 			 		later_address_spad_data_in_ready;
wire 			 		later_address_spad_data_in_valid;
wire 			[6:0] 	later_address_spad_data_in; 
wire 			 		later_address_spad_write_en; 
wire 			 		later_address_spad_write_fin;
wire 			[4:0] 	later_address_spad_read_idx;
wire 			 		later_address_spad_idx_inc; 
wire 			 		later_address_spad_read_idx_en; 

// later data spad module
wire 			[6:0] 	later_data_spad_col_num;
wire 			[`BOYU_LATER_STREAM_RANGE] 	later_data_spad_data_out;
wire 			 		later_data_spad_data_in_ready; 
wire 			 		later_data_spad_data_in_valid; 
wire 			[`BOYU_LATER_STREAM_RANGE] 	later_data_spad_data_in; 
wire 			 		later_data_spad_write_en; 
wire 			 		later_data_spad_write_fin;
wire 			 		later_data_spad_read_en; 
wire 			[6:0] 	later_data_spad_read_idx; 
wire 			 		later_data_spad_read_idx_inc;
wire 			 		later_data_spad_read_idx_en;

`ifdef INT4_PACKED_SIMD2_FULL
wire					Psum_Spad_lane1_en;
wire	signed [20:0]	Psum_Spad_psum_in_lane1;
wire 			[4:0] 	Psum_Spad_read_idx_lane1; 
wire 			[4:0] 	Psum_Spad_write_idx_lane1; 

Psum_Spad_Banked Psum_Spad_inst ( 
	.clock			(clock						),
	.reset			(reset						),
	.psum_in_ready	(Psum_Spad_psum_in_ready	),
	.psum_in_valid	(Psum_Spad_psum_in_valid	),
	.psum_in		(Psum_Spad_psum_in			),
	.psum_out_ready	(Psum_Spad_psum_out_ready	),
	.psum_out_vaild	(Psum_Spad_psum_out_valid	),
	.psum_out		(Psum_Spad_psum_out			),
	.lane1_en		(Psum_Spad_lane1_en			),
	.psum_in_lane1	(Psum_Spad_psum_in_lane1	),
	.psum_out_lane1	(Psum_Spad_psum_out_lane1	),
	.read_idx		(Psum_Spad_read_idx			),
	.write_idx		(Psum_Spad_write_idx		),
	.read_idx_lane1	(Psum_Spad_read_idx_lane1	),
	.write_idx_lane1(Psum_Spad_write_idx_lane1	),
	.psum_spad_clear(psum_spad_clear			)
);
`else
assign Psum_Spad_psum_out_lane1 = 21'sd0;
Psum_Spad Psum_Spad_inst ( 
	.clock			(clock						),
	.reset			(reset						),
	.psum_in_ready	(Psum_Spad_psum_in_ready	),
	.psum_in_valid	(Psum_Spad_psum_in_valid	),
	.psum_in		(Psum_Spad_psum_in			),
	.psum_out_ready	(Psum_Spad_psum_out_ready	),
	.psum_out_vaild	(Psum_Spad_psum_out_valid	),
	.psum_out		(Psum_Spad_psum_out			),
	.read_idx		(Psum_Spad_read_idx			),
	.write_idx		(Psum_Spad_write_idx		),
	.psum_spad_clear(psum_spad_clear			)
);
`endif

Former_Address_Spad Former_Address_Spad_inst ( 
	.clock			(clock								),
	.reset			(reset								),
	.data_out		(former_address_spad_data_out		),
	.data_in_ready	(former_address_spad_data_in_ready	),
	.data_in_valid	(former_address_spad_data_in_valid	),
	.data_in		(former_address_spad_data_in		),
	.write_en		(former_address_spad_write_en		),
	.write_fin		(former_address_spad_write_fin		),
	.index_inc		(former_address_spad_idx_inc		)
);

Former_Data_Spad Former_Data_Spad_inst ( 
	.clock			(clock								),
	.reset			(reset								),
	.column_num		(former_data_spad_col_num			),
	.data_out		(former_data_spad_data_out			),
	.data_in_ready	(former_data_spad_data_in_ready		),
	.data_in_valid	(former_data_spad_data_in_valid		),
	.data_in		(former_data_spad_data_in			),
	.write_en		(former_data_spad_write_en			),
	.write_fin		(former_data_spad_write_fin			),
	.index_inc		(former_data_spad_idx_inc			),
	.int4_weight_mode(int4_former_weight_mode		)
);

Later_Address_Spad Later_Address_Spad_inst ( 
	.clock			(clock								),
	.reset			(reset								),
	.data_out		(later_address_spad_data_out		),
	.data_in_ready	(later_address_spad_data_in_ready	),
	.data_in_valid	(later_address_spad_data_in_valid	),
	.data_in		(later_address_spad_data_in			),
	.write_en		(later_address_spad_write_en		),
	.write_fin		(later_address_spad_write_fin		),
	.read_idx		(later_address_spad_read_idx		),
	.addr_read_inc	(later_address_spad_idx_inc			),
	.read_idx_en	(later_address_spad_read_idx_en		)
);

Later_Data_Spad Later_Data_Spad_inst (
	.clock			(clock							),
	.reset			(reset							),
	.column_num		(later_data_spad_col_num		),
	.data_out		(later_data_spad_data_out		),
	.data_in_ready	(later_data_spad_data_in_ready	),
	.data_in_valid	(later_data_spad_data_in_valid	),
	.data_in		(later_data_spad_data_in		),
	.write_en		(later_data_spad_write_en		),
	.write_fin		(later_data_spad_write_fin		),
	.read_en		(later_data_spad_read_en		),
	.read_idx		(later_data_spad_read_idx		),
	.index_inc		(later_data_spad_read_idx_inc	),
	.read_idx_en	(later_data_spad_read_idx_en	),
	.int4_weight_mode(int4_later_weight_mode	)
);

// ====================================================================	//
// 						 		Parameters  							//
// ====================================================================	//
parameter WEIGHT_MATRIX_ROW = 4;

// state parameters
localparam IDLE 				= 4'd0;			// the pad is idle, and if received mac_en signal from controller, then start 5 stage pipeline
localparam READ_FORMER_ADDRESS 	= 4'd1;			// read the former address
localparam READ_FORMER_DATA 	= 4'd2;			// read the former data
localparam READ_LATER_ADDRESS 	= 4'd3;			// read the later address
localparam READ_LATER_DATA_1 	= 4'd4;			// read the later data
localparam READ_LATER_DATA_2 	= 4'd5;			// wait one cycle as SRAM
localparam DO_MAC 				= 4'd6;			// wait for mac computation
localparam WRITE_BACK 			= 4'd7;			// write the partial sum back
localparam READ_LANE1_PSUM		= 4'd8;			// set psum read index for packed lane1
localparam DO_MAC_LANE1			= 4'd9;			// compute packed lane1 product
localparam WRITE_BACK_LANE1		= 4'd10;		// write packed lane1 partial sum back					


// ====================================================================	//
// 						 		Registers  								//
// ====================================================================	//
reg 		[3:0]	PE_state, next_PE_state;	// state FSM signals

reg 		[3:0] 	former_matrix_col_reg; 
reg 				former_matrix_inc_reg;
reg  				former_data_first_read_reg; 
reg 				later_data_first_read_reg; 

reg signed 	[20:0]	product_reg;    						// iact * weight                     							
reg signed 	[20:0]	product_lane1_reg;    					// iact * packed lane1 weight                     							
reg signed 	[20:0] 	psum_load_reg;							// psum load from psum spad       
reg signed 	[20:0] 	psum_load_lane1_reg;						// packed lane1 psum load from banked psum spad       
reg  				psum_load_state;						// determine psum accumulation is for psum spad or psum_in form PE ouside 
reg 		[4:0] 	psum_read_idx_reg, next_psum_read_idx;	// PSUM SPad read idx FSM signals


// ====================================================================	//
// 						 		Wires  									//
// ====================================================================	//
// state FSM signals
wire IDLE_wire 					= PE_state == IDLE;
wire READ_FORMER_ADDRESS_wire 	= PE_state == READ_FORMER_ADDRESS;
wire READ_FORMER_DATA_wire 		= PE_state == READ_FORMER_DATA;
wire READ_LATER_ADDRESS_wire 	= PE_state == READ_LATER_ADDRESS;
wire READ_LATER_DATA_1_wire 	= PE_state == READ_LATER_DATA_1;
wire READ_LATER_DATA_2_wire 	= PE_state == READ_LATER_DATA_2;
wire DO_MAC_wire 				= PE_state == DO_MAC;			
wire WRITE_BACK_wire 			= PE_state == WRITE_BACK;		
wire READ_LANE1_PSUM_wire		= PE_state == READ_LANE1_PSUM;
wire DO_MAC_LANE1_wire			= PE_state == DO_MAC_LANE1;
wire WRITE_BACK_LANE1_wire		= PE_state == WRITE_BACK_LANE1;


// data coun vector decoding				       			
wire 		[4:0] 	former_matrix_row_wire	= former_data_spad_data_out	[4:0];
wire signed [7:0] 	former_matrix_data_wire	= int4_former_weight_mode ? {{4{former_data_spad_data_out[8]}}, former_data_spad_data_out[8:5]} :
																	  former_data_spad_data_out[12:5];
wire 		[3:0] 	later_matrix_row_wire	= later_data_spad_data_out	[3:0];  
`ifdef INT4_PACKED_SIMD2_FULL
wire				later_int4_simd2_full_wire	= int4_later_weight_mode;
wire 		[3:0]	later_matrix_row_lane1_wire = later_data_spad_data_out[11:8];
wire signed [7:0] 	later_matrix_data_wire	= later_int4_simd2_full_wire ? {{4{later_data_spad_data_out[7]}}, later_data_spad_data_out[7:4]} :
																			 later_data_spad_data_out[11:4];
wire signed [7:0] 	later_matrix_data_lane1_wire = later_int4_simd2_full_wire ? {{4{later_data_spad_data_out[15]}}, later_data_spad_data_out[15:12]} :
																				  8'sd0;
wire				later_lane1_valid_wire = later_int4_simd2_full_wire & (later_matrix_data_lane1_wire != 8'sd0);
wire				later_matrix_data_zero_wire = later_matrix_data_wire == 8'sd0;
`elsif INT4_PACKED_SIMD2
wire				later_int4_simd2_wire	= int4_later_weight_mode;
wire signed [7:0]	later_matrix_data_lane0_wire = later_int4_simd2_wire ? {{4{later_data_spad_data_out[7]}}, later_data_spad_data_out[7:4]} :
																	  later_data_spad_data_out[11:4];
wire signed [7:0]	later_matrix_data_lane1_wire = later_int4_simd2_wire ? {{4{later_data_spad_data_out[11]}}, later_data_spad_data_out[11:8]} :
																	  8'sd0;
wire signed [7:0] 	later_matrix_data_wire	= later_matrix_data_lane0_wire;
wire				later_lane1_valid_wire = 1'b0;
wire				later_matrix_data_zero_wire = later_int4_simd2_wire ? ((later_matrix_data_lane0_wire == 8'sd0) & (later_matrix_data_lane1_wire == 8'sd0)) :
																		 (later_matrix_data_wire == 8'sd0);
`else
wire signed [7:0] 	later_matrix_data_wire	= later_data_spad_data_out	[11:4];
wire				later_lane1_valid_wire = 1'b0;
wire				later_matrix_data_zero_wire = later_matrix_data_wire == 8'sd0;
`endif


// use the maximum value of the address to stand for current column is all zero to skip this column
wire former_zero_col_wire  					= former_address_spad_data_out 	== 8'd255;
wire later_zero_col_wire					= later_address_spad_data_out	== 7'd127;

wire read_later_zero_col_wire 				= former_matrix_row_wire == later_address_spad_data_out;
wire later_matrix_read_first_col_wire 		= former_matrix_row_wire == 5'd0; 


// SPad control
(* use_dsp = "yes" *) wire signed [20:0] product_mul_lane0_wire = later_matrix_data_wire * former_matrix_data_wire;
`ifdef INT4_PACKED_SIMD2_FULL
(* use_dsp = "yes" *) wire signed [20:0] product_mul_lane1_wire = later_matrix_data_lane1_wire * former_matrix_data_wire;
wire signed [20:0] product_mul_wire = DO_MAC_LANE1_wire ? product_mul_lane1_wire : product_mul_lane0_wire;
`elsif INT4_PACKED_SIMD2
(* use_dsp = "yes" *) wire signed [20:0] product_mul_lane1_wire = later_matrix_data_lane1_wire * former_matrix_data_wire;
wire signed [20:0] product_mul_wire = product_mul_lane0_wire + product_mul_lane1_wire;
`else
wire signed [20:0] product_mul_wire = product_mul_lane0_wire;
`endif
`ifdef INT4_PACKED_SIMD2_FULL
wire				product_zero_count_wire = DO_MAC_LANE1_wire ? (later_matrix_row_lane1_wire == 'd15) : (later_matrix_row_wire == 'd15);
`else
wire				product_zero_count_wire = later_matrix_row_wire == 'd15;
`endif
wire signed [20:0]	product_wire 			= product_zero_count_wire ? 'sd0 : product_mul_wire;  // TODO 
`ifdef INT4_PACKED_SIMD2_FULL
wire signed [20:0]	product_lane1_wire 		= (later_matrix_row_lane1_wire == 'd15) ? 21'sd0 : product_mul_lane1_wire;
`else
wire signed [20:0]	product_lane1_wire 		= 21'sd0;
`endif
wire signed [20:0] 	psum_load_wire 		 	= Psum_Spad_psum_out;
wire signed [20:0] 	psum_acc_result_wire 	= psum_load_state ? (psum_load_wire + psum_in) : (psum_load_reg + product_reg);
wire signed [20:0] 	psum_acc_result_lane1_wire = psum_load_lane1_reg + product_lane1_reg;
wire 		[3:0]  	former_matrix_col_minus_one_wire = former_matrix_col_reg - 4'd1;
wire 		[4:0]  	psum_write_base_wire	= {former_matrix_col_minus_one_wire[2:0], 2'b00};
wire 		[4:0]  	psum_write_idx_wire  	= psum_write_base_wire + later_matrix_row_wire[2:0]; 
`ifdef INT4_PACKED_SIMD2_FULL
wire 		[4:0]  	psum_write_idx_lane1_wire = psum_write_base_wire + later_matrix_row_lane1_wire[2:0];
wire				later_lane1_bank_conflict_wire = later_lane1_valid_wire & (psum_write_idx_wire[0] == psum_write_idx_lane1_wire[0]);
wire				later_lane1_parallel_valid_wire = later_lane1_valid_wire & ~later_lane1_bank_conflict_wire;
wire				later_lane1_serial_valid_wire = later_lane1_valid_wire & later_lane1_bank_conflict_wire;
wire				write_back_advance_wire = (WRITE_BACK_wire & ~later_lane1_serial_valid_wire) | WRITE_BACK_LANE1_wire;
`else
wire 		[4:0]  	psum_write_idx_lane1_wire = psum_write_idx_wire;
wire				later_lane1_bank_conflict_wire = 1'b0;
wire				later_lane1_parallel_valid_wire = 1'b0;
wire				later_lane1_serial_valid_wire = 1'b0;
wire				write_back_advance_wire = WRITE_BACK_wire;
`endif
wire				psum_read_fin_wire		= psum_read_idx_reg == PSUM_DEPTH;


wire former_data_spad_idx_inc_wire 			= former_address_spad_data_out == (former_data_spad_col_num + 'd1);
wire Iact_Data_Spad_read_fin_wire			= (former_matrix_data_wire == 'd0) & (~former_data_first_read_reg);
	
wire later_data_spad_read_fin_wire   		= later_matrix_data_zero_wire; 
wire later_data_spad_idx_inc_wire   		= (later_address_spad_data_out == (later_data_spad_col_num + 'd1)) | later_data_spad_read_fin_wire;
wire later_address_spad_read_fin_wire 		= (later_address_spad_data_out == 'd0) ? 1'b1 : 1'b0;
	
wire Psum_Spad_read_valid_wire 				= psum_in_valid & psum_load_state;
wire Psum_Spad_read_idx_inc_wire 			= psum_out_ready & psum_out_valid;
wire Psum_Spad_read_fin_wire 				= (READ_FORMER_DATA_wire 	& Iact_Data_Spad_read_fin_wire)	|
											  (write_back_advance_wire 	& Iact_Data_Spad_read_fin_wire) | 
											  (psum_read_fin_wire 		& Psum_Spad_read_idx_inc_wire);
`ifdef INT4_PACKED_SIMD2_FULL
wire lane1_pending_wire					= later_lane1_serial_valid_wire & (WRITE_BACK_wire | READ_LANE1_PSUM_wire | DO_MAC_LANE1_wire | WRITE_BACK_LANE1_wire);
wire cal_fin_guard_wire					= ~lane1_pending_wire;
`else
wire cal_fin_guard_wire					= 1'b1;
`endif

`ifdef VERILATOR
integer dbg_lane1_serial_cycles;
integer dbg_lane1_bank_conflict_events;
integer dbg_lane1_parallel_events;

always @(posedge clock) begin
	if (reset) begin
		dbg_lane1_serial_cycles <= 0;
		dbg_lane1_bank_conflict_events <= 0;
		dbg_lane1_parallel_events <= 0;
	end
	else begin
`ifdef INT4_PACKED_SIMD2_FULL
		if (READ_LANE1_PSUM_wire | DO_MAC_LANE1_wire | WRITE_BACK_LANE1_wire)
			dbg_lane1_serial_cycles <= dbg_lane1_serial_cycles + 1;
		if (WRITE_BACK_wire & later_lane1_serial_valid_wire)
			dbg_lane1_bank_conflict_events <= dbg_lane1_bank_conflict_events + 1;
		if (WRITE_BACK_wire & later_lane1_parallel_valid_wire)
			dbg_lane1_parallel_events <= dbg_lane1_parallel_events + 1;
`endif
	end
end

final begin
	if ((dbg_lane1_serial_cycles != 0) || (dbg_lane1_bank_conflict_events != 0) || (dbg_lane1_parallel_events != 0)) begin
		$display("[pe_lane1] %m serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d",
			dbg_lane1_serial_cycles,
			dbg_lane1_bank_conflict_events,
			dbg_lane1_parallel_events);
	end
end
`endif


// ====================================================================	//
// 						 		Combination  							//
// ====================================================================	//
// output signals
assign cal_fin 						= Iact_Data_Spad_read_fin_wire & ~IDLE_wire & cal_fin_guard_wire;
			
assign psum_in_ready 				= psum_out_ready & psum_load_state;
assign psum_out_valid 				= Psum_Spad_psum_out_ready & Psum_Spad_psum_out_valid & Psum_Spad_read_valid_wire;
assign psum_out 					= psum_acc_result_wire;
assign psum_acc_fin 				= Psum_Spad_read_fin_wire & psum_load_state;

assign former_address_write_fin		= former_address_spad_write_fin;
assign former_data_write_fin 		= former_data_spad_write_fin;
	
assign later_address_write_fin 		= later_address_spad_write_fin;
assign later_data_write_fin 		= later_data_spad_write_fin;


// instantiated module connection
assign Psum_Spad_psum_in_valid 				= WRITE_BACK_wire | WRITE_BACK_LANE1_wire;
assign Psum_Spad_psum_in 					= (WRITE_BACK_wire | WRITE_BACK_LANE1_wire) ? psum_acc_result_wire : 21'sd0;
assign Psum_Spad_psum_out_ready 			= DO_MAC_wire | DO_MAC_LANE1_wire | Psum_Spad_read_valid_wire;
assign Psum_Spad_read_idx 					= next_psum_read_idx;
assign Psum_Spad_write_idx 					= WRITE_BACK_LANE1_wire ? psum_write_idx_lane1_wire : psum_write_idx_wire;
`ifdef INT4_PACKED_SIMD2_FULL
assign Psum_Spad_lane1_en					= later_lane1_parallel_valid_wire & (READ_LATER_DATA_2_wire | DO_MAC_wire | WRITE_BACK_wire);
assign Psum_Spad_psum_in_lane1				= WRITE_BACK_wire ? psum_acc_result_lane1_wire : 21'sd0;
assign Psum_Spad_read_idx_lane1				= psum_write_idx_lane1_wire;
assign Psum_Spad_write_idx_lane1			= psum_write_idx_lane1_wire;
`endif

assign former_address_spad_data_in_valid	= former_address_in_valid;
assign former_address_spad_data_in 			= former_address_in;
assign former_address_spad_write_en 		= load_en;
assign former_address_spad_idx_inc 			= (READ_FORMER_ADDRESS_wire && former_zero_col_wire) 												|| 
											  (READ_LATER_ADDRESS_wire 	&& former_data_spad_idx_inc_wire	&& later_zero_col_wire) 			|| 
											  (write_back_advance_wire	&& former_data_spad_idx_inc_wire	&& later_data_spad_idx_inc_wire) 	|| 
											  (~IDLE_wire 				&& cal_fin);

assign former_data_spad_data_in_valid 		= former_data_in_valid;
assign former_data_spad_data_in 			= {5'd0, former_data_in};
assign former_data_spad_write_en 			= load_en;	
assign former_data_spad_idx_inc 			= (READ_FORMER_ADDRESS_wire && (~former_zero_col_wire | ~former_data_spad_idx_inc_wire) && (~former_data_first_read_reg)) 	|| 
											  (READ_LATER_ADDRESS_wire 	&& later_zero_col_wire && (~former_data_spad_idx_inc_wire)) 									|| 
											  (write_back_advance_wire	&& later_data_spad_idx_inc_wire && (~former_data_spad_idx_inc_wire)) 							|| 
											  (~IDLE_wire 				&& Iact_Data_Spad_read_fin_wire);

assign later_address_spad_data_in_valid		= later_address_in_valid;
assign later_address_spad_data_in 			= later_address_in;
assign later_address_spad_write_en 			= load_en;
assign later_address_spad_read_idx 			= (READ_FORMER_DATA_wire & later_data_first_read_reg 	& (~later_matrix_read_first_col_wire)) ? (former_matrix_row_wire - 4'd1) : former_matrix_row_wire;
assign later_address_spad_read_idx_en 		= (READ_FORMER_DATA_wire 	| READ_LATER_ADDRESS_wire) 	& later_data_first_read_reg;
assign later_address_spad_idx_inc 			= (READ_LATER_DATA_1_wire 	| DO_MAC_wire) 				& later_zero_col_wire;

assign later_data_spad_data_in_valid 		= later_data_in_valid;
assign later_data_spad_data_in 				= later_data_in;
assign later_data_spad_write_en 			= load_en;
assign later_data_spad_read_en 				= READ_LATER_DATA_1_wire;
assign later_data_spad_read_idx 			= later_matrix_read_first_col_wire ? 'd0 : later_address_spad_data_out;
assign later_data_spad_read_idx_en 			= (READ_LATER_ADDRESS_wire) & later_data_first_read_reg 	& (~later_zero_col_wire);
assign later_data_spad_read_idx_inc 		= (READ_LATER_ADDRESS_wire 	& (~later_zero_col_wire) 		& (~later_data_first_read_reg)) | 
											  (write_back_advance_wire	& (~later_data_spad_idx_inc_wire));

// state converted signals
wire former_address_read_done_wire	= ~(former_data_spad_idx_inc_wire & former_zero_col_wire);
wire former_data_read_done_wire 	= Iact_Data_Spad_read_fin_wire;
wire later_data_read_done 			= later_data_spad_idx_inc_wire 	| later_address_spad_read_fin_wire;
wire former_one_col_read_done		= former_data_spad_idx_inc_wire | later_address_spad_read_fin_wire;

// next state logic
always@(*) begin
	case(PE_state)
		IDLE 				: next_PE_state = mac_en 						? READ_FORMER_ADDRESS 	: IDLE;
		READ_FORMER_ADDRESS : next_PE_state = former_address_read_done_wire ? READ_FORMER_DATA 		: READ_FORMER_ADDRESS;
		READ_FORMER_DATA 	: next_PE_state = former_data_read_done_wire 	? IDLE 					: READ_LATER_ADDRESS;
		READ_LATER_ADDRESS 	: next_PE_state = ~later_zero_col_wire 			? READ_LATER_DATA_1 	: 
											  former_data_spad_idx_inc_wire ? READ_FORMER_ADDRESS 	: READ_FORMER_DATA;
		READ_LATER_DATA_1 	: next_PE_state = READ_LATER_DATA_2;
		READ_LATER_DATA_2 	: next_PE_state = DO_MAC;
		DO_MAC 				: next_PE_state = WRITE_BACK;
`ifdef INT4_PACKED_SIMD2_FULL
		WRITE_BACK 	        : next_PE_state = later_lane1_serial_valid_wire	? READ_LANE1_PSUM		:
											  former_data_read_done_wire 	? IDLE 					: 
											  ~later_data_read_done 		? READ_LATER_DATA_1 	: 
											  former_one_col_read_done 		? READ_FORMER_ADDRESS 	: READ_FORMER_DATA;
		READ_LANE1_PSUM		: next_PE_state = DO_MAC_LANE1;
		DO_MAC_LANE1		: next_PE_state = WRITE_BACK_LANE1;
		WRITE_BACK_LANE1	: next_PE_state = former_data_read_done_wire 	? IDLE 					: 
											  ~later_data_read_done 		? READ_LATER_DATA_1 	: 
											  former_one_col_read_done 		? READ_FORMER_ADDRESS 	: READ_FORMER_DATA;
`else
		WRITE_BACK 	        : next_PE_state = former_data_read_done_wire 	? IDLE 					: 
											  ~later_data_read_done 		? READ_LATER_DATA_1 	: 
											  former_one_col_read_done 		? READ_FORMER_ADDRESS 	: READ_FORMER_DATA;
`endif
		default				: next_PE_state = IDLE;
	endcase
end


// ====================================================================	//
// 						 		Sequential  							//
// ====================================================================	//
// FSM
always@(posedge clock) begin
	if(reset) begin
		PE_state <= IDLE;
	end
	else begin
		PE_state <= next_PE_state;
	end
end	

always@(posedge clock) begin
	if(reset) begin
		former_matrix_inc_reg <= 1'b0;
	end
	else if(READ_FORMER_ADDRESS_wire)begin
		former_matrix_inc_reg <= former_zero_col_wire;
	end
end


always@(posedge clock) begin
	if(reset) begin
		former_matrix_col_reg <= 'd0;
	end
	else if(psum_enq_en)begin
		former_matrix_col_reg <= 'd0;
	end
	else if(READ_FORMER_ADDRESS_wire)begin
		former_matrix_col_reg <= former_matrix_col_reg + former_matrix_inc_reg + 'd1;
	end
end

always@(posedge clock) begin
	if(reset) begin
		former_data_first_read_reg <= 1'b1;
	end 
	else begin
		if(READ_FORMER_DATA_wire | write_back_advance_wire) begin
			former_data_first_read_reg <= Iact_Data_Spad_read_fin_wire | former_data_first_read_reg;
		end
		else if(READ_LATER_ADDRESS_wire) begin
			former_data_first_read_reg <= 1'b0;
		end
	end
end	
	
always@(posedge clock) begin
	if(reset) begin
		later_data_first_read_reg <= 1'b1;
	end 
	else begin
	    if(IDLE_wire) begin
			later_data_first_read_reg <= mac_en | later_data_first_read_reg;
		end
		else if(READ_LATER_ADDRESS_wire) begin
			later_data_first_read_reg <= later_zero_col_wire | later_data_first_read_reg;
		end
		else if(write_back_advance_wire && !Iact_Data_Spad_read_fin_wire) begin
			later_data_first_read_reg <= later_data_spad_idx_inc_wire | later_address_spad_read_fin_wire;
		end
	end
end

always@(posedge clock) begin	
	if(reset) begin
		product_reg <= 21'sd0;
	end 
	else begin
		if(DO_MAC_wire | DO_MAC_LANE1_wire) begin
			product_reg <= product_wire;	// TODO
		end
	end
end

always@(posedge clock) begin	
	if(reset) begin
		product_lane1_reg <= 21'sd0;
	end 
	else begin
		if(DO_MAC_wire) begin
			product_lane1_reg <= product_lane1_wire;
		end
	end
end

always@(posedge clock) begin
	if(reset) begin
		psum_load_reg <= 21'sd0;
	end 
	else begin
		psum_load_reg <= psum_load_wire;
	end
end

always@(posedge clock) begin
	if(reset) begin
		psum_load_lane1_reg <= 21'sd0;
	end 
	else begin
		psum_load_lane1_reg <= Psum_Spad_psum_out_lane1;
	end
end

always@(posedge clock) begin
	if(reset) begin
		psum_load_state <= 1'b0; 
	end 
	else if(psum_acc_fin) begin
		psum_load_state <= 1'b0;
	end 
	else begin
		psum_load_state <= psum_enq_en | psum_load_state;
	end
end
	
	
// psum read index FSM
always@(posedge clock) begin	
	if(reset) begin 
		psum_read_idx_reg <= 5'd0; 
	end 
	else begin 
		psum_read_idx_reg <= next_psum_read_idx;
	end 
end

// next psum read index logic
always@(*) begin	
	if(READ_LATER_DATA_2_wire) begin 
		next_psum_read_idx <= Psum_Spad_write_idx;
	end 
	else if(WRITE_BACK_wire & later_lane1_serial_valid_wire) begin
		next_psum_read_idx <= psum_write_idx_lane1_wire;
	end
	else if (Psum_Spad_read_fin_wire) begin 
		next_psum_read_idx <= 5'd0;
	end 
	else if (Psum_Spad_read_idx_inc_wire) begin 
		next_psum_read_idx <= psum_read_idx_reg + 5'd1;
	end
	else begin
		next_psum_read_idx <= psum_read_idx_reg;
	end
end


endmodule
