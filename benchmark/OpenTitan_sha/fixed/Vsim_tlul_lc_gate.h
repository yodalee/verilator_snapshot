// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_TLUL_LC_GATE_H_
#define VERILATED_VSIM_TLUL_LC_GATE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_tlul_lc_gate final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(flush_req_i,0,0);
        VL_OUT8(flush_ack_o,0,0);
        VL_OUT8(resp_pending_o,0,0);
        VL_IN8(lc_en_i,3,0);
        VL_OUT8(err_o,0,0);
        CData/*3:0*/ __PVT__err_en;
        CData/*1:0*/ __PVT__outstanding_txn;
        CData/*0:0*/ __PVT__a_ack;
        CData/*0:0*/ __PVT__d_ack;
        CData/*0:0*/ __PVT__block_cmd;
        CData/*0:0*/ __Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i;
        CData/*0:0*/ __Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i;
        CData/*0:0*/ __Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i;
        CData/*0:0*/ __Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i;
        CData/*3:0*/ __PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic;
        CData/*2:0*/ __PVT__u_tlul_err_resp__DOT__err_opcode;
        CData/*7:0*/ __PVT__u_tlul_err_resp__DOT__err_source;
        CData/*1:0*/ __PVT__u_tlul_err_resp__DOT__err_size;
        CData/*0:0*/ __PVT__u_tlul_err_resp__DOT__err_rsp_pending;
        CData/*3:0*/ __PVT__u_tlul_err_resp__DOT__err_instr_type;
        CData/*5:0*/ __PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__0__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__0__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__1__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__1__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__2__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__2__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__3__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__3__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__4__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__4__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__9__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__9__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__11__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__11__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__12__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__12__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__13__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__13__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__14__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__14__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__15__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__15__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__20__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__20__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__22__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__22__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__23__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__23__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__24__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__24__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__25__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__25__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__26__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__26__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__31__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__31__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__33__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__33__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__34__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__34__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__35__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__35__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__36__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__36__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__37__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__37__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__42__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__42__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__44__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__44__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__45__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__45__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__46__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__46__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__47__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__47__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__48__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__48__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__53__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__53__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__55__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__55__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__56__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__56__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__57__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__57__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__58__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__58__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__59__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__59__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__64__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__64__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__66__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__66__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__67__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__67__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_false_loose__68__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_false_loose__68__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__69__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__69__val;
        CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__70__Vfuncout;
        CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__70__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__75__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__75__val;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1699;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1717;
        SData/*8:0*/ __PVT__state_d;
        SData/*8:0*/ __PVT__u_state_regs__DOT__state_raw;
        VlWide<4>/*108:0*/ __Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o;
        VlWide<4>/*108:0*/ __Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o;
        VlWide<3>/*65:0*/ __PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        VlWide<3>/*65:0*/ __PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        VlWide<4>/*108:0*/ __VdfgRegularize_h6e95ff9d_0_40;
        VlWide<4>/*108:0*/ __VdfgRegularize_h6e95ff9d_0_41;
        VlWide<4>/*108:0*/ __VdfgRegularize_h6e95ff9d_0_221;
        VlWide<4>/*108:0*/ __VdfgRegularize_h6e95ff9d_0_222;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_354;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_517;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_522;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1292;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1293;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1294;
        VL_INW(tl_h2d_i,108,0,4);
        VL_OUTW(tl_d2h_o,65,0,3);
        VL_OUTW(tl_h2d_o,108,0,4);
    };
    struct {
        VL_INW(tl_d2h_i,65,0,3);
        VlWide<4>/*108:0*/ __PVT__tl_h2d_error;
        VlWide<3>/*65:0*/ __PVT__u_tlul_err_resp__DOT__tl_h_o_int;
        VlUnpacked<VlWide<4>/*108:0*/, 3> __PVT__tl_h2d_int;
        VlUnpacked<VlWide<3>/*65:0*/, 3> __PVT__tl_d2h_int;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_tlul_lc_gate(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_tlul_lc_gate();
    VL_UNCOPYABLE(Vsim_tlul_lc_gate);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
