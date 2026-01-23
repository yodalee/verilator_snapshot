// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_MUBI4_SYNC__N2_A0_H_
#define VERILATED_VSIM_PRIM_MUBI4_SYNC__N2_A0_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_mubi4_sync__N2_A0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(mubi_i,3,0);
    VL_OUT8(mubi_o,7,0);
    CData/*3:0*/ __PVT__gen_no_flops__DOT__unused_logic;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_mubi4_sync__N2_A0(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_mubi4_sync__N2_A0();
    VL_UNCOPYABLE(Vsim_prim_mubi4_sync__N2_A0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
