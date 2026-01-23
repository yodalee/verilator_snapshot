// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_FLOP_2SYNC__W1_H_
#define VERILATED_VSIM_PRIM_FLOP_2SYNC__W1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_flop_2sync__W1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(d_i,0,0);
    VL_OUT8(q_o,0,0);
    CData/*0:0*/ __PVT__gen_generic__DOT__u_impl_generic__DOT__intq;
    CData/*0:0*/ __PVT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    CData/*0:0*/ __Vdly__gen_generic__DOT__u_impl_generic__DOT__intq;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_flop_2sync__W1(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_flop_2sync__W1();
    VL_UNCOPYABLE(Vsim_prim_flop_2sync__W1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
