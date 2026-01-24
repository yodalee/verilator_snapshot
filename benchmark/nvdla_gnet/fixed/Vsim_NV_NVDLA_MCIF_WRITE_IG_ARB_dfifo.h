// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_MCIF_WRITE_IG_ARB_DFIFO_H_
#define VERILATED_VSIM_NV_NVDLA_MCIF_WRITE_IG_ARB_DFIFO_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_MCIF_WRITE_IG_ARB_dfifo final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    VL_OUT8(dfifo_wr_count,2,0);
    VL_OUT8(dfifo_wr_prdy,0,0);
    VL_IN8(dfifo_wr_pvld,0,0);
    VL_IN8(dfifo_rd_prdy,0,0);
    VL_OUT8(dfifo_rd_pvld,0,0);
    CData/*0:0*/ __PVT__nvdla_core_clk_mgated;
    CData/*0:0*/ __PVT__wr_reserving;
    CData/*0:0*/ __PVT__dfifo_wr_busy_int;
    CData/*0:0*/ __PVT__wr_popping;
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*2:0*/ __PVT__wr_count_next;
    CData/*0:0*/ __PVT__wr_count_next_is_4;
    CData/*1:0*/ __PVT__dfifo_wr_adr;
    CData/*1:0*/ __PVT__dfifo_rd_adr;
    CData/*1:0*/ __PVT__rd_adr_next_popping;
    CData/*0:0*/ __PVT__dfifo_rd_pvld_int;
    CData/*2:0*/ __PVT__dfifo_rd_count;
    CData/*2:0*/ __PVT__rd_count_next_rd_popping;
    CData/*2:0*/ __PVT__rd_count_next_no_rd_popping;
    CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__disable_asserts;
    CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
    CData/*1:0*/ __Vdly__dfifo_wr_adr;
    VL_INW(dfifo_wr_pd,513,0,17);
    VL_OUTW(dfifo_rd_pd,513,0,17);
    VL_IN(pwrbus_ram_pd,31,0);
    VlWide<17>/*513:0*/ __PVT__ram__DOT__ram_ff0;
    VlWide<17>/*513:0*/ __PVT__ram__DOT__ram_ff1;
    VlWide<17>/*513:0*/ __PVT__ram__DOT__ram_ff2;
    VlWide<17>/*513:0*/ __PVT__ram__DOT__ram_ff3;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_MCIF_WRITE_IG_ARB_dfifo(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_MCIF_WRITE_IG_ARB_dfifo();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_MCIF_WRITE_IG_ARB_dfifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
