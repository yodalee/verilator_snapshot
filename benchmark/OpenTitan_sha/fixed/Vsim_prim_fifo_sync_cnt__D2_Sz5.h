// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_FIFO_SYNC_CNT__D2_SZ5_H_
#define VERILATED_VSIM_PRIM_FIFO_SYNC_CNT__D2_SZ5_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_fifo_sync_cnt__D2_Sz5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(clr_i,0,0);
    VL_IN8(incr_wptr_i,0,0);
    VL_IN8(incr_rptr_i,0,0);
    VL_OUT8(wptr_o,0,0);
    VL_OUT8(rptr_o,0,0);
    VL_OUT8(full_o,0,0);
    VL_OUT8(empty_o,0,0);
    VL_OUT8(depth_o,1,0);
    VL_OUT8(err_o,0,0);
    CData/*0:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i;
    CData/*0:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i;
    CData/*0:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q;
    CData/*2:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    CData/*2:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    CData/*0:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i;
    CData/*0:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i;
    CData/*0:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i;
    CData/*0:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q;
    CData/*2:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    CData/*2:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    CData/*1:0*/ __PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_fifo_sync_cnt__D2_Sz5(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_fifo_sync_cnt__D2_Sz5();
    VL_UNCOPYABLE(Vsim_prim_fifo_sync_cnt__D2_Sz5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
