-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
-- Date        : Tue Jun 16 21:46:52 2026
-- Host        : DESKTOP-9049P41 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               C:/vivado_workspace/Deploying-VGG-16-on-an-Im2col-GEMM-Based-Eyeriss-v2-Accelerator/FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.srcs/sources_1/ip/ROM_sparse_weight/ROM_sparse_weight_stub.vhdl
-- Design      : ROM_sparse_weight
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ROM_sparse_weight is
  Port ( 
    clka : in STD_LOGIC;
    ena : in STD_LOGIC;
    addra : in STD_LOGIC_VECTOR ( 15 downto 0 );
    douta : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );

end ROM_sparse_weight;

architecture stub of ROM_sparse_weight is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clka,ena,addra[15:0],douta[15:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "blk_mem_gen_v8_4_3,Vivado 2019.1";
begin
end;
