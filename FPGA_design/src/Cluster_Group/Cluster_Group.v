// ====================================================================================================== //
// This module is Cluster_Group.
// Cluster_Group(CG) contains CG_ctrl, PE cluster, GLB cluster, router cluster.
// This module is the core of whole chip.
// In top-level, CG array can be scale as specific requirements.
// CG breakdown : PE x9, Iact SRAM x9, psum SRAM x3, iact router x9, weight router x3, psum router x3.
// For FPGA design, it contains 2x2 CG array, which contains 36 PEs.
// If the FPGA resourse is sufficient, the CG array can be scale up to 2n x 2 array, n>=1, 
// for Eyeriss v2 CG array is 8x2 
// ====================================================================================================== //


module ClusterGroup (
	// ======================================================================================== //
	//                                  input/output controls                                   //
	// ======================================================================================== //
	input                clock,
	input                reset,

	input                psum_acc_fin,

	// PE_Cluster input
	input                PE_cluster_iact_data_in_sel,
	input         [1:0]  PE_cluster_iact_data_out_sel,
	input                PE_cluster_psum_data_in_sel,

	input         [1:0]  router_cluster_iact_data_in_sel,
	input         [1:0]  router_cluster_iact_data_out_sel,
	input                router_cluster_weight_data_in_sel,
	input                router_cluster_weight_data_out_sel,
	input                router_cluster_psum_data_in_sel,
	input                router_cluster_psum_data_out_sel,

	input                src_GLB_load_fin,
	input                cg_en,
	input                read_psum_en,
	input                GLB_psum_write_en,
	input                psum_spad_clear,
	input                iact_write_fin_clear,
	input                weight_write_fin_clear,
	input                psum_SRAM_Bank_0_read_out_en,
	input                psum_SRAM_Bank_1_read_out_en,
	input                psum_SRAM_Bank_2_read_out_en,
	// output
	output               cal_fin,
	output               PE_weight_load_en,  // multi-driven by PE_Cluster and Cluster_Group_Controller
	output               GLB_iact_load_en,
	// ======================================================================================== //

	// inner wire（接 CG_array 內部訊號）：4 CG 的 all_cal_fin AND 成 gloabl_cal_fin 後回灌 psum_acc_en
	output               all_cal_fin,
	input                psum_acc_en,

	// These control signals are used to disable some PE in PE cluster.
	// It is for physical mapping issue, which causes the decreasing of PE utilization.
	input [0:2][0:2] PE_disable,

	// ============================================================================ //
	//                                     GLB                                      //
	// ============================================================================ //
	// GLB iact/psum read/write addr (10-bit)
	input [0:2][0:2][9:0] GLB_iact_read_addr,
	input [0:2][9:0]      GLB_psum_write_addr,
	input [0:2][9:0]      GLB_psum_read_addr,

	// GLB iact address & data（iact SRAM Bank [r][c]＝9 bank）
	output [0:2][0:2]       GLB_iact_address_in_ready,
	input  [0:2][0:2]       GLB_iact_address_in_valid,
	input  [0:2][0:2][6:0]  GLB_iact_address_in,
	output [0:2][0:2]       GLB_iact_data_in_ready,
	input  [0:2][0:2]       GLB_iact_data_in_valid,
	input  [0:2][0:2][11:0] GLB_iact_data_in,

	// GLB weight address & data（weight routing [0:2]＝3 路）
	output [0:2]       GLB_weight_address_in_ready,
	input  [0:2]       GLB_weight_address_in_valid,
	input  [0:2][7:0]  GLB_weight_address_in,
	output [0:2]       GLB_weight_data_in_ready,
	input  [0:2]       GLB_weight_data_in_valid,
	input  [0:2][12:0] GLB_weight_data_in,

	// GLB psum address & data in/out（psum SRAM Bank 0/1/2）
	output               GLB_psum_0_data_in_ready,
	input                GLB_psum_0_data_in_valid,
	input  signed [20:0] GLB_psum_0_data_in,
	input                GLB_psum_0_data_out_ready,
	output               GLB_psum_0_data_out_valid,
	output signed [20:0] GLB_psum_0_data_out,
	output               GLB_psum_1_data_in_ready,
	input                GLB_psum_1_data_in_valid,
	input  signed [20:0] GLB_psum_1_data_in,
	input                GLB_psum_1_data_out_ready,
	output               GLB_psum_1_data_out_valid,
	output signed [20:0] GLB_psum_1_data_out,
	output               GLB_psum_2_data_in_ready,
	input                GLB_psum_2_data_in_valid,
	input  signed [20:0] GLB_psum_2_data_in,
	input                GLB_psum_2_data_out_ready,
	output               GLB_psum_2_data_out_valid,
	output signed [20:0] GLB_psum_2_data_out,
	// ============================================================================ //

	input         [4:0]  PSUM_DEPTH,


	// ============================================================================================ //
	//         tile-chain：iact / weight / psum router、cg_psum（在 CG_array 內與鄰 CG 對接）         //
	// ============================================================================================ //
	
	// ---------------------------------------- iact ---------------------------------------- //
	// iact router [r][c]＝9 router；in=收進 router、out=送出 router；ready 為反向背壓
	// north: address_in/out, data_in/out
	output [0:2][0:2]       iact_north_address_in_ready,
	input  [0:2][0:2]       iact_north_address_in_valid,
	input  [0:2][0:2][6:0]  iact_north_address_in_bits,
	input  [0:2][0:2]       iact_north_address_out_ready,
	output [0:2][0:2]       iact_north_address_out_valid,
	output [0:2][0:2][6:0]  iact_north_address_out_bits,
	output [0:2][0:2]       iact_north_data_in_ready,
	input  [0:2][0:2]       iact_north_data_in_valid,
	input  [0:2][0:2][11:0] iact_north_data_in_bits,
	input  [0:2][0:2]       iact_north_data_out_ready,
	output [0:2][0:2]       iact_north_data_out_valid,
	output [0:2][0:2][11:0] iact_north_data_out_bits,

	// south: address_in/out, data_in/out
	output [0:2][0:2]       iact_south_address_in_ready,
	input  [0:2][0:2]       iact_south_address_in_valid,
	input  [0:2][0:2][6:0]  iact_south_address_in_bits,
	input  [0:2][0:2]       iact_south_address_out_ready,
	output [0:2][0:2]       iact_south_address_out_valid,
	output [0:2][0:2][6:0]  iact_south_address_out_bits,
	output [0:2][0:2]       iact_south_data_in_ready,
	input  [0:2][0:2]       iact_south_data_in_valid,
	input  [0:2][0:2][11:0] iact_south_data_in_bits,
	input  [0:2][0:2]       iact_south_data_out_ready,
	output [0:2][0:2]       iact_south_data_out_valid,
	output [0:2][0:2][11:0] iact_south_data_out_bits,

	// horiz: address_in/out, data_in/out
	output [0:2][0:2]       iact_horiz_address_in_ready,
	input  [0:2][0:2]       iact_horiz_address_in_valid,
	input  [0:2][0:2][6:0]  iact_horiz_address_in_bits,
	input  [0:2][0:2]       iact_horiz_address_out_ready,
	output [0:2][0:2]       iact_horiz_address_out_valid,
	output [0:2][0:2][6:0]  iact_horiz_address_out_bits,
	output [0:2][0:2]       iact_horiz_data_in_ready,
	input  [0:2][0:2]       iact_horiz_data_in_valid,
	input  [0:2][0:2][11:0] iact_horiz_data_in_bits,
	input  [0:2][0:2]       iact_horiz_data_out_ready,
	output [0:2][0:2]       iact_horiz_data_out_valid,
	output [0:2][0:2][11:0] iact_horiz_data_out_bits,

	// ---------------------------------------- weight ---------------------------------------- //
	// weight router per-row [0:2]（僅 horiz 通道）
	// horiz: address_in/out, data_in/out
	output [0:2]       weight_horiz_address_in_ready,
	input  [0:2]       weight_horiz_address_in_valid,
	input  [0:2][7:0]  weight_horiz_address_in_bits,
	input  [0:2]       weight_horiz_address_out_ready,
	output [0:2]       weight_horiz_address_out_valid,
	output [0:2][7:0]  weight_horiz_address_out_bits,
	output [0:2]       weight_horiz_data_in_ready,
	input  [0:2]       weight_horiz_data_in_valid,
	input  [0:2][12:0] weight_horiz_data_in_bits,
	input  [0:2]       weight_horiz_data_out_ready,
	output [0:2]       weight_horiz_data_out_valid,
	output [0:2][12:0] weight_horiz_data_out_bits,

	// ---------------------------------------- psum ---------------------------------------- //
	// psum router per-row [0:2]：北收（north_in）南送（south_out）
	output        [0:2]       psum_north_in_ready,
	input         [0:2]       psum_north_in_valid,
	input signed  [0:2][20:0] psum_north_in_bits,
	input         [0:2]       psum_south_out_ready,
	output        [0:2]       psum_south_out_valid,
	output signed [0:2][20:0] psum_south_out_bits,

	// -------------------------------------- cg psum -------------------------------------- //
	// psum vertical flow（與垂直鄰 CG 互連）：cg_psum 向北累加
	output        [0:2]       cg_south_psum_in_ready,
	input         [0:2]       cg_south_psum_in_valid,
	input signed  [0:2][20:0] cg_south_psum_in,
	input         [0:2]       cg_north_psum_out_ready,
	output        [0:2]       cg_north_psum_out_valid,
	output signed [0:2][20:0] cg_north_psum_out
	// ================================================================================ //
);


// ====================================================================	//
// 						 		Wires  									//
// ====================================================================	//
// PE Cluster connection — 只剩「PE 輸出」+「控制(源頭還攤平)」的中繼線；輸入資料已直連 router 輸出(見實例化)
// iact：ready 回手 (per-row [0:2])
wire [0:2] PECluster_iact_address_in_ready;
wire [0:2] PECluster_iact_data_in_ready;
// psum：輸出 (per-column [0:2], signed [20:0])；from_south 已直連 cg_south_psum_* port
wire        [0:2]       PECluster_psum_out_valid;
wire signed [0:2][20:0] PECluster_psum_out;
// control
wire                 PECluster_all_write_fin;
wire                 PECluster_all_cal_fin;                               

// GLB Cluster connection

// [Refactor 2nd-stage] GLB interface array-ified (script-gen, equiv to flat wires)
wire        [0:2][0:2]  GLBCluster_iact_write_en;
wire        [0:2][0:2]  GLBCluster_iact_write_done;
wire        [0:2][0:2]  GLBCluster_iact_read_en;
wire        [0:2][0:2]  GLBCluster_iact_read_done;
wire        [0:2]       GLBCluster_psum_data_in_ready;
wire        [0:2]       GLBCluster_psum_data_in_valid;
wire signed [0:2][20:0] GLBCluster_psum_data_in;
wire        [0:2]       GLBCluster_psum_data_out_ready;
wire        [0:2]       GLBCluster_psum_data_out_valid;
wire signed [0:2][20:0] GLBCluster_psum_data_out;
wire        [0:2]       GLBCluster_psum_write_en;
wire        [0:2]       GLBCluster_psum_write_done;
wire        [0:2]       GLBCluster_psum_read_out_en;
wire        [0:2]       GLBCluster_psum_read_en;


// router Cluster connection

// [Refactor 2nd-stage] router interface array-ified (script-gen, equiv to flat wires)
wire        [0:2][0:2]       iact_GLB_address_in_ready;
wire        [0:2][0:2]       iact_GLB_address_in_valid;
wire        [0:2][0:2][6:0]  iact_GLB_address_in_bits;
wire        [0:2][0:2]       iact_GLB_data_in_ready;
wire        [0:2][0:2]       iact_GLB_data_in_valid;
wire        [0:2][0:2][11:0] iact_GLB_data_in_bits;
wire        [0:2][0:2]       iact_PE_address_out_ready;
wire        [0:2][0:2]       iact_PE_address_out_valid;
wire        [0:2][0:2][6:0]  iact_PE_address_out_bits;
wire        [0:2][0:2]       iact_PE_data_out_ready;
wire        [0:2][0:2]       iact_PE_data_out_valid;
wire        [0:2][0:2][11:0] iact_PE_data_out_bits;
wire        [0:2]            weight_GLB_address_in_ready;
wire        [0:2]            weight_GLB_address_in_valid;
wire        [0:2][7:0]       weight_GLB_address_in_bits;
wire        [0:2]            weight_GLB_data_in_ready;
wire        [0:2]            weight_GLB_data_in_valid;
wire        [0:2][12:0]      weight_GLB_data_in_bits;
wire        [0:2]            weight_PE_address_out_valid;
wire        [0:2][7:0]       weight_PE_address_out_bits;
wire        [0:2]            weight_PE_data_out_valid;
wire        [0:2][12:0]      weight_PE_data_out_bits;
wire        [0:2]            psum_PE_in_ready;
wire        [0:2]            psum_GLB_in_ready;
wire        [0:2]            psum_GLB_in_valid;
wire        [0:2]            psum_PE_out_ready;
wire        [0:2]            psum_PE_out_valid;
wire signed [0:2][20:0]      psum_PE_out_bits;
wire        [0:2]            psum_GLB_out_ready;
wire        [0:2]            psum_GLB_out_valid;
wire signed [0:2][20:0]      psum_GLB_out_bits;


// cluster group controller connection
wire  					cg_ctrl_GLB_psum_0_write_en;     
wire  					cg_ctrl_GLB_psum_1_write_en;      
wire  					cg_ctrl_GLB_psum_2_write_en;      
wire  					cg_ctrl_psum_load_en;     
wire  					cg_ctrl_psum_add;                
wire  					idle_wire;				// ctrl 輸出：清 all_cal_fin_reg


// ====================================================================	//
// 						 		Instantiation  							//
// ====================================================================	//
PE_Cluster PE_Cluster_inst (
	// NOTE: router<->PE 埠名交叉(CSC 命名)：PE 的 weight port 實際吃 iact router 輸出、
	//       iact port 實際吃 weight router 輸出；下方直連即反映此交叉。
	// 1. iact 2. weight(no ready) 3. pusm_in/out 4. psum_in_from_south 5. controls
	.clock                   (clock),
	.reset                   (reset),

	// -------------------------- iact -------------------------- //
	.iact_address_in_ready   (PECluster_iact_address_in_ready),
	.iact_address_in_valid   (weight_PE_address_out_valid),
	.iact_address_in         (weight_PE_address_out_bits),

	.iact_data_in_ready      (PECluster_iact_data_in_ready),
	.iact_data_in_valid      (weight_PE_data_out_valid),
	.iact_data_in            (weight_PE_data_out_bits),
	
	// -------------------- weight (no ready) --------------------- //
	.weight_address_in_valid (iact_PE_address_out_valid),
	.weight_address_in       (iact_PE_address_out_bits),

	.weight_data_in_valid    (iact_PE_data_out_valid),
	.weight_data_in          (iact_PE_data_out_bits),
	
	// ------------------------ psum_in/out ------------------------ //
	.psum_in_ready           (psum_PE_out_ready),
	.psum_in_valid           (psum_PE_out_valid),
	.psum_in                 (psum_PE_out_bits),

	.psum_out_ready          (psum_PE_in_ready),
	.psum_out_valid          (PECluster_psum_out_valid),
	.psum_out                (PECluster_psum_out),
	
	// --------------------- psum_in_from_south --------------------- //
	.psum_in_from_south_ready(cg_south_psum_in_ready),
	.psum_in_from_south_valid(cg_south_psum_in_valid),
	.psum_in_from_south      (cg_south_psum_in),
	
	// -------------------------- controls -------------------------- //
	.PE_disable              (PE_disable),
	.psum_load_en            (cg_ctrl_psum_load_en),
	.iact_data_in_sel        (PE_cluster_iact_data_in_sel),
	.iact_data_out_sel       (PE_cluster_iact_data_out_sel),
	.psum_data_in_sel        (PE_cluster_psum_data_in_sel),
	.do_en                   (PE_weight_load_en),
	.iact_write_fin_clear    (iact_write_fin_clear),
	.weight_write_fin_clear  (weight_write_fin_clear),
	.all_write_fin           (PECluster_all_write_fin),
	.all_cal_fin             (PECluster_all_cal_fin),
	.PSUM_DEPTH              (PSUM_DEPTH),
	.psum_spad_clear         (psum_spad_clear)
);

GLB_Cluster GLB_Cluster_inst (
	// 1. iact_SRAM_Bank 2. weight 3. psum_SRAM_Bank
	.clock(clock),
	.reset(reset),

	// ============================================================ //
	//                        iact_SRAM_Bank                        //
	// ============================================================ //
	// ------------------------ address_in ------------------------ //
	.iact_SRAM_Bank_address_in_ready(GLB_iact_address_in_ready),
	.iact_SRAM_Bank_address_in_valid(GLB_iact_address_in_valid),
	.iact_SRAM_Bank_address_in(GLB_iact_address_in),

	// ------------------------- data_in ------------------------- //
	.iact_SRAM_Bank_data_in_ready(GLB_iact_data_in_ready),
	.iact_SRAM_Bank_data_in_valid(GLB_iact_data_in_valid),
	.iact_SRAM_Bank_data_in(GLB_iact_data_in),

	// ------------------------ address_out ------------------------ //
	.iact_SRAM_Bank_address_out_ready(iact_GLB_address_in_ready),
	.iact_SRAM_Bank_address_out_valid(iact_GLB_address_in_valid),
	.iact_SRAM_Bank_address_out(iact_GLB_address_in_bits),

	// -------------------------- data_out -------------------------- //
	.iact_SRAM_Bank_data_out_ready(iact_GLB_data_in_ready),
	.iact_SRAM_Bank_data_out_valid(iact_GLB_data_in_valid),
	.iact_SRAM_Bank_data_out(iact_GLB_data_in_bits),

	// ------------------------- controls ? ------------------------- //
	.iact_SRAM_Bank_write_en(GLBCluster_iact_write_en),
	.iact_SRAM_Bank_write_done(GLBCluster_iact_write_done),
	.iact_SRAM_Bank_read_en(GLBCluster_iact_read_en),
	.iact_SRAM_Bank_read_addr(GLB_iact_read_addr),
	.iact_SRAM_Bank_read_done(GLBCluster_iact_read_done),


	// ============================================================ //
	//                             weight                           //
	// ============================================================ //
	// ------------------------ address_in ------------------------ //
	.weight_address_in_ready(GLB_weight_address_in_ready),
	.weight_address_in_valid(GLB_weight_address_in_valid),
	.weight_address_in(GLB_weight_address_in),

	// ------------------------ data_in ------------------------ //
	.weight_data_in_ready(GLB_weight_data_in_ready),
	.weight_data_in_valid(GLB_weight_data_in_valid),
	.weight_data_in(GLB_weight_data_in),

	// ------------------------ address_out ------------------------ //
	.weight_address_out_ready(weight_GLB_address_in_ready),
	.weight_address_out_valid(weight_GLB_address_in_valid),
	.weight_address_out(weight_GLB_address_in_bits),

	// ------------------------ data_out ------------------------ //
	.weight_data_out_ready(weight_GLB_data_in_ready),
	.weight_data_out_valid(weight_GLB_data_in_valid),
	.weight_data_out(weight_GLB_data_in_bits),


	// ============================================================ //
	//                        psum_SRAM_Bank                        //
	// ============================================================ //
	// data_in
	.psum_SRAM_Bank_data_in_ready(GLBCluster_psum_data_in_ready),
	.psum_SRAM_Bank_data_in_valid(GLBCluster_psum_data_in_valid),
	.psum_SRAM_Bank_data_in(GLBCluster_psum_data_in),

	// data_out
	.psum_SRAM_Bank_data_out_ready(GLBCluster_psum_data_out_ready),
	.psum_SRAM_Bank_data_out_valid(GLBCluster_psum_data_out_valid),
	.psum_SRAM_Bank_data_out(GLBCluster_psum_data_out),

	// write
	.psum_SRAM_Bank_write_en(GLBCluster_psum_write_en),
	.psum_SRAM_Bank_write_done(GLBCluster_psum_write_done),
	.psum_SRAM_Bank_write_addr(GLB_psum_write_addr),

	// read
	.psum_SRAM_Bank_read_en(GLBCluster_psum_read_en),
	.psum_SRAM_Bank_read_out_en(GLBCluster_psum_read_out_en),
	.psum_SRAM_Bank_read_addr(GLB_psum_read_addr),


	// PSUM_DEPTH
	.PSUM_DEPTH(PSUM_DEPTH)
);

Router_Cluster Router_Cluster_inst (
	// 1. select 2. iact 3. weight 4. psum
	// ============================================================ //
	//                            select                            //
	// ============================================================ //
	// iact
	.iact_0_data_in_sel(router_cluster_iact_data_in_sel),
	.iact_0_data_out_sel(router_cluster_iact_data_out_sel),
	.iact_1_data_in_sel(router_cluster_iact_data_in_sel),
	.iact_1_data_out_sel(router_cluster_iact_data_out_sel),
	.iact_2_data_in_sel(router_cluster_iact_data_in_sel),
	.iact_2_data_out_sel(router_cluster_iact_data_out_sel),
	
	// weight
	.weight_0_data_in_sel(router_cluster_weight_data_in_sel),
	.weight_0_data_out_sel(router_cluster_weight_data_out_sel),
	.weight_1_data_in_sel(router_cluster_weight_data_in_sel),
	.weight_1_data_out_sel(router_cluster_weight_data_out_sel),
	.weight_2_data_in_sel(router_cluster_weight_data_in_sel),
	.weight_2_data_out_sel(router_cluster_weight_data_out_sel),
	
	// psum
	.psum_0_data_in_sel(router_cluster_psum_data_in_sel),
	.psum_0_data_out_sel(router_cluster_psum_data_out_sel),
	.psum_1_data_in_sel(router_cluster_psum_data_in_sel),
	.psum_1_data_out_sel(router_cluster_psum_data_out_sel),
	.psum_2_data_in_sel(router_cluster_psum_data_in_sel),
	.psum_2_data_out_sel(router_cluster_psum_data_out_sel),


	// ============================================================ //
	//                              iact                            //
	// ============================================================ //

	// --------------------------- in ---------------------------- //
	// GLB 
	.iact_GLB_address_in_ready(iact_GLB_address_in_ready),
	.iact_GLB_address_in_valid(iact_GLB_address_in_valid),
	.iact_GLB_address_in_bits(iact_GLB_address_in_bits),
	.iact_GLB_data_in_ready(iact_GLB_data_in_ready),
	.iact_GLB_data_in_valid(iact_GLB_data_in_valid),
	.iact_GLB_data_in_bits(iact_GLB_data_in_bits),

	// north
	.iact_north_address_in_ready(iact_north_address_in_ready),
	.iact_north_address_in_valid(iact_north_address_in_valid),
	.iact_north_address_in_bits(iact_north_address_in_bits),
	.iact_north_data_in_ready(iact_north_data_in_ready),
	.iact_north_data_in_valid(iact_north_data_in_valid),
	.iact_north_data_in_bits(iact_north_data_in_bits),

	// south
	.iact_south_address_in_ready(iact_south_address_in_ready),
	.iact_south_address_in_valid(iact_south_address_in_valid),
	.iact_south_address_in_bits(iact_south_address_in_bits),
	.iact_south_data_in_ready(iact_south_data_in_ready),
	.iact_south_data_in_valid(iact_south_data_in_valid),
	.iact_south_data_in_bits(iact_south_data_in_bits),

	// horiz
	.iact_horiz_address_in_ready(iact_horiz_address_in_ready),
	.iact_horiz_address_in_valid(iact_horiz_address_in_valid),
	.iact_horiz_address_in_bits(iact_horiz_address_in_bits),
	.iact_horiz_data_in_ready(iact_horiz_data_in_ready),
	.iact_horiz_data_in_valid(iact_horiz_data_in_valid),
	.iact_horiz_data_in_bits(iact_horiz_data_in_bits),

	// --------------------------- out ---------------------------- //
	// PE
	.iact_PE_address_out_ready(iact_PE_address_out_ready),
	.iact_PE_address_out_valid(iact_PE_address_out_valid),
	.iact_PE_address_out_bits(iact_PE_address_out_bits),
	.iact_PE_data_out_ready(iact_PE_data_out_ready),
	.iact_PE_data_out_valid(iact_PE_data_out_valid),
	.iact_PE_data_out_bits(iact_PE_data_out_bits),

	// north
	.iact_north_address_out_ready(iact_north_address_out_ready),
	.iact_north_address_out_valid(iact_north_address_out_valid),
	.iact_north_address_out_bits(iact_north_address_out_bits),
	.iact_north_data_out_ready(iact_north_data_out_ready),
	.iact_north_data_out_valid(iact_north_data_out_valid),
	.iact_north_data_out_bits(iact_north_data_out_bits),

	// south
	.iact_south_address_out_ready(iact_south_address_out_ready),
	.iact_south_address_out_valid(iact_south_address_out_valid),
	.iact_south_address_out_bits(iact_south_address_out_bits),
	.iact_south_data_out_ready(iact_south_data_out_ready),
	.iact_south_data_out_valid(iact_south_data_out_valid),
	.iact_south_data_out_bits(iact_south_data_out_bits),

	// horiz
	.iact_horiz_address_out_ready(iact_horiz_address_out_ready),
	.iact_horiz_address_out_valid(iact_horiz_address_out_valid),
	.iact_horiz_address_out_bits(iact_horiz_address_out_bits),
	.iact_horiz_data_out_ready(iact_horiz_data_out_ready),
	.iact_horiz_data_out_valid(iact_horiz_data_out_valid),
	.iact_horiz_data_out_bits(iact_horiz_data_out_bits),


	// ============================================================ //
	//                             weight                           //
	// ============================================================ //

	// --------------------------- in ---------------------------- //
	// GLB
	.weight_GLB_address_in_ready(weight_GLB_address_in_ready),
	.weight_GLB_address_in_valid(weight_GLB_address_in_valid),
	.weight_GLB_address_in_bits(weight_GLB_address_in_bits),
	.weight_GLB_data_in_ready(weight_GLB_data_in_ready),
	.weight_GLB_data_in_valid(weight_GLB_data_in_valid),
	.weight_GLB_data_in_bits(weight_GLB_data_in_bits),

	// horiz
	.weight_horiz_address_in_ready(weight_horiz_address_in_ready),
	.weight_horiz_address_in_valid(weight_horiz_address_in_valid),
	.weight_horiz_address_in_bits(weight_horiz_address_in_bits),
	.weight_horiz_data_in_ready(weight_horiz_data_in_ready),
	.weight_horiz_data_in_valid(weight_horiz_data_in_valid),
	.weight_horiz_data_in_bits(weight_horiz_data_in_bits),

	// --------------------------- out ---------------------------- //
	// PE
	.weight_PE_address_out_valid(weight_PE_address_out_valid),
	.weight_PE_address_out_bits(weight_PE_address_out_bits),
	.weight_PE_data_out_valid(weight_PE_data_out_valid),
	.weight_PE_data_out_bits(weight_PE_data_out_bits),

	// horiz
	.weight_horiz_address_out_ready(weight_horiz_address_out_ready),
	.weight_horiz_address_out_valid(weight_horiz_address_out_valid),
	.weight_horiz_address_out_bits(weight_horiz_address_out_bits),
	.weight_horiz_data_out_ready(weight_horiz_data_out_ready),
	.weight_horiz_data_out_valid(weight_horiz_data_out_valid),
	.weight_horiz_data_out_bits(weight_horiz_data_out_bits),


	// ============================================================ //
	//                             psum                             //
	// ============================================================ //

	// --------------------------- in ---------------------------- //
	// PE
	.psum_PE_in_ready(psum_PE_in_ready),
	.psum_PE_in_valid(PECluster_psum_out_valid),
	.psum_PE_in_bits(PECluster_psum_out),

	// GLB
	.psum_GLB_in_ready(psum_GLB_in_ready),
	.psum_GLB_in_valid(psum_GLB_in_valid),
	.psum_GLB_in_bits(GLBCluster_psum_data_out),

	// psum
	.psum_north_in_ready(psum_north_in_ready),
	.psum_north_in_valid(psum_north_in_valid),
	.psum_north_in_bits(psum_north_in_bits),

	// --------------------------- out ---------------------------- //
	// PE
	.psum_PE_out_ready(psum_PE_out_ready),
	.psum_PE_out_valid(psum_PE_out_valid),
	.psum_PE_out_bits(psum_PE_out_bits),

	// GLB
	.psum_GLB_out_ready(psum_GLB_out_ready),
	.psum_GLB_out_valid(psum_GLB_out_valid),
	.psum_GLB_out_bits(psum_GLB_out_bits),

	// psum
	.psum_south_out_ready(psum_south_out_ready),
	.psum_south_out_valid(psum_south_out_valid),
	.psum_south_out_bits(psum_south_out_bits)
);

// NOTE: cg_ctrl_* 中繼層已 inline（port 直連各 net）；僅 psum_load_en/psum_add/
//       GLB_psum_*_write_en 留 cg_ctrl_ wire（多扇出或下游帶邏輯）。
Cluster_Group_Controller Cluster_Group_Controller_inst ( 
	.clock                 		(clock                 	),
	.reset                 		(reset                 	),

	// ============================================================ //
	//                           GLB_psum                           //
	// ============================================================ //
	// write_en
	.GLB_psum_0_write_en   		(cg_ctrl_GLB_psum_0_write_en   	),
	.GLB_psum_1_write_en   		(cg_ctrl_GLB_psum_1_write_en   	),
	.GLB_psum_2_write_en   		(cg_ctrl_GLB_psum_2_write_en   	),

	// write_done
	.GLB_psum_0_write_done 		(GLBCluster_psum_write_done[0] 	),
	.GLB_psum_1_write_done 		(GLBCluster_psum_write_done[1] 	),
	.GLB_psum_2_write_done 		(GLBCluster_psum_write_done[2] 	),

	// read_en
	.GLB_psum_0_read_en    		(GLBCluster_psum_read_en[0]    	),
	.GLB_psum_1_read_en    		(GLBCluster_psum_read_en[1]    	),
	.GLB_psum_2_read_en    		(GLBCluster_psum_read_en[2]    	),
	// ============================================================ //


	// ============================================================ //
	//                           GLB_iact                           //
	// ============================================================ //

	// -------------------------- row 0 --------------------------- //
	// write_en
	.GLB_iact_0_0_write_en   	(GLBCluster_iact_write_en[0][0]  ),
	.GLB_iact_0_1_write_en   	(GLBCluster_iact_write_en[0][1]  ),
	.GLB_iact_0_2_write_en   	(GLBCluster_iact_write_en[0][2]  ),

	// write_done
	.GLB_iact_0_0_write_done 	(GLBCluster_iact_write_done[0][0]),
	.GLB_iact_0_1_write_done 	(GLBCluster_iact_write_done[0][1]),
	.GLB_iact_0_2_write_done 	(GLBCluster_iact_write_done[0][2]),

	// read_en
	.GLB_iact_0_0_read_en    	(GLBCluster_iact_read_en[0][0]   ),
	.GLB_iact_0_1_read_en    	(GLBCluster_iact_read_en[0][1]   ),
	.GLB_iact_0_2_read_en    	(GLBCluster_iact_read_en[0][2]   ),

	// read_done
	.GLB_iact_0_0_read_done  	(GLBCluster_iact_read_done[0][0] ),
	.GLB_iact_0_1_read_done  	(GLBCluster_iact_read_done[0][1] ),
	.GLB_iact_0_2_read_done  	(GLBCluster_iact_read_done[0][2] ),

	// -------------------------- row 1 --------------------------- //
	// write_en
	.GLB_iact_1_0_write_en   	(GLBCluster_iact_write_en[1][0]  ),
	.GLB_iact_1_1_write_en   	(GLBCluster_iact_write_en[1][1]  ),
	.GLB_iact_1_2_write_en   	(GLBCluster_iact_write_en[1][2]  ),

	// write_done
	.GLB_iact_1_0_write_done 	(GLBCluster_iact_write_done[1][0]),
	.GLB_iact_1_1_write_done 	(GLBCluster_iact_write_done[1][1]),
	.GLB_iact_1_2_write_done 	(GLBCluster_iact_write_done[1][2]),

	// read_en
	.GLB_iact_1_0_read_en    	(GLBCluster_iact_read_en[1][0]   ),
	.GLB_iact_1_1_read_en    	(GLBCluster_iact_read_en[1][1]   ),
	.GLB_iact_1_2_read_en    	(GLBCluster_iact_read_en[1][2]   ),

	// read_done
	.GLB_iact_1_0_read_done  	(GLBCluster_iact_read_done[1][0] ),
	.GLB_iact_1_1_read_done  	(GLBCluster_iact_read_done[1][1] ),
	.GLB_iact_1_2_read_done  	(GLBCluster_iact_read_done[1][2] ),

	// -------------------------- row 2 --------------------------- //
	// write en
	.GLB_iact_2_0_write_en   	(GLBCluster_iact_write_en[2][0]  ),
	.GLB_iact_2_1_write_en   	(GLBCluster_iact_write_en[2][1]  ),
	.GLB_iact_2_2_write_en   	(GLBCluster_iact_write_en[2][2]  ),
	
	// write done
	.GLB_iact_2_0_write_done 	(GLBCluster_iact_write_done[2][0]),
	.GLB_iact_2_1_write_done 	(GLBCluster_iact_write_done[2][1]),
	.GLB_iact_2_2_write_done 	(GLBCluster_iact_write_done[2][2]),

	// read en
	.GLB_iact_2_0_read_en    	(GLBCluster_iact_read_en[2][0]   ),
	.GLB_iact_2_1_read_en    	(GLBCluster_iact_read_en[2][1]   ),
	.GLB_iact_2_2_read_en    	(GLBCluster_iact_read_en[2][2]   ),

	// read done
	.GLB_iact_2_0_read_done  	(GLBCluster_iact_read_done[2][0] ),
	.GLB_iact_2_1_read_done  	(GLBCluster_iact_read_done[2][1] ),
	.GLB_iact_2_2_read_done  	(GLBCluster_iact_read_done[2][2] ),
	// ============================================================ //


	// ============================================================ //
	//                          controls ?                          //
	// ============================================================ //
	.PE_load_en         		(PE_weight_load_en          	 ),
	.psum_load_en       		(cg_ctrl_psum_load_en          	 ),
	.src_GLB_load_fin			(src_GLB_load_fin				 ),
	.psum_acc_en				(psum_acc_en					 ),
	.psum_add           		(cg_ctrl_psum_add              	 ),
	.read_psum_en      			(read_psum_en     	  			 ),
	.cg_en             			(cg_en            	  			 ),
	.PE_all_write_fin			(PECluster_all_write_fin	  	 ),
	.cal_fin           			(cal_fin          				 ),
	.idle_wire					(idle_wire						 ),
	.GLB_load_en       			(GLB_iact_load_en      		  	 ),
	.psum_acc_fin				(psum_acc_fin					 )
	// ============================================================ //
);


// ====================================================================	//
// 						 		Parameters  							//
// ====================================================================	//
// psum flow direction
localparam TO_SOU = 1'b0;
localparam TO_PE  = 1'b1;


// ====================================================================	//
// 						 		Registers  								//
// ====================================================================	//
reg all_cal_fin_reg;


// ====================================================================	//
// 						 		Combination  							//
// ====================================================================	//
//=============== CG output ===============//
assign all_cal_fin 						= all_cal_fin_reg;

// GLB psum SRAM Bank output connection
assign GLB_psum_0_data_in_ready 		= (router_cluster_psum_data_out_sel == TO_SOU) ? GLBCluster_psum_data_in_ready[0] : 1'b0; 
assign GLB_psum_1_data_in_ready 		= (router_cluster_psum_data_out_sel == TO_SOU) ? GLBCluster_psum_data_in_ready[1] : 1'b0; 
assign GLB_psum_2_data_in_ready 		= (router_cluster_psum_data_out_sel == TO_SOU) ? GLBCluster_psum_data_in_ready[2] : 1'b0; 
	
assign GLB_psum_0_data_out_valid 		= GLBCluster_psum_data_out_valid[0]; // & (read_psum_en | psum_SRAM_Bank_0_read_out_en); 
assign GLB_psum_1_data_out_valid 		= GLBCluster_psum_data_out_valid[1]; // & (read_psum_en | psum_SRAM_Bank_1_read_out_en); 
assign GLB_psum_2_data_out_valid 		= GLBCluster_psum_data_out_valid[2]; // & (read_psum_en | psum_SRAM_Bank_2_read_out_en);
	
assign GLB_psum_0_data_out 				= GLBCluster_psum_data_out[0];  
assign GLB_psum_1_data_out 				= GLBCluster_psum_data_out[1]; 
assign GLB_psum_2_data_out 				= GLBCluster_psum_data_out[2]; 


// interconnect with vertical cluster group

assign cg_north_psum_out_valid = PECluster_psum_out_valid;
assign cg_north_psum_out       = PECluster_psum_out;

//=============== intra-connection ===============//


// psum 
assign GLBCluster_psum_data_in_valid    	= psum_GLB_out_valid; // (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_valid[0] : GLB_psum_0_data_in_valid;
assign GLBCluster_psum_data_in  		  	= psum_GLB_out_bits;  // (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_bits[0]  : GLB_psum_0_data_in; 
		
assign GLBCluster_psum_data_out_ready[0] 	= (psum_GLB_in_ready[0] & cg_ctrl_psum_add) | (GLB_psum_0_data_out_ready & (read_psum_en | psum_SRAM_Bank_0_read_out_en)); 
assign GLBCluster_psum_data_out_ready[1] 	= (psum_GLB_in_ready[1] & cg_ctrl_psum_add) | (GLB_psum_1_data_out_ready & (read_psum_en | psum_SRAM_Bank_1_read_out_en)); 
assign GLBCluster_psum_data_out_ready[2] 	= (psum_GLB_in_ready[2] & cg_ctrl_psum_add) | (GLB_psum_2_data_out_ready & (read_psum_en | psum_SRAM_Bank_2_read_out_en)); 

// cluster group control
assign GLBCluster_psum_write_en[0]		= cg_ctrl_GLB_psum_0_write_en & GLB_psum_write_en; 
assign GLBCluster_psum_write_en[1] 		= cg_ctrl_GLB_psum_1_write_en & GLB_psum_write_en; 
assign GLBCluster_psum_write_en[2] 		= cg_ctrl_GLB_psum_2_write_en & GLB_psum_write_en;  
assign GLBCluster_psum_read_out_en[0]	= psum_SRAM_Bank_0_read_out_en;
assign GLBCluster_psum_read_out_en[1]	= psum_SRAM_Bank_1_read_out_en;
assign GLBCluster_psum_read_out_en[2]	= psum_SRAM_Bank_2_read_out_en;


//======= router-side glue: iact PE-ready broadcast / psum GLB gating =======//
// iact_ready
assign iact_PE_address_out_ready[0][0] 		= PECluster_iact_address_in_ready[0]; 
assign iact_PE_address_out_ready[0][1] 		= PECluster_iact_address_in_ready[0]; 
assign iact_PE_address_out_ready[0][2] 		= PECluster_iact_address_in_ready[0]; 
assign iact_PE_address_out_ready[1][0] 		= PECluster_iact_address_in_ready[1];
assign iact_PE_address_out_ready[1][1] 		= PECluster_iact_address_in_ready[1];
assign iact_PE_address_out_ready[1][2] 		= PECluster_iact_address_in_ready[1];
assign iact_PE_address_out_ready[2][0] 		= PECluster_iact_address_in_ready[2];
assign iact_PE_address_out_ready[2][1] 		= PECluster_iact_address_in_ready[2];
assign iact_PE_address_out_ready[2][2] 		= PECluster_iact_address_in_ready[2];


assign iact_PE_data_out_ready[0][0] 	= PECluster_iact_data_in_ready[0];
assign iact_PE_data_out_ready[0][1] 	= PECluster_iact_data_in_ready[0];
assign iact_PE_data_out_ready[0][2] 	= PECluster_iact_data_in_ready[0];
assign iact_PE_data_out_ready[1][0] 	= PECluster_iact_data_in_ready[1];
assign iact_PE_data_out_ready[1][1] 	= PECluster_iact_data_in_ready[1];
assign iact_PE_data_out_ready[1][2] 	= PECluster_iact_data_in_ready[1];
assign iact_PE_data_out_ready[2][0] 	= PECluster_iact_data_in_ready[2];
assign iact_PE_data_out_ready[2][1] 	= PECluster_iact_data_in_ready[2];
assign iact_PE_data_out_ready[2][2] 	= PECluster_iact_data_in_ready[2];


// psum router inter-connection
assign psum_GLB_out_ready[0]	= router_cluster_psum_data_out_sel & GLBCluster_psum_data_in_ready[0]; 
assign psum_GLB_out_ready[1]	= router_cluster_psum_data_out_sel & GLBCluster_psum_data_in_ready[1];
assign psum_GLB_out_ready[2]	= router_cluster_psum_data_out_sel & GLBCluster_psum_data_in_ready[2];
			
assign psum_GLB_in_valid[0] 	= GLBCluster_psum_data_out_valid[0] & cg_ctrl_psum_add; 	
assign psum_GLB_in_valid[1] 	= GLBCluster_psum_data_out_valid[1] & cg_ctrl_psum_add; 
assign psum_GLB_in_valid[2] 	= GLBCluster_psum_data_out_valid[2] & cg_ctrl_psum_add; 


// ====================================================================	//
// 						 		Sequential  							//
// ====================================================================	//
always@(posedge clock) begin
	if(reset) begin
		all_cal_fin_reg <= 1'b0;
	end
	else if(idle_wire) begin
		all_cal_fin_reg <= 1'b0;
	end
	else begin
		all_cal_fin_reg <= all_cal_fin_reg | PECluster_all_cal_fin;
	end
end
  
  
endmodule
