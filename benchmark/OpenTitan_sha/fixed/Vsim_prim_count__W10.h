// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_COUNT__W10_H_
#define VERILATED_VSIM_PRIM_COUNT__W10_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_count__W10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(clr_i,0,0);
    VL_IN8(set_i,0,0);
    VL_IN8(incr_en_i,0,0);
    VL_IN8(decr_en_i,0,0);
    VL_IN8(commit_i,0,0);
    VL_OUT8(err_o,0,0);
    CData/*0:0*/ __PVT__err_q;
    VL_IN16(set_cnt_i,15,0);
    VL_IN16(step_i,15,0);
    VL_OUT16(cnt_o,15,0);
    VL_OUT16(__PVT__cnt_after_commit_o,15,0);
    SData/*15:0*/ __PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    SData/*15:0*/ __PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
    SData/*15:0*/ __PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    SData/*15:0*/ __PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    IData/*16:0*/ __PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
    IData/*16:0*/ __PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_count__W10(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_count__W10();
    VL_UNCOPYABLE(Vsim_prim_count__W10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
