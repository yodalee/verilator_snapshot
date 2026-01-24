// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_SCANSHARESEL_JTAG_REG_EXT_CG__PI1_H_
#define VERILATED_VSIM_SCANSHARESEL_JTAG_REG_EXT_CG__PI1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(D,7,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset_,0,0);
    VL_IN8(scanin,0,0);
    VL_IN8(sel,0,0);
    VL_IN8(shiftDR,0,0);
    VL_OUT8(Q,7,0);
    VL_OUT8(scanout,0,0);
    CData/*0:0*/ __PVT__clk_wire;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1();
    VL_UNCOPYABLE(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
