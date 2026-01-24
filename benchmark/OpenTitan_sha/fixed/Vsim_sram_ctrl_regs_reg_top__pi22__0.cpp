// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_status_readback_error__DOT__de 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__readback_error_q) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__1(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3__Vfuncout;
    __Vfunc_mubi4_and_hi__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3__a;
    __Vfunc_mubi4_and_hi__3__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3__b;
    __Vfunc_mubi4_and_hi__3__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__4__Vfuncout;
    __Vfunc_mubi4_and__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__4__a;
    __Vfunc_mubi4_and__4__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__4__b;
    __Vfunc_mubi4_and__4__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__4__a_in;
    __Vfunc_mubi4_and__4__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__4__b_in;
    __Vfunc_mubi4_and__4__b_in = 0;
    // Body
    vlSelfRef.__PVT__u_status_scr_key_seed_valid__DOT__d 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__seed_valid_q));
    vlSelfRef.__PVT__u_status_scr_key_valid__DOT__d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc))));
    vlSelfRef.__PVT__u_status_init_done__DOT__de = 
        ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__init_done) 
         | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__clr_i) 
            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc)));
    vlSelfRef.__PVT__u_status_init_done__DOT__d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__init_done) 
                                                   & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__clr_i)) 
                                                      & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc))));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__de = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc));
    vlSelfRef.__PVT__u_status_scr_key_valid__DOT__de 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req) 
           | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__qe = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de) 
                                                   | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we));
    __Vfunc_mubi4_and_hi__3__b = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we)
                                   ? (0x0000000fU & 
                                      (~ vlSelfRef.__PVT__u_reg_if__DOT__wdata_o))
                                   : 6U);
    __Vfunc_mubi4_and_hi__3__a = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de)
                                   ? (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc)) 
                                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o))
                                       ? 6U : 9U) : (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__q));
    __Vfunc_mubi4_and__4__b = __Vfunc_mubi4_and_hi__3__b;
    __Vfunc_mubi4_and__4__a = __Vfunc_mubi4_and_hi__3__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__4__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8197746457469078907ull);
    __Vfunc_mubi4_and__4__a_in = __Vfunc_mubi4_and__4__a;
    __Vfunc_mubi4_and__4__b_in = __Vfunc_mubi4_and__4__b;
    vlSelfRef.__Vfunc_mubi4_and__4__out = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__4__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__4__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__4__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__4__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__4__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__4__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__4__out)) 
                                           | (((2U 
                                                & (((IData)(__Vfunc_mubi4_and__4__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__4__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(__Vfunc_mubi4_and__4__a_in) 
                                                      & (IData)(__Vfunc_mubi4_and__4__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
    __Vfunc_mubi4_and__4__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__4__out;
    __Vfunc_mubi4_and_hi__3__Vfuncout = __Vfunc_mubi4_and__4__Vfuncout;
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__wr_data 
        = __Vfunc_mubi4_and_hi__3__Vfuncout;
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_hd3d4c31d_1_1;
    __VdfgRegularize_hd3d4c31d_1_1 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__0__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__0__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__payload;
    __Vfunc_extract_d2h_rsp_intg__0__payload = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__u_status_scr_key_valid__DOT__de) {
            vlSelfRef.__PVT__u_status_scr_key_valid__DOT__q 
                = vlSelfRef.__PVT__u_status_scr_key_valid__DOT__d;
        }
        if (vlSelfRef.__PVT__u_status_init_done__DOT__de) {
            vlSelfRef.__Vcellout__u_status_init_done__q 
                = vlSelfRef.__PVT__u_status_init_done__DOT__d;
        }
        if (vlSelfRef.__PVT__u_scr_key_rotated__DOT__de) {
            vlSelfRef.__Vcellout__u_status_scr_key_seed_valid__q 
                = vlSelfRef.__PVT__u_status_scr_key_seed_valid__DOT__d;
        }
        if (vlSelfRef.__PVT__u_scr_key_rotated__DOT__qe) {
            vlSelfRef.__PVT__u_scr_key_rotated__DOT__q 
                = vlSelfRef.__PVT__u_scr_key_rotated__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_readback_regwen__DOT__we) {
            vlSelfRef.__PVT__u_readback_regwen__DOT__q 
                = vlSelfRef.__PVT__u_readback_regwen__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_exec_regwen__DOT__we) {
            vlSelfRef.__PVT__u_exec_regwen__DOT__q 
                = vlSelfRef.__PVT__u_exec_regwen__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) {
            vlSelfRef.__PVT__u_ctrl_regwen__DOT__q 
                = vlSelfRef.__PVT__u_ctrl_regwen__DOT__wr_data;
        }
        if (((IData)(vlSelf->__PVT__u_chk->err_o) | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__err_q = 1U;
        }
        if (vlSelfRef.__PVT__u_status_readback_error__DOT__de) {
            vlSelfRef.__Vcellout__u_status_readback_error__q = 1U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_alert) {
            vlSelfRef.__Vcellout__u_status_sram_alert__q = 1U;
        }
        if ((0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__bus_integ_error))) {
            vlSelfRef.__Vcellout__u_status_bus_integ_error__q = 1U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__escalate) {
            vlSelfRef.__Vcellout__u_status_escalated__q = 1U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__err_q) {
            vlSelfRef.__Vcellout__u_status_init_error__q = 1U;
        }
        if (vlSelfRef.__PVT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSelf->__PVT__u_chk->tl_i[3U] 
                                   << 4U) | (vlSelf->__PVT__u_chk->tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->__PVT__u_chk->tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.__PVT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.__PVT__u_exec__DOT__we) {
            vlSelfRef.__Vcellout__u_exec__q = ((IData)(vlSelfRef.__PVT__u_exec__DOT__we)
                                                ? (0x0000000fU 
                                                   & vlSelfRef.__PVT__u_reg_if__DOT__wdata_o)
                                                : 0U);
        }
        if (vlSelfRef.__PVT__u_ctrl_init__DOT__we) {
            vlSelfRef.__Vcellout__u_ctrl_renew_scr_key__q 
                = ((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we) 
                   & vlSelfRef.__PVT__u_reg_if__DOT__wdata_o);
            vlSelfRef.__Vcellout__u_ctrl_init__q = 
                ((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we) 
                 & (vlSelfRef.__PVT__u_reg_if__DOT__wdata_o 
                    >> 1U));
        }
        if (vlSelfRef.__PVT__u_readback__DOT__we) {
            vlSelfRef.__Vcellout__u_readback__q = ((IData)(vlSelfRef.__PVT__u_readback__DOT__we)
                                                    ? 
                                                   (0x0000000fU 
                                                    & vlSelfRef.__PVT__u_reg_if__DOT__wdata_o)
                                                    : 0U);
        }
    } else {
        vlSelfRef.__PVT__u_status_scr_key_valid__DOT__q = 0U;
        vlSelfRef.__Vcellout__u_status_init_done__q = 0U;
        vlSelfRef.__Vcellout__u_status_scr_key_seed_valid__q = 0U;
        vlSelfRef.__PVT__u_scr_key_rotated__DOT__q = 9U;
        vlSelfRef.__PVT__u_readback_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__u_exec_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__u_ctrl_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__err_q = 0U;
        vlSelfRef.__Vcellout__u_status_readback_error__q = 0U;
        vlSelfRef.__Vcellout__u_status_sram_alert__q = 0U;
        vlSelfRef.__Vcellout__u_status_bus_integ_error__q = 0U;
        vlSelfRef.__Vcellout__u_status_escalated__q = 0U;
        vlSelfRef.__Vcellout__u_status_init_error__q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.__Vcellout__u_exec__q = 9U;
        vlSelfRef.__Vcellout__u_ctrl_renew_scr_key__q = 0U;
        vlSelfRef.__Vcellout__u_ctrl_init__q = 0U;
        vlSelfRef.__Vcellout__u_readback__q = 9U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q = 0U;
    }
    vlSelfRef.__PVT__ctrl_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                && (3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we))))));
    __VdfgRegularize_hd3d4c31d_1_1 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_hd3d4c31d_1_1))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_hd3d4c31d_1_1))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[0U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[2U]);
    __Vfunc_extract_d2h_rsp_intg__0__tl[0U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[1U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[2U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__0__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__0__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__0__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__0__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__0__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = __Vfunc_extract_d2h_rsp_intg__0__payload;
    vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1225 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(__VdfgRegularize_hd3d4c31d_1_1)))));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                                             & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__1(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258 = ((5U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_269 = ((0U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_270 = ((2U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_271 = ((3U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_272 = ((4U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_273 = ((0x0fU 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__PVT__addr_hit = 0U;
    vlSelfRef.__PVT__addr_hit = ((0x01f8U & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((8U == (0x0000003cU 
                                             & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                 << 5U) 
                                                | (0x0000001cU 
                                                   & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 0x0000001bU))))) 
                                     << 2U) | (((4U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))))));
    vlSelfRef.__PVT__addr_hit = ((0x01c7U & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((0x14U == (0x0000003cU 
                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 5U) 
                                                   | (0x0000001cU 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001bU))))) 
                                     << 5U) | (((0x10U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 4U) 
                                               | ((0x0cU 
                                                   == 
                                                   (0x0000003cU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 5U) 
                                                       | (0x0000001cU 
                                                          & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001bU))))) 
                                                  << 3U))));
    vlSelfRef.__PVT__addr_hit = ((0x003fU & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((0x20U == (0x0000003cU 
                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 5U) 
                                                   | (0x0000001cU 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001bU))))) 
                                     << 8U) | (((0x1cU 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 7U) 
                                               | ((0x18U 
                                                   == 
                                                   (0x0000003cU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 5U) 
                                                       | (0x0000001cU 
                                                          & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001bU))))) 
                                                  << 6U))));
    vlSelfRef.__PVT__racl_addr_hit_read = vlSelfRef.__PVT__addr_hit;
    vlSelfRef.__PVT__racl_addr_hit_write = vlSelfRef.__PVT__addr_hit;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257 = ((0U 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         << 9U) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x00000017U))))) 
                                                  & ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001dU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001dU))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_251 = ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252 = ((1U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_265 = ((0x0aU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_266 = ((0x0cU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_267 = ((0x0eU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268 = ((0x10U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_264 = ((6U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259 = ((7U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 = ((9U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260 = ((8U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253 = ((2U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_254 = ((3U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255 = ((4U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__PVT__u_reg_if__DOT__wdata_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                                                ? (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000017U))
                                                : 0xffffffffU);
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: sram_ctrl_regs_reg_top.sv:778: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_reg_regs: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/sram_ctrl_regs_reg_top.sv", 778, "");
            }
        }
    }
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__2(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__instr_error = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val 
                = (0x0000000fU & (vlSelf->__PVT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout));
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vsim__ConstPool__TABLE_hc5b01184_0;

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__3(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__reg_rdata_next = 0U;
    vlSelfRef.__PVT__reg_rdata_next = ((IData)((0U 
                                                != 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))))
                                        ? ((1U & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                            ? (0xfffffffeU 
                                               & vlSelfRef.__PVT__reg_rdata_next)
                                            : ((2U 
                                                & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__reg_rdata_next) 
                                                   | ((((((IData)(vlSelfRef.__Vcellout__u_status_sram_alert__q) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.__Vcellout__u_status_readback_error__q) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__Vcellout__u_status_init_done__q) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.__Vcellout__u_status_scr_key_seed_valid__q))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_status_scr_key_valid__DOT__q) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__Vcellout__u_status_escalated__q) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.__Vcellout__u_status_init_error__q) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__Vcellout__u_status_bus_integ_error__q)))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                    ? 
                                                   ((0xfffffffeU 
                                                     & vlSelfRef.__PVT__reg_rdata_next) 
                                                    | (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                     ? 
                                                    ((0xfffffff0U 
                                                      & vlSelfRef.__PVT__reg_rdata_next) 
                                                     | (IData)(vlSelfRef.__Vcellout__u_exec__q))
                                                     : 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                      ? 
                                                     ((0xfffffffeU 
                                                       & vlSelfRef.__PVT__reg_rdata_next) 
                                                      | (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q))
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                       ? 
                                                      (0xfffffffcU 
                                                       & vlSelfRef.__PVT__reg_rdata_next)
                                                       : 
                                                      ((0x00000040U 
                                                        & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                        ? 
                                                       ((0xfffffff0U 
                                                         & vlSelfRef.__PVT__reg_rdata_next) 
                                                        | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__q))
                                                        : 
                                                       ((0xfffffffeU 
                                                         & vlSelfRef.__PVT__reg_rdata_next) 
                                                        | (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q)))))))))
                                        : ((0x00000100U 
                                            & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                            ? ((0xfffffff0U 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | (IData)(vlSelfRef.__Vcellout__u_readback__q))
                                            : 0xffffffffU));
    vlSelfRef.__PVT__u_reg_if__DOT__a_ack = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q)) 
                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg_if__DOT__rd_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & (0x0400U 
                                                 == 
                                                 (0x0700U 
                                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg_if__DOT__wr_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
    vlSelfRef.__PVT__u_reg_if__DOT__err_internal = 
        (1U & (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req) 
                & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x0000001bU)))) 
               | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__instr_error) 
                  | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                         & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                            & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                               & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                  | ((1U == (7U & (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                     | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                     | ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                        | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg_if__DOT__we_o = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                            & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req));
    __Vtableidx1 = (((0U != (1U & (~ ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                       << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000017U))))) 
                     << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__wr_err = Vsim__ConstPool__TABLE_hc5b01184_0
        [__Vtableidx1];
    vlSelfRef.__PVT__addrmiss = ((~ (0U != (IData)(vlSelfRef.__PVT__addr_hit))) 
                                 & (((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                     & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req)) 
                                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg_if__DOT__error_i = ((IData)(vlSelfRef.__PVT__addrmiss) 
                                               | ((IData)(vlSelfRef.__PVT__wr_err) 
                                                  | (IData)(vlSelf->__PVT__u_chk->err_o)));
    vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2 = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i)) 
                                                & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_readback__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                              >> 8U) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                            & (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q));
    vlSelfRef.__PVT__u_alert_test__DOT__we = ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_exec__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                          >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                        & (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q));
    vlSelfRef.__PVT__u_ctrl_init__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                               >> 5U) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                             & (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q));
    vlSelfRef.__PVT__u_exec_regwen__DOT__we = (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_ctrl_regwen__DOT__we = (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                >> 4U) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_readback_regwen__DOT__we = (
                                                   ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                    >> 7U) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__we = (
                                                   ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                    >> 6U) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_exec_regwen__DOT__wr_data = 
        ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q) 
         & ((~ (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we)) 
            | vlSelfRef.__PVT__u_reg_if__DOT__wdata_o));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_exec__DOT__we));
    vlSelfRef.__PVT__u_ctrl_regwen__DOT__wr_data = 
        ((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q) 
         & ((~ (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we)) 
            | vlSelfRef.__PVT__u_reg_if__DOT__wdata_o));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we));
    vlSelfRef.__PVT__u_readback_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we)) 
              | vlSelfRef.__PVT__u_reg_if__DOT__wdata_o));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((((((IData)(vlSelfRef.__PVT__u_readback__DOT__we) 
               << 4U) | (((IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
                                    << 2U))) | (((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we))) 
            << 4U) | (((IData)(vlSelfRef.__PVT__u_exec__DOT__we) 
                       << 3U) | (((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
                                  << 2U) | (IData)(vlSelfRef.__PVT__u_alert_test__DOT__we))));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_alert_test__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_readback__DOT__we)) 
            | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
               | ((((IData)(vlSelfRef.__PVT__u_alert_test__DOT__we) 
                    & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                   | ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_exec__DOT__we))) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                     | (((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we)) 
                        | ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
                           & (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_readback__DOT__we))));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_status_readback_error__DOT__de 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__readback_error_q) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__1(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_and_hi__8__Vfuncout;
    __Vfunc_mubi4_and_hi__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__8__a;
    __Vfunc_mubi4_and_hi__8__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__8__b;
    __Vfunc_mubi4_and_hi__8__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__Vfuncout;
    __Vfunc_mubi4_and__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__a;
    __Vfunc_mubi4_and__9__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__b;
    __Vfunc_mubi4_and__9__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__a_in;
    __Vfunc_mubi4_and__9__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__b_in;
    __Vfunc_mubi4_and__9__b_in = 0;
    // Body
    vlSelfRef.__PVT__u_status_scr_key_seed_valid__DOT__d 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__seed_valid_q));
    vlSelfRef.__PVT__u_status_scr_key_valid__DOT__d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_req)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc))));
    vlSelfRef.__PVT__u_status_init_done__DOT__de = 
        ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__init_done) 
         | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__clr_i) 
            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc)));
    vlSelfRef.__PVT__u_status_init_done__DOT__d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__init_done) 
                                                   & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__clr_i)) 
                                                      & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc))));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__de = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc));
    vlSelfRef.__PVT__u_status_scr_key_valid__DOT__de 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_req) 
           | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__qe = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de) 
                                                   | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we));
    __Vfunc_mubi4_and_hi__8__b = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we)
                                   ? (0x0000000fU & 
                                      (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                           >> 0x00000018U))))
                                   : 6U);
    __Vfunc_mubi4_and_hi__8__a = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de)
                                   ? (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc)) 
                                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o))
                                       ? 6U : 9U) : (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__q));
    __Vfunc_mubi4_and__9__b = __Vfunc_mubi4_and_hi__8__b;
    __Vfunc_mubi4_and__9__a = __Vfunc_mubi4_and_hi__8__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__9__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2772168488978447702ull);
    __Vfunc_mubi4_and__9__a_in = __Vfunc_mubi4_and__9__a;
    __Vfunc_mubi4_and__9__b_in = __Vfunc_mubi4_and__9__b;
    vlSelfRef.__Vfunc_mubi4_and__9__out = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__9__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__9__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__9__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__9__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__9__out)) 
                                           | (((2U 
                                                & (((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__9__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                      & (IData)(__Vfunc_mubi4_and__9__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
    __Vfunc_mubi4_and__9__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__9__out;
    __Vfunc_mubi4_and_hi__8__Vfuncout = __Vfunc_mubi4_and__9__Vfuncout;
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__wr_data 
        = __Vfunc_mubi4_and_hi__8__Vfuncout;
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__5__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__5__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__5__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__5__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__5__payload;
    __Vfunc_extract_d2h_rsp_intg__5__payload = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__u_status_scr_key_valid__DOT__de) {
            vlSelfRef.__PVT__u_status_scr_key_valid__DOT__q 
                = vlSelfRef.__PVT__u_status_scr_key_valid__DOT__d;
        }
        if (vlSelfRef.__PVT__u_status_init_done__DOT__de) {
            vlSelfRef.__Vcellout__u_status_init_done__q 
                = vlSelfRef.__PVT__u_status_init_done__DOT__d;
        }
        if (vlSelfRef.__PVT__u_scr_key_rotated__DOT__de) {
            vlSelfRef.__Vcellout__u_status_scr_key_seed_valid__q 
                = vlSelfRef.__PVT__u_status_scr_key_seed_valid__DOT__d;
        }
        if (vlSelfRef.__PVT__u_scr_key_rotated__DOT__qe) {
            vlSelfRef.__PVT__u_scr_key_rotated__DOT__q 
                = vlSelfRef.__PVT__u_scr_key_rotated__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_readback_regwen__DOT__we) {
            vlSelfRef.__PVT__u_readback_regwen__DOT__q 
                = vlSelfRef.__PVT__u_readback_regwen__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_exec_regwen__DOT__we) {
            vlSelfRef.__PVT__u_exec_regwen__DOT__q 
                = vlSelfRef.__PVT__u_exec_regwen__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) {
            vlSelfRef.__PVT__u_ctrl_regwen__DOT__q 
                = vlSelfRef.__PVT__u_ctrl_regwen__DOT__wr_data;
        }
        if (((IData)(vlSelf->__PVT__u_chk->err_o) | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__err_q = 1U;
        }
        if (vlSelfRef.__PVT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSelf->__PVT__u_chk->tl_i[3U] 
                                   << 4U) | (vlSelf->__PVT__u_chk->tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->__PVT__u_chk->tl_i[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 1U;
        } else if (vlSelfRef.__PVT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.__PVT__u_ctrl_init__DOT__we) {
            vlSelfRef.__Vcellout__u_ctrl_renew_scr_key__q 
                = ((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we) 
                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                      >> 0x00000018U));
            vlSelfRef.__Vcellout__u_ctrl_init__q = 
                ((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we) 
                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                    >> 0x00000019U));
        }
        if (vlSelfRef.__PVT__u_readback__DOT__we) {
            vlSelfRef.__Vcellout__u_readback__q = ((IData)(vlSelfRef.__PVT__u_readback__DOT__we)
                                                    ? 
                                                   (0x0000000fU 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000018U))
                                                    : 0U);
        }
        if (vlSelfRef.__PVT__u_exec__DOT__we) {
            vlSelfRef.__Vcellout__u_exec__q = ((IData)(vlSelfRef.__PVT__u_exec__DOT__we)
                                                ? (0x0000000fU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000018U))
                                                : 0U);
        }
        if (vlSelfRef.__PVT__u_status_readback_error__DOT__de) {
            vlSelfRef.__Vcellout__u_status_readback_error__q = 1U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__sram_alert) {
            vlSelfRef.__Vcellout__u_status_sram_alert__q = 1U;
        }
        if ((0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__bus_integ_error))) {
            vlSelfRef.__Vcellout__u_status_bus_integ_error__q = 1U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__err_q) {
            vlSelfRef.__Vcellout__u_status_init_error__q = 1U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__escalate) {
            vlSelfRef.__Vcellout__u_status_escalated__q = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_status_scr_key_valid__DOT__q = 0U;
        vlSelfRef.__Vcellout__u_status_init_done__q = 0U;
        vlSelfRef.__Vcellout__u_status_scr_key_seed_valid__q = 0U;
        vlSelfRef.__PVT__u_scr_key_rotated__DOT__q = 9U;
        vlSelfRef.__PVT__u_readback_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__u_exec_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__u_ctrl_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__err_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.__Vcellout__u_ctrl_renew_scr_key__q = 0U;
        vlSelfRef.__Vcellout__u_ctrl_init__q = 0U;
        vlSelfRef.__Vcellout__u_readback__q = 9U;
        vlSelfRef.__Vcellout__u_exec__q = 9U;
        vlSelfRef.__Vcellout__u_status_readback_error__q = 0U;
        vlSelfRef.__Vcellout__u_status_sram_alert__q = 0U;
        vlSelfRef.__Vcellout__u_status_bus_integ_error__q = 0U;
        vlSelfRef.__Vcellout__u_status_init_error__q = 0U;
        vlSelfRef.__Vcellout__u_status_escalated__q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 0U;
    }
    vlSelfRef.__PVT__ctrl_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we))))));
    vlSelfRef.__VdfgRegularize_hd3d4c31d_1_1 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_1_1))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_1_1))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    __Vfunc_extract_d2h_rsp_intg__5__tl[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[0U];
    __Vfunc_extract_d2h_rsp_intg__5__tl[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U];
    __Vfunc_extract_d2h_rsp_intg__5__tl[2U] = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q) 
                                                << 1U) 
                                               | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[2U]);
    __Vfunc_extract_d2h_rsp_intg__5__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__5__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__5__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__5__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__5__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__5__Vfuncout = __Vfunc_extract_d2h_rsp_intg__5__payload;
    vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__5__Vfuncout;
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__1(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__d_ack = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                             & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q));
    vlSelfRef.__PVT__u_reg_if__DOT__a_ack = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q)) 
                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__rd_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & (0x0800U 
                                                 == 
                                                 (0x0e00U 
                                                  & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__addr_hit = 0U;
    vlSelfRef.__PVT__addr_hit = ((0x01f8U & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((8U == (0x0000003cU 
                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                 << 4U) 
                                                | (0x0000000cU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 0x0000001cU))))) 
                                     << 2U) | (((4U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 4U) 
                                                     | (0x0000000cU 
                                                        & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001cU))))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001cU))))))));
    vlSelfRef.__PVT__addr_hit = ((0x01c7U & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((0x14U == (0x0000003cU 
                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001cU))))) 
                                     << 5U) | (((0x10U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 4U) 
                                                     | (0x0000000cU 
                                                        & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001cU))))) 
                                                << 4U) 
                                               | ((0x0cU 
                                                   == 
                                                   (0x0000003cU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 4U) 
                                                       | (0x0000000cU 
                                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001cU))))) 
                                                  << 3U))));
    vlSelfRef.__PVT__addr_hit = ((0x003fU & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((0x20U == (0x0000003cU 
                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001cU))))) 
                                     << 8U) | (((0x1cU 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 4U) 
                                                     | (0x0000000cU 
                                                        & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001cU))))) 
                                                << 7U) 
                                               | ((0x18U 
                                                   == 
                                                   (0x0000003cU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 4U) 
                                                       | (0x0000000cU 
                                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001cU))))) 
                                                  << 6U))));
    vlSelfRef.__PVT__racl_addr_hit_read = vlSelfRef.__PVT__addr_hit;
    vlSelfRef.__PVT__racl_addr_hit_write = vlSelfRef.__PVT__addr_hit;
    vlSelfRef.__PVT__u_reg_if__DOT__wr_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                      >> 9U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                        >> 9U)))));
    vlSelfRef.__PVT__u_reg_if__DOT__instr_error = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val 
                = (0x0000000fU & (vlSelf->__PVT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout));
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: sram_ctrl_regs_reg_top.sv:778: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_main.u_reg_regs: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/sram_ctrl_regs_reg_top.sv", 778, "");
            }
        }
    }
    vlSelfRef.__PVT__reg_rdata_next = 0U;
    vlSelfRef.__PVT__reg_rdata_next = ((IData)((0U 
                                                != 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))))
                                        ? ((1U & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                            ? (0xfffffffeU 
                                               & vlSelfRef.__PVT__reg_rdata_next)
                                            : ((2U 
                                                & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__reg_rdata_next) 
                                                   | ((((((IData)(vlSelfRef.__Vcellout__u_status_sram_alert__q) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.__Vcellout__u_status_readback_error__q) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__Vcellout__u_status_init_done__q) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.__Vcellout__u_status_scr_key_seed_valid__q))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_status_scr_key_valid__DOT__q) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__Vcellout__u_status_escalated__q) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.__Vcellout__u_status_init_error__q) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__Vcellout__u_status_bus_integ_error__q)))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                    ? 
                                                   ((0xfffffffeU 
                                                     & vlSelfRef.__PVT__reg_rdata_next) 
                                                    | (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                     ? 
                                                    ((0xfffffff0U 
                                                      & vlSelfRef.__PVT__reg_rdata_next) 
                                                     | (IData)(vlSelfRef.__Vcellout__u_exec__q))
                                                     : 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                      ? 
                                                     ((0xfffffffeU 
                                                       & vlSelfRef.__PVT__reg_rdata_next) 
                                                      | (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q))
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                       ? 
                                                      (0xfffffffcU 
                                                       & vlSelfRef.__PVT__reg_rdata_next)
                                                       : 
                                                      ((0x00000040U 
                                                        & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                        ? 
                                                       ((0xfffffff0U 
                                                         & vlSelfRef.__PVT__reg_rdata_next) 
                                                        | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__q))
                                                        : 
                                                       ((0xfffffffeU 
                                                         & vlSelfRef.__PVT__reg_rdata_next) 
                                                        | (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q)))))))))
                                        : ((0x00000100U 
                                            & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                            ? ((0xfffffff0U 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | (IData)(vlSelfRef.__Vcellout__u_readback__q))
                                            : 0xffffffffU));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__1(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__err_internal = 
        (1U & (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req) 
                & (0U != (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x0000001cU)))) 
               | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__instr_error) 
                  | ((~ (((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                        >> 9U))) | 
                          ((1U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                         >> 9U))) | 
                           (4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                         >> 9U))))) 
                         & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                            & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                               & ((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U))) 
                                  | ((1U == (7U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                     | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                     | ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                        | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg_if__DOT__we_o = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                            & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req));
    __Vtableidx2 = (((0U != (1U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000018U))))) 
                     << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__wr_err = Vsim__ConstPool__TABLE_hc5b01184_0
        [__Vtableidx2];
    vlSelfRef.__PVT__addrmiss = ((~ (0U != (IData)(vlSelfRef.__PVT__addr_hit))) 
                                 & (((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                     & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req)) 
                                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg_if__DOT__error_i = ((IData)(vlSelfRef.__PVT__addrmiss) 
                                               | ((IData)(vlSelfRef.__PVT__wr_err) 
                                                  | (IData)(vlSelf->__PVT__u_chk->err_o)));
    vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2 = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i)) 
                                                & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_readback__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                              >> 8U) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                            & (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q));
    vlSelfRef.__PVT__u_alert_test__DOT__we = ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_exec__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                          >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                        & (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q));
    vlSelfRef.__PVT__u_ctrl_init__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                               >> 5U) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                             & (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q));
    vlSelfRef.__PVT__u_exec_regwen__DOT__we = (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_ctrl_regwen__DOT__we = (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                >> 4U) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_readback_regwen__DOT__we = (
                                                   ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                    >> 7U) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__we = (
                                                   ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                    >> 6U) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_exec_regwen__DOT__wr_data = 
        ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q) 
         & ((~ (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we)) 
            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
               >> 0x00000018U)));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_exec__DOT__we));
    vlSelfRef.__PVT__u_ctrl_regwen__DOT__wr_data = 
        ((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q) 
         & ((~ (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we)) 
            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
               >> 0x00000018U)));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we));
    vlSelfRef.__PVT__u_readback_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000018U)));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((((((IData)(vlSelfRef.__PVT__u_readback__DOT__we) 
               << 4U) | (((IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
                                    << 2U))) | (((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we))) 
            << 4U) | (((IData)(vlSelfRef.__PVT__u_exec__DOT__we) 
                       << 3U) | (((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
                                  << 2U) | (IData)(vlSelfRef.__PVT__u_alert_test__DOT__we))));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_alert_test__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_readback__DOT__we)) 
            | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
               | ((((IData)(vlSelfRef.__PVT__u_alert_test__DOT__we) 
                    & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                   | ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_exec__DOT__we))) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                     | (((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we)) 
                        | ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
                           & (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_readback__DOT__we))));
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__3(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_and_hi__8__Vfuncout;
    __Vfunc_mubi4_and_hi__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__8__a;
    __Vfunc_mubi4_and_hi__8__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__8__b;
    __Vfunc_mubi4_and_hi__8__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__Vfuncout;
    __Vfunc_mubi4_and__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__a;
    __Vfunc_mubi4_and__9__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__b;
    __Vfunc_mubi4_and__9__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__a_in;
    __Vfunc_mubi4_and__9__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__9__b_in;
    __Vfunc_mubi4_and__9__b_in = 0;
    // Body
    vlSelfRef.__PVT__u_status_scr_key_valid__DOT__d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_req)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc))));
    vlSelfRef.__PVT__u_status_init_done__DOT__de = 
        ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__init_done) 
         | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__clr_i) 
            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc)));
    vlSelfRef.__PVT__u_status_init_done__DOT__d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__init_done) 
                                                   & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__clr_i)) 
                                                      & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc))));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__de = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc));
    vlSelfRef.__PVT__u_status_scr_key_valid__DOT__de 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_req) 
           | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__qe = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de) 
                                                   | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we));
    __Vfunc_mubi4_and_hi__8__b = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we)
                                   ? (0x0000000fU & 
                                      (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                           >> 0x00000018U))))
                                   : 6U);
    __Vfunc_mubi4_and_hi__8__a = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__de)
                                   ? (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc)) 
                                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o))
                                       ? 6U : 9U) : (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__q));
    __Vfunc_mubi4_and__9__b = __Vfunc_mubi4_and_hi__8__b;
    __Vfunc_mubi4_and__9__a = __Vfunc_mubi4_and_hi__8__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__9__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2772168488978447702ull);
    __Vfunc_mubi4_and__9__a_in = __Vfunc_mubi4_and__9__a;
    __Vfunc_mubi4_and__9__b_in = __Vfunc_mubi4_and__9__b;
    vlSelfRef.__Vfunc_mubi4_and__9__out = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__9__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__9__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__9__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__9__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__9__out)) 
                                           | (((2U 
                                                & (((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__9__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(__Vfunc_mubi4_and__9__a_in) 
                                                      & (IData)(__Vfunc_mubi4_and__9__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
    __Vfunc_mubi4_and__9__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__9__out;
    __Vfunc_mubi4_and_hi__8__Vfuncout = __Vfunc_mubi4_and__9__Vfuncout;
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__wr_data 
        = __Vfunc_mubi4_and_hi__8__Vfuncout;
}

void Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__4(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_status_scr_key_seed_valid__DOT__d 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__seed_valid_q));
}
