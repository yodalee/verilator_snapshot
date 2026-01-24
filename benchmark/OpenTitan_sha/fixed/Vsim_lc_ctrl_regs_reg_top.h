// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_LC_CTRL_REGS_REG_TOP_H_
#define VERILATED_VSIM_LC_CTRL_REGS_REG_TOP_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_tlul_cmd_intg_chk;
class Vsim_tlul_err;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_lc_ctrl_regs_reg_top final : public VerilatedModule {
  public:
    // CELLS
    Vsim_tlul_cmd_intg_chk* __PVT__u_chk;
    Vsim_tlul_err* __PVT__u_reg_if__DOT__u_err;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(intg_err_o,0,0);
        CData/*0:0*/ __PVT__addrmiss;
        CData/*0:0*/ __PVT__wr_err;
        CData/*0:0*/ __PVT__err_q;
        CData/*0:0*/ __VdfgRegularize_hba25b58b_0_40;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__;
        CData/*5:0*/ __PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
        CData/*0:0*/ __PVT__u_reg_if__DOT__re_o;
        CData/*0:0*/ __PVT__u_reg_if__DOT__we_o;
        CData/*0:0*/ __PVT__u_reg_if__DOT__error_i;
        CData/*0:0*/ __PVT__u_reg_if__DOT__outstanding_q;
        CData/*0:0*/ __PVT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ __PVT__u_reg_if__DOT__d_ack;
        CData/*0:0*/ __PVT__u_reg_if__DOT__error_q;
        CData/*0:0*/ __PVT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ __PVT__u_reg_if__DOT__instr_error;
        CData/*7:0*/ __PVT__u_reg_if__DOT__reqid_q;
        CData/*1:0*/ __PVT__u_reg_if__DOT__reqsz_q;
        CData/*2:0*/ __PVT__u_reg_if__DOT__rspop_q;
        CData/*0:0*/ __PVT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ __PVT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ __PVT__u_alert_test_fatal_bus_integ_error__DOT__we;
        CData/*0:0*/ __PVT__u_claim_transition_if_regwen__DOT__we;
        CData/*0:0*/ __PVT__u_claim_transition_if_regwen__DOT__q;
        CData/*0:0*/ __PVT__u_claim_transition_if_regwen__DOT__wr_data;
        CData/*0:0*/ __PVT__u_claim_transition_if__DOT__we;
        CData/*0:0*/ __PVT__u_transition_cmd__DOT__we;
        CData/*0:0*/ __PVT__u_transition_ctrl_ext_clock_en__DOT__we;
        CData/*0:0*/ __PVT__u_transition_token_0__DOT__we;
        CData/*0:0*/ __PVT__u_transition_token_1__DOT__we;
        CData/*0:0*/ __PVT__u_transition_token_2__DOT__we;
        CData/*0:0*/ __PVT__u_transition_token_3__DOT__we;
        CData/*0:0*/ __PVT__u_transition_target__DOT__we;
        CData/*0:0*/ __PVT__u_otp_vendor_test_ctrl__DOT__we;
        CData/*1:0*/ __VdfgRegularize_hba25b58b_1_3;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__1__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__1__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__4__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__4__val;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1220;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1221;
        IData/*31:0*/ __PVT__reg_rdata_next;
        IData/*31:0*/ __PVT__u_reg_if__DOT__rdata_q;
        IData/*31:0*/ __PVT__u_otp_vendor_test_ctrl__DOT__wd;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1392;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1393;
        VL_INW(tl_i,108,0,4);
        VL_OUTW(tl_o,65,0,3);
        VL_OUTW(reg2hw,216,0,7);
        VL_INW(hw2reg,887,0,28);
        QData/*34:0*/ __PVT__addr_hit;
        QData/*34:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
        QData/*63:0*/ __PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__u_rsp_gen__DOT__data_o;
    };
    struct {
        VlWide<3>/*65:0*/ __PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_lc_ctrl_regs_reg_top(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_lc_ctrl_regs_reg_top();
    VL_UNCOPYABLE(Vsim_lc_ctrl_regs_reg_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
