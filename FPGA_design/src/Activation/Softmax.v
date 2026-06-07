// ====================================================================================================== //
// This module is Softmax funcion.
// This module would read 10 contineous value and find the maximum value index.
// In FPGA design, the function is handwritten digit recognition, therefore the output of softmax is 0~9
//
// This block implements argmax(logits), not exp/sum softmax probabilities. For classification,
// argmax(softmax(logits)) is equivalent to argmax(logits), so only the maximum index is required.
// ====================================================================================================== //



module softmax (
	input					clock,
	input					reset,
	
	input					en,
	
	input	signed	[20:0]	data_in,
	input					data_in_valid,
	
	output	reg		[3:0]	data_out,		// 0~9
	output	reg				data_out_valid
);


// ====================================================================	//
// 							Registers  								//
// ====================================================================	//
reg			[3:0]	data_idx;
reg	signed	[20:0]	max_data_temp;
reg			[3:0]	max_data_idx_temp;


// ====================================================================	//
// 							Wires  									//
// ====================================================================	//
localparam signed [20:0] INT21_MIN = -21'sd1048576;

wire data_in_en = en & data_in_valid;
wire end_flag 	= data_idx == 4'd9;
wire current_is_max = data_in > max_data_temp;
wire [3:0] current_max_idx = current_is_max ? data_idx : max_data_idx_temp;
wire signed [20:0] current_max_data = current_is_max ? data_in : max_data_temp;


// ====================================================================	//
// 							Sequential  							//
// ====================================================================	//
always@(posedge clock) begin
	if(reset) begin
		data_out 		<= 4'd0;
		data_out_valid	<= 1'b0;
	end
	else if(data_in_en && end_flag) begin
		data_out 		<= current_max_idx;
		data_out_valid	<= 1'b1;
	end
	else begin
		data_out 		<= 4'd0;
		data_out_valid	<= 1'b0;
	end
end


always@(posedge clock) begin
	if(reset) begin
		data_idx <= 4'd0;
	end
	else if(data_in_en) begin
		data_idx <= end_flag ? 4'd0 : (data_idx + 4'd1);
	end
end


// set initial max reg to the minimum signed 21-bit value
always@(posedge clock) begin
	if(reset) begin
		max_data_temp <= INT21_MIN;
	end
	else if(data_in_en && end_flag) begin
		max_data_temp <= INT21_MIN;
	end
	else if(data_in_en) begin
		max_data_temp <= current_max_data;
	end
end


// store index coressponding to current largest value index
always@(posedge clock) begin
	if(reset) begin
		max_data_idx_temp <= 4'd0;
	end
	else if(data_in_en && end_flag) begin
		max_data_idx_temp <= 4'd0;
	end
	else if(data_in_en) begin
		max_data_idx_temp <= current_max_idx;
	end
end


endmodule
