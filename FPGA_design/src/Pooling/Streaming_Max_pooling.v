// Raster-order 2x2 max pooling fused with convolution ReLU readout.
module Streaming_Max_pooling (
	input						clock,
	input						reset,
	input						enable,
	input			[4:0]		ifmap_width,
	input		signed	[7:0]	data_in,
	input						data_in_valid,
	output		signed	[7:0]	data_out,
	output						data_out_valid
);

reg signed [7:0] line_buffer [0:23];
reg signed [7:0] top_left;
reg signed [7:0] current_left;
reg [4:0] row_count;
reg [4:0] col_count;

wire signed [7:0] top_value = line_buffer[col_count];
wire signed [7:0] max_top =
	(top_left > top_value) ? top_left : top_value;
wire signed [7:0] max_bottom =
	(current_left > data_in) ? current_left : data_in;
wire signed [7:0] max_value =
	(max_top > max_bottom) ? max_top : max_bottom;

wire accept = enable & data_in_valid;
wire end_of_row = col_count == (ifmap_width - 5'd1);

assign data_out_valid = accept & row_count[0] & col_count[0];
assign data_out = data_out_valid ? max_value : 8'sd0;

integer i;
always @(posedge clock) begin
	if (reset) begin
		for (i = 0; i < 24; i = i + 1) begin
			line_buffer[i] <= 8'sd0;
		end
		top_left <= 8'sd0;
		current_left <= 8'sd0;
		row_count <= 5'd0;
		col_count <= 5'd0;
	end
	else if (!enable) begin
		top_left <= 8'sd0;
		current_left <= 8'sd0;
		row_count <= 5'd0;
		col_count <= 5'd0;
	end
	else if (accept) begin
		line_buffer[col_count] <= data_in;
		top_left <= top_value;
		current_left <= end_of_row ? 8'sd0 : data_in;

		if (end_of_row) begin
			col_count <= 5'd0;
			row_count <= (row_count == (ifmap_width - 5'd1)) ?
						 5'd0 : (row_count + 5'd1);
		end
		else begin
			col_count <= col_count + 5'd1;
		end
	end
end

endmodule
