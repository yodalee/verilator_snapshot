// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_SUBREG_SHADOW__SZ75_R0_H_
#define VERILATED_VSIM_PRIM_SUBREG_SHADOW__SZ75_R0_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_subreg_shadow__Sz75_R0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(rst_shadowed_ni,0,0);
    VL_IN8(re,0,0);
    VL_IN8(we,0,0);
    VL_IN8(de,0,0);
    VL_OUT8(__PVT__qe,0,0);
    VL_OUT8(__PVT__phase,0,0);
    VL_OUT8(err_update,0,0);
    VL_OUT8(err_storage,0,0);
    CData/*0:0*/ __PVT__phase_q;
    CData/*0:0*/ __PVT__wr_en_data_arb__DOT__we;
    CData/*0:0*/ __PVT__staged_reg__DOT__we;
    CData/*0:0*/ __PVT__committed_reg__DOT__we;
    VL_IN(wd,31,0);
    VL_IN(d,31,0);
    VL_OUT(q,31,0);
    VL_OUT(__PVT__ds,31,0);
    VL_OUT(qs,31,0);
    IData/*31:0*/ __PVT__staged_q;
    IData/*31:0*/ __PVT__shadow_q;
    IData/*31:0*/ __PVT__committed_q;
    IData/*31:0*/ __PVT__wr_en_data_arb__DOT__wd;
    IData/*31:0*/ __PVT__committed_reg__DOT__wd;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_subreg_shadow__Sz75_R0(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_subreg_shadow__Sz75_R0();
    VL_UNCOPYABLE(Vsim_prim_subreg_shadow__Sz75_R0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
