// ====================================================================================================== //
// This module is the former data spad.
// Former data spad is used to store the data vector and count vector by CSC decoder, whose range is -128~127(INT-8).
// 
// For convolution layer, Former data spad stores the weight data.
// For depthwise-convolution and fully conncected layer, Former data spad stores the iact data.
// 
// The count bitwidth is 5, the data bitwidth is 8.
// The count bitwidth = 5 represents the row of former matrix can be 32 at most.
// 
// For FPGA implementation, former data spad uses BRAM to store data.
// ====================================================================================================== //


module Former_Data_Spad(
	input         		clock,
	input         		reset,
	// data signals
	output        		data_in_ready,
	input         		data_in_valid,
	input  		[17:0] 	data_in,
	output 		[17:0] 	data_out,		// fixed entry: INT8={5b unused, 8b data, 5b count}, INT4x2={w1,c1,w0,c0}
	output 		[7:0]  	column_num,		// use the count to determine which column of later matrix should be read
	// control signals
	input        		write_en,
	output        		write_fin,
	input         		index_inc, 		// combine read_en and index increase
	input				int4_weight_mode
);

// ================================================	//
// 					 Parameters  					//
// ================================================	//
localparam SPAD_DEPTH = 200;
localparam SPAD_WIDTH = 18;


// ================================================	//
// 					 Registers  					//
// ================================================	//
reg [7:0] spad_write_addr;
reg [7:0] spad_read_addr; 


// ================================================	//
// 					 	Wires  						//
// ================================================	//
wire  data_in_shake = data_in_ready & data_in_valid & write_en; 
wire  read_fin 	 	= (data_out == 'd0) & index_inc; 

// RAM read delay 1 cycle for BRAM
wire [7:0] next_data_read_addr = index_inc ? (read_fin ? 'd0 : (spad_read_addr + 'd1)) : spad_read_addr;


// ================================================	//
// 					 Combination  					//
// ================================================	//
assign write_fin 	= (data_in  == 'd0) & data_in_shake; 
assign data_in_ready= 1'b1; 
assign column_num 	= spad_read_addr; 
// assign data_out 	 = Iact_Data_Spad[spad_read_addr]; 


// ================================================	//
// 					 Sequential  					//
// ================================================	//
// write addr
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

// read addr
always @(posedge clock) begin
	if (reset) begin 
		spad_read_addr <= 'd0; 
	end 
	else begin 
		spad_read_addr <= next_data_read_addr;
	end
end



// ====================================================	//
// 						 BRAM IP	  					//
// ====================================================	//
wire 			IP_BRAM_write_en	= data_in_shake;
wire			IP_BRAM_read_en		= 'd1;
wire 	[7:0]	IP_BRAM_write_addr	= spad_write_addr;
wire 	[7:0]	IP_BRAM_read_addr	= next_data_read_addr;
wire	[17:0]	IP_BRAM_data_in		= data_in;
wire	[17:0]	IP_BRAM_data_out;

assign data_out	= IP_BRAM_data_out;
	
Iact_DATA_Spad_BRAM Iact_DATA_Spad_BRAM_inst (
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


module Iact_DATA_Spad_BRAM(
    input 			clk,
	input			reset,
	input 			write_en,
	input			read_en,
	
	input 	[7:0]	write_addr,
	input 	[7:0]	read_addr,
	
	input	[17:0]	data_in,
	input			int4_weight_mode,
	
	output	[17:0]	data_out
);

wire		wr;
wire [7:0] 	addra;
wire [17:0] dina;
wire [17:0] douta;

// need 200 cycles to clear spad data
reg	[7:0]	clear_count;
reg 		clear_flag;
always @(posedge clk) begin
	if (reset) begin
		clear_flag <= 'd1; 
	end
	else if(clear_count == 'd199) begin
		clear_flag <= 'd0; 
	end
end

always @(posedge clk) begin
	if (reset) begin
		clear_count <= 'd0; 
	end
	else if(clear_flag) begin
		clear_count <= (clear_count == 'd199) ? 'd0 : (clear_count + 'd1); 
	end
end


assign wr		= write_en | clear_flag;
assign addra 	= write_en ? write_addr	: (clear_flag ? clear_count : read_addr);
assign dina 	= write_en ? data_in 	: 'd0;

assign data_out = ~write_en	? douta		: 'd0;

reg [17:0] spad [0:255];
reg [17:0] douta_reg;

always @(posedge clk) begin
	if (reset) begin
		douta_reg <= 18'd0;
	end
	else begin
		if (wr) begin
			spad[addra] <= dina;
		end
		douta_reg <= spad[addra];
	end
end

assign douta = douta_reg;


endmodule
