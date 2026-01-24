// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_MCIF_READ_IG_BPT_H_
#define VERILATED_VSIM_NV_NVDLA_MCIF_READ_IG_BPT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_MCIF_READ_IG_bpt final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    VL_IN8(bpt2arb_req_ready,0,0);
    VL_IN8(dma2bpt_cdt_lat_fifo_pop,0,0);
    VL_IN8(dma2bpt_req_valid,0,0);
    VL_IN8(tieoff_axid,3,0);
    VL_IN8(tieoff_lat_fifo_depth,7,0);
    VL_OUT8(bpt2arb_req_valid,0,0);
    VL_OUT8(dma2bpt_req_ready,0,0);
    CData/*7:0*/ __PVT__lat_cnt_cur;
    CData/*0:0*/ __PVT__lat_count_dec;
    CData/*2:0*/ __PVT__out_size;
    CData/*2:0*/ __PVT__slot_needed;
    CData/*0:0*/ __PVT__bpt2arb_accept;
    CData/*0:0*/ __PVT__bpt2arb_ltran;
    CData/*2:0*/ __PVT__end_offset;
    CData/*2:0*/ __PVT__ftran_size;
    CData/*0:0*/ __PVT__in_vld_p;
    CData/*0:0*/ __PVT__is_single_tran;
    CData/*2:0*/ __PVT__lat_count_inc;
    CData/*0:0*/ __PVT__req_enable;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_ready;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_catch;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready_flop;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_rand_ready;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_ready_bc;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_catch;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready_flop;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_valid;
    SData/*12:0*/ __PVT__count_req;
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    SData/*9:0*/ __PVT__lat_cnt_nxt;
    SData/*12:0*/ __PVT__req_num;
    SData/*14:0*/ __PVT__mtran_num;
    VL_INW(dma2bpt_req_pd,78,0,3);
    VL_OUTW(bpt2arb_req_pd,74,0,3);
    VlWide<3>/*78:0*/ __PVT__in_pd_p;
    VlWide<3>/*78:0*/ __PVT__in_vld_pd;
    VlWide<3>/*78:0*/ __PVT__pipe_p1__DOT__p1_pipe_data;
    VlWide<3>/*78:0*/ __PVT__pipe_p1__DOT__p1_skid_data;
    VlWide<3>/*78:0*/ __PVT__pipe_p2__DOT__p2_pipe_data;
    VlWide<3>/*78:0*/ __PVT__pipe_p2__DOT__p2_skid_data;
    QData/*63:0*/ __PVT__out_addr;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_MCIF_READ_IG_bpt(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_MCIF_READ_IG_bpt();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_MCIF_READ_IG_bpt);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
