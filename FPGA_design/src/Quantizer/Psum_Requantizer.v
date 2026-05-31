// ====================================================================================================== //
// This module is Psum_Requantizer.
// The quantization scheme is a fixed-point shifter with saturation.
//
// Since psum will be accumulated with several times, in this design the maximum accumulated time is 6,
// which means the bitwidth of data will be extended to 21-bit. (8+8+(6-1))
// it must be requantized back to 8-bit precision.
//
// The software model uses quan_scale = 1024, so the hardware keeps the same Q10 scale factor.
// The previous implementation selected data_in[17:10], which is equivalent to truncating by
// 10 bits and then wrapping to 8 bits. This version uses a signed arithmetic shift and clamps
// the result to int8 range, avoiding overflow wrap-around.
// ====================================================================================================== //

module Psum_Requantizer (
	input	signed	[20:0]	data_in,
	input					data_in_valid,
	output	signed	[7:0]	data_out,
	output					data_out_valid
);

wire signed [20:0] scaled_data = data_in >>> 10;

assign data_out = (scaled_data > 21'sd127)  ? 8'sd127  :
                  (scaled_data < -21'sd128) ? -8'sd128 :
                  scaled_data[7:0];
assign data_out_valid = data_in_valid;


endmodule
