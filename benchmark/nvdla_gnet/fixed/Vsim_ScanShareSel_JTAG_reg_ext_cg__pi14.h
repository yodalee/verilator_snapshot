// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_SCANSHARESEL_JTAG_REG_EXT_CG__PI14_H_
#define VERILATED_VSIM_SCANSHARESEL_JTAG_REG_EXT_CG__PI14_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_,0,0);
    VL_IN8(scanin,0,0);
    VL_IN8(sel,0,0);
    VL_IN8(shiftDR,0,0);
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
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q;
    VL_IN(D,31,0);
    VL_OUT(Q,31,0);

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14();
    VL_UNCOPYABLE(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
