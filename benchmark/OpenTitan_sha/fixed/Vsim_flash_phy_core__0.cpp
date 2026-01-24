// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_flash_phy_core___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_tie_off[0U] = 0U;
    vlSelfRef.__PVT__data_tie_off[1U] = 0U;
    vlSelfRef.__PVT__u_rd__DOT__dummy_data[0U] = 0U;
    vlSelfRef.__PVT__u_rd__DOT__dummy_data[1U] = 0U;
    vlSelfRef.__PVT__u_rd__DOT__dummy_data[2U] = 0U;
    vlSelfRef.__PVT__u_rd__DOT__dummy_data[3U] = 0U;
}

void Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__calc_ack) & (IData)(vlSelfRef.__PVT__rd_calc_req));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rd_calc_req)) 
                 | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__2__Vfuncout;
    __Vfunc_mubi4_test_true_loose__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__2__val;
    __Vfunc_mubi4_test_true_loose__2__val = 0;
    // Body
    vlSelfRef.__PVT__u_rd__DOT__no_buf_en_change = 
        ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellout__u_flash_hw_if__rd_buf_en_o) 
         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q));
    __Vfunc_mubi4_test_true_loose__2__val = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
    __Vfunc_mubi4_test_true_loose__2__Vfuncout = (9U 
                                                  != (IData)(__Vfunc_mubi4_test_true_loose__2__val));
    vlSelfRef.__VdfgExtracted_hded1f362__0 = __Vfunc_mubi4_test_true_loose__2__Vfuncout;
}

void Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__2(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ecc_single_err_o = ((IData)(vlSelfRef.__PVT__u_rd__DOT__valid_ecc) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err));
    vlSelfRef.relbl_ecc_err_o = ((IData)(vlSelfRef.__PVT__u_rd__DOT__valid_ecc) 
                                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_multi_err));
    if (((IData)(vlSelfRef.relbl_ecc_err_o) | (IData)(vlSelfRef.ecc_single_err_o))) {
        vlSelfRef.__PVT__u_rd__DOT__data_int[0U] = 
            vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[0U];
        vlSelfRef.__PVT__u_rd__DOT__data_int[1U] = 
            vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[1U];
        vlSelfRef.__PVT__u_rd__DOT__data_int[2U] = 
            (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[2U]);
    } else {
        vlSelfRef.__PVT__u_rd__DOT__data_int[0U] = 
            vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U];
        vlSelfRef.__PVT__u_rd__DOT__data_int[1U] = 
            vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U];
        vlSelfRef.__PVT__u_rd__DOT__data_int[2U] = 
            (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]);
    }
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__host_req = (((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o) 
                                      & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                         & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__wdata_i)))) 
                                     & (5U > (IData)(vlSelfRef.__PVT__arb_cnt))) 
                                    & (IData)(vlSelfRef.__PVT__ctrl_fsm_idle)) 
                                   & (~ (IData)(vlSelfRef.__PVT__host_gnt_rd_err))) 
                                  & (~ (IData)(vlSelfRef.__PVT__host_outstanding_rd_err))) 
                                 & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_false_strict__0__val 
                    = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
                vlSelfRef.__Vfunc_mubi4_test_false_strict__0__Vfuncout 
                    = (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__0__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__0__Vfuncout)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__op_ack = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
                               & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)) 
                                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i)));
    if ((1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U])) {
        vlSelfRef.__PVT__prog_scrambled_data = (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[3U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[2U])));
        vlSelfRef.__PVT__rd_descrambled_data = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_o;
    } else {
        vlSelfRef.__PVT__prog_scrambled_data = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_o;
        vlSelfRef.__PVT__rd_descrambled_data = (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[0U])));
    }
    vlSelfRef.__PVT__u_rd__DOT__fifo_data_ready = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__hint_descram)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__rd_op_req) 
                                                       & (IData)(vlSelfRef.__PVT__op_ack))
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__u_rd__DOT__hint_dropmsk)
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)))));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__fifo_data_ready) 
           | ((IData)(vlSelfRef.__PVT__u_rd__DOT__hint_forward) 
              & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_dropmsk)) 
                 | (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_forward)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__fifo_data_ready));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rready_i)));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__2(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rd__DOT__muxed_err = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__forward)
                                                    ? (IData)(vlSelfRef.relbl_ecc_err_o)
                                                    : 
                                                   ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_forward)) 
                                                    & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                       >> 4U))));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__3(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__muxed_addr = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__host_req)
                                                   ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o
                                                   : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__4(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rd__DOT__forward) {
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__data_int[0U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__data_int[1U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__data_int[2U]);
    } else if (vlSelfRef.__PVT__u_rd__DOT__hint_descram) {
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
            = (IData)((vlSelfRef.__PVT__rd_descrambled_data 
                       ^ vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o));
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
            = (IData)(((vlSelfRef.__PVT__rd_descrambled_data 
                        ^ vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o) 
                       >> 0x00000020U));
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
            = (0x0000000fU & (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U]));
    } else {
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U]);
    }
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] = 
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U];
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] = 
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U];
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] = 
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U];
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [0U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [0U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [0U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [0U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [0U][2U] >> 0x00000016U));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [1U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [1U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [1U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [1U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [1U][2U] >> 0x00000016U));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [2U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [2U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [2U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [2U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [2U][2U] >> 0x00000016U));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [3U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [3U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [3U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [3U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [3U][2U] >> 0x00000016U));
    }
    if ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[2U] 
            = vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U];
    } else {
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[2U] 
            = vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U];
    }
    vlSelfRef.__PVT__u_rd__DOT__u_intg_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
           & (((((2U & (VL_REDXOR_64((0x01fe01fe03fc07f0ULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                        << 1U)) | (1U & VL_REDXOR_64(
                                                     (0xf1e1e1e1e3c3c78eULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))))) 
                << 2U) | ((2U & (VL_REDXOR_64((0xcd9999999b33366dULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                 << 1U)) | (1U & VL_REDXOR_64(
                                                              (0xab55555556aaad5bULL 
                                                               & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                                                   << 0x00000020U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))))) 
              != (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[2U])));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__5(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rd__DOT__update = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__u_rd__DOT__forward)
                                              ? (IData)(vlSelfRef.__PVT__u_rd__DOT__alloc_q)
                                              : ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_14)
                                                  ? 
                                                 ((vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                     >> 8U))
                                                  : 0U)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__6(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i 
        = (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
            & (((IData)(vlSelfRef.__PVT__u_rd__DOT__forward) 
                | (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_14)) 
               & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
                  | ((0x0000000fU & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                     >> 2U)) == (IData)(vlSelfRef.__PVT__u_rd__DOT__update))))) 
           | (0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__7(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.rd_err_o = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i) 
                           & ((IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err) 
                              | ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_intg_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                 | ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match)) 
                                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err))))) 
                          | (IData)(vlSelfRef.__PVT__arb_host_gnt_err));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((((2U 
                                                  & (VL_REDXOR_32(
                                                                  (0x98505586U 
                                                                   & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       VL_REDXOR_32(
                                                                    (0x2dcc624cU 
                                                                     & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc2c1323bU 
                                                                    & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        VL_REDXOR_32(
                                                                     (0x31234ed1U 
                                                                      & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))))) 
                              << 0x00000023U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                                  << 0x00000022U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))));
    __Vtemp_1[1U] = ((vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U] 
                      << 7U) | (IData)(((((QData)((IData)(
                                                          ((((2U 
                                                              & (VL_REDXOR_32(
                                                                              (0x98505586U 
                                                                               & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (~ 
                                                                   VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (VL_REDXOR_32(
                                                                               (0xc2c1323bU 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ 
                                                                    VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))))) 
                                          << 0x00000023U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                             << 0x00000022U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))) 
                                                << 0x00000021U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))) 
                                        >> 0x00000020U)));
    __Vtemp_2[0U] = __Vtemp_1[0U];
    __Vtemp_2[1U] = __Vtemp_1[1U];
    __Vtemp_2[2U] = (((((((2U & (VL_REDXOR_32((0x98505586U 
                                               & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                 << 1U)) | (1U & (~ 
                                                  VL_REDXOR_32(
                                                               (0x2dcc624cU 
                                                                & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U]))))) 
                         << 5U) | (((2U & (VL_REDXOR_32(
                                                        (0xc2c1323bU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                           << 1U)) 
                                    | (1U & (~ VL_REDXOR_32(
                                                            (0x31234ed1U 
                                                             & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U]))))) 
                                   << 3U)) | ((4U & 
                                               (VL_REDXOR_32(
                                                             (0x413d89aaU 
                                                              & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ 
                                                      VL_REDXOR_32(
                                                                   (0xdeba8050U 
                                                                    & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x2606bd25U 
                                                                    & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])))))) 
                      << 7U) | (vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U] 
                                >> 0x00000019U));
    vlSelfRef.rd_data_ctrl_o = ((IData)(vlSelfRef.rd_err_o)
                                 ? 0x0000002affffffffULL
                                 : ((0x4dU >= (0x0000007fU 
                                               & ((IData)(0x00000027U) 
                                                  * 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                      >> 1U)))))
                                     ? (0x0000007fffffffffULL 
                                        & (((QData)((IData)(
                                                            __Vtemp_2[
                                                            (((IData)(0x00000026U) 
                                                              + 
                                                              (0x0000007fU 
                                                               & ((IData)(0x00000027U) 
                                                                  * 
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                      >> 1U))))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000027U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                         >> 1U)))))
                                                 ? 0x00000020U
                                                 : 
                                                ((IData)(0x00000040U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000027U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                         >> 1U))))))) 
                                           | (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & ((IData)(0x00000027U) 
                                                    * 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                        >> 1U)))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   __Vtemp_2[
                                                                   (((IData)(0x0000001fU) 
                                                                     + 
                                                                     (0x0000007fU 
                                                                      & ((IData)(0x00000027U) 
                                                                         * 
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                             >> 1U))))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000027U) 
                                                        * 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                            >> 1U))))))) 
                                              | ((QData)((IData)(
                                                                 __Vtemp_2[
                                                                 (3U 
                                                                  & (((IData)(0x00000027U) 
                                                                      * 
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                          >> 1U))) 
                                                                     >> 5U))])) 
                                                 >> 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000027U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                         >> 1U))))))))
                                     : 0ULL));
    vlSelfRef.rd_data_host_o = (((QData)((IData)((0x0000007fU 
                                                  & (IData)(
                                                            (vlSelfRef.rd_data_ctrl_o 
                                                             >> 0x00000020U))))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   ((IData)(vlSelfRef.rd_data_ctrl_o) 
                                                                    ^ 
                                                                    ((0U 
                                                                      != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))
                                                                      ? 
                                                                     (((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                            >> 1U)))
                                                                      : 
                                                                     ((((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                                         ? 0U
                                                                         : 
                                                                        (0x0000ffffU 
                                                                         & (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__storage 
                                                                            >> 
                                                                            (0x0000001fU 
                                                                             & VL_SHIFTL_III(5,5,32, 
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 4U))))) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                            >> 1U))))))));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__8(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqs = ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                              ? 0U : ((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                       ? 0U : ((0x03edU 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                ? 1U
                                                : (
                                                   (0x0342U 
                                                    == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1681)
                                                    : 0U))));
    vlSelfRef.__PVT__ctrl_req = (((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__ctrl_req) 
                                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (~ (IData)(vlSelfRef.__PVT__host_gnt_rd_err))) 
                                  & (~ (IData)(vlSelfRef.__PVT__host_outstanding_rd_err))) 
                                 & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_false_strict__1__val 
                    = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
                vlSelfRef.__Vfunc_mubi4_test_false_strict__1__Vfuncout 
                    = (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__1__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__1__Vfuncout)));
    vlSelfRef.__PVT__erase_ack = ((0U != (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                  & ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))
                                      ? ((~ ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.ack_o))) 
                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.done_o))
                                      : ((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.done_o))));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.done_o) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_busy));
    vlSelfRef.__PVT__u_rd__DOT__valid_ecc = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
                                             & vlSelfRef.__PVT__u_rd__DOT__rd_attrs);
    vlSelfRef.__PVT__u_rd__DOT__data_erased = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
                                               & (0U 
                                                  == 
                                                  (((~ 
                                                     vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                    | (~ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                   | (0x00000fffU 
                                                      ^ 
                                                      vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_12 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
           & (vlSelfRef.__PVT__u_rd__DOT__rd_attrs 
              >> 1U));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20 
        = (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_busy)) 
            | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy));
    vlSelfRef.__PVT__u_rd__DOT__descram = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__data_erased)) 
                                           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_12));
    vlSelfRef.__PVT__u_rd__DOT__forward = ((~ ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                               | (IData)(vlSelfRef.__PVT__u_rd__DOT__descram))) 
                                           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__9(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_erase__DOT__state_d = vlSelfRef.__PVT__u_erase__DOT__state_q;
    if ((0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.pg_erase_i) 
              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.bk_erase_i)) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.ack_o))) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.ack_o))) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 2U;
        } else if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.done_o) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.done_o) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 0U;
        }
    }
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__10(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__host_req) {
        vlSelfRef.__PVT__muxed_ecc_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_ecc_en;
        vlSelfRef.__PVT__muxed_scramble_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_scramble_en;
    } else {
        vlSelfRef.__PVT__muxed_ecc_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__ecc_en_o;
        vlSelfRef.__PVT__muxed_scramble_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__scramble_en_o;
    }
    vlSelfRef.__PVT__u_rd__DOT__data_hazard__BRA__0__KET__ 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24)))))));
    vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__1__KET____DOT__u_rd_buf__DOT__wipe_i 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23)))))));
    vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__2__KET____DOT__u_rd_buf__DOT__wipe_i 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22)))))));
    vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__3__KET____DOT__u_rd_buf__DOT__wipe_i 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21)))))));
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o 
        = ((IData)(vlSelfRef.__PVT__ctrl_req) | (IData)(vlSelfRef.__PVT__host_req));
    if (vlSelfRef.__PVT__muxed_ecc_en) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[0U] 
            = vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[1U] 
            = vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U];
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[0U] 
            = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[1U] 
            = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[2U] 
        = ((0x7ffff000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[2U]) 
           | (0x7fffffffU & ((IData)(vlSelfRef.__PVT__muxed_ecc_en)
                              ? ((0x00000800U & (VL_REDXOR_32(
                                                              ((vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U] 
                                                                ^ 
                                                                vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U]) 
                                                               ^ 
                                                               vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U])) 
                                                 << 0x0000000bU)) 
                                 | vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U])
                              : (0x00000ff0U | vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[2U] 
        = ((0x00000fffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[2U]) 
           | (0x7fffffffU & (((0x0007fff8U & (vlSelfRef.__PVT__muxed_addr 
                                              << 2U)) 
                              | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i) 
                                  << 2U) | (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                  >> 6U)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__u_rd__DOT__req_i = ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
                                         & ((IData)(vlSelfRef.__PVT__host_req) 
                                            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__rd_o)));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__req_i));
    vlSelfRef.__PVT__u_rd__DOT__buf_match = (((((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                         >> 1U))) 
                                                    | (1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                           >> 1U)))) 
                                                   & ((~ 
                                                       vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                                                      & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match)))) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                           >> 1U))) 
                                                      | (1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                             >> 1U)))) 
                                                     & ((~ 
                                                         vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                                                        & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match)))) 
                                                 << 2U)) 
                                             | ((((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                           >> 1U))) 
                                                      | (1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                             >> 1U)))) 
                                                     & ((~ 
                                                         vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                                                        & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match)))) 
                                                 << 1U) 
                                                | ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                            >> 1U))) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                              >> 1U)))) 
                                                      & ((~ 
                                                          vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match))))));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__11(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x0000007fffffffffULL & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__wvalid_i))
                                                ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_fifo_wdata
                                                : (
                                                   (0x9bU 
                                                    >= 
                                                    (0x000000ffU 
                                                     & ((IData)(0x00000027U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x00000026U) 
                                                                       + 
                                                                       (0x000000ffU 
                                                                        & ((IData)(0x00000027U) 
                                                                           * 
                                                                           (3U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000027U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000027U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000027U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x000000ffU 
                                                                            & ((IData)(0x00000027U) 
                                                                               * 
                                                                               (3U 
                                                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000027U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (7U 
                                                                           & (((IData)(0x00000027U) 
                                                                               * 
                                                                               (3U 
                                                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000027U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))))
                                                    : 0ULL))));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i)))))));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                    >> 0x0000001fU))) 
                        << 1U)) | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                         ^ (IData)(
                                                   (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                    >> 0x0000001eU))))) 
                << 6U) | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                              >> 0x0000001dU))) 
                                  << 1U)) | (1U & (
                                                   (0x4aU 
                                                    == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(
                                                             (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                              >> 0x0000001cU))))) 
                          << 4U)) | ((((2U & (((0x62U 
                                                == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                          >> 0x0000001bU))) 
                                              << 1U)) 
                                       | (1U & ((0x23U 
                                                 == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                           >> 0x0000001aU))))) 
                                      << 2U) | ((2U 
                                                 & (((0x13U 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                >> 0x00000019U))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x2cU 
                                                       == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                 >> 0x00000018U))))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (IData)(
                                                      (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                       >> 0x00000017U))) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (IData)(
                                                       (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                        >> 0x00000016U))))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                            >> 0x00000015U))) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                               >> 0x00000014U))))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                         >> 0x00000013U))) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                          >> 0x00000012U))))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                               >> 0x00000011U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                >> 0x00000010U))))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                    >> 0x0000000fU))) 
                        << 1U)) | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                         ^ (IData)(
                                                   (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                    >> 0x0000000eU))))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                              >> 0x0000000dU))) 
                                  << 1U)) | (1U & (
                                                   (0x51U 
                                                    == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(
                                                             (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                              >> 0x0000000cU))))) 
                          << 4U)) | ((((2U & (((0x0dU 
                                                == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                          >> 0x0000000bU))) 
                                              << 1U)) 
                                       | (1U & ((0x49U 
                                                 == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                           >> 0x0000000aU))))) 
                                      << 2U) | ((2U 
                                                 & (((0x38U 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                >> 9U))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x45U 
                                                       == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                 >> 8U))))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                             >> 7U))) 
                                 << 1U)) | (1U & ((0x2aU 
                                                   == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ (IData)(
                                                            (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                             >> 6U))))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (IData)(
                                                      (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                       >> 5U))) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (IData)(
                                                       (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                        >> 4U))))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                >> 3U))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                 >> 2U))))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i 
                                                                 >> 1U))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i))))))));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__err_o 
        = ((((~ VL_REDXOR_8(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)) 
             & (0U != (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o))) 
            << 1U) | (1U & VL_REDXOR_8(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__12(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid = 0U;
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel = 0U;
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en = 0U;
    vlSelfRef.__PVT__flash_prog_req = 0U;
    vlSelfRef.__PVT__prog_ack = 0U;
    vlSelfRef.__PVT__prog_last = 0U;
    vlSelfRef.__PVT__prog_calc_req = 0U;
    vlSelfRef.__PVT__prog_op_req = 0U;
    vlSelfRef.__PVT__prog_fsm_err = 0U;
    if (((((((((0x07feU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
               | (0x0077U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
              | (0x0523U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
             | (0x0685U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
            | (0x035bU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
           | (0x000eU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
          | (0x00e9U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
         | (0x01d4U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x07feU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            if (([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3__Vfuncout))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0440U;
            } else if ((1U & ((IData)(vlSelfRef.__PVT__reqs) 
                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0077U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__reqs))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0523U;
            }
        } else if ((0x0077U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid 
                = ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) 
                   < (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr));
            if (((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) 
                 == ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) 
                     & ((1U & (~ (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx))) 
                        == (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr))))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0523U;
            }
        } else if ((0x0523U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid 
                = (1U & (IData)(vlSelfRef.__PVT__reqs));
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel = 1U;
            if (((IData)(vlSelfRef.__PVT__reqs) & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x035bU;
            } else if (((IData)(vlSelfRef.__PVT__reqs) 
                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_prog_last))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0685U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__reqs))) {
                vlSelfRef.__PVT__prog_ack = 1U;
            }
        } else if ((0x0685U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel = 0U;
            if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x035bU;
            }
        } else if ((0x035bU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__muxed_scramble_en)
                    ? 0x000eU : 0x02b2U);
        } else if ((0x000eU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__prog_calc_req = 1U;
            if (vlSelfRef.__PVT__calc_ack) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x00e9U;
            }
        } else if ((0x00e9U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__prog_op_req = 1U;
            if (vlSelfRef.__PVT__op_ack) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x01d4U;
            }
        } else {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x02b2U;
        }
    } else if ((0x02b2U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__flash_prog_req = (1U & (~ (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q)));
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_prog_last) {
            vlSelfRef.__PVT__prog_last = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack)
                    ? 0x0138U : 0x02b2U);
        } else {
            vlSelfRef.__PVT__prog_last = 0U;
            if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack) {
                vlSelfRef.__PVT__prog_ack = 1U;
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x07feU;
            } else {
                vlSelfRef.__PVT__prog_ack = 0U;
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x02b2U;
            }
        }
    } else if ((0x0138U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
        if (((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q) 
             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.done_o))) {
            vlSelfRef.__PVT__prog_ack = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x07feU;
        }
    } else if ((0x0440U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0440U;
    } else {
        vlSelfRef.__PVT__prog_fsm_err = 1U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0440U 
                                                == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                               << 5U) 
                                              | (((0x0138U 
                                                   == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 4U) 
                                                 | ((0x02b2U 
                                                     == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                    << 3U))) 
                                             | (((0x01d4U 
                                                  == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                 << 2U) 
                                                | (((0x00e9U 
                                                     == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                    << 1U) 
                                                   | (0x000eU 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))) 
                                            << 5U) 
                                           | ((((0x035bU 
                                                 == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                << 4U) 
                                               | (((0x0685U 
                                                    == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                   << 3U) 
                                                  | ((0x0523U 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                     << 2U))) 
                                              | (((0x0077U 
                                                   == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 1U) 
                                                 | (0x07feU 
                                                    == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))))))))) {
        if ((0U != ((((((0x0440U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                        << 5U) | (((0x0138U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                   << 4U) | ((0x02b2U 
                                              == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                             << 3U))) 
                      | (((0x01d4U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                          << 2U) | (((0x00e9U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                     << 1U) | (0x000eU 
                                               == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))) 
                     << 5U) | ((((0x035bU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | (((0x0685U 
                                             == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                            << 3U) 
                                           | ((0x0523U 
                                               == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                              << 2U))) 
                               | (((0x0077U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x07feU 
                                             == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_prog.sv:186: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[0].u_core.gen_prog_data.u_prog: unique case, but multiple matches found for '11'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),11,
                             (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_prog.sv", 186, "");
            }
        }
    }
    vlSelfRef.__PVT__rd_stage_rdy = ((~ (0x0000000fU 
                                         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency))) 
                                     & (((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))
                                          ? (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy)
                                          : ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.ack_o) 
                                             & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20))) 
                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__no_buf_en_change) 
                                           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_11))));
    vlSelfRef.__PVT__ctrl_rsp_vld = ((0x02deU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     & ((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                         ? (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i)
                                         : ((0x03edU 
                                             == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? (IData)(vlSelfRef.__PVT__prog_ack)
                                             : ((0x0342U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                & (IData)(vlSelfRef.__PVT__erase_ack)))));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__req_i) 
           & (IData)(vlSelfRef.__PVT__rd_stage_rdy));
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
           & (((IData)(vlSelfRef.__PVT__host_req) & (IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o))
               ? (IData)(vlSelfRef.__PVT__rd_stage_rdy)
               : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o));
    vlSelfRef.__PVT__ctrl_gnt = ((~ (IData)(vlSelfRef.__PVT__host_req)) 
                                 & (IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__));
    vlSelfRef.host_req_rdy_o = ((IData)(vlSelfRef.__PVT__host_req) 
                                & (IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    if ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__VdfgExtracted_hded1f362__0) {
            vlSelfRef.__PVT__state_d = 0x003bU;
        } else if (((IData)(vlSelfRef.__PVT__ctrl_gnt) 
                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__rd_o))) {
            vlSelfRef.__PVT__state_d = 0x00a6U;
        } else if (((IData)(vlSelfRef.__PVT__ctrl_gnt) 
                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__prog_o))) {
            vlSelfRef.__PVT__state_d = 0x03edU;
        } else if (vlSelfRef.__PVT__ctrl_gnt) {
            vlSelfRef.__PVT__state_d = 0x0342U;
        }
    } else if ((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i) {
            vlSelfRef.__PVT__state_d = 0x02deU;
        }
    } else if ((0x03edU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__prog_ack) {
            vlSelfRef.__PVT__state_d = 0x02deU;
        }
    } else if ((0x0342U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__erase_ack) {
            vlSelfRef.__PVT__state_d = 0x02deU;
        }
    } else if ((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__state_d = 0x003bU;
    }
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o 
        = (((IData)(vlSelfRef.__PVT__ctrl_gnt) << 1U) 
           | (IData)(vlSelfRef.host_req_rdy_o));
    vlSelfRef.__PVT__host_gnt = ((IData)(vlSelfRef.__PVT__host_req) 
                                 & (IData)(vlSelfRef.host_req_rdy_o));
    vlSelfRef.__PVT__host_gnt_err_event = ((IData)(vlSelfRef.__PVT__host_gnt) 
                                           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i 
        = ((IData)(vlSelfRef.__PVT__host_gnt) & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i)) 
                                                 & (2U 
                                                    >= (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__host_gnt)) & 
           ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i) 
            & (0U != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i)
                  ? ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                     - (IData)(1U)) : ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                                       + (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i))));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i)
                  ? ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                     - (IData)(1U)) : ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                       + (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i))));
    vlSelfRef.u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0 
        = ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
           ^ (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (3U & (((IData)(vlSelfRef.u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0) 
                  & (((~ (3U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                      & (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i)) 
                     | ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                  ? (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
                      & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                         >> 2U)) ? 0U : (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i) 
                                          & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                             >> 2U))
                                          ? 3U : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))
                  : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (3U & (((IData)(vlSelfRef.u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0) 
                  & (((~ (3U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))) 
                      & (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i)) 
                     | ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))
                  ? (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i) 
                      & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                         >> 2U)) ? 0U : (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
                                          & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                             >> 2U))
                                          ? 3U : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))
                  : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
}

extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h870c2b22_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h23f18ccb_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vsim__ConstPool__TABLE_h055780f8_0;

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__13(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.prim_flash_req_o[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[0U];
    vlSelfRef.prim_flash_req_o[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[1U];
    vlSelfRef.prim_flash_req_o[2U] = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.he_i) 
                                       << 0x0000001fU) 
                                      | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1470[2U]);
    vlSelfRef.prim_flash_req_o[3U] = (0x0000007fU & 
                                      ((((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_i) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.__PVT__flash_prog_req) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.__PVT__prog_last) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                >> 3U)))) 
                                        << 3U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.pg_erase_i) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.bk_erase_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.erase_suspend_req_i)))));
    vlSelfRef.__PVT__u_rd__DOT__rd_start = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_i) 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.ack_o));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_start));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_d 
        = ((((2U & (((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                      ? (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                          | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__)) 
                         | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                            & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__)))
                      : ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q) 
                         >> 3U)) << 1U)) | (1U & ((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                                      & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q) 
                                                   >> 2U)))) 
            << 2U) | ((2U & (((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                               ? ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__) 
                                  | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                     & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__)))
                               : ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q) 
                                  >> 1U)) << 1U)) | 
                      (1U & ((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                              ? ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__))
                              : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)))));
    vlSelfRef.__PVT__u_rd__DOT__buf_alloc = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc))
                                              ? (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc)
                                              : (((
                                                   (0x3ffffffeU 
                                                    & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                        >> 2U) 
                                                       & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__) 
                                                           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                                          << 1U))) 
                                                   | (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                       >> 2U) 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__) 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)))) 
                                                  << 2U) 
                                                 | ((0xfffffffeU 
                                                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                        & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__) 
                                                            & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                                           << 1U))) 
                                                    | ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                       & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__) 
                                                          & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10 = ((- (IData)((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25))) 
                                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_alloc));
    vlSelfRef.__PVT__u_rd__DOT__alloc = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))
                                          ? 0U : (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__wr_buf_i 
        = (((~ (0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))) 
            & (0U != (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10)))
            ? (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_alloc)
            : (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match));
    __Vtableidx1 = ((0x000000f0U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                    << 2U)) | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__wr_buf_i));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel 
        = Vsim__ConstPool__TABLE_h870c2b22_0[__Vtableidx1];
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel 
        = Vsim__ConstPool__TABLE_h23f18ccb_0[__Vtableidx1];
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__unnamedblk1__DOT__i 
        = Vsim__ConstPool__TABLE_h055780f8_0[__Vtableidx1];
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt 
        = (3U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel), 1U))));
    vlSelfRef.u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt 
        = (3U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel), 1U))));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q) 
           & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i) 
              & (2U > (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt))));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q) 
           & (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
               & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i)) 
              & (0U < (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt))));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__14(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_d 
        = ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q) 
           | ((0U != (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__err_o)) 
              & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__15(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__calc_ack = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_calc__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
                                 & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_calc__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)) 
                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_gf_mult__DOT__u_mult__DOT__cnt)));
}

void Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__storage 
            = (((~ ((IData)(0x0000ffffU) << (0x0000001fU 
                                             & VL_SHIFTL_III(5,32,32, 
                                                             (1U 
                                                              & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 4U)))) 
                & vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__storage) 
               | (0x00000000ffffffffULL & ((0x0000ffffU 
                                            & (vlSelfRef.__PVT__muxed_addr 
                                               >> 1U)) 
                                           << (0x0000001fU 
                                               & VL_SHIFTL_III(5,32,32, 
                                                               (1U 
                                                                & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 4U)))));
    }
    if (vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) {
        vlSelfRef.u_rd__DOT__u_rsp_order_fifo__DOT____Vlvbound_h3810951a__0 
            = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__wr_buf_i) 
                << 2U) | ((2U & (vlSelfRef.__PVT__muxed_addr 
                                 << 1U)) | (IData)(vlSelfRef.__PVT__muxed_ecc_en)));
        if ((0x0bU >= (0x0000000fU & ((IData)(6U) * 
                                      (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
            vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x003fU) << (0x0000000fU 
                                             & ((IData)(6U) 
                                                * (1U 
                                                   & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__storage)) 
                   | (0x0fffU & ((IData)(vlSelfRef.u_rd__DOT__u_rsp_order_fifo__DOT____Vlvbound_h3810951a__0) 
                                 << (0x0000000fU & 
                                     ((IData)(6U) * 
                                      (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))));
        }
    }
    if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WQ(128, 64, (0x0000007fU & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 6U)), vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage, vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_gf_mult__DOT__u_mult__DOT__prod_o);
    }
    if (vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) {
        vlSelfRef.u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__data_int[0U];
        vlSelfRef.u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__data_int[1U];
        vlSelfRef.u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0[2U] 
            = ((0x00000ff0U & vlSelfRef.u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0[2U]) 
               | (0x00000fffU & vlSelfRef.__PVT__u_rd__DOT__data_int[2U]));
        vlSelfRef.u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0[2U] 
            = ((0x0000000fU & vlSelfRef.u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0[2U]) 
               | (0x00000ff0U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__alloc_q) 
                                  << 8U) | (((((IData)(vlSelfRef.__PVT__u_rd__DOT__descram) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_12) 
                                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__data_erased)) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__u_rd__DOT__forward) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.relbl_ecc_err_o))) 
                                            << 4U))));
        if ((0x97U >= (0x000000ffU & ((IData)(0x0000004cU) 
                                      * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
            VL_ASSIGNSEL_WW(152, 76, (0x000000ffU & 
                                      ((IData)(0x0000004cU) 
                                       * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))), vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0);
        }
    }
}

void Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = 0;
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h7fd72a4c_1_0;
    __VdfgRegularize_h7fd72a4c_1_0 = 0;
    CData/*3:0*/ __VdfgRegularize_h7fd72a4c_1_1;
    __VdfgRegularize_h7fd72a4c_1_1 = 0;
    CData/*2:0*/ __Vdly__arb_cnt;
    __Vdly__arb_cnt = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*0:0*/ __Vdly__gen_prog_data__DOT__u_prog__DOT__idx;
    __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = 0;
    QData/*63:0*/ __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data;
    __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data = 0;
    // Body
    __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__arb_cnt = vlSelfRef.__PVT__arb_cnt;
    __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_host_arb__DOT__err_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                               && (((3U 
                                                     | ((((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o) 
                                                            << 3U)) 
                                                        | (4U 
                                                           & ((~ (IData)(vlSelfRef.__PVT__host_req)) 
                                                              << 2U)))) 
                                                    != 
                                                    (3U 
                                                     | ((((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o) 
                                                            << 3U)) 
                                                        | (4U 
                                                           & ((~ (IData)(vlSelfRef.__PVT__host_req)) 
                                                              << 2U))))) 
                                                   | (IData)(vlSelfRef.__PVT__u_host_arb__DOT__err_q)));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_d));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (3U != (7U & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                            + (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid) 
             & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = 0U;
        } else if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__idx 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__ctrl_rsp_vld) {
            __Vdly__arb_cnt = 0U;
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__ctrl_req) 
                    & (IData)(vlSelfRef.__PVT__host_gnt))) {
            __Vdly__arb_cnt = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__arb_cnt)));
        }
        vlSelfRef.__PVT__arb_cnt = __Vdly__arb_cnt;
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__3__KET____DOT__u_rd_buf__DOT__wipe_i) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__alloc) 
                        >> 3U)) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__2__KET____DOT__u_rd_buf__DOT__wipe_i) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__alloc) 
                        >> 2U)) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__data_hazard__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & (IData)(vlSelfRef.__PVT__u_rd__DOT__alloc)) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__1__KET____DOT__u_rd_buf__DOT__wipe_i) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__alloc) 
                        >> 1U)) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((IData)(vlSelfRef.__PVT__flash_prog_req) 
             & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__prog_calc_req) 
                    & (IData)(vlSelfRef.__PVT__calc_ack))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
                = (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_gf_mult__DOT__u_mult__DOT__prod_o);
        } else if (((IData)(vlSelfRef.__PVT__prog_op_req) 
                    & (IData)(vlSelfRef.__PVT__op_ack))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
                = (vlSelfRef.__PVT__prog_scrambled_data 
                   ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__mask_q);
        } else if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx), 5U)))) 
                    & __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data) 
                   | ((QData)((IData)(((1U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel))
                                        ? (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i)
                                        : 0xffffffffU))) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx), 5U))));
        }
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__idx;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data;
        if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        __Vdly__arb_cnt = 0U;
        vlSelfRef.__PVT__arb_cnt = __Vdly__arb_cnt;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data = 0ULL;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__idx;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data;
        __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U];
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc 
                = (0x0000000fU & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[2U]);
        }
    } else {
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc = 0x0fU;
    }
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[2U] 
        = (0x0000007fU & (((((2U & (VL_REDXOR_64((0xfe00000000000000ULL 
                                                  & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0x01fffffffc000000ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                            << 5U) | (((2U & (VL_REDXOR_64(
                                                           (0x01fffe0003fff800ULL 
                                                            & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0x01fe01fe03fc07f0ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                                      << 3U)) | ((4U 
                                                  & (VL_REDXOR_64(
                                                                  (0xf1e1e1e1e3c3c78eULL 
                                                                   & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0xcd9999999b33366dULL 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xab55555556aaad5bULL 
                                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))))));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__u_disable_buf__DOT__gen_no_flops__DOT__unused_logic 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d;
        vlSelfRef.__PVT__u_erase__DOT__state_q = vlSelfRef.__PVT__u_erase__DOT__state_d;
        if (vlSelfRef.__PVT__u_rd__DOT__rd_start) {
            vlSelfRef.__PVT__u_rd__DOT__rd_busy = 1U;
            vlSelfRef.__PVT__u_rd__DOT__rd_attrs = 
                ((0x0003fffcU & (vlSelfRef.__PVT__muxed_addr 
                                 << 1U)) | (((IData)(vlSelfRef.__PVT__muxed_scramble_en) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__muxed_ecc_en)));
            vlSelfRef.__PVT__u_rd__DOT__alloc_q = vlSelfRef.__PVT__u_rd__DOT__alloc;
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) {
            vlSelfRef.__PVT__u_rd__DOT__rd_busy = 0U;
        }
        vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q 
            = vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_d;
        if (((IData)(vlSelfRef.__PVT__u_rd__DOT__rd_start) 
             & (IData)(vlSelfRef.__PVT__muxed_scramble_en))) {
            vlSelfRef.__PVT__rd_calc_req = 1U;
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wvalid_i) {
            vlSelfRef.__PVT__rd_calc_req = 0U;
        }
        if (((IData)(vlSelfRef.u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0)
              ? ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr)) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr))
              : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr))) {
            vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt 
                = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel), 1U)))) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)) 
                   | (0x00ffU & ((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt))) 
                                 << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel), 1U)))));
        }
        if (((IData)(vlSelfRef.u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0)
              ? ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr)) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr))
              : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr))) {
            vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt 
                = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel), 1U)))) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)) 
                   | (0x00ffU & ((3U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt) 
                                        - (IData)(1U))) 
                                 << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel), 1U)))));
        }
        if (((IData)(vlSelfRef.__PVT__host_gnt_err_event) 
             | (IData)(vlSelfRef.__PVT__host_outstanding_err_event))) {
            vlSelfRef.host_gnt_err_o = 1U;
        }
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
        if ((0U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
            vlSelfRef.__PVT__host_gnt_rd_err = 0U;
        } else if (vlSelfRef.__PVT__host_gnt_err_event) {
            vlSelfRef.__PVT__host_gnt_rd_err = 1U;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
             & (IData)(vlSelfRef.__PVT__ctrl_fsm_idle))) {
            vlSelfRef.__PVT__host_outstanding_rd_err = 0U;
        } else if (vlSelfRef.__PVT__host_outstanding_err_event) {
            vlSelfRef.__PVT__host_outstanding_rd_err = 1U;
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
            vlSelfRef.__PVT__u_rd__DOT__buf_en_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellout__u_flash_hw_if__rd_buf_en_o;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__flash_prog_req) 
                      & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack))))) {
            if (((IData)(vlSelfRef.__PVT__prog_calc_req) 
                 & (IData)(vlSelfRef.__PVT__calc_ack))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__mask_q 
                    = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_gf_mult__DOT__u_mult__DOT__prod_o;
            }
        }
    } else {
        vlSelfRef.__PVT__u_disable_buf__DOT__gen_no_flops__DOT__unused_logic = 9U;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw = 0x07feU;
        vlSelfRef.__PVT__u_erase__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__rd_busy = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q = 0U;
        vlSelfRef.__PVT__rd_calc_req = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt = 0U;
        vlSelfRef.host_gnt_err_o = 0U;
        vlSelfRef.__PVT__u_rd__DOT__rd_attrs = 0U;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x02deU;
        vlSelfRef.__PVT__host_gnt_rd_err = 0U;
        vlSelfRef.__PVT__host_outstanding_rd_err = 0U;
        vlSelfRef.__PVT__u_rd__DOT__alloc_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__buf_en_q = 0U;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__mask_q = 0ULL;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_erase.sv:52: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[0].u_core.u_erase: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_erase.sv", 52, "");
            }
        }
    }
    vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
            vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 1U;
        }
    }
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5 
        = ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                         >> 1U))) | (IData)(((5U == 
                                              (7U & 
                                               vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U])) 
                                             & (~ (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                       >> 4U)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                                    >> 2U)))))));
    vlSelfRef.__PVT__u_rd__DOT__buf_dependency = ((
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 4U))) 
                                                      << 2U)) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 2U))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))));
    if ((1U & (~ VL_ONEHOT_I(((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                << 4U) | (((0x0342U 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 3U) | 
                                          ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                              | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                  << 1U) | (0x02deU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))) {
        if ((0U != ((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x0342U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_core.sv:331: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[0].u_core: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_core.sv", 331, "");
            }
        }
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 3U;
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    vlSelfRef.__PVT__fsm_err = 0U;
    if ((0x02deU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x003bU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__fsm_err = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__ctrl_fsm_idle = 0U;
    if ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
    } else if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
            }
        }
    }
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x000007f0U & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x0000000fU & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & ((((((2U & (VL_REDXOR_32(
                                                     ((0xfe000000U 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]) 
                                                      ^ 
                                                      (0x0000000fU 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                        << 1U)) | (1U 
                                                   & VL_REDXOR_32(
                                                                  ((0xfc000000U 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                   ^ 
                                                                   (0x01ffffffU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))))) 
                                << 5U) | (((2U & (VL_REDXOR_32(
                                                               ((0x03fff800U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                ^ 
                                                                (0x01fffe00U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (((0x03fc07f0U 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                             ^ 
                                                             (0x01fe01feU 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                            ^ 
                                                            (0x0000000fU 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))) 
                                          << 3U)) | 
                              ((4U & (VL_REDXOR_32(
                                                   ((0xe3c3c78eU 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0xf1e1e1e1U 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (((0x9b33366dU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                    ^ 
                                                                    (0xcd999999U 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                   ^ 
                                                                   (0x0000000cU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (((0x56aaad5bU 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                     ^ 
                                                                     (0xab555555U 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                    ^ 
                                                                    (0x0000000aU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))))) 
                             << 4U)));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18 
        = (((IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3) 
            << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1));
    __VdfgRegularize_h7fd72a4c_1_1 = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)) 
                                      & ((((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 3U) | 
                                          ((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 2U)) 
                                         | (((2U == 
                                              (3U & 
                                               (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                >> 1U))) 
                                             << 1U) 
                                            | (2U == 
                                               (3U 
                                                & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                   >> 1U))))));
    vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc = 
        (((((~ ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5) 
                | (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18)))) 
            & ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))) | (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U])) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U)))))))) 
           << 3U) | (((~ (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18))) 
                      & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5)) 
                     << 2U)) | ((((~ (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)) 
                                  & (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3)) 
                                 << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)));
    vlSelfRef.__PVT__host_outstanding_err_event = (
                                                   (~ (IData)(vlSelfRef.__PVT__ctrl_fsm_idle)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__arb_host_gnt_err = (((IData)(vlSelfRef.__PVT__host_gnt_rd_err) 
                                          & (1U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                         | (IData)(vlSelfRef.__PVT__host_outstanding_rd_err));
    __VdfgRegularize_h7fd72a4c_1_0 = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc)) 
                                      | (0x0000000fU 
                                         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)));
    vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0 
        = ((~ (IData)(__VdfgRegularize_h7fd72a4c_1_0)) 
           & (0U != (IData)(__VdfgRegularize_h7fd72a4c_1_1)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i 
        = ((IData)(__VdfgRegularize_h7fd72a4c_1_0) ? 0U
            : (IData)(__VdfgRegularize_h7fd72a4c_1_1));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 3U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 2U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     >> 2U)) | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)) 
                                & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i)) 
                 | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__)) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     | ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                        >> 1U))) | ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__) 
                                        | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__))) 
                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__) 
                                       | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))));
}

void Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__2(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.ack_o) 
           | (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o 
        = (((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
            != (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q));
    vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o) 
                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o) 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o) 
                                                       & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o))));
}

void Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0ULL : (((QData)((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                       (((IData)(0x0000003fU) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))) 
                                        >> 5U)])) << 
                       ((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U)))
                         ? 0x00000020U : ((IData)(0x00000040U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             (1U 
                                                              & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))) 
                      | (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U)))
                           ? 0ULL : ((QData)((IData)(
                                                     vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                                     (((IData)(0x0000001fU) 
                                                       + 
                                                       (0x0000007fU 
                                                        & VL_SHIFTL_III(7,7,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))) 
                                                      >> 5U)])) 
                                     << ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))) 
                         | ((QData)((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                            (3U & (
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U) 
                                                   >> 5U))])) 
                            >> (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x0bU >= (0x0000000fU & ((IData)(6U) 
                                              * (1U 
                                                 & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                     ? (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__storage) 
                                       >> (0x0000000fU 
                                           & ((IData)(6U) 
                                              * (1U 
                                                 & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))
                     : 0U));
    __VExpandSel_WordIdx_1 = (7U & (((IData)(0x0000004cU) 
                                     * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                    >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x0000004cU) 
                                             * (1U 
                                                & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] = 0U;
    } else if ((0x97U >= (0x000000ffU & ((IData)(0x0000004cU) 
                                         * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] 
            = (((vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[__VExpandSel_WordIdx_1] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] 
            = (((vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
            = (0x00000fffU & (((((2U <= __VExpandSel_WordIdx_1)
                                  ? 0U : vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(3U) + __VExpandSel_WordIdx_1)]) 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1)));
    } else {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match = (((
                                                   ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                    & (IData)(
                                                              (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                >> 5U) 
                                                               & (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                      & (IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                  >> 4U) 
                                                                 & (4U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                      & (IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                  >> 3U) 
                                                                 & (4U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                       & (IData)(
                                                                 (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                   >> 2U) 
                                                                  & (4U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])))))));
    vlSelfRef.__PVT__u_rd__DOT__hint_forward = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 5U)));
    vlSelfRef.__PVT__u_rd__DOT__hint_dropmsk = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 6U)));
    vlSelfRef.__PVT__u_rd__DOT__hint_descram = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 7U)));
    vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [0U][0U] >> 6U));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [1U][0U] >> 6U));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [2U][0U] >> 6U));
    }
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [0U][0U]));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [1U][0U]));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [2U][0U]));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [3U][0U] >> 6U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [3U][0U]));
    }
    vlSelfRef.__PVT__rd_op_req = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_descram)));
}

void Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1;
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 = 0;
    // Body
    vlSelfRef.__PVT__u_rd__DOT__ecc_single_err = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__arb_host_gnt_err)) 
                                                     & VL_REDXOR_32(
                                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[0U] 
                                                                      ^ 
                                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[1U]) 
                                                                     ^ 
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[2U]))));
    if (vlSelfRef.__PVT__arb_host_gnt_err) {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] = 0x00000fffU;
    } else {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[0U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[1U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[2U];
    }
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 
        = (((((2U & (VL_REDXOR_32(((0xfe000000U & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U]) 
                                   ^ (0x0000040fU & 
                                      vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0xfc000000U 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0x01ffffffU 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                   ^ 
                                                   (0x00000200U 
                                                    & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
             << 5U) | (((2U & (VL_REDXOR_32((((0x03fff800U 
                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                              ^ (0x01fffe00U 
                                                 & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                             ^ (0x00000100U 
                                                & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0x03fc07f0U 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                              ^ 
                                                              (0x01fe01feU 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                             ^ 
                                                             (0x0000008fU 
                                                              & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
                       << 3U)) | ((4U & (VL_REDXOR_32(
                                                      (((0xe3c3c78eU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xf1e1e1e1U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x00000040U 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_32(
                                                       (((0x9b33366dU 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                         ^ 
                                                         (0xcd999999U 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                        ^ 
                                                        (0x0000002cU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_32(
                                                      (((0x56aaad5bU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xab555555U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x0000001aU 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err) 
            << 7U) | (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1));
    vlSelfRef.__PVT__u_rd__DOT__ecc_multi_err = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err)) 
                                                 & (0U 
                                                    != (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1)));
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0] = 0U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0 
        = vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o;
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[0U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xa6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xa5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xa4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xa3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xa2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xa1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x9fU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x9eU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x9dU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x9cU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0x9bU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x9aU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0x99U] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x98U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x97U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x96U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0x95U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0x94U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0x93U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0x92U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x91U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0x8fU] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x8eU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x8dU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0x8cU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0x8bU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x8aU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x89U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x87U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x86U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x85U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0x83U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[1U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xc7U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xc6U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xc5U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xc4U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xc3U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xc2U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xc1U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xbfU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xbeU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xbdU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0xbcU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xbbU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xbaU] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb9U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xb8U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb7U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xb6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xb5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xb4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xb1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb0U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xafU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0xaeU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0xadU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xacU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xabU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xaaU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa9U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa8U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0xa7U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[2U] 
        = (0x0000000fU & ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                    [0xcbU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                               >> 3U)) 
                                   << 1U)) | (1U & 
                                              (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xcaU] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                  >> 2U)))) 
                           << 2U) | ((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xc9U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                >> 1U)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xc8U] 
                                              ^ vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))));
}

void Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__3(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rd__DOT__no_buf_en_change = 
        ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellout__u_flash_hw_if__rd_buf_en_o) 
         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q));
}

void Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__5(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__2__Vfuncout;
    __Vfunc_mubi4_test_true_loose__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__2__val;
    __Vfunc_mubi4_test_true_loose__2__val = 0;
    // Body
    __Vfunc_mubi4_test_true_loose__2__val = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
    __Vfunc_mubi4_test_true_loose__2__Vfuncout = (9U 
                                                  != (IData)(__Vfunc_mubi4_test_true_loose__2__val));
    vlSelfRef.__VdfgExtracted_hded1f362__0 = __Vfunc_mubi4_test_true_loose__2__Vfuncout;
}

void Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__6__Vfuncout;
    __Vfunc_mubi4_test_true_loose__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__6__val;
    __Vfunc_mubi4_test_true_loose__6__val = 0;
    // Body
    vlSelfRef.__PVT__u_rd__DOT__no_buf_en_change = 
        ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellout__u_flash_hw_if__rd_buf_en_o) 
         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q));
    __Vfunc_mubi4_test_true_loose__6__val = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
    __Vfunc_mubi4_test_true_loose__6__Vfuncout = (9U 
                                                  != (IData)(__Vfunc_mubi4_test_true_loose__6__val));
    vlSelfRef.__VdfgExtracted_hded1f362__0 = __Vfunc_mubi4_test_true_loose__6__Vfuncout;
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__0(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__host_req = (((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o) 
                                      & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__wdata_i))) 
                                     & (5U > (IData)(vlSelfRef.__PVT__arb_cnt))) 
                                    & (IData)(vlSelfRef.__PVT__ctrl_fsm_idle)) 
                                   & (~ (IData)(vlSelfRef.__PVT__host_gnt_rd_err))) 
                                  & (~ (IData)(vlSelfRef.__PVT__host_outstanding_rd_err))) 
                                 & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_false_strict__4__val 
                    = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
                vlSelfRef.__Vfunc_mubi4_test_false_strict__4__Vfuncout 
                    = (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__4__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__4__Vfuncout)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__op_ack = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__2__KET__) 
                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o) 
                                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i)));
    vlSelfRef.__PVT__u_rd__DOT__fifo_data_ready = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__hint_descram)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__rd_op_req) 
                                                       & (IData)(vlSelfRef.__PVT__op_ack))
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__u_rd__DOT__hint_dropmsk)
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)))));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__fifo_data_ready) 
           | ((IData)(vlSelfRef.__PVT__u_rd__DOT__hint_forward) 
              & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_dropmsk)) 
                 | (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_forward)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__fifo_data_ready));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rready_i)));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__3(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__muxed_addr = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__host_req)
                                                   ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o
                                                   : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23 
        = (((1U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                   >> 5U)) == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i)) 
           & ((3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                     >> 3U)) == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 6U))));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22));
    vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match 
        = (((0x0000ffffU & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                            >> 6U)) == (0x0000ffffU 
                                        & (vlSelfRef.__PVT__muxed_addr 
                                           >> 1U))) 
           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__6(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rd__DOT__forward) {
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__data_int[0U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__data_int[1U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__data_int[2U]);
    } else if (vlSelfRef.__PVT__u_rd__DOT__hint_descram) {
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
            = (IData)((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__rd_descrambled_data 
                       ^ vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o));
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
            = (IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__rd_descrambled_data 
                        ^ vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o) 
                       >> 0x00000020U));
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
            = (0x0000000fU & (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U]));
    } else {
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U];
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U]);
    }
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] = 
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U];
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] = 
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U];
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] = 
        vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U];
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [0U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [0U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [0U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [0U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [0U][2U] >> 0x00000016U));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [1U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [1U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [1U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [1U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [1U][2U] >> 0x00000016U));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [2U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [2U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [2U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [2U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [2U][2U] >> 0x00000016U));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [3U][1U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [3U][0U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U] 
            = ((vlSelfRef.__PVT__u_rd__DOT__read_buf
                [3U][2U] << 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__read_buf
                                            [3U][1U] 
                                            >> 0x00000016U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U] 
            = (0x0000000fU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                              [3U][2U] >> 0x00000016U));
    }
    if ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[0U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[1U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[2U] 
            = vlSelfRef.__PVT__u_rd__DOT__buf_rsp_data[2U];
    } else {
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U] 
            = vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U] 
            = vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U];
        vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[2U] 
            = vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U];
    }
    vlSelfRef.__PVT__u_rd__DOT__u_intg_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
           & (((((2U & (VL_REDXOR_64((0x01fe01fe03fc07f0ULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                        << 1U)) | (1U & VL_REDXOR_64(
                                                     (0xf1e1e1e1e3c3c78eULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))))) 
                << 2U) | ((2U & (VL_REDXOR_64((0xcd9999999b33366dULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U]))))) 
                                 << 1U)) | (1U & VL_REDXOR_64(
                                                              (0xab55555556aaad5bULL 
                                                               & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[1U])) 
                                                                   << 0x00000020U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[0U])))))))) 
              != (0x0000000fU & vlSelfRef.__PVT__u_rd__DOT__data_out_muxed[2U])));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__8(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqs = ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                              ? 0U : ((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                       ? 0U : ((0x03edU 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                ? 1U
                                                : (
                                                   (0x0342U 
                                                    == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1681)
                                                    : 0U))));
    vlSelfRef.__PVT__ctrl_req = (((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__ctrl_req) 
                                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (~ (IData)(vlSelfRef.__PVT__host_gnt_rd_err))) 
                                  & (~ (IData)(vlSelfRef.__PVT__host_outstanding_rd_err))) 
                                 & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_false_strict__5__val 
                    = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
                vlSelfRef.__Vfunc_mubi4_test_false_strict__5__Vfuncout 
                    = (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__5__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__5__Vfuncout)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__9(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_erase__DOT__state_d = vlSelfRef.__PVT__u_erase__DOT__state_q;
    if ((0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.pg_erase_i) 
              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.bk_erase_i)) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.ack_o))) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.ack_o))) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 2U;
        } else if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.done_o) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.done_o) {
            vlSelfRef.__PVT__u_erase__DOT__state_d = 0U;
        }
    }
    vlSelfRef.__PVT__erase_ack = ((0U != (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                  & ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))
                                      ? ((~ ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.ack_o))) 
                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.done_o))
                                      : ((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.done_o))));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.done_o) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_busy));
    vlSelfRef.__PVT__u_rd__DOT__valid_ecc = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
                                             & vlSelfRef.__PVT__u_rd__DOT__rd_attrs);
    vlSelfRef.__PVT__u_rd__DOT__data_erased = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
                                               & (0U 
                                                  == 
                                                  (((~ 
                                                     vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                    | (~ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                   | (0x00000fffU 
                                                      ^ 
                                                      vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_12 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
           & (vlSelfRef.__PVT__u_rd__DOT__rd_attrs 
              >> 1U));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20 
        = (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_busy)) 
            | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy));
    vlSelfRef.__PVT__u_rd__DOT__descram = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__data_erased)) 
                                           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_12));
    vlSelfRef.__PVT__u_rd__DOT__forward = ((~ ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                               | (IData)(vlSelfRef.__PVT__u_rd__DOT__descram))) 
                                           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__10(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__host_req) {
        vlSelfRef.__PVT__muxed_ecc_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_ecc_en;
        vlSelfRef.__PVT__muxed_scramble_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_scramble_en;
    } else {
        vlSelfRef.__PVT__muxed_ecc_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__ecc_en_o;
        vlSelfRef.__PVT__muxed_scramble_en = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__scramble_en_o;
    }
    vlSelfRef.__PVT__u_rd__DOT__data_hazard__BRA__0__KET__ 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24)))))));
    vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__1__KET____DOT__u_rd_buf__DOT__wipe_i 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23)))))));
    vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__2__KET____DOT__u_rd_buf__DOT__wipe_i 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22)))))));
    vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__3__KET____DOT__u_rd_buf__DOT__wipe_i 
        = (IData)(((4U == (6U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U])) 
                   & (((IData)(vlSelfRef.__PVT__reqs) 
                       >> 2U) | (((IData)(vlSelfRef.__PVT__reqs) 
                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match)) 
                                 | (((IData)(vlSelfRef.__PVT__reqs) 
                                     >> 1U) & (((0x000000ffU 
                                                 & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                    >> 0x0000000eU)) 
                                                == 
                                                (0x000000ffU 
                                                 & (vlSelfRef.__PVT__muxed_addr 
                                                    >> 9U))) 
                                               & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21)))))));
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o 
        = ((IData)(vlSelfRef.__PVT__ctrl_req) | (IData)(vlSelfRef.__PVT__host_req));
    if (vlSelfRef.__PVT__muxed_ecc_en) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[0U] 
            = vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[1U] 
            = vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U];
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[0U] 
            = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[1U] 
            = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[2U] 
        = ((0x7ffff000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[2U]) 
           | (0x7fffffffU & ((IData)(vlSelfRef.__PVT__muxed_ecc_en)
                              ? ((0x00000800U & (VL_REDXOR_32(
                                                              ((vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U] 
                                                                ^ 
                                                                vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U]) 
                                                               ^ 
                                                               vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U])) 
                                                 << 0x0000000bU)) 
                                 | vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U])
                              : (0x00000ff0U | vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[2U] 
        = ((0x00000fffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[2U]) 
           | (0x7fffffffU & (((0x0007fff8U & (vlSelfRef.__PVT__muxed_addr 
                                              << 2U)) 
                              | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i) 
                                  << 2U) | (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                  >> 6U)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__u_rd__DOT__req_i = ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
                                         & ((IData)(vlSelfRef.__PVT__host_req) 
                                            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__rd_o)));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__req_i));
    vlSelfRef.__PVT__u_rd__DOT__buf_match = (((((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                         >> 1U))) 
                                                    | (1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                           >> 1U)))) 
                                                   & ((~ 
                                                       vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                                                      & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match)))) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                           >> 1U))) 
                                                      | (1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                             >> 1U)))) 
                                                     & ((~ 
                                                         vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                                                        & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match)))) 
                                                 << 2U)) 
                                             | ((((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                           >> 1U))) 
                                                      | (1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                             >> 1U)))) 
                                                     & ((~ 
                                                         vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                                                        & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match)))) 
                                                 << 1U) 
                                                | ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25) 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                            >> 1U))) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                              >> 1U)))) 
                                                      & ((~ 
                                                          vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match))))));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__11(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid = 0U;
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel = 0U;
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en = 0U;
    vlSelfRef.__PVT__flash_prog_req = 0U;
    vlSelfRef.__PVT__prog_ack = 0U;
    vlSelfRef.__PVT__prog_last = 0U;
    vlSelfRef.__PVT__prog_calc_req = 0U;
    vlSelfRef.__PVT__prog_op_req = 0U;
    vlSelfRef.__PVT__prog_fsm_err = 0U;
    if (((((((((0x07feU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
               | (0x0077U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
              | (0x0523U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
             | (0x0685U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
            | (0x035bU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
           | (0x000eU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
          | (0x00e9U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) 
         | (0x01d4U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x07feU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            if (([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__7__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__7__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__7__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__7__Vfuncout))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0440U;
            } else if ((1U & ((IData)(vlSelfRef.__PVT__reqs) 
                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0077U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__reqs))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0523U;
            }
        } else if ((0x0077U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid 
                = ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) 
                   < (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr));
            if (((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) 
                 == ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) 
                     & ((1U & (~ (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx))) 
                        == (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr))))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0523U;
            }
        } else if ((0x0523U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid 
                = (1U & (IData)(vlSelfRef.__PVT__reqs));
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel = 1U;
            if (((IData)(vlSelfRef.__PVT__reqs) & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x035bU;
            } else if (((IData)(vlSelfRef.__PVT__reqs) 
                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_prog_last))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0685U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__reqs))) {
                vlSelfRef.__PVT__prog_ack = 1U;
            }
        } else if ((0x0685U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel = 0U;
            if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x035bU;
            }
        } else if ((0x035bU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__muxed_scramble_en)
                    ? 0x000eU : 0x02b2U);
        } else if ((0x000eU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__prog_calc_req = 1U;
            if (vlSelfRef.__PVT__calc_ack) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x00e9U;
            }
        } else if ((0x00e9U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__prog_op_req = 1U;
            if (vlSelfRef.__PVT__op_ack) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x01d4U;
            }
        } else {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x02b2U;
        }
    } else if ((0x02b2U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__flash_prog_req = (1U & (~ (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q)));
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_prog_last) {
            vlSelfRef.__PVT__prog_last = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack)
                    ? 0x0138U : 0x02b2U);
        } else {
            vlSelfRef.__PVT__prog_last = 0U;
            if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack) {
                vlSelfRef.__PVT__prog_ack = 1U;
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x07feU;
            } else {
                vlSelfRef.__PVT__prog_ack = 0U;
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x02b2U;
            }
        }
    } else if ((0x0138U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
        if (((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q) 
             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.done_o))) {
            vlSelfRef.__PVT__prog_ack = 1U;
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x07feU;
        }
    } else if ((0x0440U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = 0x0440U;
    } else {
        vlSelfRef.__PVT__prog_fsm_err = 1U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0440U 
                                                == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                               << 5U) 
                                              | (((0x0138U 
                                                   == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 4U) 
                                                 | ((0x02b2U 
                                                     == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                    << 3U))) 
                                             | (((0x01d4U 
                                                  == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                 << 2U) 
                                                | (((0x00e9U 
                                                     == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                    << 1U) 
                                                   | (0x000eU 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))) 
                                            << 5U) 
                                           | ((((0x035bU 
                                                 == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                << 4U) 
                                               | (((0x0685U 
                                                    == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                   << 3U) 
                                                  | ((0x0523U 
                                                      == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                     << 2U))) 
                                              | (((0x0077U 
                                                   == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 1U) 
                                                 | (0x07feU 
                                                    == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))))))))) {
        if ((0U != ((((((0x0440U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                        << 5U) | (((0x0138U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                   << 4U) | ((0x02b2U 
                                              == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                             << 3U))) 
                      | (((0x01d4U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                          << 2U) | (((0x00e9U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                     << 1U) | (0x000eU 
                                               == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))) 
                     << 5U) | ((((0x035bU == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | (((0x0685U 
                                             == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                            << 3U) 
                                           | ((0x0523U 
                                               == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                              << 2U))) 
                               | (((0x0077U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x07feU 
                                             == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_prog.sv:186: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[1].u_core.gen_prog_data.u_prog: unique case, but multiple matches found for '11'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),11,
                             (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_prog.sv", 186, "");
            }
        }
    }
    vlSelfRef.__PVT__rd_stage_rdy = ((~ (0x0000000fU 
                                         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency))) 
                                     & (((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))
                                          ? (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy)
                                          : ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.ack_o) 
                                             & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20))) 
                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__no_buf_en_change) 
                                           & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_11))));
    vlSelfRef.__PVT__ctrl_rsp_vld = ((0x02deU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     & ((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                         ? (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i)
                                         : ((0x03edU 
                                             == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? (IData)(vlSelfRef.__PVT__prog_ack)
                                             : ((0x0342U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                & (IData)(vlSelfRef.__PVT__erase_ack)))));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__req_i) 
           & (IData)(vlSelfRef.__PVT__rd_stage_rdy));
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
           & (((IData)(vlSelfRef.__PVT__host_req) & (IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o))
               ? (IData)(vlSelfRef.__PVT__rd_stage_rdy)
               : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o));
    vlSelfRef.__PVT__ctrl_gnt = ((~ (IData)(vlSelfRef.__PVT__host_req)) 
                                 & (IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__));
    vlSelfRef.host_req_rdy_o = ((IData)(vlSelfRef.__PVT__host_req) 
                                & (IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    if ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__VdfgExtracted_hded1f362__0) {
            vlSelfRef.__PVT__state_d = 0x003bU;
        } else if (((IData)(vlSelfRef.__PVT__ctrl_gnt) 
                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__rd_o))) {
            vlSelfRef.__PVT__state_d = 0x00a6U;
        } else if (((IData)(vlSelfRef.__PVT__ctrl_gnt) 
                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__prog_o))) {
            vlSelfRef.__PVT__state_d = 0x03edU;
        } else if (vlSelfRef.__PVT__ctrl_gnt) {
            vlSelfRef.__PVT__state_d = 0x0342U;
        }
    } else if ((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i) {
            vlSelfRef.__PVT__state_d = 0x02deU;
        }
    } else if ((0x03edU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__prog_ack) {
            vlSelfRef.__PVT__state_d = 0x02deU;
        }
    } else if ((0x0342U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__erase_ack) {
            vlSelfRef.__PVT__state_d = 0x02deU;
        }
    } else if ((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__state_d = 0x003bU;
    }
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o 
        = (((IData)(vlSelfRef.__PVT__ctrl_gnt) << 1U) 
           | (IData)(vlSelfRef.host_req_rdy_o));
    vlSelfRef.__PVT__host_gnt = ((IData)(vlSelfRef.__PVT__host_req) 
                                 & (IData)(vlSelfRef.host_req_rdy_o));
    vlSelfRef.__PVT__host_gnt_err_event = ((IData)(vlSelfRef.__PVT__host_gnt) 
                                           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i 
        = ((IData)(vlSelfRef.__PVT__host_gnt) & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i)) 
                                                 & (2U 
                                                    >= (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__host_gnt)) & 
           ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i) 
            & (0U != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i)
                  ? ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                     - (IData)(1U)) : ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                                       + (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i))));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i)
                  ? ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                     - (IData)(1U)) : ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                       + (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i))));
    vlSelfRef.u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0 
        = ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
           ^ (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (3U & (((IData)(vlSelfRef.u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0) 
                  & (((~ (3U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                      & (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i)) 
                     | ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                  ? (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
                      & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                         >> 2U)) ? 0U : (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i) 
                                          & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                             >> 2U))
                                          ? 3U : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))
                  : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (3U & (((IData)(vlSelfRef.u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0) 
                  & (((~ (3U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))) 
                      & (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i)) 
                     | ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))
                  ? (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__incr_en_i) 
                      & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                         >> 2U)) ? 0U : (((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__decr_en_i) 
                                          & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                             >> 2U))
                                          ? 3U : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))
                  : (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__12(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.prim_flash_req_o[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[0U];
    vlSelfRef.prim_flash_req_o[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[1U];
    vlSelfRef.prim_flash_req_o[2U] = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.he_i) 
                                       << 0x0000001fU) 
                                      | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1469[2U]);
    vlSelfRef.prim_flash_req_o[3U] = (0x0000007fU & 
                                      ((((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_i) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.__PVT__flash_prog_req) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.__PVT__prog_last) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                >> 3U)))) 
                                        << 3U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.pg_erase_i) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.bk_erase_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.erase_suspend_req_i)))));
    vlSelfRef.__PVT__u_rd__DOT__rd_start = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_i) 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.ack_o));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__rd_start));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_d 
        = ((((2U & (((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                      ? (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                          | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__)) 
                         | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                            & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__)))
                      : ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q) 
                         >> 3U)) << 1U)) | (1U & ((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                                      & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q) 
                                                   >> 2U)))) 
            << 2U) | ((2U & (((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                               ? ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__) 
                                  | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                     & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__)))
                               : ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q) 
                                  >> 1U)) << 1U)) | 
                      (1U & ((IData)(vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0)
                              ? ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__))
                              : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)))));
    vlSelfRef.__PVT__u_rd__DOT__buf_alloc = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc))
                                              ? (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc)
                                              : (((
                                                   (0x3ffffffeU 
                                                    & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                        >> 2U) 
                                                       & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__) 
                                                           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                                          << 1U))) 
                                                   | (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                       >> 2U) 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__) 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)))) 
                                                  << 2U) 
                                                 | ((0xfffffffeU 
                                                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                        & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__) 
                                                            & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i)) 
                                                           << 1U))) 
                                                    | ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                                                       & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__) 
                                                          & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__ready_i))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10 = ((- (IData)((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25))) 
                                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_alloc));
    vlSelfRef.__PVT__u_rd__DOT__alloc = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))
                                          ? 0U : (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__wr_buf_i 
        = (((~ (0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match))) 
            & (0U != (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_10)))
            ? (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_alloc)
            : (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_match));
    __Vtableidx2 = ((0x000000f0U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                    << 2U)) | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__wr_buf_i));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel 
        = Vsim__ConstPool__TABLE_h870c2b22_0[__Vtableidx2];
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel 
        = Vsim__ConstPool__TABLE_h23f18ccb_0[__Vtableidx2];
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__unnamedblk1__DOT__i 
        = Vsim__ConstPool__TABLE_h055780f8_0[__Vtableidx2];
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt 
        = (3U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel), 1U))));
    vlSelfRef.u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt 
        = (3U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel), 1U))));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q) 
           & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i) 
              & (2U > (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt))));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q) 
           & (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
               & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i)) 
              & (0U < (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt))));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__13(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_d 
        = ((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q) 
           | ((0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__err_o)) 
              & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid)));
}

void Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__14(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__calc_ack = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_calc__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__2__KET__) 
                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_calc__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o) 
                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_gf_mult__DOT__u_mult__DOT__cnt)));
}

void Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = 0;
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h7fd72a4c_1_0;
    __VdfgRegularize_h7fd72a4c_1_0 = 0;
    CData/*3:0*/ __VdfgRegularize_h7fd72a4c_1_1;
    __VdfgRegularize_h7fd72a4c_1_1 = 0;
    CData/*2:0*/ __Vdly__arb_cnt;
    __Vdly__arb_cnt = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*0:0*/ __Vdly__gen_prog_data__DOT__u_prog__DOT__idx;
    __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = 0;
    QData/*63:0*/ __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data;
    __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data = 0;
    // Body
    __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__arb_cnt = vlSelfRef.__PVT__arb_cnt;
    __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_host_arb__DOT__err_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                               && (((3U 
                                                     | ((((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o) 
                                                            << 3U)) 
                                                        | (4U 
                                                           & ((~ (IData)(vlSelfRef.__PVT__host_req)) 
                                                              << 2U)))) 
                                                    != 
                                                    (3U 
                                                     | ((((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o) 
                                                            << 3U)) 
                                                        | (4U 
                                                           & ((~ (IData)(vlSelfRef.__PVT__host_req)) 
                                                              << 2U))))) 
                                                   | (IData)(vlSelfRef.__PVT__u_host_arb__DOT__err_q)));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_d));
    vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (3U != (7U & ((IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                            + (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid) 
             & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = 0U;
        } else if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__idx 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__ctrl_rsp_vld) {
            __Vdly__arb_cnt = 0U;
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__ctrl_req) 
                    & (IData)(vlSelfRef.__PVT__host_gnt))) {
            __Vdly__arb_cnt = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__arb_cnt)));
        }
        vlSelfRef.__PVT__arb_cnt = __Vdly__arb_cnt;
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__3__KET____DOT__u_rd_buf__DOT__wipe_i) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__alloc) 
                        >> 3U)) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__2__KET____DOT__u_rd_buf__DOT__wipe_i) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__alloc) 
                        >> 2U)) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__data_hazard__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & (IData)(vlSelfRef.__PVT__u_rd__DOT__alloc)) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q)) 
             & (0U != (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]);
        } else if (((IData)(vlSelfRef.__PVT__u_rd__DOT__gen_bufs__BRA__1__KET____DOT__u_rd_buf__DOT__wipe_i) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__rd_stage_rdy) 
                     & ((IData)(vlSelfRef.__PVT__u_rd__DOT__alloc) 
                        >> 1U)) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0xffc00001U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (0xfffffffeU & (2U | (((0x001fffe0U 
                                             & (vlSelfRef.__PVT__muxed_addr 
                                                << 4U)) 
                                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.part_i) 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 4U)))) 
                                           << 1U))));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (0xfffffffeU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]);
        } else if ((((IData)(vlSelfRef.__PVT__u_rd__DOT__update) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q))) {
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = ((0x003fffffU & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                   | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                      << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U] 
                = ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[0U] 
                    >> 0x0000000aU) | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                       << 0x00000016U));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U] 
                = (0x03ffffffU & ((vlSelfRef.__PVT__u_rd__DOT__muxed_data[1U] 
                                   >> 0x0000000aU) 
                                  | (vlSelfRef.__PVT__u_rd__DOT__muxed_data[2U] 
                                     << 0x00000016U)));
            vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                = (4U | ((0xfffffff8U & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]) 
                         | (IData)(vlSelfRef.__PVT__u_rd__DOT__muxed_err)));
        }
        if (((IData)(vlSelfRef.__PVT__flash_prog_req) 
             & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__prog_calc_req) 
                    & (IData)(vlSelfRef.__PVT__calc_ack))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
                = (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_gf_mult__DOT__u_mult__DOT__prod_o);
        } else if (((IData)(vlSelfRef.__PVT__prog_op_req) 
                    & (IData)(vlSelfRef.__PVT__op_ack))) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
                = (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__prog_scrambled_data 
                   ^ vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__mask_q);
        } else if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid) {
            __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx), 5U)))) 
                    & __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data) 
                   | ((QData)((IData)(((1U == (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel))
                                        ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i)
                                        : 0xffffffffU))) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx), 5U))));
        }
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__idx;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data;
        if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        __Vdly__gen_prog_data__DOT__u_prog__DOT__idx = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        __Vdly__arb_cnt = 0U;
        vlSelfRef.__PVT__arb_cnt = __Vdly__arb_cnt;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U] = 0U;
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U] = 0U;
        __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data = 0ULL;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__idx 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__idx;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
            = __Vdly__gen_prog_data__DOT__u_prog__DOT__packed_data;
        __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
            = __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U];
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en) {
            vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc 
                = (0x0000000fU & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[2U]);
        }
    } else {
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc = 0x0fU;
    }
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[2U] 
        = (0x0000007fU & (((((2U & (VL_REDXOR_64((0xfe00000000000000ULL 
                                                  & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0x01fffffffc000000ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                            << 5U) | (((2U & (VL_REDXOR_64(
                                                           (0x01fffe0003fff800ULL 
                                                            & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0x01fe01fe03fc07f0ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                                      << 3U)) | ((4U 
                                                  & (VL_REDXOR_64(
                                                                  (0xf1e1e1e1e3c3c78eULL 
                                                                   & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0xcd9999999b33366dULL 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xab55555556aaad5bULL 
                                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))))));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__u_disable_buf__DOT__gen_no_flops__DOT__unused_logic 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__state_d;
        vlSelfRef.__PVT__u_erase__DOT__state_q = vlSelfRef.__PVT__u_erase__DOT__state_d;
        if (vlSelfRef.__PVT__u_rd__DOT__rd_start) {
            vlSelfRef.__PVT__u_rd__DOT__rd_busy = 1U;
            vlSelfRef.__PVT__u_rd__DOT__rd_attrs = 
                ((0x0003fffcU & (vlSelfRef.__PVT__muxed_addr 
                                 << 1U)) | (((IData)(vlSelfRef.__PVT__muxed_scramble_en) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__muxed_ecc_en)));
            vlSelfRef.__PVT__u_rd__DOT__alloc_q = vlSelfRef.__PVT__u_rd__DOT__alloc;
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) {
            vlSelfRef.__PVT__u_rd__DOT__rd_busy = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_rd__DOT__rd_start) 
             & (IData)(vlSelfRef.__PVT__muxed_scramble_en))) {
            vlSelfRef.__PVT__rd_calc_req = 1U;
        } else if (vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wvalid_i) {
            vlSelfRef.__PVT__rd_calc_req = 0U;
        }
        vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q 
            = vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_d;
        if (((IData)(vlSelfRef.u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0)
              ? ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr)) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr))
              : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr))) {
            vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt 
                = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel), 1U)))) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)) 
                   | (0x00ffU & ((3U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt))) 
                                 << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel), 1U)))));
        }
        if (((IData)(vlSelfRef.u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0)
              ? ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr)) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr))
              : (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr))) {
            vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt 
                = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel), 1U)))) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)) 
                   | (0x00ffU & ((3U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt) 
                                        - (IData)(1U))) 
                                 << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel), 1U)))));
        }
        if (((IData)(vlSelfRef.__PVT__host_gnt_err_event) 
             | (IData)(vlSelfRef.__PVT__host_outstanding_err_event))) {
            vlSelfRef.host_gnt_err_o = 1U;
        }
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
        if ((0U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
            vlSelfRef.__PVT__host_gnt_rd_err = 0U;
        } else if (vlSelfRef.__PVT__host_gnt_err_event) {
            vlSelfRef.__PVT__host_gnt_rd_err = 1U;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
             & (IData)(vlSelfRef.__PVT__ctrl_fsm_idle))) {
            vlSelfRef.__PVT__host_outstanding_rd_err = 0U;
        } else if (vlSelfRef.__PVT__host_outstanding_err_event) {
            vlSelfRef.__PVT__host_outstanding_rd_err = 1U;
        }
        if (vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
            vlSelfRef.__PVT__u_rd__DOT__buf_en_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellout__u_flash_hw_if__rd_buf_en_o;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__flash_prog_req) 
                      & (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack))))) {
            if (((IData)(vlSelfRef.__PVT__prog_calc_req) 
                 & (IData)(vlSelfRef.__PVT__calc_ack))) {
                vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__mask_q 
                    = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_gf_mult__DOT__u_mult__DOT__prod_o;
            }
        }
    } else {
        vlSelfRef.__PVT__u_disable_buf__DOT__gen_no_flops__DOT__unused_logic = 9U;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw = 0x07feU;
        vlSelfRef.__PVT__u_erase__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__rd_busy = 0U;
        vlSelfRef.__PVT__rd_calc_req = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt = 0U;
        vlSelfRef.host_gnt_err_o = 0U;
        vlSelfRef.__PVT__u_rd__DOT__rd_attrs = 0U;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x02deU;
        vlSelfRef.__PVT__host_gnt_rd_err = 0U;
        vlSelfRef.__PVT__host_outstanding_rd_err = 0U;
        vlSelfRef.__PVT__u_rd__DOT__alloc_q = 0U;
        vlSelfRef.__PVT__u_rd__DOT__buf_en_q = 0U;
        vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__mask_q = 0ULL;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_erase.sv:52: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[1].u_core.u_erase: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_erase.sv", 52, "");
            }
        }
    }
    vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
            vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 1U;
        }
    }
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5 
        = ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                         >> 1U))) | (IData)(((5U == 
                                              (7U & 
                                               vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U])) 
                                             & (~ (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                       >> 4U)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                                    >> 2U)))))));
    vlSelfRef.__PVT__u_rd__DOT__buf_dependency = ((
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 4U))) 
                                                      << 2U)) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 2U))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))));
    if ((1U & (~ VL_ONEHOT_I(((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                << 4U) | (((0x0342U 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 3U) | 
                                          ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                              | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                  << 1U) | (0x02deU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))) {
        if ((0U != ((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x0342U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_core.sv:331: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[1].u_core: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_core.sv", 331, "");
            }
        }
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 3U;
        vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    vlSelfRef.__PVT__fsm_err = 0U;
    if ((0x02deU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x003bU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__fsm_err = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__ctrl_fsm_idle = 0U;
    if ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
    } else if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
            }
        }
    }
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x000007f0U & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x0000000fU & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & ((((((2U & (VL_REDXOR_32(
                                                     ((0xfe000000U 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]) 
                                                      ^ 
                                                      (0x0000000fU 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                        << 1U)) | (1U 
                                                   & VL_REDXOR_32(
                                                                  ((0xfc000000U 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                   ^ 
                                                                   (0x01ffffffU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))))) 
                                << 5U) | (((2U & (VL_REDXOR_32(
                                                               ((0x03fff800U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                ^ 
                                                                (0x01fffe00U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (((0x03fc07f0U 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                             ^ 
                                                             (0x01fe01feU 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                            ^ 
                                                            (0x0000000fU 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))) 
                                          << 3U)) | 
                              ((4U & (VL_REDXOR_32(
                                                   ((0xe3c3c78eU 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0xf1e1e1e1U 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (((0x9b33366dU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                    ^ 
                                                                    (0xcd999999U 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                   ^ 
                                                                   (0x0000000cU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (((0x56aaad5bU 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                     ^ 
                                                                     (0xab555555U 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                    ^ 
                                                                    (0x0000000aU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))))) 
                             << 4U)));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18 
        = (((IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3) 
            << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1));
    __VdfgRegularize_h7fd72a4c_1_1 = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)) 
                                      & ((((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 3U) | 
                                          ((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 2U)) 
                                         | (((2U == 
                                              (3U & 
                                               (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                >> 1U))) 
                                             << 1U) 
                                            | (2U == 
                                               (3U 
                                                & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                   >> 1U))))));
    vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc = 
        (((((~ ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5) 
                | (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18)))) 
            & ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))) | (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U])) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U)))))))) 
           << 3U) | (((~ (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18))) 
                      & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5)) 
                     << 2U)) | ((((~ (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)) 
                                  & (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3)) 
                                 << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)));
    vlSelfRef.__PVT__host_outstanding_err_event = (
                                                   (~ (IData)(vlSelfRef.__PVT__ctrl_fsm_idle)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__arb_host_gnt_err = (((IData)(vlSelfRef.__PVT__host_gnt_rd_err) 
                                          & (1U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                         | (IData)(vlSelfRef.__PVT__host_outstanding_rd_err));
    __VdfgRegularize_h7fd72a4c_1_0 = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc)) 
                                      | (0x0000000fU 
                                         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)));
    vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0 
        = ((~ (IData)(__VdfgRegularize_h7fd72a4c_1_0)) 
           & (0U != (IData)(__VdfgRegularize_h7fd72a4c_1_1)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i 
        = ((IData)(__VdfgRegularize_h7fd72a4c_1_0) ? 0U
            : (IData)(__VdfgRegularize_h7fd72a4c_1_1));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 3U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 2U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     >> 2U)) | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)) 
                                & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i)) 
                 | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__)) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     | ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                        >> 1U))) | ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__) 
                                        | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__))) 
                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__) 
                                       | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))));
}

void Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__2(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.ack_o) 
           | (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o 
        = (((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
            != (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q));
    vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o) 
                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o) 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o) 
                                                       & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o))));
}

void Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1;
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 = 0;
    // Body
    vlSelfRef.__PVT__u_rd__DOT__ecc_single_err = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__arb_host_gnt_err)) 
                                                     & VL_REDXOR_32(
                                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[0U] 
                                                                      ^ 
                                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[1U]) 
                                                                     ^ 
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[2U]))));
    if (vlSelfRef.__PVT__arb_host_gnt_err) {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] = 0x00000fffU;
    } else {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[0U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[1U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[2U];
    }
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 
        = (((((2U & (VL_REDXOR_32(((0xfe000000U & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U]) 
                                   ^ (0x0000040fU & 
                                      vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0xfc000000U 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0x01ffffffU 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                   ^ 
                                                   (0x00000200U 
                                                    & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
             << 5U) | (((2U & (VL_REDXOR_32((((0x03fff800U 
                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                              ^ (0x01fffe00U 
                                                 & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                             ^ (0x00000100U 
                                                & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0x03fc07f0U 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                              ^ 
                                                              (0x01fe01feU 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                             ^ 
                                                             (0x0000008fU 
                                                              & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
                       << 3U)) | ((4U & (VL_REDXOR_32(
                                                      (((0xe3c3c78eU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xf1e1e1e1U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x00000040U 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_32(
                                                       (((0x9b33366dU 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                         ^ 
                                                         (0xcd999999U 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                        ^ 
                                                        (0x0000002cU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_32(
                                                      (((0x56aaad5bU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xab555555U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x0000001aU 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err) 
            << 7U) | (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1));
    vlSelfRef.__PVT__u_rd__DOT__ecc_multi_err = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err)) 
                                                 & (0U 
                                                    != (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1)));
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0] = 0U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0 
        = vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o;
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[0U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xa6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xa5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xa4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xa3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xa2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xa1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x9fU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x9eU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x9dU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x9cU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0x9bU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x9aU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0x99U] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x98U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x97U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x96U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0x95U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0x94U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0x93U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0x92U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x91U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0x8fU] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x8eU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x8dU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0x8cU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0x8bU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x8aU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x89U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x87U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x86U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x85U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0x83U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[1U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xc7U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xc6U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xc5U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xc4U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xc3U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xc2U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xc1U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xbfU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xbeU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xbdU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0xbcU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xbbU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xbaU] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb9U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xb8U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb7U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xb6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xb5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xb4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xb1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb0U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xafU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0xaeU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0xadU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xacU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xabU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xaaU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa9U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa8U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0xa7U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[2U] 
        = (0x0000000fU & ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                    [0xcbU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                               >> 3U)) 
                                   << 1U)) | (1U & 
                                              (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xcaU] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                  >> 2U)))) 
                           << 2U) | ((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xc9U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                >> 1U)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xc8U] 
                                              ^ vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))));
}

void Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__5(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__6__Vfuncout;
    __Vfunc_mubi4_test_true_loose__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__6__val;
    __Vfunc_mubi4_test_true_loose__6__val = 0;
    // Body
    __Vfunc_mubi4_test_true_loose__6__val = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
    __Vfunc_mubi4_test_true_loose__6__Vfuncout = (9U 
                                                  != (IData)(__Vfunc_mubi4_test_true_loose__6__val));
    vlSelfRef.__VdfgExtracted_hded1f362__0 = __Vfunc_mubi4_test_true_loose__6__Vfuncout;
}
