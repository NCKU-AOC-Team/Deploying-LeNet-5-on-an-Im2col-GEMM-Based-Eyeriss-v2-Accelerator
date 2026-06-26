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


`ifndef BOYU_LATER_STREAM_RANGE
`define BOYU_LATER_STREAM_RANGE 15:0
`endif
module Later_Data_Spad(
	input         		clock,
	input         		reset,
	// data signals
	output        		data_in_ready,
	input         		data_in_valid,
	input  		[`BOYU_LATER_STREAM_RANGE] 	data_in,
	output 		[`BOYU_LATER_STREAM_RANGE] 	data_out,		// 8b for data, 4b for count, there are 2^4 rows in a Spad at most.
	output reg 	[6:0]  	column_num,		// use the count to determine whether the later data read done.
	// control signals
	input         		write_en,
	output        		write_fin,
	input         		read_en,
	input         		write_back_read_en,
	input  		[6:0]  	read_idx,
	input         		index_inc,
	input         		read_idx_en,
	input         		int4_weight_mode
);

// ================================================	//
// 					 Parameters  					//
// ================================================	//
localparam SPAD_DEPTH = 100;
localparam SPAD_WIDTH = 16;


// ================================================	//
// 					 Registers  					//
// ================================================	//
reg [6:0] spad_write_addr;
reg [6:0] spad_read_addr;


// ================================================	//
// 					 	Wires  						//
// ================================================	//
wire  data_in_shake = data_in_ready & data_in_valid & write_en;
wire  read_fin   	= (data_out == 'd0) & index_inc;

// RAM read delay 1 cycle for BRAM
wire [6:0] next_data_read_addr = write_back_read_en ? (column_num + 7'd1) : (read_en ? column_num : spad_read_addr);


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
	else if (index_inc) begin
		if (read_fin) begin
			column_num <= 'd0;
		end 
		else begin
			column_num <= column_num + 'd1;
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
wire	[`BOYU_LATER_STREAM_RANGE]	IP_BRAM_data_in		= data_in;
wire	[`BOYU_LATER_STREAM_RANGE]	IP_BRAM_data_out;

assign data_out	= IP_BRAM_data_out;
	
Weight_DATA_Spad_BRAM Weight_DATA_Spad_BRAM_inst (
    .clk			(clock					),
	.reset			(reset					),
	.write_en       (IP_BRAM_write_en       ),
	.read_en        (IP_BRAM_read_en        ),
	.write_addr     (IP_BRAM_write_addr     ),
	.read_addr      (IP_BRAM_read_addr      ),
	.data_in        (IP_BRAM_data_in        ),
	.data_out       (IP_BRAM_data_out       ),
	.int4_weight_mode(int4_weight_mode      )
);

endmodule


`ifndef BOYU_LATER_STREAM_RANGE
`define BOYU_LATER_STREAM_RANGE 15:0
`endif
module Weight_DATA_Spad_BRAM (
    input 			clk,
	input			reset,
	input 			write_en,
	input			read_en,
	
	input 	[6:0]	write_addr,
	input 	[6:0]	read_addr,
	
	input	[`BOYU_LATER_STREAM_RANGE]	data_in,
	input			int4_weight_mode,
	
	output	[`BOYU_LATER_STREAM_RANGE]	data_out
);

wire		wr;
wire [6:0] 	addra;
wire [`BOYU_LATER_STREAM_RANGE] dina;
wire [`BOYU_LATER_STREAM_RANGE] douta;

// need 100 cycles to clear spad data
reg	[6:0]	clear_count;
reg 		clear_flag;
always @(posedge clk) begin
	if (reset) begin
		clear_flag <= 'd1; 
	end
	else if(clear_count == 'd99) begin
		clear_flag <= 'd0; 
	end
end

always @(posedge clk) begin
	if (reset) begin
		clear_count <= 'd0; 
	end
	else if(clear_flag) begin
		clear_count <= (clear_count == 'd99) ? 'd0 : (clear_count + 'd1); 
	end
end

assign wr		= write_en | clear_flag;
assign addra 	= wr ? (clear_flag ? clear_count : write_addr) : read_addr;
assign dina 	= clear_flag ? 'd0 : data_in;

assign data_out = douta;

(* ram_style = "distributed" *) reg [`BOYU_LATER_STREAM_RANGE] full_spad [0:127];
reg [`BOYU_LATER_STREAM_RANGE] full_dout;

always @(posedge clk) begin
	if (reset) begin
		full_dout <= 'd0;
	end
	else begin
		if (wr) begin
			full_spad[addra] <= dina;
		end
		full_dout <= full_spad[addra];
	end
end

assign douta = full_dout;


endmodule
