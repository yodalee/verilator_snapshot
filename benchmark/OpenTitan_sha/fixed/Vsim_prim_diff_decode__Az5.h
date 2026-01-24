// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_DIFF_DECODE__AZ5_H_
#define VERILATED_VSIM_PRIM_DIFF_DECODE__AZ5_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_flop_2sync__W1;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_diff_decode__Az5 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_flop_2sync__W1* __PVT__gen_async__DOT__i_sync_p;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_ni,0,0);
    VL_IN8(__PVT__diff_pi,0,0);
    VL_IN8(__PVT__diff_ni,0,0);
    VL_OUT8(__PVT__level_o,0,0);
    VL_OUT8(__PVT__rise_o,0,0);
    VL_OUT8(__PVT__fall_o,0,0);
    VL_OUT8(__PVT__event_o,0,0);
    VL_OUT8(__PVT__sigint_o,0,0);
    CData/*0:0*/ __PVT__level_d;
    CData/*0:0*/ __PVT__level_q;
    CData/*1:0*/ __PVT__gen_async__DOT__state_d;
    CData/*1:0*/ __PVT__gen_async__DOT__state_q;
    CData/*0:0*/ __PVT__gen_async__DOT__diff_p_edge;
    CData/*0:0*/ __PVT__gen_async__DOT__diff_n_edge;
    CData/*0:0*/ __PVT__gen_async__DOT__diff_check_ok;
    CData/*0:0*/ __PVT__gen_async__DOT__diff_pq;
    CData/*0:0*/ __PVT__gen_async__DOT__diff_nq;
    CData/*0:0*/ __PVT__gen_async__DOT__diff_nd;
    CData/*0:0*/ __PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_diff_decode__Az5(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_diff_decode__Az5();
    VL_UNCOPYABLE(Vsim_prim_diff_decode__Az5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
