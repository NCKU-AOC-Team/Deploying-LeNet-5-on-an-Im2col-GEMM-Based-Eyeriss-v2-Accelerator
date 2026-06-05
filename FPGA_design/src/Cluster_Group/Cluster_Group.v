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
	input  			       	clock,
	input  			       	reset,
	
	// =============== control signals ================ //
	input 			     	PE_cluster_iact_data_in_sel,
	input 			[1:0]	PE_cluster_iact_data_out_sel,
	input 			     	PE_cluster_psum_data_in_sel,
					
	input 			[1:0]	router_cluster_iact_data_in_sel,
	input 			[1:0]	router_cluster_iact_data_out_sel,
	input 			     	router_cluster_weight_data_in_sel,
	input 			     	router_cluster_weight_data_out_sel,
	input 			     	router_cluster_psum_data_in_sel,
	input 			     	router_cluster_psum_data_out_sel,
					
	input 			     	read_psum_en,
	output			     	cal_fin,
	input 			     	cg_en,
	output			     	PE_weight_load_en,
	output			     	GLB_iact_load_en,
	input					src_GLB_load_fin,
	output					all_cal_fin,
	input					psum_acc_en,
	input					psum_acc_fin,
	input					GLB_psum_write_en,
	input					psum_SRAM_Bank_0_read_out_en,
	input					psum_SRAM_Bank_1_read_out_en,
	input					psum_SRAM_Bank_2_read_out_en,
	
	input			[4:0]	PSUM_DEPTH,
	input					psum_spad_clear,
	
	input					iact_write_fin_clear,
	input					weight_write_fin_clear,
	
	// These control signals  are used to disable some PE in PE cluster.
	// It is for physical mapping issue, which causes the decreasing of PE utilization.
	input					PE_0_0_disable,
	input					PE_0_1_disable,
	input					PE_0_2_disable,
	input					PE_1_0_disable,
	input					PE_1_1_disable,
	input					PE_1_2_disable,
	input					PE_2_0_disable,
	input					PE_2_1_disable,
	input					PE_2_2_disable,
				
	input			[9:0]	GLB_iact_read_addr [0:2][0:2],
				
	input			[9:0]	GLB_psum_0_write_addr,
	input			[9:0]	GLB_psum_1_write_addr,
	input			[9:0]	GLB_psum_2_write_addr,
	input			[9:0]	GLB_psum_0_read_addr,
	input			[9:0]	GLB_psum_1_read_addr,
	input			[9:0]	GLB_psum_2_read_addr,
				
	// ================= GLB IO ================== //
	// GLB iact SRAM Bank 0_0
	output 			   		GLB_iact_0_0_address_in_ready,
	input  			   		GLB_iact_0_0_address_in_valid,
	input  			[6:0]  	GLB_iact_address_in [0:2][0:2],
	output 			   		GLB_iact_0_0_data_in_ready,
	input  			   		GLB_iact_0_0_data_in_valid,
	input  			[11:0] 	GLB_iact_0_0_data_in,
	// GLB iact SRAM Bank 0_1
	output 			   		GLB_iact_0_1_address_in_ready,
	input  			   		GLB_iact_0_1_address_in_valid,
	output 			   		GLB_iact_0_1_data_in_ready,
	input  			   		GLB_iact_0_1_data_in_valid,
	input  			[11:0] 	GLB_iact_0_1_data_in,
	// GLB iact SRAM Bank 0_2
	output 			       	GLB_iact_0_2_address_in_ready,
	input  			       	GLB_iact_0_2_address_in_valid,
	output 			       	GLB_iact_0_2_data_in_ready,
	input  			       	GLB_iact_0_2_data_in_valid,
	input  			[11:0] 	GLB_iact_0_2_data_in,
	// GLB iact SRAM Bank 1_0
	output 			       	GLB_iact_1_0_address_in_ready,
	input  			       	GLB_iact_1_0_address_in_valid,
	output 			       	GLB_iact_1_0_data_in_ready,
	input  			       	GLB_iact_1_0_data_in_valid,
	input  			[11:0] 	GLB_iact_1_0_data_in,	
	// GLB iact SRAM Bank 1_1
	output 			       	GLB_iact_1_1_address_in_ready,
	input  			       	GLB_iact_1_1_address_in_valid,
	output 			       	GLB_iact_1_1_data_in_ready,
	input  			       	GLB_iact_1_1_data_in_valid,
	input  			[11:0] 	GLB_iact_1_1_data_in,
	// GLB iact SRAM Bank 1_2
	output 			       	GLB_iact_1_2_address_in_ready,
	input  			       	GLB_iact_1_2_address_in_valid,
	output 			       	GLB_iact_1_2_data_in_ready,
	input  			       	GLB_iact_1_2_data_in_valid,
	input  			[11:0] 	GLB_iact_1_2_data_in,
	// GLB iact SRAM Bank 2_0
	output 			       	GLB_iact_2_0_address_in_ready,
	input  			       	GLB_iact_2_0_address_in_valid,
	output 			       	GLB_iact_2_0_data_in_ready,
	input  			       	GLB_iact_2_0_data_in_valid,
	input  			[11:0] 	GLB_iact_2_0_data_in,
	// GLB iact SRAM Bank 2_1
	output 			       	GLB_iact_2_1_address_in_ready,
	input  			       	GLB_iact_2_1_address_in_valid,
	output 			       	GLB_iact_2_1_data_in_ready,
	input  			       	GLB_iact_2_1_data_in_valid,
	input  			[11:0] 	GLB_iact_2_1_data_in,
	// GLB iact SRAM Bank 2_2
	output 			       	GLB_iact_2_2_address_in_ready,
	input  			       	GLB_iact_2_2_address_in_valid,
	output 			       	GLB_iact_2_2_data_in_ready,
	input  			       	GLB_iact_2_2_data_in_valid,
	input  			[11:0] 	GLB_iact_2_2_data_in,
				
	// GLB weight routing 0
	output 			       	GLB_weight_0_address_in_ready,
	input  			       	GLB_weight_0_address_in_valid,
	input  			[7:0]  	GLB_weight_0_address_in,
	output 			       	GLB_weight_0_data_in_ready,
	input  			       	GLB_weight_0_data_in_valid,
	input  			[12:0] 	GLB_weight_0_data_in,
	// GLB weight routing 1
	output 			       	GLB_weight_1_address_in_ready,
	input  			       	GLB_weight_1_address_in_valid,
	input  			[7:0]  	GLB_weight_1_address_in,
	output 			       	GLB_weight_1_data_in_ready,
	input  			       	GLB_weight_1_data_in_valid,
	input  			[12:0] 	GLB_weight_1_data_in,
	// GLB weight routing 2
	output 			       	GLB_weight_2_address_in_ready,
	input  			       	GLB_weight_2_address_in_valid,
	input  			[7:0]  	GLB_weight_2_address_in,
	output 			       	GLB_weight_2_data_in_ready,
	input  			       	GLB_weight_2_data_in_valid,
	input  			[12:0] 	GLB_weight_2_data_in,
				
	// GLB psum SRAM Bank 0
	output 			       	GLB_psum_0_data_in_ready,
	input  			       	GLB_psum_0_data_in_valid,
	input 	signed 	[20:0] 	GLB_psum_0_data_in,
	input  			       	GLB_psum_0_data_out_ready,
	output 			       	GLB_psum_0_data_out_valid,
	output 	signed 	[20:0] 	GLB_psum_0_data_out,
	// GLB psum SRAM Bank 1
	output 			       	GLB_psum_1_data_in_ready,
	input  			       	GLB_psum_1_data_in_valid,
	input 	signed 	[20:0] 	GLB_psum_1_data_in,
	input  			       	GLB_psum_1_data_out_ready,
	output 			       	GLB_psum_1_data_out_valid,
	output 	signed 	[20:0] 	GLB_psum_1_data_out,
	// GLB psum SRAM Bank 2
	output 	   				GLB_psum_2_data_in_ready,
	input  	   				GLB_psum_2_data_in_valid,
	input 	signed 	[20:0] 	GLB_psum_2_data_in,
	input  	   				GLB_psum_2_data_out_ready,
	output 	   				GLB_psum_2_data_out_valid,
	output 	signed 	[20:0] 	GLB_psum_2_data_out,
				
	// ================== router IO ================== //
	// iact router 0_0
	output 			       	router_iact_0_0_north_address_in_ready,
	input  			       	router_iact_0_0_north_address_in_valid,
	input  			[6:0]  	router_iact_0_0_north_address_in,
	output 			       	router_iact_0_0_north_data_in_ready,
	input  			       	router_iact_0_0_north_data_in_valid,
	input  			[11:0] 	router_iact_0_0_north_data_in,
	output 			       	router_iact_0_0_south_address_in_ready,
	input  			       	router_iact_0_0_south_address_in_valid,
	input  			[6:0]  	router_iact_0_0_south_address_in,
	output 			       	router_iact_0_0_south_data_in_ready,
	input  			       	router_iact_0_0_south_data_in_valid,
	input  			[11:0] 	router_iact_0_0_south_data_in,
	output 			       	router_iact_0_0_horiz_address_in_ready,
	input  			       	router_iact_0_0_horiz_address_in_valid,
	input  			[6:0]  	router_iact_0_0_horiz_address_in,
	output 			       	router_iact_0_0_horiz_data_in_ready,
	input  			       	router_iact_0_0_horiz_data_in_valid,
	input  			[11:0] 	router_iact_0_0_horiz_data_in,
	input  			       	router_iact_0_0_north_address_out_ready,	
	output 			       	router_iact_0_0_north_address_out_valid,
	output 			[6:0]  	router_iact_0_0_north_address_out,
	input  			       	router_iact_0_0_north_data_out_ready,
	output 			       	router_iact_0_0_north_data_out_valid,
	output 			[11:0] 	router_iact_0_0_north_data_out,
	input  			       	router_iact_0_0_south_address_out_ready,
	output 			       	router_iact_0_0_south_address_out_valid,
	output 			[6:0]  	router_iact_0_0_south_address_out,
	input  			       	router_iact_0_0_south_data_out_ready,
	output 			       	router_iact_0_0_south_data_out_valid,
	output 			[11:0] 	router_iact_0_0_south_data_out,
	input  			       	router_iact_0_0_horiz_address_out_ready,
	output 			       	router_iact_0_0_horiz_address_out_valid,
	output 			[6:0]  	router_iact_0_0_horiz_address_out,
	input  			       	router_iact_0_0_horiz_data_out_ready,
	output 			       	router_iact_0_0_horiz_data_out_valid,
	output 			[11:0] 	router_iact_0_0_horiz_data_out,
	// iact router 0_1
	output 			       	router_iact_0_1_north_address_in_ready,
	input  			       	router_iact_0_1_north_address_in_valid,
	input  			[6:0]  	router_iact_0_1_north_address_in,
	output 			       	router_iact_0_1_north_data_in_ready,
	input  			       	router_iact_0_1_north_data_in_valid,
	input  			[11:0] 	router_iact_0_1_north_data_in,
	output 			       	router_iact_0_1_south_address_in_ready,
	input  			       	router_iact_0_1_south_address_in_valid,
	input  			[6:0]  	router_iact_0_1_south_address_in,
	output 			       	router_iact_0_1_south_data_in_ready,
	input  			       	router_iact_0_1_south_data_in_valid,
	input  			[11:0] 	router_iact_0_1_south_data_in,
	output 			       	router_iact_0_1_horiz_address_in_ready,
	input  			       	router_iact_0_1_horiz_address_in_valid,
	input  			[6:0]  	router_iact_0_1_horiz_address_in,
	output 			       	router_iact_0_1_horiz_data_in_ready,
	input  			       	router_iact_0_1_horiz_data_in_valid,
	input  			[11:0] 	router_iact_0_1_horiz_data_in,
	input  			       	router_iact_0_1_north_address_out_ready,	
	output 			       	router_iact_0_1_north_address_out_valid,
	output 			[6:0]  	router_iact_0_1_north_address_out,
	input  			       	router_iact_0_1_north_data_out_ready,
	output 			       	router_iact_0_1_north_data_out_valid,
	output 			[11:0] 	router_iact_0_1_north_data_out,
	input  			       	router_iact_0_1_south_address_out_ready,
	output 			       	router_iact_0_1_south_address_out_valid,
	output 			[6:0]  	router_iact_0_1_south_address_out,
	input  			       	router_iact_0_1_south_data_out_ready,
	output 			       	router_iact_0_1_south_data_out_valid,
	output 			[11:0] 	router_iact_0_1_south_data_out,
	input  			       	router_iact_0_1_horiz_address_out_ready,
	output 			       	router_iact_0_1_horiz_address_out_valid,
	output 			[6:0]  	router_iact_0_1_horiz_address_out,
	input  			       	router_iact_0_1_horiz_data_out_ready,
	output 			       	router_iact_0_1_horiz_data_out_valid,
	output 			[11:0] 	router_iact_0_1_horiz_data_out,
	// iact	router 0_2
	output 			       	router_iact_0_2_north_address_in_ready,
	input  			       	router_iact_0_2_north_address_in_valid,
	input  			[6:0]  	router_iact_0_2_north_address_in,
	output 			       	router_iact_0_2_north_data_in_ready,
	input  			       	router_iact_0_2_north_data_in_valid,
	input  			[11:0] 	router_iact_0_2_north_data_in,
	output 			       	router_iact_0_2_south_address_in_ready,
	input  			       	router_iact_0_2_south_address_in_valid,
	input  			[6:0]  	router_iact_0_2_south_address_in,
	output 			       	router_iact_0_2_south_data_in_ready,
	input  			       	router_iact_0_2_south_data_in_valid,
	input  			[11:0] 	router_iact_0_2_south_data_in,
	output 			       	router_iact_0_2_horiz_address_in_ready,
	input  			       	router_iact_0_2_horiz_address_in_valid,
	input  			[6:0]  	router_iact_0_2_horiz_address_in,
	output 			       	router_iact_0_2_horiz_data_in_ready,
	input  			       	router_iact_0_2_horiz_data_in_valid,
	input  			[11:0] 	router_iact_0_2_horiz_data_in,
	input  			       	router_iact_0_2_north_address_out_ready,	
	output 			       	router_iact_0_2_north_address_out_valid,
	output 			[6:0]  	router_iact_0_2_north_address_out,
	input  			       	router_iact_0_2_north_data_out_ready,
	output 			       	router_iact_0_2_north_data_out_valid,
	output 			[11:0] 	router_iact_0_2_north_data_out,
	input  			       	router_iact_0_2_south_address_out_ready,
	output 			       	router_iact_0_2_south_address_out_valid,
	output 			[6:0]  	router_iact_0_2_south_address_out,
	input  			       	router_iact_0_2_south_data_out_ready,
	output 			       	router_iact_0_2_south_data_out_valid,
	output 			[11:0] 	router_iact_0_2_south_data_out,
	input  			       	router_iact_0_2_horiz_address_out_ready,
	output 			       	router_iact_0_2_horiz_address_out_valid,
	output 			[6:0]  	router_iact_0_2_horiz_address_out,
	input  			       	router_iact_0_2_horiz_data_out_ready,
	output 			       	router_iact_0_2_horiz_data_out_valid,
	output 			[11:0] 	router_iact_0_2_horiz_data_out,
	// iact	router 1_0
	output 			       	router_iact_1_0_north_address_in_ready,
	input  			       	router_iact_1_0_north_address_in_valid,
	input  			[6:0]  	router_iact_1_0_north_address_in,
	output 			       	router_iact_1_0_north_data_in_ready,
	input  			       	router_iact_1_0_north_data_in_valid,
	input  			[11:0] 	router_iact_1_0_north_data_in,
	output 			       	router_iact_1_0_south_address_in_ready,
	input  			       	router_iact_1_0_south_address_in_valid,
	input  			[6:0]  	router_iact_1_0_south_address_in,
	output 			       	router_iact_1_0_south_data_in_ready,
	input  			       	router_iact_1_0_south_data_in_valid,
	input  			[11:0] 	router_iact_1_0_south_data_in,
	output 			       	router_iact_1_0_horiz_address_in_ready,
	input  			       	router_iact_1_0_horiz_address_in_valid,
	input  			[6:0]  	router_iact_1_0_horiz_address_in,
	output 			       	router_iact_1_0_horiz_data_in_ready,
	input  			       	router_iact_1_0_horiz_data_in_valid,
	input  			[11:0] 	router_iact_1_0_horiz_data_in,
	input  			       	router_iact_1_0_north_address_out_ready,	
	output 			       	router_iact_1_0_north_address_out_valid,
	output 			[6:0]  	router_iact_1_0_north_address_out,
	input  			       	router_iact_1_0_north_data_out_ready,
	output 			       	router_iact_1_0_north_data_out_valid,
	output 			[11:0] 	router_iact_1_0_north_data_out,
	input  			       	router_iact_1_0_south_address_out_ready,
	output 			       	router_iact_1_0_south_address_out_valid,
	output 			[6:0]  	router_iact_1_0_south_address_out,
	input  			       	router_iact_1_0_south_data_out_ready,
	output 			       	router_iact_1_0_south_data_out_valid,
	output 			[11:0] 	router_iact_1_0_south_data_out,
	input  			       	router_iact_1_0_horiz_address_out_ready,
	output 			       	router_iact_1_0_horiz_address_out_valid,
	output 			[6:0]  	router_iact_1_0_horiz_address_out,
	input  			       	router_iact_1_0_horiz_data_out_ready,
	output 			       	router_iact_1_0_horiz_data_out_valid,
	output 			[11:0] 	router_iact_1_0_horiz_data_out,
	// iact	router	1_1        
	output 			       	router_iact_1_1_north_address_in_ready,
	input  			       	router_iact_1_1_north_address_in_valid,
	input  			[6:0]  	router_iact_1_1_north_address_in,
	output 			       	router_iact_1_1_north_data_in_ready,
	input  			       	router_iact_1_1_north_data_in_valid,
	input  			[11:0] 	router_iact_1_1_north_data_in,
	output 			       	router_iact_1_1_south_address_in_ready,
	input  			       	router_iact_1_1_south_address_in_valid,
	input  			[6:0]  	router_iact_1_1_south_address_in,
	output 			       	router_iact_1_1_south_data_in_ready,
	input  			       	router_iact_1_1_south_data_in_valid,
	input  			[11:0] 	router_iact_1_1_south_data_in,
	output 			       	router_iact_1_1_horiz_address_in_ready,
	input  			       	router_iact_1_1_horiz_address_in_valid,
	input  			[6:0]  	router_iact_1_1_horiz_address_in,
	output 			       	router_iact_1_1_horiz_data_in_ready,
	input  			       	router_iact_1_1_horiz_data_in_valid,
	input  			[11:0] 	router_iact_1_1_horiz_data_in,
	input  			       	router_iact_1_1_north_address_out_ready,	
	output 			       	router_iact_1_1_north_address_out_valid,
	output 			[6:0]  	router_iact_1_1_north_address_out,
	input  			       	router_iact_1_1_north_data_out_ready,
	output 			       	router_iact_1_1_north_data_out_valid,
	output 			[11:0] 	router_iact_1_1_north_data_out,
	input  			       	router_iact_1_1_south_address_out_ready,
	output 			       	router_iact_1_1_south_address_out_valid,
	output 			[6:0]  	router_iact_1_1_south_address_out,
	input  			       	router_iact_1_1_south_data_out_ready,
	output 			       	router_iact_1_1_south_data_out_valid,
	output 			[11:0] 	router_iact_1_1_south_data_out,
	input  			       	router_iact_1_1_horiz_address_out_ready,
	output 			       	router_iact_1_1_horiz_address_out_valid,
	output 			[6:0]  	router_iact_1_1_horiz_address_out,
	input  			       	router_iact_1_1_horiz_data_out_ready,
	output 			       	router_iact_1_1_horiz_data_out_valid,
	output 			[11:0] 	router_iact_1_1_horiz_data_out,
	// iact	router 1_2        
	output 			       	router_iact_1_2_north_address_in_ready,
	input  			       	router_iact_1_2_north_address_in_valid,
	input  			[6:0]  	router_iact_1_2_north_address_in,
	output 			       	router_iact_1_2_north_data_in_ready,
	input  			       	router_iact_1_2_north_data_in_valid,
	input  			[11:0] 	router_iact_1_2_north_data_in,
	output 			       	router_iact_1_2_south_address_in_ready,
	input  			       	router_iact_1_2_south_address_in_valid,
	input  			[6:0]  	router_iact_1_2_south_address_in,
	output 			       	router_iact_1_2_south_data_in_ready,
	input  			       	router_iact_1_2_south_data_in_valid,
	input  			[11:0] 	router_iact_1_2_south_data_in,
	output 			       	router_iact_1_2_horiz_address_in_ready,
	input  			       	router_iact_1_2_horiz_address_in_valid,
	input  			[6:0]  	router_iact_1_2_horiz_address_in,
	output 			       	router_iact_1_2_horiz_data_in_ready,
	input  			       	router_iact_1_2_horiz_data_in_valid,
	input  			[11:0] 	router_iact_1_2_horiz_data_in,
	input  			       	router_iact_1_2_north_address_out_ready,	
	output 			       	router_iact_1_2_north_address_out_valid,
	output 			[6:0]  	router_iact_1_2_north_address_out,
	input  			       	router_iact_1_2_north_data_out_ready,
	output 			       	router_iact_1_2_north_data_out_valid,
	output 			[11:0] 	router_iact_1_2_north_data_out,
	input  			       	router_iact_1_2_south_address_out_ready,
	output 			       	router_iact_1_2_south_address_out_valid,
	output 			[6:0]  	router_iact_1_2_south_address_out,
	input  			       	router_iact_1_2_south_data_out_ready,
	output 			       	router_iact_1_2_south_data_out_valid,
	output 			[11:0] 	router_iact_1_2_south_data_out,
	input  			       	router_iact_1_2_horiz_address_out_ready,
	output 			       	router_iact_1_2_horiz_address_out_valid,
	output 			[6:0]  	router_iact_1_2_horiz_address_out,
	input  			       	router_iact_1_2_horiz_data_out_ready,
	output 			       	router_iact_1_2_horiz_data_out_valid,
	output 			[11:0] 	router_iact_1_2_horiz_data_out,
	// iact	router 2_0
	output 			       	router_iact_2_0_north_address_in_ready,
	input  			       	router_iact_2_0_north_address_in_valid,
	input  			[6:0]  	router_iact_2_0_north_address_in,
	output 			       	router_iact_2_0_north_data_in_ready,
	input  			       	router_iact_2_0_north_data_in_valid,
	input  			[11:0] 	router_iact_2_0_north_data_in,
	output 			       	router_iact_2_0_south_address_in_ready,
	input  			       	router_iact_2_0_south_address_in_valid,
	input  			[6:0]  	router_iact_2_0_south_address_in,
	output 			       	router_iact_2_0_south_data_in_ready,
	input  			       	router_iact_2_0_south_data_in_valid,
	input  			[11:0] 	router_iact_2_0_south_data_in,
	output 			       	router_iact_2_0_horiz_address_in_ready,
	input  			       	router_iact_2_0_horiz_address_in_valid,
	input  			[6:0]  	router_iact_2_0_horiz_address_in,
	output 			       	router_iact_2_0_horiz_data_in_ready,
	input  			       	router_iact_2_0_horiz_data_in_valid,
	input  			[11:0] 	router_iact_2_0_horiz_data_in,
	input  			       	router_iact_2_0_north_address_out_ready,	
	output 			       	router_iact_2_0_north_address_out_valid,
	output 			[6:0]  	router_iact_2_0_north_address_out,
	input  			       	router_iact_2_0_north_data_out_ready,
	output 			       	router_iact_2_0_north_data_out_valid,
	output 			[11:0] 	router_iact_2_0_north_data_out,
	input  			       	router_iact_2_0_south_address_out_ready,
	output 			       	router_iact_2_0_south_address_out_valid,
	output 			[6:0]  	router_iact_2_0_south_address_out,
	input  			       	router_iact_2_0_south_data_out_ready,
	output 			       	router_iact_2_0_south_data_out_valid,
	output 			[11:0] 	router_iact_2_0_south_data_out,
	input  			       	router_iact_2_0_horiz_address_out_ready,
	output 			       	router_iact_2_0_horiz_address_out_valid,
	output 			[6:0]  	router_iact_2_0_horiz_address_out,
	input  			       	router_iact_2_0_horiz_data_out_ready,
	output 			       	router_iact_2_0_horiz_data_out_valid,
	output 			[11:0] 	router_iact_2_0_horiz_data_out,	
	// iact	router 2_1        
	output 			       	router_iact_2_1_north_address_in_ready,
	input  			       	router_iact_2_1_north_address_in_valid,
	input  			[6:0]  	router_iact_2_1_north_address_in,
	output 			       	router_iact_2_1_north_data_in_ready,
	input  			       	router_iact_2_1_north_data_in_valid,
	input  			[11:0] 	router_iact_2_1_north_data_in,
	output 			       	router_iact_2_1_south_address_in_ready,
	input  			       	router_iact_2_1_south_address_in_valid,
	input  			[6:0]  	router_iact_2_1_south_address_in,
	output 			       	router_iact_2_1_south_data_in_ready,
	input  			       	router_iact_2_1_south_data_in_valid,
	input  			[11:0] 	router_iact_2_1_south_data_in,
	output 			       	router_iact_2_1_horiz_address_in_ready,
	input  			       	router_iact_2_1_horiz_address_in_valid,
	input  			[6:0]  	router_iact_2_1_horiz_address_in,
	output 			       	router_iact_2_1_horiz_data_in_ready,
	input  			       	router_iact_2_1_horiz_data_in_valid,
	input  			[11:0] 	router_iact_2_1_horiz_data_in,
	input  			       	router_iact_2_1_north_address_out_ready,	
	output 			       	router_iact_2_1_north_address_out_valid,
	output 			[6:0]  	router_iact_2_1_north_address_out,
	input  			       	router_iact_2_1_north_data_out_ready,
	output 			       	router_iact_2_1_north_data_out_valid,
	output 			[11:0] 	router_iact_2_1_north_data_out,
	input  			       	router_iact_2_1_south_address_out_ready,
	output 			       	router_iact_2_1_south_address_out_valid,
	output 			[6:0]  	router_iact_2_1_south_address_out,
	input  			       	router_iact_2_1_south_data_out_ready,
	output 			       	router_iact_2_1_south_data_out_valid,
	output 			[11:0] 	router_iact_2_1_south_data_out,
	input  			       	router_iact_2_1_horiz_address_out_ready,
	output 			       	router_iact_2_1_horiz_address_out_valid,
	output 			[6:0]  	router_iact_2_1_horiz_address_out,
	input  			       	router_iact_2_1_horiz_data_out_ready,
	output 			       	router_iact_2_1_horiz_data_out_valid,
	output 			[11:0] 	router_iact_2_1_horiz_data_out,
	// iact	router 2_2        
	output 			       	router_iact_2_2_north_address_in_ready,
	input  			       	router_iact_2_2_north_address_in_valid,
	input  			[6:0]  	router_iact_2_2_north_address_in,
	output 			       	router_iact_2_2_north_data_in_ready,
	input  			       	router_iact_2_2_north_data_in_valid,
	input  			[11:0] 	router_iact_2_2_north_data_in,
	output 			       	router_iact_2_2_south_address_in_ready,
	input  			       	router_iact_2_2_south_address_in_valid,
	input  			[6:0]  	router_iact_2_2_south_address_in,
	output 			       	router_iact_2_2_south_data_in_ready,
	input  			       	router_iact_2_2_south_data_in_valid,
	input  			[11:0] 	router_iact_2_2_south_data_in,
	output 			       	router_iact_2_2_horiz_address_in_ready,
	input  			       	router_iact_2_2_horiz_address_in_valid,
	input  			[6:0]  	router_iact_2_2_horiz_address_in,
	output 			       	router_iact_2_2_horiz_data_in_ready,
	input  			       	router_iact_2_2_horiz_data_in_valid,
	input  			[11:0] 	router_iact_2_2_horiz_data_in,
	input  			       	router_iact_2_2_north_address_out_ready,	
	output 			       	router_iact_2_2_north_address_out_valid,
	output 			[6:0]  	router_iact_2_2_north_address_out,
	input  			       	router_iact_2_2_north_data_out_ready,
	output 			       	router_iact_2_2_north_data_out_valid,
	output 			[11:0] 	router_iact_2_2_north_data_out,
	input  			       	router_iact_2_2_south_address_out_ready,
	output 			       	router_iact_2_2_south_address_out_valid,
	output 			[6:0]  	router_iact_2_2_south_address_out,
	input  			       	router_iact_2_2_south_data_out_ready,
	output 			       	router_iact_2_2_south_data_out_valid,
	output 			[11:0] 	router_iact_2_2_south_data_out,
	input  			       	router_iact_2_2_horiz_address_out_ready,
	output 			       	router_iact_2_2_horiz_address_out_valid,
	output 			[6:0]  	router_iact_2_2_horiz_address_out,
	input  			       	router_iact_2_2_horiz_data_out_ready,
	output 			       	router_iact_2_2_horiz_data_out_valid,
	output 			[11:0] 	router_iact_2_2_horiz_data_out,
					
	// weight router 0
	output 			       	router_weight_0_horiz_address_in_ready,
	input  			       	router_weight_0_horiz_address_in_valid,
	input  			[7:0]  	router_weight_0_horiz_address_in,
	output 			       	router_weight_0_horiz_data_in_ready,
	input  			       	router_weight_0_horiz_data_in_valid,
	input  			[12:0] 	router_weight_0_horiz_data_in,
	input  			       	router_weight_0_horiz_address_out_ready,
	output 			       	router_weight_0_horiz_address_out_valid,
	output 			[7:0]  	router_weight_0_horiz_address_out,
	input  			       	router_weight_0_horiz_data_out_ready,
	output 			       	router_weight_0_horiz_data_out_valid,
	output 			[12:0] 	router_weight_0_horiz_data_out,
	// weight router 1
	output 			       	router_weight_1_horiz_address_in_ready,
	input  			       	router_weight_1_horiz_address_in_valid,
	input  			[7:0]  	router_weight_1_horiz_address_in,
	output 			       	router_weight_1_horiz_data_in_ready,
	input  			       	router_weight_1_horiz_data_in_valid,
	input  			[12:0] 	router_weight_1_horiz_data_in,
	input  			       	router_weight_1_horiz_address_out_ready,
	output 			       	router_weight_1_horiz_address_out_valid,
	output 			[7:0]  	router_weight_1_horiz_address_out,
	input  			       	router_weight_1_horiz_data_out_ready,
	output 			       	router_weight_1_horiz_data_out_valid,
	output 			[12:0] 	router_weight_1_horiz_data_out,
	// weight router 2
	output    			    router_weight_2_horiz_address_in_ready,
	input  			       	router_weight_2_horiz_address_in_valid,
	input  			[7:0]  	router_weight_2_horiz_address_in,
	output 			       	router_weight_2_horiz_data_in_ready,
	input  			       	router_weight_2_horiz_data_in_valid,
	input  			[12:0] 	router_weight_2_horiz_data_in,
	input  			       	router_weight_2_horiz_address_out_ready,
	output 			       	router_weight_2_horiz_address_out_valid,
	output 			[7:0]  	router_weight_2_horiz_address_out,
	input  			       	router_weight_2_horiz_data_out_ready,
	output 			       	router_weight_2_horiz_data_out_valid,
	output 			[12:0] 	router_weight_2_horiz_data_out,
	
	// psum router 0
	output        			router_psum_0_north_in_ready,
	input         			router_psum_0_north_in_valid,
	input	signed	[20:0] 	router_psum_0_north_in,
	input         			router_psum_0_south_out_ready,
	output        			router_psum_0_south_out_valid,
	output	signed	[20:0] 	router_psum_0_south_out,
	// psum router 1
	output        			router_psum_1_north_in_ready,
	input         			router_psum_1_north_in_valid,
	input	signed	[20:0] 	router_psum_1_north_in,
	input         			router_psum_1_south_out_ready,
	output        			router_psum_1_south_out_valid,
	output	signed	[20:0] 	router_psum_1_south_out,
	// psum router 2
	output        			router_psum_2_north_in_ready,
	input         			router_psum_2_north_in_valid,
	input	signed	[20:0] 	router_psum_2_north_in,
	input         			router_psum_2_south_out_ready,
	output        			router_psum_2_south_out_valid,
	output	signed	[20:0] 	router_psum_2_south_out,
	
	// psum veritcal flow (interconnect with vertical cluster group)
	output        			cg_south_psum_0_in_ready,
	input         			cg_south_psum_0_in_valid,
	input	signed	[20:0] 	cg_south_psum_0_in,
	output        			cg_south_psum_1_in_ready,
	input         			cg_south_psum_1_in_valid,
	input	signed	[20:0] 	cg_south_psum_1_in,
	output        			cg_south_psum_2_in_ready,
	input         			cg_south_psum_2_in_valid,
	input	signed	[20:0] 	cg_south_psum_2_in,
	input         			cg_north_psum_0_out_ready,
	output        			cg_north_psum_0_out_valid,
	output	signed	[20:0] 	cg_north_psum_0_out,
	input         			cg_north_psum_1_out_ready,
	output        			cg_north_psum_1_out_valid,
	output	signed	[20:0] 	cg_north_psum_1_out,
	input         			cg_north_psum_2_out_ready,
	output        			cg_north_psum_2_out_valid,
	output	signed	[20:0] 	cg_north_psum_2_out
);


// ====================================================================	//
// 						 		Wires  									//
// ====================================================================	//
// PE Cluster connection — 只剩「PE 輸出」+「控制(源頭還攤平)」的中繼線；輸入資料已直連 router 輸出(見實例化)
// iact：ready 回手 (per-row [0:2])
wire                 PECluster_iact_address_in_ready [0:2];
wire                 PECluster_iact_data_in_ready    [0:2];
// psum：輸出 + from_south 中繼 (per-column [0:2], signed [20:0])
wire                 PECluster_psum_in_ready [0:2];
wire                 PECluster_psum_out_valid [0:2];
wire signed [20:0]   PECluster_psum_out       [0:2];
wire                 PECluster_psum_in_from_south_ready [0:2];
wire                 PECluster_psum_in_from_south_valid [0:2];
wire signed [20:0]   PECluster_psum_in_from_south       [0:2];
// control
wire                 PECluster_PE_disable [0:2][0:2];
wire                 PECluster_psum_load_en;
wire                 PECluster_iact_data_in_sel;
wire [1:0]           PECluster_iact_data_out_sel;
wire                 PECluster_psum_data_in_sel;
wire                 PECluster_do_en;
wire                 PECluster_iact_write_fin_clear;
wire                 PECluster_weight_write_fin_clear;
wire                 PECluster_all_write_fin;
wire                 PECluster_all_cal_fin;                               

// GLB Cluster connection

// [Refactor 2nd-stage] GLB interface array-ified (script-gen, equiv to flat wires)
wire GLBCluster_clock;
wire GLBCluster_reset;
wire              GLBCluster_iact_address_in_ready [0:2][0:2];
wire              GLBCluster_iact_address_in_valid [0:2][0:2];
wire [6:0]        GLBCluster_iact_address_in [0:2][0:2];
wire              GLBCluster_iact_data_in_ready [0:2][0:2];
wire              GLBCluster_iact_data_in_valid [0:2][0:2];
wire [11:0]       GLBCluster_iact_data_in [0:2][0:2];
wire              GLBCluster_iact_write_en [0:2][0:2];
wire              GLBCluster_iact_write_done [0:2][0:2];
wire              GLBCluster_iact_read_en [0:2][0:2];
wire [9:0]        GLBCluster_iact_read_addr [0:2][0:2];
wire              GLBCluster_iact_read_done [0:2][0:2];
wire              GLBCluster_weight_address_in_ready [0:2];
wire              GLBCluster_weight_address_in_valid [0:2];
wire [7:0]        GLBCluster_weight_address_in [0:2];
wire              GLBCluster_weight_data_in_ready [0:2];
wire              GLBCluster_weight_data_in_valid [0:2];
wire [12:0]       GLBCluster_weight_data_in [0:2];
wire              GLBCluster_weight_address_out_valid [0:2];
wire [7:0]        GLBCluster_weight_address_out [0:2];
wire              GLBCluster_weight_data_out_valid [0:2];
wire [12:0]       GLBCluster_weight_data_out [0:2];
wire              GLBCluster_psum_data_in_ready [0:2];
wire              GLBCluster_psum_data_in_valid [0:2];
wire signed [20:0]       GLBCluster_psum_data_in [0:2];
wire              GLBCluster_psum_data_out_ready [0:2];
wire              GLBCluster_psum_data_out_valid [0:2];
wire signed [20:0]       GLBCluster_psum_data_out [0:2];
wire              GLBCluster_psum_write_en [0:2];
wire [9:0]        GLBCluster_psum_write_addr [0:2];
wire              GLBCluster_psum_write_done [0:2];
wire              GLBCluster_psum_read_out_en [0:2];
wire              GLBCluster_psum_read_en [0:2];
wire [9:0]        GLBCluster_psum_read_addr [0:2];

			
   	

// router Cluster connection
wire			[1:0] 	iact_0_data_in_sel;             
wire			[1:0] 	iact_0_data_out_sel;            
wire			[1:0] 	iact_1_data_in_sel;             
wire			[1:0] 	iact_1_data_out_sel;            
wire			[1:0] 	iact_2_data_in_sel;             
wire			[1:0] 	iact_2_data_out_sel;   
wire			 		weight_0_data_in_sel;           
wire			 		weight_0_data_out_sel;          
wire			 		weight_1_data_in_sel;           
wire			 		weight_1_data_out_sel;          
wire			 		weight_2_data_in_sel;           
wire			 		weight_2_data_out_sel; 
wire				 	psum_0_data_in_sel;             
wire				 	psum_0_data_out_sel;            
wire				 	psum_1_data_in_sel;             
wire				 	psum_1_data_out_sel;            
wire				 	psum_2_data_in_sel;             
wire				 	psum_2_data_out_sel;    
    

// [Refactor 2nd-stage] router interface array-ified (script-gen, equiv to flat wires)
wire               iact_GLB_address_in_ready [0:2][0:2];
wire               iact_GLB_address_in_valid [0:2][0:2];
wire [6:0]         iact_GLB_address_in_bits [0:2][0:2];
wire               iact_GLB_data_in_ready [0:2][0:2];
wire               iact_GLB_data_in_valid [0:2][0:2];
wire [11:0]        iact_GLB_data_in_bits [0:2][0:2];
wire               iact_north_address_in_ready [0:2][0:2];
wire               iact_north_address_in_valid [0:2][0:2];
wire [6:0]         iact_north_address_in_bits [0:2][0:2];
wire               iact_north_data_in_ready [0:2][0:2];
wire               iact_north_data_in_valid [0:2][0:2];
wire [11:0]        iact_north_data_in_bits [0:2][0:2];
wire               iact_south_address_in_ready [0:2][0:2];
wire               iact_south_address_in_valid [0:2][0:2];
wire [6:0]         iact_south_address_in_bits [0:2][0:2];
wire               iact_south_data_in_ready [0:2][0:2];
wire               iact_south_data_in_valid [0:2][0:2];
wire [11:0]        iact_south_data_in_bits [0:2][0:2];
wire               iact_horiz_address_in_ready [0:2][0:2];
wire               iact_horiz_address_in_valid [0:2][0:2];
wire [6:0]         iact_horiz_address_in_bits [0:2][0:2];
wire               iact_horiz_data_in_ready [0:2][0:2];
wire               iact_horiz_data_in_valid [0:2][0:2];
wire [11:0]        iact_horiz_data_in_bits [0:2][0:2];
wire               iact_PE_address_out_ready [0:2][0:2];
wire               iact_PE_address_out_valid [0:2][0:2];
wire [6:0]         iact_PE_address_out_bits [0:2][0:2];
wire               iact_PE_data_out_ready [0:2][0:2];
wire               iact_PE_data_out_valid [0:2][0:2];
wire [11:0]        iact_PE_data_out_bits [0:2][0:2];
wire               iact_north_address_out_ready [0:2][0:2];
wire               iact_north_address_out_valid [0:2][0:2];
wire [6:0]         iact_north_address_out_bits [0:2][0:2];
wire               iact_north_data_out_ready [0:2][0:2];
wire               iact_north_data_out_valid [0:2][0:2];
wire [11:0]        iact_north_data_out_bits [0:2][0:2];
wire               iact_south_address_out_ready [0:2][0:2];
wire               iact_south_address_out_valid [0:2][0:2];
wire [6:0]         iact_south_address_out_bits [0:2][0:2];
wire               iact_south_data_out_ready [0:2][0:2];
wire               iact_south_data_out_valid [0:2][0:2];
wire [11:0]        iact_south_data_out_bits [0:2][0:2];
wire               iact_horiz_address_out_ready [0:2][0:2];
wire               iact_horiz_address_out_valid [0:2][0:2];
wire [6:0]         iact_horiz_address_out_bits [0:2][0:2];
wire               iact_horiz_data_out_ready [0:2][0:2];
wire               iact_horiz_data_out_valid [0:2][0:2];
wire [11:0]        iact_horiz_data_out_bits [0:2][0:2];
wire               weight_GLB_address_in_ready [0:2];
wire               weight_GLB_address_in_valid [0:2];
wire [7:0]         weight_GLB_address_in_bits [0:2];
wire               weight_GLB_data_in_ready [0:2];
wire               weight_GLB_data_in_valid [0:2];
wire [12:0]        weight_GLB_data_in_bits [0:2];
wire               weight_horiz_address_in_ready [0:2];
wire               weight_horiz_address_in_valid [0:2];
wire [7:0]         weight_horiz_address_in_bits [0:2];
wire               weight_horiz_data_in_ready [0:2];
wire               weight_horiz_data_in_valid [0:2];
wire [12:0]        weight_horiz_data_in_bits [0:2];
wire               weight_PE_address_out_valid [0:2];
wire [7:0]         weight_PE_address_out_bits [0:2];
wire               weight_PE_data_out_valid [0:2];
wire [12:0]        weight_PE_data_out_bits [0:2];
wire               weight_horiz_address_out_ready [0:2];
wire               weight_horiz_address_out_valid [0:2];
wire [7:0]         weight_horiz_address_out_bits [0:2];
wire               weight_horiz_data_out_ready [0:2];
wire               weight_horiz_data_out_valid [0:2];
wire [12:0]        weight_horiz_data_out_bits [0:2];
wire               psum_PE_in_ready [0:2];
wire               psum_PE_in_valid [0:2];
wire signed [20:0] psum_PE_in_bits [0:2];
wire               psum_GLB_in_ready [0:2];
wire               psum_GLB_in_valid [0:2];
wire signed [20:0] psum_GLB_in_bits [0:2];
wire               psum_north_in_ready [0:2];
wire               psum_north_in_valid [0:2];
wire signed [20:0] psum_north_in_bits [0:2];
wire               psum_PE_out_ready [0:2];
wire               psum_PE_out_valid [0:2];
wire signed [20:0] psum_PE_out_bits [0:2];
wire               psum_GLB_out_ready [0:2];
wire               psum_GLB_out_valid [0:2];
wire signed [20:0] psum_GLB_out_bits [0:2];
wire               psum_south_out_ready [0:2];
wire               psum_south_out_valid [0:2];
wire signed [20:0] psum_south_out_bits [0:2];

				


// cluster group controller connection
wire   					cg_ctrl_clock;                   
wire   					cg_ctrl_reset;                   
wire  					cg_ctrl_GLB_psum_0_write_en;     
wire   					cg_ctrl_GLB_psum_0_write_done;   
wire   					cg_ctrl_GLB_psum_0_read_en;       
wire  					cg_ctrl_GLB_psum_1_write_en;      
wire   					cg_ctrl_GLB_psum_1_write_done;   
wire   					cg_ctrl_GLB_psum_1_read_en;      
wire  					cg_ctrl_GLB_psum_2_write_en;      
wire   					cg_ctrl_GLB_psum_2_write_done;   
wire   					cg_ctrl_GLB_psum_2_read_en;        
wire  					cg_ctrl_PE_load_en;              
wire  					cg_ctrl_psum_load_en;     
wire					cg_ctrl_src_GLB_load_fin;    
wire					cg_ctrl_psum_acc_en;                
wire  					cg_ctrl_psum_add;                
wire  					cg_ctrl_read_psum_en;        
wire  					cg_ctrl_cg_en;   
wire					cg_ctrl_PE_all_write_fin;            
wire  					cg_ctrl_cal_fin;             
wire					cg_ctrl_idle_wire;
wire  					cg_ctrl_GLB_load_en;    
wire 					cg_ctrl_psum_acc_fin;   


// ====================================================================	//
// 						 		Instantiation  							//
// ====================================================================	//
PE_Cluster PE_Cluster_inst (
	// NOTE: router<->PE 埠名交叉(CSC 命名)：PE 的 weight port 實際吃 iact router 輸出、
	//       iact port 實際吃 weight router 輸出；下方直連即反映此交叉。
	.clock                   (clock),
	.reset                   (reset),
	.iact_address_in_ready   (PECluster_iact_address_in_ready),
	.iact_address_in_valid   (weight_PE_address_out_valid),
	.iact_address_in         (weight_PE_address_out_bits),
	.iact_data_in_ready      (PECluster_iact_data_in_ready),
	.iact_data_in_valid      (weight_PE_data_out_valid),
	.iact_data_in            (weight_PE_data_out_bits),
	.weight_address_in_valid (iact_PE_address_out_valid),
	.weight_address_in       (iact_PE_address_out_bits),
	.weight_data_in_valid    (iact_PE_data_out_valid),
	.weight_data_in          (iact_PE_data_out_bits),
	.psum_in_ready           (PECluster_psum_in_ready),
	.psum_in_valid           (psum_PE_out_valid),
	.psum_in                 (psum_PE_out_bits),
	.psum_out_ready          (psum_PE_in_ready),
	.psum_out_valid          (PECluster_psum_out_valid),
	.psum_out                (PECluster_psum_out),
	.psum_in_from_south_ready(PECluster_psum_in_from_south_ready),
	.psum_in_from_south_valid(PECluster_psum_in_from_south_valid),
	.psum_in_from_south      (PECluster_psum_in_from_south),
	.PE_disable              (PECluster_PE_disable),
	.psum_load_en            (PECluster_psum_load_en),
	.iact_data_in_sel        (PECluster_iact_data_in_sel),
	.iact_data_out_sel       (PECluster_iact_data_out_sel),
	.psum_data_in_sel        (PECluster_psum_data_in_sel),
	.do_en                   (PECluster_do_en),
	.iact_write_fin_clear    (PECluster_iact_write_fin_clear),
	.weight_write_fin_clear  (PECluster_weight_write_fin_clear),
	.all_write_fin           (PECluster_all_write_fin),
	.all_cal_fin             (PECluster_all_cal_fin),
	.PSUM_DEPTH              (PSUM_DEPTH),
	.psum_spad_clear         (psum_spad_clear)
);

GLB_Cluster GLB_Cluster_inst (
	.clock(GLBCluster_clock),
	.reset(GLBCluster_reset),
	.iact_SRAM_Bank_address_in_ready(GLBCluster_iact_address_in_ready),
	.iact_SRAM_Bank_address_in_valid(GLBCluster_iact_address_in_valid),
	.iact_SRAM_Bank_address_in(GLBCluster_iact_address_in),
	.iact_SRAM_Bank_data_in_ready(GLBCluster_iact_data_in_ready),
	.iact_SRAM_Bank_data_in_valid(GLBCluster_iact_data_in_valid),
	.iact_SRAM_Bank_data_in(GLBCluster_iact_data_in),
	.iact_SRAM_Bank_address_out_ready(iact_GLB_address_in_ready),
	.iact_SRAM_Bank_address_out_valid(iact_GLB_address_in_valid),
	.iact_SRAM_Bank_address_out(iact_GLB_address_in_bits),
	.iact_SRAM_Bank_data_out_ready(iact_GLB_data_in_ready),
	.iact_SRAM_Bank_data_out_valid(iact_GLB_data_in_valid),
	.iact_SRAM_Bank_data_out(iact_GLB_data_in_bits),
	.iact_SRAM_Bank_write_en(GLBCluster_iact_write_en),
	.iact_SRAM_Bank_write_done(GLBCluster_iact_write_done),
	.iact_SRAM_Bank_read_en(GLBCluster_iact_read_en),
	.iact_SRAM_Bank_read_addr(GLBCluster_iact_read_addr),
	.iact_SRAM_Bank_read_done(GLBCluster_iact_read_done),
	.weight_address_in_ready(GLBCluster_weight_address_in_ready),
	.weight_address_in_valid(GLBCluster_weight_address_in_valid),
	.weight_address_in(GLBCluster_weight_address_in),
	.weight_data_in_ready(GLBCluster_weight_data_in_ready),
	.weight_data_in_valid(GLBCluster_weight_data_in_valid),
	.weight_data_in(GLBCluster_weight_data_in),
	.weight_address_out_ready(weight_GLB_address_in_ready),
	.weight_address_out_valid(GLBCluster_weight_address_out_valid),
	.weight_address_out(GLBCluster_weight_address_out),
	.weight_data_out_ready(weight_GLB_data_in_ready),
	.weight_data_out_valid(GLBCluster_weight_data_out_valid),
	.weight_data_out(GLBCluster_weight_data_out),
	.psum_SRAM_Bank_data_in_ready(GLBCluster_psum_data_in_ready),
	.psum_SRAM_Bank_data_in_valid(GLBCluster_psum_data_in_valid),
	.psum_SRAM_Bank_data_in(GLBCluster_psum_data_in),
	.psum_SRAM_Bank_data_out_ready(GLBCluster_psum_data_out_ready),
	.psum_SRAM_Bank_data_out_valid(GLBCluster_psum_data_out_valid),
	.psum_SRAM_Bank_data_out(GLBCluster_psum_data_out),
	.psum_SRAM_Bank_write_en(GLBCluster_psum_write_en),
	.psum_SRAM_Bank_write_addr(GLBCluster_psum_write_addr),
	.psum_SRAM_Bank_write_done(GLBCluster_psum_write_done),
	.psum_SRAM_Bank_read_out_en(GLBCluster_psum_read_out_en),
	.psum_SRAM_Bank_read_en(GLBCluster_psum_read_en),
	.psum_SRAM_Bank_read_addr(GLBCluster_psum_read_addr),
	.PSUM_DEPTH(PSUM_DEPTH)
);

Router_Cluster Router_Cluster_inst (
	.iact_0_data_in_sel(iact_0_data_in_sel),
	.iact_0_data_out_sel(iact_0_data_out_sel),
	.iact_1_data_in_sel(iact_1_data_in_sel),
	.iact_1_data_out_sel(iact_1_data_out_sel),
	.iact_2_data_in_sel(iact_2_data_in_sel),
	.iact_2_data_out_sel(iact_2_data_out_sel),
	.weight_0_data_in_sel(weight_0_data_in_sel),
	.weight_0_data_out_sel(weight_0_data_out_sel),
	.weight_1_data_in_sel(weight_1_data_in_sel),
	.weight_1_data_out_sel(weight_1_data_out_sel),
	.weight_2_data_in_sel(weight_2_data_in_sel),
	.weight_2_data_out_sel(weight_2_data_out_sel),
	.psum_0_data_in_sel(psum_0_data_in_sel),
	.psum_0_data_out_sel(psum_0_data_out_sel),
	.psum_1_data_in_sel(psum_1_data_in_sel),
	.psum_1_data_out_sel(psum_1_data_out_sel),
	.psum_2_data_in_sel(psum_2_data_in_sel),
	.psum_2_data_out_sel(psum_2_data_out_sel),
	.iact_GLB_address_in_ready(iact_GLB_address_in_ready),
	.iact_GLB_address_in_valid(iact_GLB_address_in_valid),
	.iact_GLB_address_in_bits(iact_GLB_address_in_bits),
	.iact_GLB_data_in_ready(iact_GLB_data_in_ready),
	.iact_GLB_data_in_valid(iact_GLB_data_in_valid),
	.iact_GLB_data_in_bits(iact_GLB_data_in_bits),
	.iact_north_address_in_ready(iact_north_address_in_ready),
	.iact_north_address_in_valid(iact_north_address_in_valid),
	.iact_north_address_in_bits(iact_north_address_in_bits),
	.iact_north_data_in_ready(iact_north_data_in_ready),
	.iact_north_data_in_valid(iact_north_data_in_valid),
	.iact_north_data_in_bits(iact_north_data_in_bits),
	.iact_south_address_in_ready(iact_south_address_in_ready),
	.iact_south_address_in_valid(iact_south_address_in_valid),
	.iact_south_address_in_bits(iact_south_address_in_bits),
	.iact_south_data_in_ready(iact_south_data_in_ready),
	.iact_south_data_in_valid(iact_south_data_in_valid),
	.iact_south_data_in_bits(iact_south_data_in_bits),
	.iact_horiz_address_in_ready(iact_horiz_address_in_ready),
	.iact_horiz_address_in_valid(iact_horiz_address_in_valid),
	.iact_horiz_address_in_bits(iact_horiz_address_in_bits),
	.iact_horiz_data_in_ready(iact_horiz_data_in_ready),
	.iact_horiz_data_in_valid(iact_horiz_data_in_valid),
	.iact_horiz_data_in_bits(iact_horiz_data_in_bits),
	.iact_PE_address_out_ready(iact_PE_address_out_ready),
	.iact_PE_address_out_valid(iact_PE_address_out_valid),
	.iact_PE_address_out_bits(iact_PE_address_out_bits),
	.iact_PE_data_out_ready(iact_PE_data_out_ready),
	.iact_PE_data_out_valid(iact_PE_data_out_valid),
	.iact_PE_data_out_bits(iact_PE_data_out_bits),
	.iact_north_address_out_ready(iact_north_address_out_ready),
	.iact_north_address_out_valid(iact_north_address_out_valid),
	.iact_north_address_out_bits(iact_north_address_out_bits),
	.iact_north_data_out_ready(iact_north_data_out_ready),
	.iact_north_data_out_valid(iact_north_data_out_valid),
	.iact_north_data_out_bits(iact_north_data_out_bits),
	.iact_south_address_out_ready(iact_south_address_out_ready),
	.iact_south_address_out_valid(iact_south_address_out_valid),
	.iact_south_address_out_bits(iact_south_address_out_bits),
	.iact_south_data_out_ready(iact_south_data_out_ready),
	.iact_south_data_out_valid(iact_south_data_out_valid),
	.iact_south_data_out_bits(iact_south_data_out_bits),
	.iact_horiz_address_out_ready(iact_horiz_address_out_ready),
	.iact_horiz_address_out_valid(iact_horiz_address_out_valid),
	.iact_horiz_address_out_bits(iact_horiz_address_out_bits),
	.iact_horiz_data_out_ready(iact_horiz_data_out_ready),
	.iact_horiz_data_out_valid(iact_horiz_data_out_valid),
	.iact_horiz_data_out_bits(iact_horiz_data_out_bits),
	.weight_GLB_address_in_ready(weight_GLB_address_in_ready),
	.weight_GLB_address_in_valid(weight_GLB_address_in_valid),
	.weight_GLB_address_in_bits(weight_GLB_address_in_bits),
	.weight_GLB_data_in_ready(weight_GLB_data_in_ready),
	.weight_GLB_data_in_valid(weight_GLB_data_in_valid),
	.weight_GLB_data_in_bits(weight_GLB_data_in_bits),
	.weight_horiz_address_in_ready(weight_horiz_address_in_ready),
	.weight_horiz_address_in_valid(weight_horiz_address_in_valid),
	.weight_horiz_address_in_bits(weight_horiz_address_in_bits),
	.weight_horiz_data_in_ready(weight_horiz_data_in_ready),
	.weight_horiz_data_in_valid(weight_horiz_data_in_valid),
	.weight_horiz_data_in_bits(weight_horiz_data_in_bits),
	.weight_PE_address_out_valid(weight_PE_address_out_valid),
	.weight_PE_address_out_bits(weight_PE_address_out_bits),
	.weight_PE_data_out_valid(weight_PE_data_out_valid),
	.weight_PE_data_out_bits(weight_PE_data_out_bits),
	.weight_horiz_address_out_ready(weight_horiz_address_out_ready),
	.weight_horiz_address_out_valid(weight_horiz_address_out_valid),
	.weight_horiz_address_out_bits(weight_horiz_address_out_bits),
	.weight_horiz_data_out_ready(weight_horiz_data_out_ready),
	.weight_horiz_data_out_valid(weight_horiz_data_out_valid),
	.weight_horiz_data_out_bits(weight_horiz_data_out_bits),
	.psum_PE_in_ready(psum_PE_in_ready),
	.psum_PE_in_valid(psum_PE_in_valid),
	.psum_PE_in_bits(psum_PE_in_bits),
	.psum_GLB_in_ready(psum_GLB_in_ready),
	.psum_GLB_in_valid(psum_GLB_in_valid),
	.psum_GLB_in_bits(psum_GLB_in_bits),
	.psum_north_in_ready(psum_north_in_ready),
	.psum_north_in_valid(psum_north_in_valid),
	.psum_north_in_bits(psum_north_in_bits),
	.psum_PE_out_ready(psum_PE_out_ready),
	.psum_PE_out_valid(psum_PE_out_valid),
	.psum_PE_out_bits(psum_PE_out_bits),
	.psum_GLB_out_ready(psum_GLB_out_ready),
	.psum_GLB_out_valid(psum_GLB_out_valid),
	.psum_GLB_out_bits(psum_GLB_out_bits),
	.psum_south_out_ready(psum_south_out_ready),
	.psum_south_out_valid(psum_south_out_valid),
	.psum_south_out_bits(psum_south_out_bits)
);

Cluster_Group_Controller Cluster_Group_Controller_inst ( 
	.clock                 		(cg_ctrl_clock                 	),
	.reset                 		(cg_ctrl_reset                 	),
	.GLB_psum_0_write_en   		(cg_ctrl_GLB_psum_0_write_en   	),
	.GLB_psum_1_write_en   		(cg_ctrl_GLB_psum_1_write_en   	),
	.GLB_psum_2_write_en   		(cg_ctrl_GLB_psum_2_write_en   	),
	.GLB_psum_0_write_done 		(cg_ctrl_GLB_psum_0_write_done 	),
	.GLB_psum_1_write_done 		(cg_ctrl_GLB_psum_1_write_done 	),
	.GLB_psum_2_write_done 		(cg_ctrl_GLB_psum_2_write_done 	),
	.GLB_psum_0_read_en    		(cg_ctrl_GLB_psum_0_read_en    	),
	.GLB_psum_1_read_en    		(cg_ctrl_GLB_psum_1_read_en    	),
	.GLB_psum_2_read_en    		(cg_ctrl_GLB_psum_2_read_en    	),
	.GLB_iact_0_0_write_en   	(cg_ctrl_GLB_iact_0_0_write_en  ),
	.GLB_iact_0_1_write_en   	(cg_ctrl_GLB_iact_0_1_write_en  ),
	.GLB_iact_0_2_write_en   	(cg_ctrl_GLB_iact_0_2_write_en  ),
	.GLB_iact_0_0_write_done 	(cg_ctrl_GLB_iact_0_0_write_done),
	.GLB_iact_0_1_write_done 	(cg_ctrl_GLB_iact_0_1_write_done),
	.GLB_iact_0_2_write_done 	(cg_ctrl_GLB_iact_0_2_write_done),
	.GLB_iact_0_0_read_en    	(cg_ctrl_GLB_iact_0_0_read_en   ),
	.GLB_iact_0_1_read_en    	(cg_ctrl_GLB_iact_0_1_read_en   ),
	.GLB_iact_0_2_read_en    	(cg_ctrl_GLB_iact_0_2_read_en   ),
	.GLB_iact_0_0_read_done  	(cg_ctrl_GLB_iact_0_0_read_done ),
	.GLB_iact_0_1_read_done  	(cg_ctrl_GLB_iact_0_1_read_done ),
	.GLB_iact_0_2_read_done  	(cg_ctrl_GLB_iact_0_2_read_done ),
	.GLB_iact_1_0_write_en   	(cg_ctrl_GLB_iact_1_0_write_en  ),
	.GLB_iact_1_1_write_en   	(cg_ctrl_GLB_iact_1_1_write_en  ),
	.GLB_iact_1_2_write_en   	(cg_ctrl_GLB_iact_1_2_write_en  ),
	.GLB_iact_1_0_write_done 	(cg_ctrl_GLB_iact_1_0_write_done),
	.GLB_iact_1_1_write_done 	(cg_ctrl_GLB_iact_1_1_write_done),
	.GLB_iact_1_2_write_done 	(cg_ctrl_GLB_iact_1_2_write_done),
	.GLB_iact_1_0_read_en    	(cg_ctrl_GLB_iact_1_0_read_en   ),
	.GLB_iact_1_1_read_en    	(cg_ctrl_GLB_iact_1_1_read_en   ),
	.GLB_iact_1_2_read_en    	(cg_ctrl_GLB_iact_1_2_read_en   ),
	.GLB_iact_1_0_read_done  	(cg_ctrl_GLB_iact_1_0_read_done ),
	.GLB_iact_1_1_read_done  	(cg_ctrl_GLB_iact_1_1_read_done ),
	.GLB_iact_1_2_read_done  	(cg_ctrl_GLB_iact_1_2_read_done ),
	.GLB_iact_2_0_write_en   	(cg_ctrl_GLB_iact_2_0_write_en  ),
	.GLB_iact_2_1_write_en   	(cg_ctrl_GLB_iact_2_1_write_en  ),
	.GLB_iact_2_2_write_en   	(cg_ctrl_GLB_iact_2_2_write_en  ),
	.GLB_iact_2_0_write_done 	(cg_ctrl_GLB_iact_2_0_write_done),
	.GLB_iact_2_1_write_done 	(cg_ctrl_GLB_iact_2_1_write_done),
	.GLB_iact_2_2_write_done 	(cg_ctrl_GLB_iact_2_2_write_done),
	.GLB_iact_2_0_read_en    	(cg_ctrl_GLB_iact_2_0_read_en   ),
	.GLB_iact_2_1_read_en    	(cg_ctrl_GLB_iact_2_1_read_en   ),
	.GLB_iact_2_2_read_en    	(cg_ctrl_GLB_iact_2_2_read_en   ),
	.GLB_iact_2_0_read_done  	(cg_ctrl_GLB_iact_2_0_read_done ),
	.GLB_iact_2_1_read_done  	(cg_ctrl_GLB_iact_2_1_read_done ),
	.GLB_iact_2_2_read_done  	(cg_ctrl_GLB_iact_2_2_read_done ),
	.PE_load_en         		(cg_ctrl_PE_load_en          	),
	.psum_load_en       		(cg_ctrl_psum_load_en          	),
	.src_GLB_load_fin			(cg_ctrl_src_GLB_load_fin		),
	.psum_acc_en				(cg_ctrl_psum_acc_en			),
	.psum_add           		(cg_ctrl_psum_add              	),
	.read_psum_en      			(cg_ctrl_read_psum_en     	  	),
	.cg_en             			(cg_ctrl_cg_en            	  	),
	.PE_all_write_fin			(cg_ctrl_PE_all_write_fin	  	),
	.cal_fin           			(cg_ctrl_cal_fin          	  	),
	.idle_wire					(cg_ctrl_idle_wire				),
	.GLB_load_en       			(cg_ctrl_GLB_load_en      	  	),
	.psum_acc_fin				(cg_ctrl_psum_acc_fin			)
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
assign cal_fin 							= cg_ctrl_cal_fin; 				
assign PE_weight_load_en				= cg_ctrl_PE_load_en; 	
assign GLB_iact_load_en 				= cg_ctrl_GLB_load_en; 	
assign idle_wire						= cg_ctrl_idle_wire;
assign all_cal_fin 						= all_cal_fin_reg;

// GLB iact SRAM Bank output connection
assign GLB_iact_0_0_address_in_ready 	= GLBCluster_iact_address_in_ready[0][0]; 
assign GLB_iact_0_1_address_in_ready 	= GLBCluster_iact_address_in_ready[0][1]; 
assign GLB_iact_0_2_address_in_ready 	= GLBCluster_iact_address_in_ready[0][2];		
assign GLB_iact_0_0_data_in_ready 		= GLBCluster_iact_data_in_ready[0][0]; 	
assign GLB_iact_0_1_data_in_ready 		= GLBCluster_iact_data_in_ready[0][1]; 
assign GLB_iact_0_2_data_in_ready 		= GLBCluster_iact_data_in_ready[0][2]; 

assign GLB_iact_1_0_address_in_ready 	= GLBCluster_iact_address_in_ready[1][0]; 
assign GLB_iact_1_1_address_in_ready 	= GLBCluster_iact_address_in_ready[1][1]; 
assign GLB_iact_1_2_address_in_ready 	= GLBCluster_iact_address_in_ready[1][2];		
assign GLB_iact_1_0_data_in_ready 		= GLBCluster_iact_data_in_ready[1][0]; 	
assign GLB_iact_1_1_data_in_ready 		= GLBCluster_iact_data_in_ready[1][1]; 
assign GLB_iact_1_2_data_in_ready 		= GLBCluster_iact_data_in_ready[1][2]; 

assign GLB_iact_2_0_address_in_ready 	= GLBCluster_iact_address_in_ready[2][0]; 
assign GLB_iact_2_1_address_in_ready 	= GLBCluster_iact_address_in_ready[2][1]; 
assign GLB_iact_2_2_address_in_ready 	= GLBCluster_iact_address_in_ready[2][2];		
assign GLB_iact_2_0_data_in_ready 		= GLBCluster_iact_data_in_ready[2][0]; 	
assign GLB_iact_2_1_data_in_ready 		= GLBCluster_iact_data_in_ready[2][1]; 
assign GLB_iact_2_2_data_in_ready 		= GLBCluster_iact_data_in_ready[2][2]; 

// GLB weight SRAM Bank output connection
assign GLB_weight_0_address_in_ready 	= GLBCluster_weight_address_in_ready[0]; 
assign GLB_weight_1_address_in_ready 	= GLBCluster_weight_address_in_ready[1]; 	
assign GLB_weight_2_address_in_ready 	= GLBCluster_weight_address_in_ready[2]; 
assign GLB_weight_0_data_in_ready 		= GLBCluster_weight_data_in_ready[0];	
assign GLB_weight_1_data_in_ready 		= GLBCluster_weight_data_in_ready[1];	
assign GLB_weight_2_data_in_ready 		= GLBCluster_weight_data_in_ready[2];
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

// iact router ready connection
assign router_iact_0_0_north_address_in_ready 	= iact_north_address_in_ready[0][0]; 	
assign router_iact_0_0_south_address_in_ready 	= iact_south_address_in_ready[0][0]; 	
assign router_iact_0_0_horiz_address_in_ready 	= iact_horiz_address_in_ready[0][0]; 
assign router_iact_0_1_north_address_in_ready 	= iact_north_address_in_ready[0][1]; 
assign router_iact_0_1_south_address_in_ready 	= iact_south_address_in_ready[0][1]; 
assign router_iact_0_1_horiz_address_in_ready 	= iact_horiz_address_in_ready[0][1]; 
assign router_iact_0_2_north_address_in_ready 	= iact_north_address_in_ready[0][2]; 
assign router_iact_0_2_south_address_in_ready 	= iact_south_address_in_ready[0][2]; 
assign router_iact_0_2_horiz_address_in_ready 	= iact_horiz_address_in_ready[0][2]; 
													   
assign router_iact_0_0_north_data_in_ready 		= iact_north_data_in_ready[0][0]; 			
assign router_iact_0_0_south_data_in_ready 		= iact_south_data_in_ready[0][0]; 				
assign router_iact_0_0_horiz_data_in_ready 		= iact_horiz_data_in_ready[0][0]; 
assign router_iact_0_1_north_data_in_ready 		= iact_north_data_in_ready[0][1];
assign router_iact_0_1_south_data_in_ready 		= iact_south_data_in_ready[0][1];
assign router_iact_0_1_horiz_data_in_ready 		= iact_horiz_data_in_ready[0][1];
assign router_iact_0_2_north_data_in_ready 		= iact_north_data_in_ready[0][2];
assign router_iact_0_2_south_data_in_ready 		= iact_south_data_in_ready[0][2];
assign router_iact_0_2_horiz_data_in_ready 		= iact_horiz_data_in_ready[0][2];

assign router_iact_1_0_north_address_in_ready 	= iact_north_address_in_ready[1][0]; 	
assign router_iact_1_0_south_address_in_ready 	= iact_south_address_in_ready[1][0]; 	
assign router_iact_1_0_horiz_address_in_ready 	= iact_horiz_address_in_ready[1][0]; 
assign router_iact_1_1_north_address_in_ready 	= iact_north_address_in_ready[1][1]; 
assign router_iact_1_1_south_address_in_ready 	= iact_south_address_in_ready[1][1]; 
assign router_iact_1_1_horiz_address_in_ready 	= iact_horiz_address_in_ready[1][1]; 
assign router_iact_1_2_north_address_in_ready 	= iact_north_address_in_ready[1][2]; 
assign router_iact_1_2_south_address_in_ready 	= iact_south_address_in_ready[1][2]; 
assign router_iact_1_2_horiz_address_in_ready 	= iact_horiz_address_in_ready[1][2]; 
											  
assign router_iact_1_0_north_data_in_ready 		= iact_north_data_in_ready[1][0]; 			
assign router_iact_1_0_south_data_in_ready 		= iact_south_data_in_ready[1][0]; 				
assign router_iact_1_0_horiz_data_in_ready 		= iact_horiz_data_in_ready[1][0]; 
assign router_iact_1_1_north_data_in_ready 		= iact_north_data_in_ready[1][1];
assign router_iact_1_1_south_data_in_ready 		= iact_south_data_in_ready[1][1];
assign router_iact_1_1_horiz_data_in_ready 		= iact_horiz_data_in_ready[1][1];
assign router_iact_1_2_north_data_in_ready 		= iact_north_data_in_ready[1][2];
assign router_iact_1_2_south_data_in_ready 		= iact_south_data_in_ready[1][2];
assign router_iact_1_2_horiz_data_in_ready 		= iact_horiz_data_in_ready[1][2];

assign router_iact_2_0_north_address_in_ready 	= iact_north_address_in_ready[2][0]; 	
assign router_iact_2_0_south_address_in_ready 	= iact_south_address_in_ready[2][0]; 	
assign router_iact_2_0_horiz_address_in_ready 	= iact_horiz_address_in_ready[2][0]; 
assign router_iact_2_1_north_address_in_ready 	= iact_north_address_in_ready[2][1]; 
assign router_iact_2_1_south_address_in_ready 	= iact_south_address_in_ready[2][1]; 
assign router_iact_2_1_horiz_address_in_ready 	= iact_horiz_address_in_ready[2][1]; 
assign router_iact_2_2_north_address_in_ready 	= iact_north_address_in_ready[2][2]; 
assign router_iact_2_2_south_address_in_ready 	= iact_south_address_in_ready[2][2]; 
assign router_iact_2_2_horiz_address_in_ready 	= iact_horiz_address_in_ready[2][2]; 
											   
assign router_iact_2_0_north_data_in_ready 		= iact_north_data_in_ready[2][0]; 			
assign router_iact_2_0_south_data_in_ready 		= iact_south_data_in_ready[2][0]; 				
assign router_iact_2_0_horiz_data_in_ready 		= iact_horiz_data_in_ready[2][0]; 
assign router_iact_2_1_north_data_in_ready 		= iact_north_data_in_ready[2][1];
assign router_iact_2_1_south_data_in_ready 		= iact_south_data_in_ready[2][1];
assign router_iact_2_1_horiz_data_in_ready 		= iact_horiz_data_in_ready[2][1];
assign router_iact_2_2_north_data_in_ready 		= iact_north_data_in_ready[2][2];
assign router_iact_2_2_south_data_in_ready 		= iact_south_data_in_ready[2][2];
assign router_iact_2_2_horiz_data_in_ready 		= iact_horiz_data_in_ready[2][2];

// iact router valid connection
assign router_iact_0_0_north_address_out_valid 	= iact_north_address_out_valid[0][0]; 
assign router_iact_0_0_south_address_out_valid 	= iact_south_address_out_valid[0][0]; 
assign router_iact_0_0_horiz_address_out_valid 	= iact_horiz_address_out_valid[0][0]; 
assign router_iact_0_1_north_address_out_valid 	= iact_north_address_out_valid[0][1]; 
assign router_iact_0_1_south_address_out_valid 	= iact_south_address_out_valid[0][1]; 
assign router_iact_0_1_horiz_address_out_valid 	= iact_horiz_address_out_valid[0][1]; 
assign router_iact_0_2_north_address_out_valid 	= iact_north_address_out_valid[0][2]; 
assign router_iact_0_2_south_address_out_valid 	= iact_south_address_out_valid[0][2]; 
assign router_iact_0_2_horiz_address_out_valid 	= iact_horiz_address_out_valid[0][2]; 
													   
assign router_iact_0_0_north_data_out_valid 	= iact_north_data_out_valid[0][0];
assign router_iact_0_0_south_data_out_valid 	= iact_south_data_out_valid[0][0];
assign router_iact_0_0_horiz_data_out_valid 	= iact_horiz_data_out_valid[0][0];
assign router_iact_0_1_north_data_out_valid 	= iact_north_data_out_valid[0][1]; 
assign router_iact_0_1_south_data_out_valid 	= iact_south_data_out_valid[0][1]; 
assign router_iact_0_1_horiz_data_out_valid 	= iact_horiz_data_out_valid[0][1]; 
assign router_iact_0_2_north_data_out_valid 	= iact_north_data_out_valid[0][2];
assign router_iact_0_2_south_data_out_valid 	= iact_south_data_out_valid[0][2];
assign router_iact_0_2_horiz_data_out_valid 	= iact_horiz_data_out_valid[0][2];

assign router_iact_1_0_north_address_out_valid 	= iact_north_address_out_valid[1][0]; 
assign router_iact_1_0_south_address_out_valid 	= iact_south_address_out_valid[1][0]; 
assign router_iact_1_0_horiz_address_out_valid 	= iact_horiz_address_out_valid[1][0]; 
assign router_iact_1_1_north_address_out_valid 	= iact_north_address_out_valid[1][1]; 
assign router_iact_1_1_south_address_out_valid 	= iact_south_address_out_valid[1][1]; 
assign router_iact_1_1_horiz_address_out_valid 	= iact_horiz_address_out_valid[1][1]; 
assign router_iact_1_2_north_address_out_valid 	= iact_north_address_out_valid[1][2]; 
assign router_iact_1_2_south_address_out_valid 	= iact_south_address_out_valid[1][2]; 
assign router_iact_1_2_horiz_address_out_valid 	= iact_horiz_address_out_valid[1][2]; 
												  
assign router_iact_1_0_north_data_out_valid 	= iact_north_data_out_valid[1][0];
assign router_iact_1_0_south_data_out_valid 	= iact_south_data_out_valid[1][0];
assign router_iact_1_0_horiz_data_out_valid 	= iact_horiz_data_out_valid[1][0];
assign router_iact_1_1_north_data_out_valid 	= iact_north_data_out_valid[1][1]; 
assign router_iact_1_1_south_data_out_valid 	= iact_south_data_out_valid[1][1]; 
assign router_iact_1_1_horiz_data_out_valid 	= iact_horiz_data_out_valid[1][1]; 
assign router_iact_1_2_north_data_out_valid 	= iact_north_data_out_valid[1][2];
assign router_iact_1_2_south_data_out_valid 	= iact_south_data_out_valid[1][2];
assign router_iact_1_2_horiz_data_out_valid 	= iact_horiz_data_out_valid[1][2];

assign router_iact_2_0_north_address_out_valid 	= iact_north_address_out_valid[2][0]; 
assign router_iact_2_0_south_address_out_valid 	= iact_south_address_out_valid[2][0]; 
assign router_iact_2_0_horiz_address_out_valid 	= iact_horiz_address_out_valid[2][0]; 
assign router_iact_2_1_north_address_out_valid 	= iact_north_address_out_valid[2][1]; 
assign router_iact_2_1_south_address_out_valid 	= iact_south_address_out_valid[2][1]; 
assign router_iact_2_1_horiz_address_out_valid 	= iact_horiz_address_out_valid[2][1]; 
assign router_iact_2_2_north_address_out_valid 	= iact_north_address_out_valid[2][2]; 
assign router_iact_2_2_south_address_out_valid 	= iact_south_address_out_valid[2][2]; 
assign router_iact_2_2_horiz_address_out_valid 	= iact_horiz_address_out_valid[2][2]; 
											   
assign router_iact_2_0_north_data_out_valid 	= iact_north_data_out_valid[2][0];
assign router_iact_2_0_south_data_out_valid 	= iact_south_data_out_valid[2][0];
assign router_iact_2_0_horiz_data_out_valid 	= iact_horiz_data_out_valid[2][0];
assign router_iact_2_1_north_data_out_valid 	= iact_north_data_out_valid[2][1]; 
assign router_iact_2_1_south_data_out_valid 	= iact_south_data_out_valid[2][1]; 
assign router_iact_2_1_horiz_data_out_valid 	= iact_horiz_data_out_valid[2][1]; 
assign router_iact_2_2_north_data_out_valid 	= iact_north_data_out_valid[2][2];
assign router_iact_2_2_south_data_out_valid 	= iact_south_data_out_valid[2][2];
assign router_iact_2_2_horiz_data_out_valid 	= iact_horiz_data_out_valid[2][2];


// iact router data connection
assign router_iact_0_0_north_address_out 		= iact_north_address_out_bits[0][0]; 
assign router_iact_0_0_south_address_out 		= iact_south_address_out_bits[0][0];
assign router_iact_0_0_horiz_address_out 		= iact_horiz_address_out_bits[0][0]; 
assign router_iact_0_1_north_address_out 		= iact_north_address_out_bits[0][1]; 
assign router_iact_0_1_south_address_out 		= iact_south_address_out_bits[0][1]; 
assign router_iact_0_1_horiz_address_out 		= iact_horiz_address_out_bits[0][1]; 
assign router_iact_0_2_north_address_out 		= iact_north_address_out_bits[0][2]; 
assign router_iact_0_2_south_address_out 		= iact_south_address_out_bits[0][2]; 
assign router_iact_0_2_horiz_address_out 		= iact_horiz_address_out_bits[0][2]; 
													
assign router_iact_0_0_north_data_out 			= iact_north_data_out_bits[0][0];  
assign router_iact_0_0_south_data_out 			= iact_south_data_out_bits[0][0]; 
assign router_iact_0_0_horiz_data_out 			= iact_horiz_data_out_bits[0][0]; 
assign router_iact_0_1_north_data_out 			= iact_north_data_out_bits[0][1]; 
assign router_iact_0_1_south_data_out 			= iact_south_data_out_bits[0][1]; 
assign router_iact_0_1_horiz_data_out 			= iact_horiz_data_out_bits[0][1]; 
assign router_iact_0_2_north_data_out 			= iact_north_data_out_bits[0][2]; 
assign router_iact_0_2_south_data_out 			= iact_south_data_out_bits[0][2]; 
assign router_iact_0_2_horiz_data_out 			= iact_horiz_data_out_bits[0][2]; 
	
assign router_iact_1_0_north_address_out 		= iact_north_address_out_bits[1][0]; 
assign router_iact_1_0_south_address_out 		= iact_south_address_out_bits[1][0];
assign router_iact_1_0_horiz_address_out 		= iact_horiz_address_out_bits[1][0]; 
assign router_iact_1_1_north_address_out 		= iact_north_address_out_bits[1][1]; 
assign router_iact_1_1_south_address_out 		= iact_south_address_out_bits[1][1]; 
assign router_iact_1_1_horiz_address_out 		= iact_horiz_address_out_bits[1][1]; 
assign router_iact_1_2_north_address_out 		= iact_north_address_out_bits[1][2]; 
assign router_iact_1_2_south_address_out 		= iact_south_address_out_bits[1][2]; 
assign router_iact_1_2_horiz_address_out 		= iact_horiz_address_out_bits[1][2]; 
												
assign router_iact_1_0_north_data_out 			= iact_north_data_out_bits[1][0];  
assign router_iact_1_0_south_data_out 			= iact_south_data_out_bits[1][0]; 
assign router_iact_1_0_horiz_data_out 			= iact_horiz_data_out_bits[1][0]; 
assign router_iact_1_1_north_data_out 			= iact_north_data_out_bits[1][1]; 
assign router_iact_1_1_south_data_out 			= iact_south_data_out_bits[1][1]; 
assign router_iact_1_1_horiz_data_out 			= iact_horiz_data_out_bits[1][1]; 
assign router_iact_1_2_north_data_out 			= iact_north_data_out_bits[1][2]; 
assign router_iact_1_2_south_data_out 			= iact_south_data_out_bits[1][2]; 
assign router_iact_1_2_horiz_data_out 			= iact_horiz_data_out_bits[1][2]; 
	
assign router_iact_2_0_north_address_out 		= iact_north_address_out_bits[2][0]; 
assign router_iact_2_0_south_address_out 		= iact_south_address_out_bits[2][0];
assign router_iact_2_0_horiz_address_out 		= iact_horiz_address_out_bits[2][0]; 
assign router_iact_2_1_north_address_out 		= iact_north_address_out_bits[2][1]; 
assign router_iact_2_1_south_address_out 		= iact_south_address_out_bits[2][1]; 
assign router_iact_2_1_horiz_address_out 		= iact_horiz_address_out_bits[2][1]; 
assign router_iact_2_2_north_address_out 		= iact_north_address_out_bits[2][2]; 
assign router_iact_2_2_south_address_out 		= iact_south_address_out_bits[2][2]; 
assign router_iact_2_2_horiz_address_out 		= iact_horiz_address_out_bits[2][2]; 
			
assign router_iact_2_0_north_data_out 			= iact_north_data_out_bits[2][0];  
assign router_iact_2_0_south_data_out 			= iact_south_data_out_bits[2][0]; 
assign router_iact_2_0_horiz_data_out 			= iact_horiz_data_out_bits[2][0]; 
assign router_iact_2_1_north_data_out 			= iact_north_data_out_bits[2][1]; 
assign router_iact_2_1_south_data_out 			= iact_south_data_out_bits[2][1]; 
assign router_iact_2_1_horiz_data_out 			= iact_horiz_data_out_bits[2][1]; 
assign router_iact_2_2_north_data_out 			= iact_north_data_out_bits[2][2]; 
assign router_iact_2_2_south_data_out 			= iact_south_data_out_bits[2][2]; 
assign router_iact_2_2_horiz_data_out 			= iact_horiz_data_out_bits[2][2]; 

// weight router ready connection
assign router_weight_0_horiz_address_in_ready	= weight_horiz_address_in_ready[0]; 
assign router_weight_1_horiz_address_in_ready	= weight_horiz_address_in_ready[1]; 
assign router_weight_2_horiz_address_in_ready	= weight_horiz_address_in_ready[2]; 

assign router_weight_0_horiz_data_in_ready 		= weight_horiz_data_in_ready[0];
assign router_weight_1_horiz_data_in_ready 		= weight_horiz_data_in_ready[1]; 
assign router_weight_2_horiz_data_in_ready 		= weight_horiz_data_in_ready[2]; 

// weight router valid connection
assign router_weight_0_horiz_address_out_valid 	= weight_horiz_address_out_valid[0]; 
assign router_weight_1_horiz_address_out_valid 	= weight_horiz_address_out_valid[1]; 
assign router_weight_2_horiz_address_out_valid 	= weight_horiz_address_out_valid[2]; 
assign router_weight_0_horiz_data_out_valid		= weight_horiz_data_out_valid[0];
assign router_weight_1_horiz_data_out_valid		= weight_horiz_data_out_valid[1];
assign router_weight_2_horiz_data_out_valid		= weight_horiz_data_out_valid[2];

// weight router data connection
assign router_weight_0_horiz_address_out 		= weight_horiz_address_out_bits[0]; 
assign router_weight_1_horiz_address_out 		= weight_horiz_address_out_bits[1]; 
assign router_weight_2_horiz_address_out 		= weight_horiz_address_out_bits[2]; 
assign router_weight_0_horiz_data_out 			= weight_horiz_data_out_bits[0]; 
assign router_weight_1_horiz_data_out 			= weight_horiz_data_out_bits[1]; 
assign router_weight_2_horiz_data_out 			= weight_horiz_data_out_bits[2]; 

// psum router ready connection
assign router_psum_0_north_in_ready 	= psum_north_in_ready[0]; 
assign router_psum_1_north_in_ready 	= psum_north_in_ready[1]; 
assign router_psum_2_north_in_ready 	= psum_north_in_ready[2]; 	

// psum router valid connection
assign router_psum_0_south_out_valid 	= psum_south_out_valid[0]; 
assign router_psum_1_south_out_valid 	= psum_south_out_valid[1];
assign router_psum_2_south_out_valid 	= psum_south_out_valid[2]; 

// psum router data connection
assign router_psum_0_south_out 			= psum_south_out_bits[0]; 	
assign router_psum_1_south_out 			= psum_south_out_bits[1]; 	
assign router_psum_2_south_out 			= psum_south_out_bits[2];	 

// interconnect with vertical cluster group
assign cg_south_psum_0_in_ready 		= PECluster_psum_in_from_south_ready[0]; 
assign cg_south_psum_1_in_ready 		= PECluster_psum_in_from_south_ready[1]; 
assign cg_south_psum_2_in_ready 		= PECluster_psum_in_from_south_ready[2]; 

assign cg_north_psum_0_out_valid 		= PECluster_psum_out_valid[0]; 
assign cg_north_psum_1_out_valid 		= PECluster_psum_out_valid[1]; 	
assign cg_north_psum_2_out_valid 		= PECluster_psum_out_valid[2];

assign cg_north_psum_0_out 				= PECluster_psum_out[0]; 			
assign cg_north_psum_1_out 				= PECluster_psum_out[1]; 			
assign cg_north_psum_2_out 				= PECluster_psum_out[2]; 			

//=============== intra-connection ===============//
// router cluster to PE cluster


// psum accumulate from south cluster group
assign PECluster_psum_in_from_south_valid[0] 	= cg_south_psum_0_in_valid; 
assign PECluster_psum_in_from_south_valid[1] 	= cg_south_psum_1_in_valid; 
assign PECluster_psum_in_from_south_valid[2] 	= cg_south_psum_2_in_valid; 
assign PECluster_psum_in_from_south[0] 			= cg_south_psum_0_in; 	
assign PECluster_psum_in_from_south[1] 			= cg_south_psum_1_in; 	
assign PECluster_psum_in_from_south[2] 			= cg_south_psum_2_in; 	

assign PECluster_PE_disable[0][0]					= PE_0_0_disable;
assign PECluster_PE_disable[0][1]					= PE_0_1_disable;
assign PECluster_PE_disable[0][2]					= PE_0_2_disable;
assign PECluster_PE_disable[1][0]					= PE_1_0_disable;
assign PECluster_PE_disable[1][1]					= PE_1_1_disable;
assign PECluster_PE_disable[1][2]					= PE_1_2_disable;
assign PECluster_PE_disable[2][0]					= PE_2_0_disable;
assign PECluster_PE_disable[2][1]					= PE_2_1_disable;
assign PECluster_PE_disable[2][2]					= PE_2_2_disable;

assign PECluster_psum_load_en 					= cg_ctrl_psum_load_en; 
assign PECluster_iact_data_in_sel 				= PE_cluster_iact_data_in_sel;
assign PECluster_iact_data_out_sel 				= PE_cluster_iact_data_out_sel; 
assign PECluster_psum_data_in_sel 				= PE_cluster_psum_data_in_sel; 
assign PECluster_do_en 							= cg_ctrl_PE_load_en; 

assign PECluster_iact_write_fin_clear 			= iact_write_fin_clear;
assign PECluster_weight_write_fin_clear 		= weight_write_fin_clear;

// TOP iact and weight fetch and dataflow control
assign GLBCluster_clock = clock;
assign GLBCluster_reset = reset;
assign GLBCluster_iact_address_in_valid[0][0]  	= GLB_iact_0_0_address_in_valid; 
assign GLBCluster_iact_address_in_valid[0][1]  	= GLB_iact_0_1_address_in_valid;
assign GLBCluster_iact_address_in_valid[0][2]  	= GLB_iact_0_2_address_in_valid; 
assign GLBCluster_iact_address_in[0][0] 		= GLB_iact_address_in[0][0]; 
assign GLBCluster_iact_address_in[0][1] 		= GLB_iact_address_in[0][1]; 
assign GLBCluster_iact_address_in[0][2] 		= GLB_iact_address_in[0][2]; 
assign GLBCluster_iact_data_in_valid[0][0] 	 	= GLB_iact_0_0_data_in_valid; 
assign GLBCluster_iact_data_in_valid[0][1] 	 	= GLB_iact_0_1_data_in_valid; 
assign GLBCluster_iact_data_in_valid[0][2] 	 	= GLB_iact_0_2_data_in_valid; 
assign GLBCluster_iact_data_in[0][0] 			= GLB_iact_0_0_data_in;
assign GLBCluster_iact_data_in[0][1] 			= GLB_iact_0_1_data_in; 
assign GLBCluster_iact_data_in[0][2] 			= GLB_iact_0_2_data_in; 
assign GLBCluster_iact_address_in_valid[1][0]  	= GLB_iact_1_0_address_in_valid; 
assign GLBCluster_iact_address_in_valid[1][1]  	= GLB_iact_1_1_address_in_valid;
assign GLBCluster_iact_address_in_valid[1][2]  	= GLB_iact_1_2_address_in_valid; 
assign GLBCluster_iact_address_in[1][0] 		= GLB_iact_address_in[1][0]; 
assign GLBCluster_iact_address_in[1][1] 		= GLB_iact_address_in[1][1]; 
assign GLBCluster_iact_address_in[1][2] 		= GLB_iact_address_in[1][2]; 
assign GLBCluster_iact_data_in_valid[1][0] 	 	= GLB_iact_1_0_data_in_valid; 
assign GLBCluster_iact_data_in_valid[1][1] 	 	= GLB_iact_1_1_data_in_valid; 
assign GLBCluster_iact_data_in_valid[1][2] 	 	= GLB_iact_1_2_data_in_valid; 
assign GLBCluster_iact_data_in[1][0] 			= GLB_iact_1_0_data_in;
assign GLBCluster_iact_data_in[1][1] 			= GLB_iact_1_1_data_in; 
assign GLBCluster_iact_data_in[1][2] 			= GLB_iact_1_2_data_in; 
assign GLBCluster_iact_address_in_valid[2][0]  	= GLB_iact_2_0_address_in_valid; 
assign GLBCluster_iact_address_in_valid[2][1]  	= GLB_iact_2_1_address_in_valid;
assign GLBCluster_iact_address_in_valid[2][2]  	= GLB_iact_2_2_address_in_valid; 
assign GLBCluster_iact_address_in[2][0] 		= GLB_iact_address_in[2][0]; 
assign GLBCluster_iact_address_in[2][1] 		= GLB_iact_address_in[2][1]; 
assign GLBCluster_iact_address_in[2][2] 		= GLB_iact_address_in[2][2]; 
assign GLBCluster_iact_data_in_valid[2][0] 	 	= GLB_iact_2_0_data_in_valid; 
assign GLBCluster_iact_data_in_valid[2][1] 	 	= GLB_iact_2_1_data_in_valid; 
assign GLBCluster_iact_data_in_valid[2][2] 	 	= GLB_iact_2_2_data_in_valid; 
assign GLBCluster_iact_data_in[2][0] 			= GLB_iact_2_0_data_in;
assign GLBCluster_iact_data_in[2][1] 			= GLB_iact_2_1_data_in; 
assign GLBCluster_iact_data_in[2][2] 			= GLB_iact_2_2_data_in; 

assign GLBCluster_weight_address_in_valid[0]  	= GLB_weight_0_address_in_valid; 
assign GLBCluster_weight_address_in_valid[1]  	= GLB_weight_1_address_in_valid; 
assign GLBCluster_weight_address_in_valid[2]  	= GLB_weight_2_address_in_valid; 
assign GLBCluster_weight_address_in[0] 		= GLB_weight_0_address_in;
assign GLBCluster_weight_address_in[1] 		= GLB_weight_1_address_in; 
assign GLBCluster_weight_address_in[2] 		= GLB_weight_2_address_in; 
assign GLBCluster_weight_data_in_valid[0] 	 	= GLB_weight_0_data_in_valid;
assign GLBCluster_weight_data_in_valid[1] 	 	= GLB_weight_1_data_in_valid; 
assign GLBCluster_weight_data_in_valid[2] 	 	= GLB_weight_2_data_in_valid; 
assign GLBCluster_weight_data_in[0]			= GLB_weight_0_data_in; 
assign GLBCluster_weight_data_in[1]			= GLB_weight_1_data_in; 
assign GLBCluster_weight_data_in[2]			= GLB_weight_2_data_in; 

assign iact_0_data_in_sel  		= router_cluster_iact_data_in_sel; 
assign iact_1_data_in_sel  		= router_cluster_iact_data_in_sel; 
assign iact_2_data_in_sel  		= router_cluster_iact_data_in_sel; 
assign iact_0_data_out_sel 		= router_cluster_iact_data_out_sel;
assign iact_1_data_out_sel 		= router_cluster_iact_data_out_sel;
assign iact_2_data_out_sel 		= router_cluster_iact_data_out_sel;

assign weight_0_data_in_sel  	= router_cluster_weight_data_in_sel; 
assign weight_1_data_in_sel  	= router_cluster_weight_data_in_sel; 
assign weight_2_data_in_sel  	= router_cluster_weight_data_in_sel; 
assign weight_0_data_out_sel 	= router_cluster_weight_data_out_sel; 
assign weight_1_data_out_sel 	= router_cluster_weight_data_out_sel; 
assign weight_2_data_out_sel 	= router_cluster_weight_data_out_sel; 

assign psum_0_data_in_sel  		= router_cluster_psum_data_in_sel; 	
assign psum_1_data_in_sel  		= router_cluster_psum_data_in_sel; 	
assign psum_2_data_in_sel  		= router_cluster_psum_data_in_sel; 	
assign psum_0_data_out_sel 		= router_cluster_psum_data_out_sel; 
assign psum_1_data_out_sel 		= router_cluster_psum_data_out_sel; 
assign psum_2_data_out_sel 		= router_cluster_psum_data_out_sel; 


// psum 
assign GLBCluster_psum_data_in_valid[0]  		= psum_GLB_out_valid[0]; // (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_valid[0] : GLB_psum_0_data_in_valid;
assign GLBCluster_psum_data_in_valid[1]  		= psum_GLB_out_valid[1]; // (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_valid[1] : GLB_psum_1_data_in_valid;
assign GLBCluster_psum_data_in_valid[2]  		= psum_GLB_out_valid[2]; // (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_valid[2] : GLB_psum_2_data_in_valid;
assign GLBCluster_psum_data_in[0] 		  		= psum_GLB_out_bits[0]; 	// (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_bits[0]  : GLB_psum_0_data_in; 
assign GLBCluster_psum_data_in[1] 		  		= psum_GLB_out_bits[1]; 	// (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_bits[1]  : GLB_psum_1_data_in; 
assign GLBCluster_psum_data_in[2] 		  		= psum_GLB_out_bits[2]; 	// (router_cluster_psum_data_out_sel == TO_PE) ? psum_GLB_out_bits[2]  : GLB_psum_2_data_in; 
		
assign GLBCluster_psum_data_out_ready[0] 		= (psum_GLB_in_ready[0] & cg_ctrl_psum_add) | (GLB_psum_0_data_out_ready & (read_psum_en | psum_SRAM_Bank_0_read_out_en)); 
assign GLBCluster_psum_data_out_ready[1] 		= (psum_GLB_in_ready[1] & cg_ctrl_psum_add) | (GLB_psum_1_data_out_ready & (read_psum_en | psum_SRAM_Bank_1_read_out_en)); 
assign GLBCluster_psum_data_out_ready[2] 		= (psum_GLB_in_ready[2] & cg_ctrl_psum_add) | (GLB_psum_2_data_out_ready & (read_psum_en | psum_SRAM_Bank_2_read_out_en)); 

// cluster group control
assign GLBCluster_iact_write_en[0][0]	= cg_ctrl_GLB_iact_0_0_write_en; 
assign GLBCluster_iact_write_en[0][1]	= cg_ctrl_GLB_iact_0_1_write_en; 
assign GLBCluster_iact_write_en[0][2]	= cg_ctrl_GLB_iact_0_2_write_en; 
assign GLBCluster_iact_read_en[0][1] 	= cg_ctrl_GLB_iact_0_1_read_en; 
assign GLBCluster_iact_read_en[0][0] 	= cg_ctrl_GLB_iact_0_0_read_en; 
assign GLBCluster_iact_read_en[0][2] 	= cg_ctrl_GLB_iact_0_2_read_en;  
assign GLBCluster_iact_write_en[1][0]	= cg_ctrl_GLB_iact_1_0_write_en; 
assign GLBCluster_iact_write_en[1][1]	= cg_ctrl_GLB_iact_1_1_write_en; 
assign GLBCluster_iact_write_en[1][2]	= cg_ctrl_GLB_iact_1_2_write_en; 
assign GLBCluster_iact_read_en[1][1] 	= cg_ctrl_GLB_iact_1_1_read_en; 
assign GLBCluster_iact_read_en[1][0] 	= cg_ctrl_GLB_iact_1_0_read_en; 
assign GLBCluster_iact_read_en[1][2] 	= cg_ctrl_GLB_iact_1_2_read_en;   
assign GLBCluster_iact_write_en[2][0]	= cg_ctrl_GLB_iact_2_0_write_en; 
assign GLBCluster_iact_write_en[2][1]	= cg_ctrl_GLB_iact_2_1_write_en; 
assign GLBCluster_iact_write_en[2][2]	= cg_ctrl_GLB_iact_2_2_write_en; 
assign GLBCluster_iact_read_en[2][1] 	= cg_ctrl_GLB_iact_2_1_read_en; 
assign GLBCluster_iact_read_en[2][0] 	= cg_ctrl_GLB_iact_2_0_read_en; 
assign GLBCluster_iact_read_en[2][2] 	= cg_ctrl_GLB_iact_2_2_read_en;   

assign GLBCluster_psum_write_en[0] 	= cg_ctrl_GLB_psum_0_write_en & GLB_psum_write_en; 
assign GLBCluster_psum_write_en[1] 	= cg_ctrl_GLB_psum_1_write_en & GLB_psum_write_en; 
assign GLBCluster_psum_write_en[2] 	= cg_ctrl_GLB_psum_2_write_en & GLB_psum_write_en;  
assign GLBCluster_psum_read_en[0]		= cg_ctrl_GLB_psum_0_read_en; 
assign GLBCluster_psum_read_en[1]		= cg_ctrl_GLB_psum_1_read_en;   
assign GLBCluster_psum_read_en[2]		= cg_ctrl_GLB_psum_2_read_en; 
assign GLBCluster_psum_read_out_en[0]	= psum_SRAM_Bank_0_read_out_en;
assign GLBCluster_psum_read_out_en[1]	= psum_SRAM_Bank_1_read_out_en;
assign GLBCluster_psum_read_out_en[2]	= psum_SRAM_Bank_2_read_out_en;


assign GLBCluster_iact_read_addr[0][0]	= GLB_iact_read_addr[0][0]; 
assign GLBCluster_iact_read_addr[0][1]	= GLB_iact_read_addr[0][1];
assign GLBCluster_iact_read_addr[0][2]	= GLB_iact_read_addr[0][2];
assign GLBCluster_iact_read_addr[1][0]	= GLB_iact_read_addr[1][0]; 
assign GLBCluster_iact_read_addr[1][1]	= GLB_iact_read_addr[1][1];
assign GLBCluster_iact_read_addr[1][2]	= GLB_iact_read_addr[1][2];
assign GLBCluster_iact_read_addr[2][0]	= GLB_iact_read_addr[2][0]; 
assign GLBCluster_iact_read_addr[2][1]	= GLB_iact_read_addr[2][1];
assign GLBCluster_iact_read_addr[2][2]	= GLB_iact_read_addr[2][2];

assign GLBCluster_psum_read_addr[0]	= GLB_psum_0_read_addr; 
assign GLBCluster_psum_read_addr[1]	= GLB_psum_1_read_addr; 
assign GLBCluster_psum_read_addr[2]	= GLB_psum_2_read_addr;  
assign GLBCluster_psum_write_addr[0]	= GLB_psum_0_write_addr; 
assign GLBCluster_psum_write_addr[1]	= GLB_psum_1_write_addr; 
assign GLBCluster_psum_write_addr[2]	= GLB_psum_2_write_addr; 

//============= other cluster group inter-connection =============//
// iact_ready
assign iact_PE_address_out_ready[0][0]    	= PECluster_iact_address_in_ready[0]; 
assign iact_PE_address_out_ready[0][2] 	  	= PECluster_iact_address_in_ready[0]; 
assign iact_PE_address_out_ready[0][1] 	 	= PECluster_iact_address_in_ready[0]; 
assign iact_PE_address_out_ready[1][0]    	= PECluster_iact_address_in_ready[1];
assign iact_PE_address_out_ready[1][2] 	  	= PECluster_iact_address_in_ready[1];
assign iact_PE_address_out_ready[1][1] 	 	= PECluster_iact_address_in_ready[1];
assign iact_PE_address_out_ready[2][0]    	= PECluster_iact_address_in_ready[2];
assign iact_PE_address_out_ready[2][2] 	  	= PECluster_iact_address_in_ready[2];
assign iact_PE_address_out_ready[2][1] 	 	= PECluster_iact_address_in_ready[2];

assign iact_north_address_out_ready[0][0] 	= router_iact_0_0_north_address_out_ready; 	
assign iact_north_address_out_ready[0][1] 	= router_iact_0_1_north_address_out_ready; 
assign iact_north_address_out_ready[0][2] 	= router_iact_0_2_north_address_out_ready; 
assign iact_south_address_out_ready[0][0] 	= router_iact_0_0_south_address_out_ready; 	
assign iact_south_address_out_ready[0][1] 	= router_iact_0_1_south_address_out_ready; 
assign iact_south_address_out_ready[0][2] 	= router_iact_0_2_south_address_out_ready; 
assign iact_horiz_address_out_ready[0][0] 	= router_iact_0_0_horiz_address_out_ready; 	
assign iact_horiz_address_out_ready[0][1] 	= router_iact_0_1_horiz_address_out_ready; 
assign iact_horiz_address_out_ready[0][2] 	= router_iact_0_2_horiz_address_out_ready; 
assign iact_north_address_out_ready[1][0] 	= router_iact_1_0_north_address_out_ready; 	
assign iact_north_address_out_ready[1][1] 	= router_iact_1_1_north_address_out_ready; 
assign iact_north_address_out_ready[1][2] 	= router_iact_1_2_north_address_out_ready; 
assign iact_south_address_out_ready[1][0] 	= router_iact_1_0_south_address_out_ready; 	
assign iact_south_address_out_ready[1][1] 	= router_iact_1_1_south_address_out_ready; 
assign iact_south_address_out_ready[1][2] 	= router_iact_1_2_south_address_out_ready; 
assign iact_horiz_address_out_ready[1][0] 	= router_iact_1_0_horiz_address_out_ready; 	
assign iact_horiz_address_out_ready[1][1] 	= router_iact_1_1_horiz_address_out_ready; 
assign iact_horiz_address_out_ready[1][2] 	= router_iact_1_2_horiz_address_out_ready; 
assign iact_north_address_out_ready[2][0] 	= router_iact_2_0_north_address_out_ready; 	
assign iact_north_address_out_ready[2][1] 	= router_iact_2_1_north_address_out_ready; 
assign iact_north_address_out_ready[2][2] 	= router_iact_2_2_north_address_out_ready; 
assign iact_south_address_out_ready[2][0] 	= router_iact_2_0_south_address_out_ready; 	
assign iact_south_address_out_ready[2][1] 	= router_iact_2_1_south_address_out_ready; 
assign iact_south_address_out_ready[2][2] 	= router_iact_2_2_south_address_out_ready; 
assign iact_horiz_address_out_ready[2][0] 	= router_iact_2_0_horiz_address_out_ready; 	
assign iact_horiz_address_out_ready[2][1] 	= router_iact_2_1_horiz_address_out_ready; 
assign iact_horiz_address_out_ready[2][2] 	= router_iact_2_2_horiz_address_out_ready; 

assign iact_PE_data_out_ready[0][0]    		= PECluster_iact_data_in_ready[0];
assign iact_PE_data_out_ready[0][1] 			= PECluster_iact_data_in_ready[0];
assign iact_PE_data_out_ready[0][2] 			= PECluster_iact_data_in_ready[0];
assign iact_PE_data_out_ready[1][0]    		= PECluster_iact_data_in_ready[1];
assign iact_PE_data_out_ready[1][1] 			= PECluster_iact_data_in_ready[1];
assign iact_PE_data_out_ready[1][2] 			= PECluster_iact_data_in_ready[1];
assign iact_PE_data_out_ready[2][0]    		= PECluster_iact_data_in_ready[2];
assign iact_PE_data_out_ready[2][1] 			= PECluster_iact_data_in_ready[2];
assign iact_PE_data_out_ready[2][2] 			= PECluster_iact_data_in_ready[2];

assign iact_north_data_out_ready[0][0] 		= router_iact_0_0_north_data_out_ready; 	
assign iact_north_data_out_ready[0][1] 		= router_iact_0_1_north_data_out_ready; 
assign iact_north_data_out_ready[0][2] 		= router_iact_0_2_north_data_out_ready; 
assign iact_south_data_out_ready[0][0] 		= router_iact_0_0_south_data_out_ready; 
assign iact_south_data_out_ready[0][1] 		= router_iact_0_1_south_data_out_ready; 
assign iact_south_data_out_ready[0][2] 		= router_iact_0_2_south_data_out_ready; 
assign iact_horiz_data_out_ready[0][0] 		= router_iact_0_0_horiz_data_out_ready; 
assign iact_horiz_data_out_ready[0][1] 		= router_iact_0_1_horiz_data_out_ready; 
assign iact_horiz_data_out_ready[0][2] 		= router_iact_0_2_horiz_data_out_ready; 
assign iact_north_data_out_ready[1][0] 		= router_iact_1_0_north_data_out_ready; 	
assign iact_north_data_out_ready[1][1] 		= router_iact_1_1_north_data_out_ready; 
assign iact_north_data_out_ready[1][2] 		= router_iact_1_2_north_data_out_ready; 
assign iact_south_data_out_ready[1][0] 		= router_iact_1_0_south_data_out_ready; 
assign iact_south_data_out_ready[1][1] 		= router_iact_1_1_south_data_out_ready; 
assign iact_south_data_out_ready[1][2] 		= router_iact_1_2_south_data_out_ready; 
assign iact_horiz_data_out_ready[1][0] 		= router_iact_1_0_horiz_data_out_ready; 
assign iact_horiz_data_out_ready[1][1] 		= router_iact_1_1_horiz_data_out_ready; 
assign iact_horiz_data_out_ready[1][2] 		= router_iact_1_2_horiz_data_out_ready;
assign iact_north_data_out_ready[2][0] 		= router_iact_2_0_north_data_out_ready; 	
assign iact_north_data_out_ready[2][1] 		= router_iact_2_1_north_data_out_ready; 
assign iact_north_data_out_ready[2][2] 		= router_iact_2_2_north_data_out_ready; 
assign iact_south_data_out_ready[2][0] 		= router_iact_2_0_south_data_out_ready; 
assign iact_south_data_out_ready[2][1] 		= router_iact_2_1_south_data_out_ready; 
assign iact_south_data_out_ready[2][2] 		= router_iact_2_2_south_data_out_ready; 
assign iact_horiz_data_out_ready[2][0] 		= router_iact_2_0_horiz_data_out_ready; 
assign iact_horiz_data_out_ready[2][1] 		= router_iact_2_1_horiz_data_out_ready; 
assign iact_horiz_data_out_ready[2][2] 		= router_iact_2_2_horiz_data_out_ready;

// iact_valid
	
assign iact_north_address_in_valid[0][0] 		= router_iact_0_0_north_address_in_valid; 
assign iact_north_address_in_valid[0][1] 		= router_iact_0_1_north_address_in_valid; 
assign iact_north_address_in_valid[0][2] 		= router_iact_0_2_north_address_in_valid;	
assign iact_south_address_in_valid[0][0] 		= router_iact_0_0_south_address_in_valid;
assign iact_south_address_in_valid[0][1] 		= router_iact_0_1_south_address_in_valid; 	
assign iact_south_address_in_valid[0][2] 		= router_iact_0_2_south_address_in_valid;
assign iact_horiz_address_in_valid[0][0] 		= router_iact_0_0_horiz_address_in_valid;
assign iact_horiz_address_in_valid[0][1] 		= router_iact_0_1_horiz_address_in_valid;
assign iact_horiz_address_in_valid[0][2] 		= router_iact_0_2_horiz_address_in_valid;
assign iact_north_data_in_valid[0][0] 		= router_iact_0_0_north_data_in_valid; 	
assign iact_north_data_in_valid[0][1] 		= router_iact_0_1_north_data_in_valid;	
assign iact_north_data_in_valid[0][2] 		= router_iact_0_2_north_data_in_valid; 
assign iact_south_data_in_valid[0][0] 		= router_iact_0_0_south_data_in_valid; 
assign iact_south_data_in_valid[0][1] 		= router_iact_0_1_south_data_in_valid; 	
assign iact_south_data_in_valid[0][2] 		= router_iact_0_2_south_data_in_valid; 
assign iact_horiz_data_in_valid[0][0] 		= router_iact_0_0_horiz_data_in_valid; 
assign iact_horiz_data_in_valid[0][1] 		= router_iact_0_1_horiz_data_in_valid; 
assign iact_horiz_data_in_valid[0][2] 		= router_iact_0_2_horiz_data_in_valid; 
assign iact_north_address_in_valid[1][0] 		= router_iact_1_0_north_address_in_valid; 
assign iact_north_address_in_valid[1][1] 		= router_iact_1_1_north_address_in_valid; 
assign iact_north_address_in_valid[1][2] 		= router_iact_1_2_north_address_in_valid;	
assign iact_south_address_in_valid[1][0] 		= router_iact_1_0_south_address_in_valid;
assign iact_south_address_in_valid[1][1] 		= router_iact_1_1_south_address_in_valid; 	
assign iact_south_address_in_valid[1][2] 		= router_iact_1_2_south_address_in_valid;
assign iact_horiz_address_in_valid[1][0] 		= router_iact_1_0_horiz_address_in_valid;
assign iact_horiz_address_in_valid[1][1] 		= router_iact_1_1_horiz_address_in_valid;
assign iact_horiz_address_in_valid[1][2] 		= router_iact_1_2_horiz_address_in_valid;
assign iact_north_data_in_valid[1][0] 		= router_iact_1_0_north_data_in_valid; 	
assign iact_north_data_in_valid[1][1] 		= router_iact_1_1_north_data_in_valid;	
assign iact_north_data_in_valid[1][2] 		= router_iact_1_2_north_data_in_valid; 
assign iact_south_data_in_valid[1][0] 		= router_iact_1_0_south_data_in_valid; 
assign iact_south_data_in_valid[1][1] 		= router_iact_1_1_south_data_in_valid; 	
assign iact_south_data_in_valid[1][2] 		= router_iact_1_2_south_data_in_valid; 
assign iact_horiz_data_in_valid[1][0] 		= router_iact_1_0_horiz_data_in_valid; 
assign iact_horiz_data_in_valid[1][1] 		= router_iact_1_1_horiz_data_in_valid; 
assign iact_horiz_data_in_valid[1][2] 		= router_iact_1_2_horiz_data_in_valid;
assign iact_north_address_in_valid[2][0] 		= router_iact_2_0_north_address_in_valid; 
assign iact_north_address_in_valid[2][1] 		= router_iact_2_1_north_address_in_valid; 
assign iact_north_address_in_valid[2][2] 		= router_iact_2_2_north_address_in_valid;	
assign iact_south_address_in_valid[2][0] 		= router_iact_2_0_south_address_in_valid;
assign iact_south_address_in_valid[2][1] 		= router_iact_2_1_south_address_in_valid; 	
assign iact_south_address_in_valid[2][2] 		= router_iact_2_2_south_address_in_valid;
assign iact_horiz_address_in_valid[2][0] 		= router_iact_2_0_horiz_address_in_valid;
assign iact_horiz_address_in_valid[2][1] 		= router_iact_2_1_horiz_address_in_valid;
assign iact_horiz_address_in_valid[2][2] 		= router_iact_2_2_horiz_address_in_valid;
assign iact_north_data_in_valid[2][0] 		= router_iact_2_0_north_data_in_valid; 	
assign iact_north_data_in_valid[2][1] 		= router_iact_2_1_north_data_in_valid;	
assign iact_north_data_in_valid[2][2] 		= router_iact_2_2_north_data_in_valid; 
assign iact_south_data_in_valid[2][0] 		= router_iact_2_0_south_data_in_valid; 
assign iact_south_data_in_valid[2][1] 		= router_iact_2_1_south_data_in_valid; 	
assign iact_south_data_in_valid[2][2] 		= router_iact_2_2_south_data_in_valid; 
assign iact_horiz_data_in_valid[2][0] 		= router_iact_2_0_horiz_data_in_valid; 
assign iact_horiz_data_in_valid[2][1] 		= router_iact_2_1_horiz_data_in_valid; 
assign iact_horiz_data_in_valid[2][2] 		= router_iact_2_2_horiz_data_in_valid;
	
// iact_data	
	
assign iact_north_address_in_bits[0][0] 		= router_iact_0_0_north_address_in; 
assign iact_north_address_in_bits[0][1] 		= router_iact_0_1_north_address_in; 
assign iact_north_address_in_bits[0][2] 		= router_iact_0_2_north_address_in;
assign iact_south_address_in_bits[0][0] 		= router_iact_0_0_south_address_in; 
assign iact_south_address_in_bits[0][1] 		= router_iact_0_1_south_address_in;
assign iact_south_address_in_bits[0][2] 		= router_iact_0_2_south_address_in; 
assign iact_horiz_address_in_bits[0][0] 		= router_iact_0_0_horiz_address_in; 	
assign iact_horiz_address_in_bits[0][1] 		= router_iact_0_1_horiz_address_in; 
assign iact_horiz_address_in_bits[0][2] 		= router_iact_0_2_horiz_address_in;
assign iact_north_data_in_bits[0][0] 			= router_iact_0_0_north_data_in; 	
assign iact_north_data_in_bits[0][1] 			= router_iact_0_1_north_data_in; 	
assign iact_north_data_in_bits[0][2] 			= router_iact_0_2_north_data_in; 	
assign iact_south_data_in_bits[0][0] 			= router_iact_0_0_south_data_in; 	 
assign iact_south_data_in_bits[0][1] 			= router_iact_0_1_south_data_in; 	
assign iact_south_data_in_bits[0][2] 			= router_iact_0_2_south_data_in;		
assign iact_horiz_data_in_bits[0][0] 			= router_iact_0_0_horiz_data_in; 
assign iact_horiz_data_in_bits[0][1] 			= router_iact_0_1_horiz_data_in;
assign iact_horiz_data_in_bits[0][2] 			= router_iact_0_2_horiz_data_in;
assign iact_north_address_in_bits[1][0] 		= router_iact_1_0_north_address_in; 
assign iact_north_address_in_bits[1][1] 		= router_iact_1_1_north_address_in; 
assign iact_north_address_in_bits[1][2] 		= router_iact_1_2_north_address_in;
assign iact_south_address_in_bits[1][0] 		= router_iact_1_0_south_address_in; 
assign iact_south_address_in_bits[1][1] 		= router_iact_1_1_south_address_in;
assign iact_south_address_in_bits[1][2] 		= router_iact_1_2_south_address_in; 
assign iact_horiz_address_in_bits[1][0] 		= router_iact_1_0_horiz_address_in; 	
assign iact_horiz_address_in_bits[1][1] 		= router_iact_1_1_horiz_address_in; 
assign iact_horiz_address_in_bits[1][2] 		= router_iact_1_2_horiz_address_in;
assign iact_north_data_in_bits[1][0] 			= router_iact_1_0_north_data_in; 	
assign iact_north_data_in_bits[1][1] 			= router_iact_1_1_north_data_in; 	
assign iact_north_data_in_bits[1][2] 			= router_iact_1_2_north_data_in; 	
assign iact_south_data_in_bits[1][0] 			= router_iact_1_0_south_data_in; 	 
assign iact_south_data_in_bits[1][1] 			= router_iact_1_1_south_data_in; 	
assign iact_south_data_in_bits[1][2] 			= router_iact_1_2_south_data_in;		
assign iact_horiz_data_in_bits[1][0] 			= router_iact_1_0_horiz_data_in; 
assign iact_horiz_data_in_bits[1][1] 			= router_iact_1_1_horiz_data_in;
assign iact_horiz_data_in_bits[1][2] 			= router_iact_1_2_horiz_data_in;
assign iact_north_address_in_bits[2][0] 		= router_iact_2_0_north_address_in; 
assign iact_north_address_in_bits[2][1] 		= router_iact_2_1_north_address_in; 
assign iact_north_address_in_bits[2][2] 		= router_iact_2_2_north_address_in;
assign iact_south_address_in_bits[2][0] 		= router_iact_2_0_south_address_in; 
assign iact_south_address_in_bits[2][1] 		= router_iact_2_1_south_address_in;
assign iact_south_address_in_bits[2][2] 		= router_iact_2_2_south_address_in; 
assign iact_horiz_address_in_bits[2][0] 		= router_iact_2_0_horiz_address_in; 	
assign iact_horiz_address_in_bits[2][1] 		= router_iact_2_1_horiz_address_in; 
assign iact_horiz_address_in_bits[2][2] 		= router_iact_2_2_horiz_address_in;
assign iact_north_data_in_bits[2][0] 			= router_iact_2_0_north_data_in; 	
assign iact_north_data_in_bits[2][1] 			= router_iact_2_1_north_data_in; 	
assign iact_north_data_in_bits[2][2] 			= router_iact_2_2_north_data_in; 	
assign iact_south_data_in_bits[2][0] 			= router_iact_2_0_south_data_in; 	 
assign iact_south_data_in_bits[2][1] 			= router_iact_2_1_south_data_in; 	
assign iact_south_data_in_bits[2][2] 			= router_iact_2_2_south_data_in;		
assign iact_horiz_data_in_bits[2][0] 			= router_iact_2_0_horiz_data_in; 
assign iact_horiz_data_in_bits[2][1] 			= router_iact_2_1_horiz_data_in;
assign iact_horiz_data_in_bits[2][2] 			= router_iact_2_2_horiz_data_in;
	
	
// weight_ready (weight GLBs are just li	ke weight router)
assign weight_horiz_address_out_ready[0] 	= router_weight_0_horiz_address_out_ready; 
assign weight_horiz_address_out_ready[1] 	= router_weight_1_horiz_address_out_ready;
assign weight_horiz_address_out_ready[2] 	= router_weight_2_horiz_address_out_ready; 
assign weight_horiz_data_out_ready[0] 		= router_weight_0_horiz_data_out_ready; 
assign weight_horiz_data_out_ready[1] 		= router_weight_1_horiz_data_out_ready; 
assign weight_horiz_data_out_ready[2] 		= router_weight_2_horiz_data_out_ready; 
	
// weight_valid	
assign weight_GLB_address_in_valid[0] 		= GLBCluster_weight_address_out_valid[0]; 
assign weight_GLB_address_in_valid[1] 		= GLBCluster_weight_address_out_valid[1]; 
assign weight_GLB_address_in_valid[2] 		= GLBCluster_weight_address_out_valid[2]; 
assign weight_horiz_address_in_valid[0] 		= router_weight_0_horiz_address_in_valid;
assign weight_horiz_address_in_valid[1] 		= router_weight_1_horiz_address_in_valid;
assign weight_horiz_address_in_valid[2] 		= router_weight_2_horiz_address_in_valid;
	
assign weight_GLB_data_in_valid[0] 			= GLBCluster_weight_data_out_valid[0];
assign weight_GLB_data_in_valid[1] 			= GLBCluster_weight_data_out_valid[1];
assign weight_GLB_data_in_valid[2] 			= GLBCluster_weight_data_out_valid[2];
assign weight_horiz_data_in_valid[0] 		= router_weight_0_horiz_data_in_valid; 
assign weight_horiz_data_in_valid[1] 		= router_weight_1_horiz_data_in_valid;
assign weight_horiz_data_in_valid[2] 		= router_weight_2_horiz_data_in_valid; 
	
// weight_data	
assign weight_GLB_address_in_bits[0] 		= GLBCluster_weight_address_out[0];
assign weight_GLB_address_in_bits[1] 		= GLBCluster_weight_address_out[1]; 
assign weight_GLB_address_in_bits[2] 		= GLBCluster_weight_address_out[2];
assign weight_horiz_address_in_bits[0] 		= router_weight_0_horiz_address_in; 
assign weight_horiz_address_in_bits[1] 		= router_weight_1_horiz_address_in; 
assign weight_horiz_address_in_bits[2] 		= router_weight_2_horiz_address_in; 
	
assign weight_GLB_data_in_bits[0] 			= GLBCluster_weight_data_out[0]; 
assign weight_GLB_data_in_bits[1] 			= GLBCluster_weight_data_out[1]; 
assign weight_GLB_data_in_bits[2] 			= GLBCluster_weight_data_out[2]; 
assign weight_horiz_data_in_bits[0] 			= router_weight_0_horiz_data_in;
assign weight_horiz_data_in_bits[1] 			= router_weight_1_horiz_data_in;
assign weight_horiz_data_in_bits[2] 			= router_weight_2_horiz_data_in;

// psum router inter-connection
assign psum_PE_out_ready[0] 					= PECluster_psum_in_ready[0]; 
assign psum_PE_out_ready[1] 					= PECluster_psum_in_ready[1]; 
assign psum_PE_out_ready[2] 					= PECluster_psum_in_ready[2];  	
assign psum_GLB_out_ready[0] 				= router_cluster_psum_data_out_sel & GLBCluster_psum_data_in_ready[0]; 
assign psum_GLB_out_ready[1] 				= router_cluster_psum_data_out_sel & GLBCluster_psum_data_in_ready[1];
assign psum_GLB_out_ready[2] 				= router_cluster_psum_data_out_sel & GLBCluster_psum_data_in_ready[2];
assign psum_south_out_ready[0] 				= router_psum_0_south_out_ready; 
assign psum_south_out_ready[1] 				= router_psum_1_south_out_ready; 
assign psum_south_out_ready[2] 				= router_psum_2_south_out_ready; 
			
assign psum_PE_in_valid[0] 					= PECluster_psum_out_valid[0]; 
assign psum_PE_in_valid[1] 					= PECluster_psum_out_valid[1]; 
assign psum_PE_in_valid[2] 					= PECluster_psum_out_valid[2]; 
assign psum_GLB_in_valid[0] 					= GLBCluster_psum_data_out_valid[0] & cg_ctrl_psum_add; 	
assign psum_GLB_in_valid[1] 					= GLBCluster_psum_data_out_valid[1] & cg_ctrl_psum_add; 
assign psum_GLB_in_valid[2] 					= GLBCluster_psum_data_out_valid[2] & cg_ctrl_psum_add; 
assign psum_north_in_valid[0] 				= router_psum_0_north_in_valid; 
assign psum_north_in_valid[1] 				= router_psum_1_north_in_valid; 
assign psum_north_in_valid[2] 				= router_psum_2_north_in_valid;
			
assign psum_PE_in_bits[0] 					= PECluster_psum_out[0]; 
assign psum_PE_in_bits[1] 					= PECluster_psum_out[1]; 
assign psum_PE_in_bits[2] 					= PECluster_psum_out[2]; 
assign psum_GLB_in_bits[0] 					= GLBCluster_psum_data_out[0]; 
assign psum_GLB_in_bits[1] 					= GLBCluster_psum_data_out[1];
assign psum_GLB_in_bits[2] 					= GLBCluster_psum_data_out[2]; 
assign psum_north_in_bits[0] 				= router_psum_0_north_in;	
assign psum_north_in_bits[1] 				= router_psum_1_north_in; 	
assign psum_north_in_bits[2] 				= router_psum_2_north_in; 

// cluster group control
assign cg_ctrl_clock = clock;
assign cg_ctrl_reset = reset;
assign cg_ctrl_GLB_psum_0_write_done 		= GLBCluster_psum_write_done[0]; 
assign cg_ctrl_GLB_psum_1_write_done 		= GLBCluster_psum_write_done[1]; 
assign cg_ctrl_GLB_psum_2_write_done 		= GLBCluster_psum_write_done[2]; 
		
assign cg_ctrl_GLB_iact_0_0_write_done 		= GLBCluster_iact_write_done[0][0];	
assign cg_ctrl_GLB_iact_0_1_write_done 		= GLBCluster_iact_write_done[0][1]; 		
assign cg_ctrl_GLB_iact_0_2_write_done 		= GLBCluster_iact_write_done[0][2]; 
assign cg_ctrl_GLB_iact_1_0_write_done 		= GLBCluster_iact_write_done[1][0];	
assign cg_ctrl_GLB_iact_1_1_write_done 		= GLBCluster_iact_write_done[1][1]; 		
assign cg_ctrl_GLB_iact_1_2_write_done 		= GLBCluster_iact_write_done[1][2]; 
assign cg_ctrl_GLB_iact_2_0_write_done 		= GLBCluster_iact_write_done[2][0];	
assign cg_ctrl_GLB_iact_2_1_write_done 		= GLBCluster_iact_write_done[2][1]; 		
assign cg_ctrl_GLB_iact_2_2_write_done 		= GLBCluster_iact_write_done[2][2]; 
		
assign cg_ctrl_GLB_iact_0_0_read_done  		= GLBCluster_iact_read_done[0][0]; 		
assign cg_ctrl_GLB_iact_0_1_read_done  		= GLBCluster_iact_read_done[0][1]; 		
assign cg_ctrl_GLB_iact_0_2_read_done  		= GLBCluster_iact_read_done[0][2]; 	
assign cg_ctrl_GLB_iact_1_0_read_done  		= GLBCluster_iact_read_done[1][0]; 		
assign cg_ctrl_GLB_iact_1_1_read_done  		= GLBCluster_iact_read_done[1][1]; 		
assign cg_ctrl_GLB_iact_1_2_read_done  		= GLBCluster_iact_read_done[1][2]; 
assign cg_ctrl_GLB_iact_2_0_read_done  		= GLBCluster_iact_read_done[2][0]; 		
assign cg_ctrl_GLB_iact_2_1_read_done  		= GLBCluster_iact_read_done[2][1]; 		
assign cg_ctrl_GLB_iact_2_2_read_done  		= GLBCluster_iact_read_done[2][2]; 

assign cg_ctrl_read_psum_en 				= read_psum_en; 
assign cg_ctrl_cg_en 						= cg_en; 
assign cg_ctrl_PE_all_write_fin 			= PECluster_all_write_fin;
assign cg_ctrl_src_GLB_load_fin 			= src_GLB_load_fin;
assign cg_ctrl_psum_acc_en					= psum_acc_en;
assign cg_ctrl_psum_acc_fin					= psum_acc_fin;


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
