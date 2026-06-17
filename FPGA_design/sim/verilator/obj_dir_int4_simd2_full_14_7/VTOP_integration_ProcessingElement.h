// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP_integration.h for the primary calling header

#ifndef VERILATED_VTOP_INTEGRATION_PROCESSINGELEMENT_H_
#define VERILATED_VTOP_INTEGRATION_PROCESSINGELEMENT_H_  // guard

#include "verilated.h"


class VTOP_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTOP_integration_ProcessingElement final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__psum_in_ready,0,0);
        VL_IN8(__PVT__psum_in_valid,0,0);
        VL_IN8(__PVT__psum_out_ready,0,0);
        VL_OUT8(__PVT__psum_out_valid,0,0);
        VL_IN8(__PVT__iact_address_in_valid,0,0);
        VL_IN8(__PVT__iact_address_in,7,0);
        VL_IN8(__PVT__iact_data_in_valid,0,0);
        VL_IN8(__PVT__weight_address_in_valid,0,0);
        VL_IN8(__PVT__weight_address_in,6,0);
        VL_IN8(__PVT__weight_data_in_valid,0,0);
        VL_OUT8(__PVT__iact_address_write_fin,0,0);
        VL_OUT8(__PVT__iact_data_write_fin,0,0);
        VL_OUT8(__PVT__psum_add_fin,0,0);
        VL_IN8(__PVT__psum_enq_en,0,0);
        VL_IN8(__PVT__do_load_en,0,0);
        VL_OUT8(__PVT__cal_fin,0,0);
        VL_IN8(__PVT__iact_write_fin_clear,0,0);
        VL_IN8(__PVT__weight_write_fin_clear,0,0);
        VL_OUT8(__PVT__all_write_fin,0,0);
        VL_IN8(__PVT__PSUM_DEPTH,4,0);
        VL_IN8(__PVT__psum_spad_clear,0,0);
        VL_IN8(__PVT__int4_former_weight_mode,0,0);
        VL_IN8(__PVT__int4_later_weight_mode,0,0);
        CData/*0:0*/ __PVT__PE_pad_cal_fin;
        CData/*0:0*/ __PVT__PE_pad_psum_in_ready;
        CData/*0:0*/ __PVT__PE_pad_later_address_write_fin;
        CData/*0:0*/ __PVT__PE_pad_later_data_write_fin;
        CData/*7:0*/ __PVT__FIFO_former_address_out;
        CData/*6:0*/ __PVT__FIFO_later_address_out;
        CData/*0:0*/ __PVT__FIFO_out_psum_in_ready;
        CData/*0:0*/ __PVT__former_addr_write_fin_reg;
        CData/*0:0*/ __PVT__former_data_write_fin_reg;
        CData/*0:0*/ __PVT__later_addr_write_fin_reg;
        CData/*0:0*/ __PVT__later_data_write_fin_reg;
        CData/*1:0*/ __PVT__Processing_Element_Controller_inst__DOT__PE_state;
        CData/*1:0*/ __PVT__Processing_Element_Controller_inst__DOT__next_PE_state;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc;
        CData/*6:0*/ __PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1;
        CData/*3:0*/ __PVT__Processing_Element_core_inst__DOT__PE_state;
        CData/*3:0*/ __PVT__Processing_Element_core_inst__DOT__next_PE_state;
        CData/*3:0*/ __PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__psum_load_state;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__next_psum_read_idx;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_zero_col_wire;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire;
    };
    struct {
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg;
        CData/*0:0*/ Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg;
        CData/*3:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
        CData/*3:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake;
        CData/*7:0*/ Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra;
        CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
        CData/*4:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake;
        CData/*6:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
        CData/*6:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake;
        CData/*6:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr;
        CData/*6:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra;
        CData/*6:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
        CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag;
        CData/*0:0*/ __PVT__former_addr_FIFO__DOT__maybe_full;
        CData/*1:0*/ __PVT__former_addr_FIFO__DOT__buffer_read_addr;
        CData/*1:0*/ __PVT__former_addr_FIFO__DOT__buffer_write_addr;
        CData/*0:0*/ __PVT__former_addr_FIFO__DOT__empty;
        CData/*0:0*/ __PVT__former_addr_FIFO__DOT__write_en;
        CData/*0:0*/ __PVT__former_addr_FIFO__DOT__read_en;
        CData/*0:0*/ __PVT__former_data_FIFO__DOT__maybe_full;
        CData/*1:0*/ __PVT__former_data_FIFO__DOT__buffer_read_addr;
        CData/*1:0*/ __PVT__former_data_FIFO__DOT__buffer_write_addr;
        CData/*0:0*/ __PVT__former_data_FIFO__DOT__empty;
        CData/*0:0*/ __PVT__former_data_FIFO__DOT__write_en;
        CData/*0:0*/ __PVT__former_data_FIFO__DOT__read_en;
        CData/*0:0*/ __PVT__later_addr_FIFO__DOT__maybe_full;
        CData/*1:0*/ __PVT__later_addr_FIFO__DOT__buffer_read_addr;
        CData/*1:0*/ __PVT__later_addr_FIFO__DOT__buffer_write_addr;
        CData/*0:0*/ __PVT__later_addr_FIFO__DOT__empty;
        CData/*0:0*/ __PVT__later_addr_FIFO__DOT__write_en;
        CData/*0:0*/ __PVT__later_addr_FIFO__DOT__read_en;
        CData/*0:0*/ __PVT__later_data_FIFO__DOT__maybe_full;
        CData/*1:0*/ __PVT__later_data_FIFO__DOT__buffer_read_addr;
        CData/*1:0*/ __PVT__later_data_FIFO__DOT__buffer_write_addr;
        CData/*0:0*/ __PVT__later_data_FIFO__DOT__empty;
        CData/*0:0*/ __PVT__later_data_FIFO__DOT__write_en;
    };
    struct {
        CData/*0:0*/ __PVT__later_data_FIFO__DOT__read_en;
        CData/*1:0*/ __PVT__psum_in_FIFO__DOT__buffer_read_addr;
        CData/*1:0*/ __PVT__psum_in_FIFO__DOT__buffer_write_addr;
        CData/*0:0*/ __PVT__psum_in_FIFO__DOT__maybe_full;
        CData/*0:0*/ __PVT__psum_in_FIFO__DOT__data_in_shake;
        CData/*0:0*/ __PVT__psum_in_FIFO__DOT__write_en;
        CData/*1:0*/ __PVT__psum_out_FIFO__DOT__buffer_read_addr;
        CData/*1:0*/ __PVT__psum_out_FIFO__DOT__buffer_write_addr;
        CData/*0:0*/ __PVT__psum_out_FIFO__DOT__maybe_full;
        CData/*0:0*/ __PVT__psum_out_FIFO__DOT__data_in_shake;
        CData/*0:0*/ __PVT__psum_out_FIFO__DOT__write_en;
        VL_IN16(__PVT__iact_data_in,12,0);
        VL_IN16(__PVT__weight_data_in,15,0);
        SData/*12:0*/ __PVT__FIFO_former_data_out;
        SData/*15:0*/ __PVT__FIFO_later_data_out;
        SData/*15:0*/ __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout;
        VL_IN(__PVT__psum_in,20,0);
        VL_OUT(__PVT__psum_out,20,0);
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__product_reg;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__product_lane1_reg;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__psum_load_reg;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire;
        IData/*31:0*/ __PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
        IData/*31:0*/ __PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
        IData/*31:0*/ __PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb;
        IData/*20:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg;
        IData/*17:0*/ __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg;
        VlUnpacked<IData/*20:0*/, 32> __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem;
        VlUnpacked<IData/*20:0*/, 32> __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem;
        VlUnpacked<CData/*7:0*/, 12> __PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad;
        VlUnpacked<IData/*17:0*/, 256> __PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad;
        VlUnpacked<CData/*6:0*/, 32> __PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad;
        VlUnpacked<SData/*15:0*/, 128> __PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad;
        VlUnpacked<CData/*7:0*/, 4> __PVT__former_addr_FIFO__DOT__buffer;
        VlUnpacked<SData/*12:0*/, 4> __PVT__former_data_FIFO__DOT__buffer;
        VlUnpacked<CData/*6:0*/, 4> __PVT__later_addr_FIFO__DOT__buffer;
        VlUnpacked<SData/*15:0*/, 4> __PVT__later_data_FIFO__DOT__buffer;
    };

    // INTERNAL VARIABLES
    VTOP_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_integration_ProcessingElement(VTOP_integration__Syms* symsp, const char* v__name);
    ~VTOP_integration_ProcessingElement();
    VL_UNCOPYABLE(VTOP_integration_ProcessingElement);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
