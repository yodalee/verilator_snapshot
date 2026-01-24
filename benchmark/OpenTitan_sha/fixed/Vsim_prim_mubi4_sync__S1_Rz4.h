// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_MUBI4_SYNC__S1_RZ4_H_
#define VERILATED_VSIM_PRIM_MUBI4_SYNC__S1_RZ4_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_mubi4_sync__S1_Rz4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(mubi_i,3,0);
    VL_OUT8(mubi_o,3,0);
    CData/*3:0*/ __PVT__gen_flops__DOT__mubi_sync;
    CData/*3:0*/ __PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q;
    CData/*3:0*/ __PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
    CData/*3:0*/ __PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_mubi4_sync__S1_Rz4(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_mubi4_sync__S1_Rz4();
    VL_UNCOPYABLE(Vsim_prim_mubi4_sync__S1_Rz4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
