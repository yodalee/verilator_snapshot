// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_SRAM_CTRL_REGS_REG_TOP__PI22_H_
#define VERILATED_VSIM_SRAM_CTRL_REGS_REG_TOP__PI22_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_tlul_cmd_intg_chk;
class Vsim_tlul_err;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_sram_ctrl_regs_reg_top__pi22 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_tlul_cmd_intg_chk* __PVT__u_chk;
    Vsim_tlul_err* __PVT__u_reg_if__DOT__u_err;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(racl_policies_i,3,0);
        VL_OUT8(racl_error_o,0,0);
        VL_OUT8(__PVT__racl_error_log_o,2,0);
        VL_OUT8(intg_err_o,0,0);
        CData/*0:0*/ __PVT__addrmiss;
        CData/*0:0*/ __PVT__wr_err;
        CData/*0:0*/ __PVT__err_q;
        CData/*0:0*/ __Vcellout__u_status_bus_integ_error__q;
        CData/*0:0*/ __Vcellout__u_status_init_error__q;
        CData/*0:0*/ __Vcellout__u_status_escalated__q;
        CData/*0:0*/ __Vcellout__u_status_scr_key_seed_valid__q;
        CData/*0:0*/ __Vcellout__u_status_init_done__q;
        CData/*0:0*/ __Vcellout__u_status_readback_error__q;
        CData/*0:0*/ __Vcellout__u_status_sram_alert__q;
        CData/*3:0*/ __Vcellout__u_exec__q;
        CData/*0:0*/ __PVT__ctrl_qe;
        CData/*0:0*/ __Vcellout__u_ctrl_renew_scr_key__q;
        CData/*0:0*/ __Vcellout__u_ctrl_init__q;
        CData/*3:0*/ __Vcellout__u_readback__q;
        CData/*0:0*/ __VdfgRegularize_hd3d4c31d_0_2;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__;
        CData/*0:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__;
        CData/*5:0*/ __PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
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
        CData/*0:0*/ __PVT__u_alert_test__DOT__we;
        CData/*0:0*/ __PVT__u_status_scr_key_valid__DOT__de;
        CData/*0:0*/ __PVT__u_status_scr_key_valid__DOT__d;
        CData/*0:0*/ __PVT__u_status_scr_key_valid__DOT__q;
        CData/*0:0*/ __PVT__u_status_scr_key_seed_valid__DOT__d;
        CData/*0:0*/ __PVT__u_status_init_done__DOT__de;
        CData/*0:0*/ __PVT__u_status_init_done__DOT__d;
        CData/*0:0*/ __PVT__u_status_readback_error__DOT__de;
        CData/*0:0*/ __PVT__u_exec_regwen__DOT__we;
        CData/*0:0*/ __PVT__u_exec_regwen__DOT__q;
        CData/*0:0*/ __PVT__u_exec_regwen__DOT__wr_data;
        CData/*0:0*/ __PVT__u_exec__DOT__we;
        CData/*0:0*/ __PVT__u_ctrl_regwen__DOT__we;
        CData/*0:0*/ __PVT__u_ctrl_regwen__DOT__q;
        CData/*0:0*/ __PVT__u_ctrl_regwen__DOT__wr_data;
        CData/*0:0*/ __PVT__u_ctrl_init__DOT__we;
        CData/*0:0*/ __PVT__u_scr_key_rotated__DOT__we;
        CData/*0:0*/ __PVT__u_scr_key_rotated__DOT__de;
        CData/*0:0*/ __PVT__u_scr_key_rotated__DOT__qe;
        CData/*3:0*/ __PVT__u_scr_key_rotated__DOT__q;
        CData/*3:0*/ __PVT__u_scr_key_rotated__DOT__wr_data;
    };
    struct {
        CData/*0:0*/ __PVT__u_readback_regwen__DOT__we;
        CData/*0:0*/ __PVT__u_readback_regwen__DOT__q;
        CData/*0:0*/ __PVT__u_readback_regwen__DOT__wr_data;
        CData/*0:0*/ __PVT__u_readback__DOT__we;
        CData/*1:0*/ __VdfgRegularize_hd3d4c31d_1_1;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__1__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__1__val;
        CData/*3:0*/ __Vfunc_mubi4_and__4__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;
        CData/*3:0*/ __Vfunc_mubi4_and__9__out;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_251;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_252;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_253;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_254;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_255;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_257;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_258;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_259;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_260;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_261;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_264;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_265;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_266;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_267;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_268;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_269;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_270;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_271;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_272;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_273;
        SData/*8:0*/ __PVT__addr_hit;
        SData/*8:0*/ __PVT__racl_addr_hit_read;
        SData/*8:0*/ __PVT__racl_addr_hit_write;
        SData/*8:0*/ __PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1225;
        VL_OUT(reg2hw,20,0);
        VL_IN(hw2reg,20,0);
        IData/*31:0*/ __PVT__reg_rdata_next;
        IData/*31:0*/ __PVT__u_reg_if__DOT__wdata_o;
        IData/*31:0*/ __PVT__u_reg_if__DOT__rdata_q;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1394;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1395;
        VL_INW(tl_i,108,0,4);
        VL_OUTW(tl_o,65,0,3);
        VlWide<3>/*65:0*/ __PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 9> __PVT__RaclPolicySelVec = {{
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U
    }};

    // CONSTRUCTORS
    Vsim_sram_ctrl_regs_reg_top__pi22(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_sram_ctrl_regs_reg_top__pi22();
    VL_UNCOPYABLE(Vsim_sram_ctrl_regs_reg_top__pi22);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
