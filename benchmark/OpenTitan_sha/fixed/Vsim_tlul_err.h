// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_TLUL_ERR_H_
#define VERILATED_VSIM_TLUL_ERR_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_tlul_err final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(err_o,0,0);
        CData/*0:0*/ __PVT__opcode_allowed;
        CData/*0:0*/ __PVT__instr_wr_err;
        CData/*0:0*/ __PVT__instr_type_err;
        CData/*0:0*/ __PVT__addr_sz_chk;
        CData/*0:0*/ __PVT__mask_chk;
        CData/*0:0*/ __PVT__fulldata_chk;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__0__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__0__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__2__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__2__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__4__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__4__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__10__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__10__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__12__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__12__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__14__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__14__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__16__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__16__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__18__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__18__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__20__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__20__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__22__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__22__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__24__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__24__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__26__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__26__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__28__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__28__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__30__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__30__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__32__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__32__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__34__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__34__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__36__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__36__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__38__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__38__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__40__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__40__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__42__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__42__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__44__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__44__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__46__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__46__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__48__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__48__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__50__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__50__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__52__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__52__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__54__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__54__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__56__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__56__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__58__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__58__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__60__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__60__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__62__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__62__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__64__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__64__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__66__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__66__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__68__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__68__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__70__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__70__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__72__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__72__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__74__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__74__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__76__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__76__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__78__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__78__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__80__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__80__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__82__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__82__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__84__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__84__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__86__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__86__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__88__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__88__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__90__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__90__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__92__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__92__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__94__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__94__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__96__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__96__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__98__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__98__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__100__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__100__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__102__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__102__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__104__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__104__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__106__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__106__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__108__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__108__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__110__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__110__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__112__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__112__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__114__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__114__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__116__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__116__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__118__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__118__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__120__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__120__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__122__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__122__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__124__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__124__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__126__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__126__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__128__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__128__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__130__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__130__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__132__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__132__val;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_318;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1749;
        VL_INW(tl_i,108,0,4);
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_tlul_err(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_tlul_err();
    VL_UNCOPYABLE(Vsim_tlul_err);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
