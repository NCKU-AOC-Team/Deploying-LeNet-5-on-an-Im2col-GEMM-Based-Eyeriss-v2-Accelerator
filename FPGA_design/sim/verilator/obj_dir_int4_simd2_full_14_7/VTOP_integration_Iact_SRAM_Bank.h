// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP_integration.h for the primary calling header

#ifndef VERILATED_VTOP_INTEGRATION_IACT_SRAM_BANK_H_
#define VERILATED_VTOP_INTEGRATION_IACT_SRAM_BANK_H_  // guard

#include "verilated.h"


class VTOP_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTOP_integration_Iact_SRAM_Bank final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__iact_address_in_ready,0,0);
    VL_IN8(__PVT__iact_address_in_valid,0,0);
    VL_IN8(__PVT__iact_address_in,6,0);
    VL_OUT8(__PVT__iact_data_in_ready,0,0);
    VL_IN8(__PVT__iact_data_in_valid,0,0);
    VL_IN8(__PVT__iact_address_out_ready,0,0);
    VL_OUT8(__PVT__iact_address_out_valid,0,0);
    VL_OUT8(__PVT__iact_address_out,6,0);
    VL_IN8(__PVT__iact_data_out_ready,0,0);
    VL_OUT8(__PVT__iact_data_out_valid,0,0);
    VL_IN8(__PVT__iact_write_en,0,0);
    VL_OUT8(__PVT__iact_write_done,0,0);
    VL_IN8(__PVT__iact_read_en,0,0);
    VL_OUT8(__PVT__iact_read_done,0,0);
    CData/*1:0*/ __PVT__iact_read_state;
    CData/*1:0*/ __PVT__next_iact_read_state;
    CData/*1:0*/ __PVT__iact_write_state;
    CData/*1:0*/ __PVT__next_iact_write_state;
    CData/*0:0*/ __PVT__addr_SRAM_write_done;
    CData/*0:0*/ __PVT__addr_SRAM_read_en;
    CData/*0:0*/ __PVT__addr_SRAM_read_done;
    CData/*0:0*/ __PVT__data_SRAM_write_done;
    CData/*0:0*/ __PVT__data_SRAM_read_en;
    CData/*0:0*/ __PVT__data_SRAM_read_done;
    CData/*0:0*/ __PVT__write_done_both;
    CData/*0:0*/ __PVT__read_done_both;
    CData/*1:0*/ __PVT__iact_addr_SRAM_inst__DOT__read_zero_state;
    CData/*1:0*/ __PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state;
    CData/*1:0*/ __PVT__iact_addr_SRAM_inst__DOT__write_zero_state;
    CData/*1:0*/ __PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state;
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read;
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__read_done_wire;
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr;
    CData/*6:0*/ __PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    CData/*1:0*/ __PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag;
    CData/*1:0*/ __PVT__iact_data_SRAM_inst__DOT__read_zero_state;
    CData/*1:0*/ __PVT__iact_data_SRAM_inst__DOT__next_read_zero_state;
    CData/*1:0*/ __PVT__iact_data_SRAM_inst__DOT__write_zero_state;
    CData/*1:0*/ __PVT__iact_data_SRAM_inst__DOT__next_write_zero_state;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__read_shake;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__read_done_wire;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en;
    CData/*1:0*/ __PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag;
    VL_IN16(__PVT__iact_data_in,15,0);
    VL_OUT16(__PVT__iact_data_out,15,0);
    VL_IN16(__PVT__iact_read_addr,9,0);
    SData/*9:0*/ __PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    SData/*9:0*/ __PVT__iact_addr_SRAM_inst__DOT__stream_read_idx;
    SData/*9:0*/ __PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    SData/*8:0*/ __PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra;
    SData/*10:0*/ __PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    SData/*10:0*/ __PVT__iact_data_SRAM_inst__DOT__stream_read_idx;
    SData/*10:0*/ __PVT__iact_data_SRAM_inst__DOT__LUT_write_idx;
    SData/*15:0*/ __PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    VlUnpacked<SData/*9:0*/, 32> __PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem;
    VlUnpacked<CData/*6:0*/, 512> __PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem;
    VlUnpacked<SData/*10:0*/, 32> __PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem;
    VlUnpacked<SData/*15:0*/, 2048> __PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem;

    // INTERNAL VARIABLES
    VTOP_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_integration_Iact_SRAM_Bank(VTOP_integration__Syms* symsp, const char* v__name);
    ~VTOP_integration_Iact_SRAM_Bank();
    VL_UNCOPYABLE(VTOP_integration_Iact_SRAM_Bank);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
