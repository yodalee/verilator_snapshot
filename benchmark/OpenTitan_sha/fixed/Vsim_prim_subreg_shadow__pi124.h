// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_SUBREG_SHADOW__PI124_H_
#define VERILATED_VSIM_PRIM_SUBREG_SHADOW__PI124_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_subreg_shadow__pi124 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(rst_shadowed_ni,0,0);
    VL_IN8(re,0,0);
    VL_IN8(we,0,0);
    VL_IN8(wd,0,0);
    VL_IN8(de,0,0);
    VL_IN8(d,0,0);
    VL_OUT8(__PVT__qe,0,0);
    VL_OUT8(q,0,0);
    VL_OUT8(__PVT__ds,0,0);
    VL_OUT8(qs,0,0);
    VL_OUT8(__PVT__phase,0,0);
    VL_OUT8(err_update,0,0);
    VL_OUT8(err_storage,0,0);
    CData/*0:0*/ __PVT__phase_q;
    CData/*0:0*/ __PVT__staged_q;
    CData/*0:0*/ __PVT__shadow_q;
    CData/*0:0*/ __PVT__committed_q;
    CData/*0:0*/ __PVT__staged_reg__DOT__we;
    CData/*0:0*/ __PVT__committed_reg__DOT__we;
    CData/*0:0*/ __PVT__committed_reg__DOT__wd;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_subreg_shadow__pi124(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_subreg_shadow__pi124();
    VL_UNCOPYABLE(Vsim_prim_subreg_shadow__pi124);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
