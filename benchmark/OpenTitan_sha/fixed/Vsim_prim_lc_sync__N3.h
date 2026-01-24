// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_LC_SYNC__N3_H_
#define VERILATED_VSIM_PRIM_LC_SYNC__N3_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_lc_sync__N3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(lc_en_i,3,0);
    VL_OUT16(lc_en_o,11,0);
    CData/*3:0*/ __PVT__lc_en;
    CData/*3:0*/ __PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_lc_sync__N3(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_lc_sync__N3();
    VL_UNCOPYABLE(Vsim_prim_lc_sync__N3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
