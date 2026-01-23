// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_CLKMGR_TRANS__FZ3_H_
#define VERILATED_VSIM_CLKMGR_TRANS__FZ3_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_flop_2sync__W1;
class Vsim_prim_mubi4_sync__A0;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_clkmgr_trans__Fz3 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_flop_2sync__W1* __PVT__u_hint_sync;
    Vsim_prim_mubi4_sync__A0* __PVT__u_scanmode_sync;
    Vsim_prim_flop_2sync__W1* __PVT__u_err_sync;
    Vsim_prim_flop_2sync__W1* __PVT__u_en_sync;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(clk_gated_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(en_i,0,0);
    VL_IN8(idle_i,3,0);
    VL_IN8(sw_hint_i,0,0);
    VL_IN8(scanmode_i,3,0);
    VL_OUT8(alert_cg_en_o,3,0);
    VL_OUT8(clk_o,0,0);
    VL_IN8(clk_reg_i,0,0);
    VL_IN8(rst_reg_ni,0,0);
    VL_OUT8(reg_en_o,0,0);
    VL_OUT8(reg_cnt_err_o,0,0);
    CData/*0:0*/ __Vcellinp__u_idle_cnt__incr_en_i;
    CData/*0:0*/ __Vcellinp__u_idle_cnt__clr_i;
    CData/*0:0*/ __PVT__combined_en_q;
    CData/*0:0*/ __Vcellinp__u_cg__test_en_i;
    CData/*0:0*/ __PVT__hold_err;
    CData/*3:0*/ __PVT__u_idle_sync__DOT__mubi_o;
    CData/*3:0*/ __PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync;
    CData/*3:0*/ __PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q;
    CData/*3:0*/ __PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
    CData/*3:0*/ __PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    CData/*0:0*/ __PVT__u_idle_cnt__DOT__err_q;
    CData/*4:0*/ __PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
    CData/*3:0*/ __PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    CData/*4:0*/ __PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
    CData/*3:0*/ __PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
    CData/*3:0*/ __PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    CData/*3:0*/ __PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    CData/*0:0*/ __PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    CData/*0:0*/ __PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    CData/*0:0*/ __PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch;
    CData/*3:0*/ __PVT__u_prim_mubi4_sender__DOT__mubi_int;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__0__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__0__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__3__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__3__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_clkmgr_trans__Fz3(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_clkmgr_trans__Fz3();
    VL_UNCOPYABLE(Vsim_clkmgr_trans__Fz3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
