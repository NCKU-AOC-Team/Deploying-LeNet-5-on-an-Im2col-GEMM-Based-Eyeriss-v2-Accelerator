

set_property -dict { PACKAGE_PIN H16   		IOSTANDARD LVCMOS33 } [get_ports { clock }]; 
create_clock -name clock -period 8.00 -waveform {0 4} [get_ports { clock }];

# -----------------------------------------------------------------------------
# [後續優化 / 尚未啟用] clk_de 衍生時脈約束  (clk_de = clock / 8 = 15.625 MHz)
# clk_de 由 clock_gen (clk_count[2]) 除頻產生, 帶動全設計約 5 萬多個 FF.
# 目前沒有這條約束 -> STA 把該時脈域當成 no_clock 直接跳過時序分析,
# 設計能跑純粹是因為時脈慢(64ns)+ 走低 skew BUFG, 餘裕大到沒檢查也過.
# 有時間時取消以下註解, 讓 STA 真正驗證 clk_de 域 (尤其是改用 LUTRAM 後的路徑):
#
# create_generated_clock -name clk_de \
#   -source [get_pins clock_gen_inst/clk_count_reg[2]/C] \
#   -divide_by 8 \
#   [get_pins clock_gen_inst/clk_count_reg[2]/Q]
# -----------------------------------------------------------------------------

set_property -dict { PACKAGE_PIN D19   		IOSTANDARD LVCMOS33 } [get_ports { reset }];

set_property -dict { PACKAGE_PIN D20   		IOSTANDARD LVCMOS33 } [get_ports { btn1 }];
set_property -dict { PACKAGE_PIN L20   		IOSTANDARD LVCMOS33 } [get_ports { btn2 }];
set_property -dict { PACKAGE_PIN L19   		IOSTANDARD LVCMOS33 } [get_ports { btn3 }];

set_property -dict { PACKAGE_PIN R14    	IOSTANDARD LVCMOS33 } [get_ports { result[0] }];
set_property -dict { PACKAGE_PIN P14    	IOSTANDARD LVCMOS33 } [get_ports { result[1] }];
set_property -dict { PACKAGE_PIN N16    	IOSTANDARD LVCMOS33 } [get_ports { result[2] }];
set_property -dict { PACKAGE_PIN M14    	IOSTANDARD LVCMOS33 } [get_ports { result[3] }];


set_property -dict { PACKAGE_PIN W6    	IOSTANDARD LVCMOS33 } [get_ports { rx_pin_in }];

