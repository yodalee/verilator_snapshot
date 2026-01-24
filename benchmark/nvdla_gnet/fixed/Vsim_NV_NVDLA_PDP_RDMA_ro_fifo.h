// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_PDP_RDMA_RO_FIFO_H_
#define VERILATED_VSIM_NV_NVDLA_PDP_RDMA_RO_FIFO_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_PDP_RDMA_ro_fifo final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    VL_OUT8(ro_wr_prdy,0,0);
    VL_IN8(ro_wr_pvld,0,0);
    VL_IN8(ro_rd_prdy,0,0);
    VL_OUT8(ro_rd_pvld,0,0);
    CData/*0:0*/ __PVT__nvdla_core_clk_mgated;
    CData/*0:0*/ __PVT__wr_reserving;
    CData/*0:0*/ __PVT__ro_wr_busy_int;
    CData/*0:0*/ __PVT__wr_popping;
    CData/*1:0*/ __PVT__ro_wr_count;
    CData/*1:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*1:0*/ __PVT__wr_count_next;
    CData/*0:0*/ __PVT__wr_count_next_is_3;
    CData/*1:0*/ __PVT__ro_wr_adr;
    CData/*1:0*/ __PVT__ro_rd_adr;
    CData/*0:0*/ __PVT__ram_we;
    CData/*1:0*/ __PVT__rd_adr_next_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    CData/*0:0*/ __PVT__ro_rd_pvld_int;
    CData/*1:0*/ __PVT__ro_rd_count_p;
    CData/*1:0*/ __PVT__rd_count_p_next;
    CData/*0:0*/ __VdfgRegularize_he580a38b_0_2;
    CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__disable_asserts;
    CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
    CData/*1:0*/ __PVT__ram__DOT__ra;
    CData/*1:0*/ __Vdly__ro_wr_adr;
    VL_IN(pwrbus_ram_pd,31,0);
    VL_IN64(ro_wr_pd,63,0);
    VL_OUT64(ro_rd_pd,63,0);
    QData/*63:0*/ __PVT__ram__DOT__ram_ff0;
    QData/*63:0*/ __PVT__ram__DOT__ram_ff1;
    QData/*63:0*/ __PVT__ram__DOT__ram_ff2;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_PDP_RDMA_ro_fifo(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_PDP_RDMA_ro_fifo();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
