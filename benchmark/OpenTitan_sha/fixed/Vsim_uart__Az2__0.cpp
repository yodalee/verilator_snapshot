// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__0(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(512, 8, (0x000001ffU & VL_SHIFTL_III(9,32,32, 
                                                             (0x0000003fU 
                                                              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 3U)), vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i);
    }
    if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & VL_SHIFTL_III(8,32,32, 
                                                             (0x0000001fU 
                                                              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 3U)), vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q);
    }
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_hb1c522f8_1_4;
    __VdfgRegularize_hb1c522f8_1_4 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__0__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__0__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__payload;
    __Vfunc_extract_d2h_rsp_intg__0__payload = 0;
    CData/*0:0*/ __Vdly__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__break_st_q = 0;
    IData/*16:0*/ __Vdly__uart_core__DOT__nco_sum_q;
    __Vdly__uart_core__DOT__nco_sum_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__uart_core__DOT__break_st_q = vlSelfRef.__PVT__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__nco_sum_q = vlSelfRef.__PVT__uart_core__DOT__nco_sum_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__break_st_q) {
            if (vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) {
                __Vdly__uart_core__DOT__break_st_q = 0U;
            }
        } else if (vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i) {
            __Vdly__uart_core__DOT__break_st_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:126: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart0.uart_core: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/uart_core.sv", 126, "");
                }
            }
        }
    } else {
        __Vdly__uart_core__DOT__break_st_q = 0U;
    }
    vlSelfRef.__PVT__lsio_trigger_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
                                           | (IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark)));
    vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__wdata_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                             && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                                 && (0x0000000fU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we))))));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q) 
              & (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1));
    vlSelfRef.intr_tx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)));
    vlSelfRef.intr_tx_empty_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                 && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d) 
                                     & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q)));
    vlSelfRef.intr_rx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q)));
    vlSelfRef.intr_tx_done_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                    & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q)));
    vlSelfRef.intr_rx_overflow_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                        & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q)));
    vlSelfRef.intr_rx_frame_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q)));
    vlSelfRef.intr_rx_break_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q)));
    vlSelfRef.intr_rx_timeout_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                       & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q)));
    vlSelfRef.intr_rx_parity_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                      && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                          & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q)));
    vlSelfRef.__PVT__uart_core__DOT__tx_out_q = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                 || ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)
                                                      ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q)
                                                      : 
                                                     ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                      || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__rx_val_q 
                = ((0x0000fffeU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q) 
                                   << 1U)) | (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) 
             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q))) {
            __Vdly__uart_core__DOT__nco_sum_q = (0x0001ffffU 
                                                 & ((0x0000ffffU 
                                                     & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q) 
                                                    + 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                        >> 0x0000000eU))));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            = vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q 
            = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d;
        if (((IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                                   << 4U) | (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                    = (0x00ffffffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x0000001fU);
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
            }
        }
        if ((0x000001ffU == (0x000001ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) {
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 8U));
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 1U));
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
            vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q 
                = vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x00000010U);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q 
                    = (3U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 8U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 7U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 6U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 4U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)
                    ? (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)
                    : 0U);
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 8U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 2U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 3U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 4U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 5U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 6U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 7U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__uart_core__DOT__rx_val_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__nco_sum_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q = 0x07ffU;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__err_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__break_st_q = __Vdly__uart_core__DOT__break_st_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__nco_sum_q = __Vdly__uart_core__DOT__nco_sum_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
            = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                               >> 1U))) 
                  ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)));
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 2U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x00000020U : (0x0000003fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 5U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 5U)))
                                             ? ((0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x20U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
                  | (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i)))))
            ? 0U : (0x0000001fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q) 
                                   + ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i) 
                                      & (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
              & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i))));
    vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh 
        = ((6U < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
            ? 0x0000007fU : ((6U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                              ? 0x0000003eU : (0x0000007fU 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))));
    vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh));
    vlSelfRef.__VdfgRegularize_hb1c522f8_1_2 = (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                                                 << 0x00000010U) 
                                                | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d 
        = ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o)) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh 
        = ((4U <= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
            ? 0x00000010U : (0x0000003fU & ((IData)(1U) 
                                            << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))));
    vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
           < (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i)
                ? 0U : (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                         != (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o))
                                  ? 0U : (0x00ffffffU 
                                          & (vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
                                             + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
            : 0U);
    vlSelfRef.__PVT__uart_core__DOT__rx_sync = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[2U]);
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    __Vfunc_extract_d2h_rsp_intg__0__tl[0U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[1U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[2U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
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
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
        } else if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q)
            ? (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q)
            : ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q)
                   ? (((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync) 
                       & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                          | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2))) 
                      | ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2)))
                   : (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1192 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(__VdfgRegularize_hb1c522f8_1_4)))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                    & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)) 
                   || (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))
                    ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                           - (IData)(1U))));
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                           == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                                ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) 
                        << 0x0000000aU) | (0x000003ffU 
                                           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U)));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_42__q))));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__0(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata 
        = (0x000000ffU & (((0U == (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                               (0x0000001fU 
                                                                & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                            ? 0U : (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                    (((IData)(7U) + 
                                      (0x000000ffU 
                                       & VL_SHIFTL_III(8,8,32, 
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                          | (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                             (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                    >> 5U))] >> (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 (0x0000001fU 
                                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x00000400U | ((0x00000200U & ((
                                                   (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)) 
                                                   | (((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
                                                       & VL_REDXOR_8(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                                      ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))) 
                                                  << 9U)) 
                                  | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)
                                       ? 0U : (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                     << 1U)));
        } else if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x00000400U | (0x000003ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                                 >> 1U)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x07ffU;
    }
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = 0U;
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1ff8U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((8U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 2U) 
                                                | (((4U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1fc7U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x14U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 5U) 
                                                | (((0x10U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1e3fU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 8U) 
                                                | (((0x1cU 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x11ffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x2cU 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000000bU) 
                                                | (((0x28U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x0000000aU) 
                                                   | ((0x24U 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 9U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0fffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | ((0x30U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 0x0000000cU));
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
            ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000017U)) : 0xffffffffU);
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_reg_top.sv:1784: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart0.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_reg_top.sv", 1784, "");
            }
        }
    }
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__3(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__4(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x00ffU & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                       << 8U) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                    << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                      << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q))) 
                                 << 4U)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x0000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x00000010U));
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle)) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o))))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d) 
                       << 5U) | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                 << 4U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((0x00000040U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                       ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)
                           ? 0U : (0x000000ffU & ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x000001ffU 
                                                       & VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                  | (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x0000000fU 
                                                      & (VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x00000200U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x000000ffU & (IData)(((QData)((IData)(
                                                         (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
                                                           << 0x00000018U) 
                                                          | vlSelfRef.__VdfgRegularize_hb1c522f8_1_2))) 
                                         >> 0x00000018U))));
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x00ff0000U & vlSelfRef.__VdfgRegularize_hb1c522f8_1_2));
    } else if ((0x00000400U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x00000800U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    } else if ((0x00001000U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x0000001fU));
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001bU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 8U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (~ 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        << 9U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x00000017U)))))) 
                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                   >> 1U) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U)))))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                      >> 2U) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & (~ 
                                                            ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000017U)))))) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                         >> 3U) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 9U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000017U)))))) 
                                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                            >> 4U) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000017U)))))) 
                                                          | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                               >> 5U) 
                                                              & (0U 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000017U)))))) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                  >> 6U) 
                                                                 & (0U 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000017U)))))) 
                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                     >> 7U) 
                                                                    & (0U 
                                                                       != 
                                                                       (1U 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 9U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000017U)))))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                        >> 8U) 
                                                                       & (0U 
                                                                          != 
                                                                          (1U 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                           >> 9U) 
                                                                          & (0U 
                                                                             != 
                                                                             (7U 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                              >> 0x0000000aU) 
                                                                             & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000bU) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit))) 
                                             & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o));
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 5U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re = 
        (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
          >> 6U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000cU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
            << 0x0000000cU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                                                                << 2U))) 
                                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 4U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 5U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 6U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 7U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 3U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 2U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
              & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                              << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                  << 0x0000003dU) 
                                                 | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                     << 0x0000003bU) 
                                                    | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                        << 0x00000039U) 
                                                       | (((QData)((IData)(
                                                                           ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                              << 0x00000010U) 
                                                                             | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                              << 0x0000001cU) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                               << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                   << 0x0000003dU) 
                                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                      << 0x0000003bU) 
                                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                         << 0x00000039U) 
                                                        | (((QData)((IData)(
                                                                            ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                               << 0x00000010U) 
                                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                               << 0x0000001cU) 
                                                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))) 
                             >> 0x00000020U));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = __Vtemp_1[0U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = __Vtemp_1[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0xffffffe0U 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                     << 1U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0x0000001fU 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (0xffffffe0U 
                                                  & ((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                                      << 0x0000001eU) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                         << 0x0000000eU) 
                                                        | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q))) 
                                                            << 9U) 
                                                           | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))) 
                                                              << 5U))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = (((((
                                                   ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 7U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))) 
                                                << 0x00000010U) 
                                               | (((((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           >> 6U)) 
                                                       | (0x000001ffU 
                                                          == 
                                                          (0x000001ffU 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 5U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 4U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 3U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                            >> 2U)) 
                                                        | (0x000001ffU 
                                                           == 
                                                           (0x000001ffU 
                                                            & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 1U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                               << 1U)) 
                                                           | (0x000001ffU 
                                                              == 
                                                              (0x000001ffU 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = (0x0000000fU 
                                               & ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 4U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 5U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 6U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 7U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                             >> 0x0000000cU))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                     >> 0x0000000cU))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                   >> 0x0000000cU))) 
                     << 2U) | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                              >> 0x0000000cU))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart0.uart_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                    >> 0x0000000cU)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_core.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we)) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                   | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we)) 
                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_hb1c522f8_1_4;
    __VdfgRegularize_hb1c522f8_1_4 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__3__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__3__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__3__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3__payload;
    __Vfunc_extract_d2h_rsp_intg__3__payload = 0;
    CData/*0:0*/ __Vdly__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__break_st_q = 0;
    IData/*16:0*/ __Vdly__uart_core__DOT__nco_sum_q;
    __Vdly__uart_core__DOT__nco_sum_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__uart_core__DOT__break_st_q = vlSelfRef.__PVT__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__nco_sum_q = vlSelfRef.__PVT__uart_core__DOT__nco_sum_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__break_st_q) {
            if (vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) {
                __Vdly__uart_core__DOT__break_st_q = 0U;
            }
        } else if (vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i) {
            __Vdly__uart_core__DOT__break_st_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:126: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart1.uart_core: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/uart_core.sv", 126, "");
                }
            }
        }
    } else {
        __Vdly__uart_core__DOT__break_st_q = 0U;
    }
    vlSelfRef.__PVT__lsio_trigger_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
                                           | (IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark)));
    vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__wdata_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                             && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                                 && (0x0000000fU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we))))));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q) 
              & (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1));
    vlSelfRef.intr_tx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)));
    vlSelfRef.intr_tx_empty_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                 && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d) 
                                     & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q)));
    vlSelfRef.intr_rx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q)));
    vlSelfRef.intr_tx_done_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                    & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q)));
    vlSelfRef.intr_rx_overflow_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                        & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q)));
    vlSelfRef.intr_rx_frame_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q)));
    vlSelfRef.intr_rx_break_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q)));
    vlSelfRef.intr_rx_timeout_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                       & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q)));
    vlSelfRef.intr_rx_parity_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                      && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                          & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q)));
    vlSelfRef.__PVT__uart_core__DOT__tx_out_q = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                 || ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)
                                                      ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q)
                                                      : 
                                                     ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                      || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__rx_val_q 
                = ((0x0000fffeU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q) 
                                   << 1U)) | (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) 
             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q))) {
            __Vdly__uart_core__DOT__nco_sum_q = (0x0001ffffU 
                                                 & ((0x0000ffffU 
                                                     & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q) 
                                                    + 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                        >> 0x0000000eU))));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            = vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q 
            = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d;
        if (((IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                                   << 4U) | (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                    = (0x00ffffffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x0000001fU);
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
            }
        }
        if ((0x000001ffU == (0x000001ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) {
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 8U));
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 1U));
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
            vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q 
                = vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x00000010U);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q 
                    = (3U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 8U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 7U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 6U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 4U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)
                    ? (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)
                    : 0U);
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 8U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 2U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 3U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 4U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 5U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 6U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 7U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__uart_core__DOT__rx_val_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__nco_sum_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q = 0x07ffU;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__err_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__break_st_q = __Vdly__uart_core__DOT__break_st_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__nco_sum_q = __Vdly__uart_core__DOT__nco_sum_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
            = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                               >> 1U))) 
                  ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)));
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 2U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x00000020U : (0x0000003fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 5U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 5U)))
                                             ? ((0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x20U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
                  | (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i)))))
            ? 0U : (0x0000001fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q) 
                                   + ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i) 
                                      & (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
              & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i))));
    vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh 
        = ((6U < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
            ? 0x0000007fU : ((6U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                              ? 0x0000003eU : (0x0000007fU 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))));
    vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh));
    vlSelfRef.__VdfgRegularize_hb1c522f8_1_2 = (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                                                 << 0x00000010U) 
                                                | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d 
        = ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o)) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh 
        = ((4U <= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
            ? 0x00000010U : (0x0000003fU & ((IData)(1U) 
                                            << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))));
    vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
           < (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i)
                ? 0U : (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                         != (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o))
                                  ? 0U : (0x00ffffffU 
                                          & (vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
                                             + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
            : 0U);
    vlSelfRef.__PVT__uart_core__DOT__rx_sync = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[2U]);
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    __Vfunc_extract_d2h_rsp_intg__3__tl[0U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__3__tl[1U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__3__tl[2U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__3__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__3__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__3__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__3__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__3__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__3__Vfuncout = __Vfunc_extract_d2h_rsp_intg__3__payload;
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__3__Vfuncout;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
        } else if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q)
            ? (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q)
            : ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q)
                   ? (((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync) 
                       & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                          | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2))) 
                      | ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2)))
                   : (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1193 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(__VdfgRegularize_hb1c522f8_1_4)))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                    & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)) 
                   || (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))
                    ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                           - (IData)(1U))));
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                           == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                                ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) 
                        << 0x0000000aU) | (0x000003ffU 
                                           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U)));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_43__q))));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = 0U;
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1ff8U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((8U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 2U) 
                                                | (((4U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1fc7U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x14U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 5U) 
                                                | (((0x10U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1e3fU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 8U) 
                                                | (((0x1cU 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x11ffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x2cU 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000000bU) 
                                                | (((0x28U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x0000000aU) 
                                                   | ((0x24U 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 9U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0fffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | ((0x30U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 0x0000000cU));
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
            ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000017U)) : 0xffffffffU);
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_reg_top.sv:1784: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart1.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_reg_top.sv", 1784, "");
            }
        }
    }
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__3(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__4(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x00ffU & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                       << 8U) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                    << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                      << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q))) 
                                 << 4U)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x0000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x00000010U));
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle)) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o))))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d) 
                       << 5U) | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                 << 4U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((0x00000040U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                       ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)
                           ? 0U : (0x000000ffU & ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x000001ffU 
                                                       & VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                  | (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x0000000fU 
                                                      & (VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x00000200U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x000000ffU & (IData)(((QData)((IData)(
                                                         (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
                                                           << 0x00000018U) 
                                                          | vlSelfRef.__VdfgRegularize_hb1c522f8_1_2))) 
                                         >> 0x00000018U))));
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x00ff0000U & vlSelfRef.__VdfgRegularize_hb1c522f8_1_2));
    } else if ((0x00000400U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x00000800U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    } else if ((0x00001000U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x0000001fU));
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001bU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 8U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (~ 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        << 9U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x00000017U)))))) 
                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                   >> 1U) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U)))))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                      >> 2U) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & (~ 
                                                            ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000017U)))))) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                         >> 3U) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 9U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000017U)))))) 
                                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                            >> 4U) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000017U)))))) 
                                                          | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                               >> 5U) 
                                                              & (0U 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000017U)))))) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                  >> 6U) 
                                                                 & (0U 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000017U)))))) 
                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                     >> 7U) 
                                                                    & (0U 
                                                                       != 
                                                                       (1U 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 9U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000017U)))))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                        >> 8U) 
                                                                       & (0U 
                                                                          != 
                                                                          (1U 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                           >> 9U) 
                                                                          & (0U 
                                                                             != 
                                                                             (7U 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                              >> 0x0000000aU) 
                                                                             & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000bU) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit))) 
                                             & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o));
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 5U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re = 
        (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
          >> 6U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000cU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
            << 0x0000000cU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                                                                << 2U))) 
                                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 4U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 5U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 6U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 7U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 3U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 2U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
              & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                              << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                  << 0x0000003dU) 
                                                 | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                     << 0x0000003bU) 
                                                    | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                        << 0x00000039U) 
                                                       | (((QData)((IData)(
                                                                           ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                              << 0x00000010U) 
                                                                             | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                              << 0x0000001cU) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                               << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                   << 0x0000003dU) 
                                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                      << 0x0000003bU) 
                                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                         << 0x00000039U) 
                                                        | (((QData)((IData)(
                                                                            ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                               << 0x00000010U) 
                                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                               << 0x0000001cU) 
                                                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))) 
                             >> 0x00000020U));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = __Vtemp_1[0U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = __Vtemp_1[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0xffffffe0U 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                     << 1U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0x0000001fU 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (0xffffffe0U 
                                                  & ((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                                      << 0x0000001eU) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                         << 0x0000000eU) 
                                                        | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q))) 
                                                            << 9U) 
                                                           | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))) 
                                                              << 5U))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = (((((
                                                   ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 7U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))) 
                                                << 0x00000010U) 
                                               | (((((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           >> 6U)) 
                                                       | (0x000001ffU 
                                                          == 
                                                          (0x000001ffU 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 5U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 4U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 3U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                            >> 2U)) 
                                                        | (0x000001ffU 
                                                           == 
                                                           (0x000001ffU 
                                                            & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 1U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                               << 1U)) 
                                                           | (0x000001ffU 
                                                              == 
                                                              (0x000001ffU 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = (0x0000000fU 
                                               & ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 4U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 5U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 6U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 7U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                             >> 0x0000000cU))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                     >> 0x0000000cU))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                   >> 0x0000000cU))) 
                     << 2U) | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                              >> 0x0000000cU))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart1.uart_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                    >> 0x0000000cU)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_core.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we)) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                   | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we)) 
                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_hb1c522f8_1_4;
    __VdfgRegularize_hb1c522f8_1_4 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__6__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__6__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__6__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__6__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__6__payload;
    __Vfunc_extract_d2h_rsp_intg__6__payload = 0;
    CData/*0:0*/ __Vdly__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__break_st_q = 0;
    IData/*16:0*/ __Vdly__uart_core__DOT__nco_sum_q;
    __Vdly__uart_core__DOT__nco_sum_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__uart_core__DOT__break_st_q = vlSelfRef.__PVT__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__nco_sum_q = vlSelfRef.__PVT__uart_core__DOT__nco_sum_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__break_st_q) {
            if (vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) {
                __Vdly__uart_core__DOT__break_st_q = 0U;
            }
        } else if (vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i) {
            __Vdly__uart_core__DOT__break_st_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:126: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart2.uart_core: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/uart_core.sv", 126, "");
                }
            }
        }
    } else {
        __Vdly__uart_core__DOT__break_st_q = 0U;
    }
    vlSelfRef.__PVT__lsio_trigger_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
                                           | (IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark)));
    vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__wdata_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                             && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                                 && (0x0000000fU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we))))));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q) 
              & (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1));
    vlSelfRef.intr_tx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)));
    vlSelfRef.intr_tx_empty_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                 && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d) 
                                     & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q)));
    vlSelfRef.intr_rx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q)));
    vlSelfRef.intr_tx_done_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                    & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q)));
    vlSelfRef.intr_rx_overflow_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                        & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q)));
    vlSelfRef.intr_rx_frame_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q)));
    vlSelfRef.intr_rx_break_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q)));
    vlSelfRef.intr_rx_timeout_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                       & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q)));
    vlSelfRef.intr_rx_parity_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                      && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                          & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q)));
    vlSelfRef.__PVT__uart_core__DOT__tx_out_q = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                 || ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)
                                                      ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q)
                                                      : 
                                                     ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                      || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__rx_val_q 
                = ((0x0000fffeU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q) 
                                   << 1U)) | (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) 
             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q))) {
            __Vdly__uart_core__DOT__nco_sum_q = (0x0001ffffU 
                                                 & ((0x0000ffffU 
                                                     & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q) 
                                                    + 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                        >> 0x0000000eU))));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            = vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q 
            = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d;
        if (((IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                                   << 4U) | (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                    = (0x00ffffffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x0000001fU);
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
            }
        }
        if ((0x000001ffU == (0x000001ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) {
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 8U));
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 1U));
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
            vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q 
                = vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x00000010U);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q 
                    = (3U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 8U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 7U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 6U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 4U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)
                    ? (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)
                    : 0U);
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 8U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 2U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 3U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 4U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 5U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 6U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 7U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__uart_core__DOT__rx_val_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__nco_sum_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q = 0x07ffU;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__err_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__break_st_q = __Vdly__uart_core__DOT__break_st_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__nco_sum_q = __Vdly__uart_core__DOT__nco_sum_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
            = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                               >> 1U))) 
                  ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)));
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 2U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x00000020U : (0x0000003fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 5U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 5U)))
                                             ? ((0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x20U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
                  | (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i)))))
            ? 0U : (0x0000001fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q) 
                                   + ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i) 
                                      & (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
              & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i))));
    vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh 
        = ((6U < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
            ? 0x0000007fU : ((6U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                              ? 0x0000003eU : (0x0000007fU 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))));
    vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh));
    vlSelfRef.__VdfgRegularize_hb1c522f8_1_2 = (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                                                 << 0x00000010U) 
                                                | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d 
        = ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o)) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh 
        = ((4U <= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
            ? 0x00000010U : (0x0000003fU & ((IData)(1U) 
                                            << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))));
    vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
           < (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i)
                ? 0U : (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                         != (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o))
                                  ? 0U : (0x00ffffffU 
                                          & (vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
                                             + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
            : 0U);
    vlSelfRef.__PVT__uart_core__DOT__rx_sync = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[2U]);
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    __Vfunc_extract_d2h_rsp_intg__6__tl[0U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__6__tl[1U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__6__tl[2U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__6__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__6__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__6__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__6__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__6__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__6__Vfuncout = __Vfunc_extract_d2h_rsp_intg__6__payload;
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__6__Vfuncout;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
        } else if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q)
            ? (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q)
            : ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q)
                   ? (((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync) 
                       & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                          | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2))) 
                      | ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2)))
                   : (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1194 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(__VdfgRegularize_hb1c522f8_1_4)))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                    & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)) 
                   || (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))
                    ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                           - (IData)(1U))));
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                           == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                                ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) 
                        << 0x0000000aU) | (0x000003ffU 
                                           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U)));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_44__q))));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = 0U;
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1ff8U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((8U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 2U) 
                                                | (((4U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1fc7U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x14U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 5U) 
                                                | (((0x10U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1e3fU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 8U) 
                                                | (((0x1cU 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x11ffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x2cU 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000000bU) 
                                                | (((0x28U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x0000000aU) 
                                                   | ((0x24U 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 9U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0fffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | ((0x30U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 0x0000000cU));
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
            ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000017U)) : 0xffffffffU);
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_reg_top.sv:1784: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart2.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_reg_top.sv", 1784, "");
            }
        }
    }
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__3(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__7__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__7__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__7__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__7__Vfuncout));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__4(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x00ffU & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                       << 8U) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                    << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                      << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q))) 
                                 << 4U)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x0000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x00000010U));
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle)) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o))))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d) 
                       << 5U) | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                 << 4U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((0x00000040U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                       ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)
                           ? 0U : (0x000000ffU & ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x000001ffU 
                                                       & VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                  | (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x0000000fU 
                                                      & (VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x00000200U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x000000ffU & (IData)(((QData)((IData)(
                                                         (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
                                                           << 0x00000018U) 
                                                          | vlSelfRef.__VdfgRegularize_hb1c522f8_1_2))) 
                                         >> 0x00000018U))));
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x00ff0000U & vlSelfRef.__VdfgRegularize_hb1c522f8_1_2));
    } else if ((0x00000400U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x00000800U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    } else if ((0x00001000U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x0000001fU));
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001bU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 8U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (~ 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        << 9U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x00000017U)))))) 
                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                   >> 1U) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U)))))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                      >> 2U) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & (~ 
                                                            ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000017U)))))) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                         >> 3U) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 9U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000017U)))))) 
                                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                            >> 4U) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000017U)))))) 
                                                          | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                               >> 5U) 
                                                              & (0U 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000017U)))))) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                  >> 6U) 
                                                                 & (0U 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000017U)))))) 
                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                     >> 7U) 
                                                                    & (0U 
                                                                       != 
                                                                       (1U 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 9U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000017U)))))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                        >> 8U) 
                                                                       & (0U 
                                                                          != 
                                                                          (1U 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                           >> 9U) 
                                                                          & (0U 
                                                                             != 
                                                                             (7U 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                              >> 0x0000000aU) 
                                                                             & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000bU) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit))) 
                                             & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o));
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 5U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re = 
        (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
          >> 6U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000cU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
            << 0x0000000cU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                                                                << 2U))) 
                                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 4U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 5U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 6U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 7U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 3U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 2U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
              & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                              << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                  << 0x0000003dU) 
                                                 | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                     << 0x0000003bU) 
                                                    | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                        << 0x00000039U) 
                                                       | (((QData)((IData)(
                                                                           ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                              << 0x00000010U) 
                                                                             | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                              << 0x0000001cU) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                               << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                   << 0x0000003dU) 
                                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                      << 0x0000003bU) 
                                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                         << 0x00000039U) 
                                                        | (((QData)((IData)(
                                                                            ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                               << 0x00000010U) 
                                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                               << 0x0000001cU) 
                                                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))) 
                             >> 0x00000020U));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = __Vtemp_1[0U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = __Vtemp_1[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0xffffffe0U 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                     << 1U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0x0000001fU 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (0xffffffe0U 
                                                  & ((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                                      << 0x0000001eU) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                         << 0x0000000eU) 
                                                        | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q))) 
                                                            << 9U) 
                                                           | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))) 
                                                              << 5U))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = (((((
                                                   ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 7U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))) 
                                                << 0x00000010U) 
                                               | (((((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           >> 6U)) 
                                                       | (0x000001ffU 
                                                          == 
                                                          (0x000001ffU 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 5U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 4U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 3U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                            >> 2U)) 
                                                        | (0x000001ffU 
                                                           == 
                                                           (0x000001ffU 
                                                            & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 1U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                               << 1U)) 
                                                           | (0x000001ffU 
                                                              == 
                                                              (0x000001ffU 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = (0x0000000fU 
                                               & ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 4U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 5U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 6U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 7U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                             >> 0x0000000cU))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                     >> 0x0000000cU))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                   >> 0x0000000cU))) 
                     << 2U) | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                              >> 0x0000000cU))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart2.uart_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                    >> 0x0000000cU)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_core.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we)) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                   | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we)) 
                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_hb1c522f8_1_4;
    __VdfgRegularize_hb1c522f8_1_4 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__9__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__9__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__9__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__payload;
    __Vfunc_extract_d2h_rsp_intg__9__payload = 0;
    CData/*0:0*/ __Vdly__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__break_st_q = 0;
    IData/*16:0*/ __Vdly__uart_core__DOT__nco_sum_q;
    __Vdly__uart_core__DOT__nco_sum_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*5:0*/ __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__uart_core__DOT__break_st_q = vlSelfRef.__PVT__uart_core__DOT__break_st_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__uart_core__DOT__nco_sum_q = vlSelfRef.__PVT__uart_core__DOT__nco_sum_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__break_st_q) {
            if (vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) {
                __Vdly__uart_core__DOT__break_st_q = 0U;
            }
        } else if (vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i) {
            __Vdly__uart_core__DOT__break_st_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:126: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart3.uart_core: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/uart_core.sv", 126, "");
                }
            }
        }
    } else {
        __Vdly__uart_core__DOT__break_st_q = 0U;
    }
    vlSelfRef.__PVT__lsio_trigger_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
                                           | (IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark)));
    vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__wdata_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                             && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                                 && (0x0000000fU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we))))));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q) 
              & (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1));
    vlSelfRef.intr_tx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)));
    vlSelfRef.intr_tx_empty_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                 && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d) 
                                     & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q)));
    vlSelfRef.intr_rx_watermark_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q)));
    vlSelfRef.intr_tx_done_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                    & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q)));
    vlSelfRef.intr_rx_overflow_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                        & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q)));
    vlSelfRef.intr_rx_frame_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q)));
    vlSelfRef.intr_rx_break_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                     && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                         & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q)));
    vlSelfRef.intr_rx_timeout_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                       & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q)));
    vlSelfRef.intr_rx_parity_err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                      && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                          & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q)));
    vlSelfRef.__PVT__uart_core__DOT__tx_out_q = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                 || ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)
                                                      ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q)
                                                      : 
                                                     ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                      || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__rx_val_q 
                = ((0x0000fffeU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q) 
                                   << 1U)) | (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i) {
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000020U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 5U));
            } else if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) 
             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q))) {
            __Vdly__uart_core__DOT__nco_sum_q = (0x0001ffffU 
                                                 & ((0x0000ffffU 
                                                     & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q) 
                                                    + 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                        >> 0x0000000eU))));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            = vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q 
            = vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d;
        if (((IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                                   << 4U) | (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q 
                    = (7U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                    = (0x00ffffffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x0000001fU);
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
            }
        }
        if ((0x000001ffU == (0x000001ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) {
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 8U));
            vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 1U));
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
            vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q 
                = vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q 
                    = (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                       >> 0x00000010U);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q 
                    = (3U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 8U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 2U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 7U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 6U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 5U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q 
                    = (1U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 1U));
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q 
                    = (1U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 4U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)
                    ? (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)
                    : 0U);
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 8U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 2U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 3U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 4U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 5U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 6U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 7U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o);
            vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                      >> 1U));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__uart_core__DOT__rx_val_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__uart_core__DOT__nco_sum_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q = 0x07ffU;
        vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__err_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__break_st_q = __Vdly__uart_core__DOT__break_st_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__uart_core__DOT__nco_sum_q = __Vdly__uart_core__DOT__nco_sum_q;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
    vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1 = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                   || (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
            = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                               >> 1U))) 
                  ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)));
    } else {
        vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 2U));
        vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i = 0U;
    }
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x00000020U : (0x0000003fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 5U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 5U)))
                                             ? ((0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x20U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_hb1c522f8_1_4))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
                  | (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i)))))
            ? 0U : (0x0000001fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_q) 
                                   + ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i) 
                                      & (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i)) 
              & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i))));
    vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh 
        = ((6U < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
            ? 0x0000007fU : ((6U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                              ? 0x0000003eU : (0x0000007fU 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))));
    vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_watermark_thresh));
    vlSelfRef.__VdfgRegularize_hb1c522f8_1_2 = (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                                                 << 0x00000010U) 
                                                | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d 
        = ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o)) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh 
        = ((4U <= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
            ? 0x00000010U : (0x0000003fU & ((IData)(1U) 
                                            << (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))));
    vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
           < (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_watermark_thresh));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i)
                ? 0U : (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o) 
                         != (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o))
                                  ? 0U : (0x00ffffffU 
                                          & (vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
                                             + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
            : 0U);
    vlSelfRef.__PVT__uart_core__DOT__rx_sync = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[2U]);
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    __Vfunc_extract_d2h_rsp_intg__9__tl[0U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__9__tl[1U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__9__tl[2U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__9__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__9__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__9__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__9__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__9__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__9__Vfuncout = __Vfunc_extract_d2h_rsp_intg__9__payload;
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__9__Vfuncout;
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
        } else if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
    vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q)
            ? (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q)
            : ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q)
                   ? (((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync) 
                       & ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                          | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2))) 
                      | ((IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q1) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync_q2)))
                   : (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_sync))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1195 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(__VdfgRegularize_hb1c522f8_1_4)))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x00010000U & vlSelfRef.__PVT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        } else {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                    & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx)) 
                   || (1U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))
                    ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                           - (IData)(1U))));
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                           == ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                                ? 0x0bU : 0x0aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx))))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx) 
                        << 0x0000000aU) | (0x000003ffU 
                                           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U)));
            }
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
}

void Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_45__q))));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = 0U;
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1ff8U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((8U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 2U) 
                                                | (((4U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1fc7U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x14U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 5U) 
                                                | (((0x10U 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x1e3fU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 8U) 
                                                | (((0x1cU 
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
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x11ffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x2cU 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000000bU) 
                                                | (((0x28U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x0000000aU) 
                                                   | ((0x24U 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 9U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0fffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | ((0x30U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 0x0000000cU));
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
            ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000017U)) : 0xffffffffU);
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_reg_top.sv:1784: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart3.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_reg_top.sv", 1784, "");
            }
        }
    }
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__3(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout));
}

void Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__4(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x00ffU & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                       << 8U) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                    << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                      << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q))) 
                                 << 4U)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x0000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x00000010U));
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                         & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle)) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o))))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d) 
                       << 5U) | ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                 << 4U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((0x00000040U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                       ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)
                           ? 0U : (0x000000ffU & ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x000001ffU 
                                                       & VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                  | (vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x0000000fU 
                                                      & (VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x00000200U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x000000ffU & (IData)(((QData)((IData)(
                                                         (((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o) 
                                                           << 0x00000018U) 
                                                          | vlSelfRef.__VdfgRegularize_hb1c522f8_1_2))) 
                                         >> 0x00000018U))));
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (0x00ff0000U & vlSelfRef.__VdfgRegularize_hb1c522f8_1_2));
    } else if ((0x00000400U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x00000800U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.__PVT__uart_core__DOT__rx_val_q));
    } else if ((0x00001000U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x0000001fU));
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001bU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 8U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (~ 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        << 9U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x00000017U)))))) 
                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                   >> 1U) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U)))))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                      >> 2U) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & (~ 
                                                            ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000017U)))))) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                         >> 3U) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 9U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000017U)))))) 
                                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                            >> 4U) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000017U)))))) 
                                                          | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                               >> 5U) 
                                                              & (0U 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000017U)))))) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                  >> 6U) 
                                                                 & (0U 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000017U)))))) 
                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                     >> 7U) 
                                                                    & (0U 
                                                                       != 
                                                                       (1U 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 9U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000017U)))))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                        >> 8U) 
                                                                       & (0U 
                                                                          != 
                                                                          (1U 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                           >> 9U) 
                                                                          & (0U 
                                                                             != 
                                                                             (7U 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                              >> 0x0000000aU) 
                                                                             & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000bU) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                                >> 0x0000000cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit))) 
                                             & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o));
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 5U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re = 
        (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
          >> 6U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000cU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
            << 0x0000000cU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                                                                << 2U))) 
                                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 4U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 5U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 6U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 7U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 3U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 2U) & (0x000001ffU == (0x000001ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d) 
              & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                              << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                  << 0x0000003dU) 
                                                 | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                     << 0x0000003bU) 
                                                    | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                        << 0x00000039U) 
                                                       | (((QData)((IData)(
                                                                           ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                              << 0x00000010U) 
                                                                             | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                              << 0x0000001cU) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                               << 0x0000003fU) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                   << 0x0000003dU) 
                                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                      << 0x0000003bU) 
                                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re)) 
                                                         << 0x00000039U) 
                                                        | (((QData)((IData)(
                                                                            ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                                                                               << 0x00000010U) 
                                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 8U)) 
                                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__wdata_qe) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))) 
                                                                               << 0x0000001cU) 
                                                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x0000001bU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x0000001aU)) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x00000018U) 
                                                                                | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))) 
                             >> 0x00000020U));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = __Vtemp_1[0U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = __Vtemp_1[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0xffffffe0U 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__re) 
                                                     << 1U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = ((0x0000001fU 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U]) 
                                               | (0xffffffe0U 
                                                  & ((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                                      << 0x0000001eU) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                         << 0x0000000eU) 
                                                        | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q))) 
                                                            << 9U) 
                                                           | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q))) 
                                                              << 5U))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = (((((
                                                   ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_done__q))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 7U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))) 
                                                << 0x00000010U) 
                                               | (((((((2U 
                                                        & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                           >> 6U)) 
                                                       | (0x000001ffU 
                                                          == 
                                                          (0x000001ffU 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 5U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                             >> 4U)) 
                                                         | (0x000001ffU 
                                                            == 
                                                            (0x000001ffU 
                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 3U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                            >> 2U)) 
                                                        | (0x000001ffU 
                                                           == 
                                                           (0x000001ffU 
                                                            & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 1U)) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                                          | (0x000001ffU 
                                                             == 
                                                             (0x000001ffU 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                               << 1U)) 
                                                           | (0x000001ffU 
                                                              == 
                                                              (0x000001ffU 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = (0x0000000fU 
                                               & ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 4U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 5U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 6U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 7U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                             >> 0x0000000cU))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                     >> 0x0000000cU))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                   >> 0x0000000cU))) 
                     << 2U) | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                              >> 0x0000000cU))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                                    >> 0x0000000cU))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart3.uart_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] 
                                    >> 0x0000000cU)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/uart_core.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we)) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                   | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we)) 
                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_txen__DOT__we))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
}
