// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_TLUL_CMD_INTG_CHK_H_
#define VERILATED_VSIM_TLUL_CMD_INTG_CHK_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_tlul_cmd_intg_chk final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(err_o,0,0);
    CData/*6:0*/ __PVT__u_chk__DOT__syndrome_o;
    CData/*6:0*/ __PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o;
    IData/*31:0*/ __PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o;
    VL_INW(tl_i,108,0,4);
    QData/*42:0*/ __PVT__cmd;
    QData/*56:0*/ __PVT__u_chk__DOT__data_o;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__0__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__1__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__2__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__3__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__4__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__5__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__6__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__7__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__8__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__9__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__10__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__11__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__12__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__13__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__14__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__15__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__16__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__17__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__18__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__19__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__20__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__21__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__22__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__23__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__24__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__25__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__26__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__27__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__28__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__29__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__30__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__31__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__32__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__33__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__34__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__35__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__36__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__37__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__38__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__39__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__40__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__41__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__42__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__43__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__44__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__45__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__46__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__47__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__48__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__49__payload;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__50__payload;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_tlul_cmd_intg_chk(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_tlul_cmd_intg_chk();
    VL_UNCOPYABLE(Vsim_tlul_cmd_intg_chk);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
