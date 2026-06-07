// ====================================================================================================== //
// This module is the later data spad.
// later data spad is used to store the data vector and count vector by CSC decoder, whose range is -128~127(INT-8).
// 
// For convolution layer, later data spad stores the iact data.
// For depthwise-convolution and fully conncected layer, later data spad stores the weight data.
// 
// The count bitwidth is 4, the data bitwidth is 8.
// The count bitwidth = 4 represents the row of later matrix can be 16 at most.
// 
// For FPGA implementation, later data spad uses BRAM to store data.
// ====================================================================================================== //


module Later_Data_Spad(
	input         		clock,
	input         		reset,
	// data signals
	output        		data_in_ready,
	input         		data_in_valid,
	input  		[11:0] 	data_in,
	output 		[11:0] 	data_out,		// 8b for data, 4b for count, there are 2^4 rows in a Spad at most.
	output 		[11:0] 	data_out_next,
	output reg 	[6:0]  	column_num,		// use the count to determine whether the later data read done.
	// control signals
	input         		write_en,
	output        		write_fin,
	input         		read_en,
	input  		[6:0]  	read_idx,
	input         		index_inc,
	input         		index_inc_by_2,
	input         		read_idx_en
);

// ================================================	//
// 					 Parameters  					//
// ================================================	//
localparam SPAD_DEPTH = 100;
localparam SPAD_WIDTH = 12;


// ================================================	//
// 					 Registers  					//
// ================================================	//
reg [6:0] spad_write_addr;
reg [6:0] spad_read_addr;


// ================================================	//
// 					 	Wires  						//
// ================================================	//
wire  data_in_shake = data_in_ready & data_in_valid & write_en;
wire  index_advance = index_inc | index_inc_by_2;
wire  read_fin   	= (data_out == 'd0) & index_advance;

// RAM read delay 1 cycle for BRAM
wire [6:0] next_data_read_addr = read_en ? column_num : spad_read_addr;
wire [6:0] next_data_read_addr_lane1 = next_data_read_addr + 7'd1;


// ================================================	//
// 					 Combination  					//
// ================================================	//
assign write_fin 		= (data_in == 'd0) & data_in_shake;
assign data_in_ready 	= 1'd1;


// ================================================	//
// 					 Sequential  					//
// ================================================	//
always @(posedge clock) begin
	if(reset) begin
		spad_read_addr <= 'd0;
	end
	else begin 
		spad_read_addr <= next_data_read_addr;
	end
end

always @(posedge clock) begin
	if (reset) begin
		spad_write_addr <= 'd0;
	end 
	else if (data_in_shake) begin
		if (write_fin) begin
			spad_write_addr <= 'd0;
		end 
		else begin
			spad_write_addr <= spad_write_addr + 'd1;
		end
	end
end

always @(posedge clock) begin	
	if (reset) begin
		column_num <= 'd0;
	end 
	else if (read_idx_en) begin
		column_num <= read_idx;
	end 
	else if (index_advance) begin
		if (read_fin) begin
			column_num <= 'd0;
		end 
		else begin
			column_num <= column_num + (index_inc_by_2 ? 7'd2 : 7'd1);
		end
	end
end


// ====================================================	//
// 						 BRAM IP	  					//
// ====================================================	//
wire 			IP_BRAM_write_en	= data_in_shake;
wire			IP_BRAM_read_en		= 'd1;
wire 	[6:0]	IP_BRAM_write_addr	= spad_write_addr;
wire 	[6:0]	IP_BRAM_read_addr	= next_data_read_addr;
wire 	[6:0]	IP_BRAM_read_addr_lane1 = next_data_read_addr_lane1;
wire	[11:0]	IP_BRAM_data_in		= data_in;
wire	[11:0]	IP_BRAM_data_out;
wire	[11:0]	IP_BRAM_data_out_lane1;

assign data_out	= IP_BRAM_data_out;
assign data_out_next = IP_BRAM_data_out_lane1;
	
Weight_DATA_Spad_TDP_BRAM Weight_DATA_Spad_BRAM_inst (
    .clk			(clock					),
	.reset			(reset					),
	.write_en       (IP_BRAM_write_en       ),
	.read_en        (IP_BRAM_read_en        ),
	.write_addr     (IP_BRAM_write_addr     ),
	.read_addr      (IP_BRAM_read_addr      ),
	.read_addr_lane1(IP_BRAM_read_addr_lane1),
	.data_in        (IP_BRAM_data_in        ),
	.data_out       (IP_BRAM_data_out       ),
	.data_out_lane1 (IP_BRAM_data_out_lane1 )
);

endmodule


module Weight_DATA_Spad_TDP_BRAM (
    input 			clk,
	input			reset,
	input 			write_en,
	input			read_en,
	
	input 	[6:0]	write_addr,
	input 	[6:0]	read_addr,
	input 	[6:0]	read_addr_lane1,
	
	input	[11:0]	data_in,
	
	output	[11:0]	data_out,
	output	[11:0]	data_out_lane1
);

localparam SPAD_DEPTH = 128;
localparam SPAD_WIDTH = 12;
localparam [6:0] SPAD_LAST_ADDR = 7'd127;

wire		wr;
wire [6:0] 	port_a_addr;
wire [6:0] 	port_b_addr;
wire [11:0] dina;
reg  [11:0] douta;
reg  [11:0] doutb;

(* ram_style = "block" *) reg [SPAD_WIDTH-1:0] mem [0:SPAD_DEPTH-1];

// Clear the full physical BRAM depth. SIMD lane1 can peek at read_addr + 1,
// so stale values above the logical 100-entry payload can become visible.
reg	[6:0]	clear_count;
reg 		clear_flag;
always @(posedge clk) begin
	if (reset) begin
		clear_flag <= 'd1; 
	end
	else if(clear_count == SPAD_LAST_ADDR) begin
		clear_flag <= 'd0; 
	end
end

always @(posedge clk) begin
	if (reset) begin
		clear_count <= 'd0; 
	end
	else if(clear_flag) begin
		clear_count <= (clear_count == SPAD_LAST_ADDR) ? 'd0 : (clear_count + 'd1); 
	end
end

assign wr		= write_en | clear_flag;
assign port_a_addr = wr ? (clear_flag ? clear_count : write_addr) : read_addr;
assign port_b_addr = read_addr_lane1;
assign dina 	= clear_flag ? 'd0 : data_in;

always @(posedge clk) begin
	if (reset) begin
		douta <= 'd0;
		doutb <= 'd0;
	end
	else if (read_en) begin
		if (wr) begin
			mem[port_a_addr] <= dina;
		end
		douta <= mem[port_a_addr];
		doutb <= mem[port_b_addr];
	end
end

assign data_out = douta;
assign data_out_lane1 = doutb;


endmodule
