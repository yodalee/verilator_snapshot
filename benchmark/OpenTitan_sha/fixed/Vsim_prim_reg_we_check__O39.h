// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_REG_WE_CHECK__O39_H_
#define VERILATED_VSIM_PRIM_REG_WE_CHECK__O39_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_reg_we_check__O39 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(en_i,0,0);
    VL_OUT8(err_o,0,0);
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__err_o;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__;
    CData/*0:0*/ __PVT__u_prim_onehot_check__DOT__oh0_err;
    VlWide<4>/*126:0*/ __PVT__u_prim_onehot_check__DOT__or_tree;
    VlWide<4>/*126:0*/ __PVT__u_prim_onehot_check__DOT__err_tree;
    VlWide<4>/*119:0*/ u_prim_onehot_check__DOT____VdfgRegularize_h0c9e6cb2_0_63;
    VL_IN64(oh_i,56,0);
    QData/*56:0*/ __PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_reg_we_check__O39(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_reg_we_check__O39();
    VL_UNCOPYABLE(Vsim_prim_reg_we_check__O39);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
