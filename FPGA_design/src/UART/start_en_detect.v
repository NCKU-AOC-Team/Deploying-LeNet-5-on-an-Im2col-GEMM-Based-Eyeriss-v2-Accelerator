module H2L_detect(
    input 	clock,
	input	reset,
    input 	pin_in,
    output 	pin_sync,	// 2-FF 同步後的準位, 給下游 (rx_ctrl) 取用
    output 	sig_H2L
);

// ---- 2-FF 同步器: 馴服非同步外部輸入 (rx_pin_in), 避免亞穩態 ----
// pin_in 來自外部 USB-UART, 與本時脈域無關, 邊緣到達時間隨機,
// 直接採樣會在 setup/hold 視窗內進入亞穩態 -> 偶發 bit 翻轉.
// 第 1 級可能亞穩, 給它一個完整週期安定; 第 2 級輸出幾乎必為穩定 0/1.
(* ASYNC_REG = "TRUE" *) reg sync_0, sync_1;	// ASYNC_REG: 強制兩顆 FF 擺相鄰、不被優化掉, 最大化亞穩態安定餘裕, 不靠 P&R 擺位運氣
reg pin_pre;

always@(posedge clock) begin
	if(reset) begin
		sync_0  <= 1'b1;	// UART idle 為高, reset 設高避免假邊緣
		sync_1  <= 1'b1;
		pin_pre <= 1'b1;
	end
	else begin
		sync_0  <= pin_in;	// 第 1 級 (可能亞穩)
		sync_1  <= sync_0;	// 第 2 級 (穩定輸出)
		pin_pre <= sync_1;	// 邊緣偵測用的前一拍 (亦為同步域)
	end
end

assign pin_sync = sync_1;
assign sig_H2L  = !sync_1 & pin_pre;	// 全部用同步後訊號做下降緣偵測

endmodule


/*
module L2H_detect(
    input 	clock,
    input 	reset,
    input 	pin_in,
    output sig_L2H
);

reg pin_pre;

assign sig_L2H = pin_in & !pin_pre;

always@(posedge clock) begin
    if(reset) begin
        pin_pre <= 1'b0;
	end
    else begin
        pin_pre <= pin_in;
	end
end

endmodule
*/
