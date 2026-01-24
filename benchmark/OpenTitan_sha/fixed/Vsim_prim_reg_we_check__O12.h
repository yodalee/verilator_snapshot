// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_REG_WE_CHECK__O12_H_
#define VERILATED_VSIM_PRIM_REG_WE_CHECK__O12_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_reg_we_check__O12 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(en_i,0,0);
    VL_OUT8(err_o,0,0);
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__err_o;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__;
    VL_IN(oh_i,17,0);
    IData/*17:0*/ __PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_reg_we_check__O12(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_reg_we_check__O12();
    VL_UNCOPYABLE(Vsim_prim_reg_we_check__O12);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
