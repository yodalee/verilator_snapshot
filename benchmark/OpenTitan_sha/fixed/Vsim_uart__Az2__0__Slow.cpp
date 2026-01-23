// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__0(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__0\n"); );
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
    // Body
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
        = (0x000000ffU & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                           ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U) : ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                        >> 2U)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
              & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U))) 
                 ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_42__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
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
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x00000400U | (0x000003ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                                 >> 1U)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x07ffU;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1381[2U]);
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
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
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
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

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__0(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__0\n"); );
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
    // Body
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
        = (0x000000ffU & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                           ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U) : ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                        >> 2U)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
              & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U))) 
                 ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_43__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
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
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x00000400U | (0x000003ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                                 >> 1U)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x07ffU;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1382[2U]);
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
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
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
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

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__0(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__0\n"); );
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
    // Body
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
        = (0x000000ffU & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                           ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U) : ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                        >> 2U)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
              & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U))) 
                 ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_44__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
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
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x00000400U | (0x000003ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                                 >> 1U)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x07ffU;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1383[2U]);
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
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
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__7__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__7__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__7__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__7__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
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

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__0(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__0\n"); );
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
    // Body
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 5U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i 
        = ((vlSelfRef.__PVT__uart_core__DOT__rx_timeout_count_q 
            == vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i 
        = (0x000000ffU & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                           ? ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                              >> 1U) : ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                        >> 2U)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
           & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
              & (VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U))) 
                 ^ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i 
        = ((~ ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    __VdfgRegularize_hb1c522f8_1_4 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_45__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__idle) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
              & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q)));
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
    vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.__PVT__uart_core__DOT__allzero_cnt_d))))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)))) {
            if (((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i) {
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0x0bU : 0x0aU);
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
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                                  - (IData)(1U)));
            vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x00000400U | (0x000003ffU & ((IData)(vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                                 >> 1U)));
        }
    } else {
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
        vlSelfRef.__PVT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x07ffU;
    }
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__d)) 
           & ((~ (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i)));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1384[2U]);
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
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
    vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
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
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__1(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
}

VL_ATTR_COLD void Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__2(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6;
    u_reg__DOT____VdfgRegularize_hddfe4fb5_0_6 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
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

VL_ATTR_COLD void Vsim_uart__Az2___ctor_var_reset(Vsim_uart__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_uart__Az2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_i, __VscopeHash, 717864233454436411ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_o, __VscopeHash, 14475261017617439938ull);
    vlSelf->alert_rx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3626835617410658616ull);
    vlSelf->alert_tx_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 268840600036833065ull);
    vlSelf->racl_policies_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14577879055449831761ull);
    vlSelf->__PVT__racl_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11975622516046977850ull);
    vlSelf->__PVT__racl_error_log_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3784173351313067546ull);
    vlSelf->__PVT__lsio_trigger_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12654747598178506109ull);
    vlSelf->cio_rx_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6361501114271837893ull);
    vlSelf->cio_tx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334507255843534768ull);
    vlSelf->__PVT__cio_tx_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17780187753443258027ull);
    vlSelf->intr_tx_watermark_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 627001387104855055ull);
    vlSelf->intr_tx_empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5604173672750472852ull);
    vlSelf->intr_rx_watermark_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9386838191969312389ull);
    vlSelf->intr_tx_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582972025707309650ull);
    vlSelf->intr_rx_overflow_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6370394678975190161ull);
    vlSelf->intr_rx_frame_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17918497224168265995ull);
    vlSelf->intr_rx_break_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10793899859757651421ull);
    vlSelf->intr_rx_timeout_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2106494788358851320ull);
    vlSelf->intr_rx_parity_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7509143130048218603ull);
    VL_SCOPED_RAND_RESET_W(132, vlSelf->__PVT__u_reg__DOT__reg2hw, __VscopeHash, 4901883775917663627ull);
    vlSelf->__PVT__u_reg__DOT__addrmiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15052309411488334690ull);
    vlSelf->__PVT__u_reg__DOT__wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18226200909601097533ull);
    vlSelf->__PVT__u_reg__DOT__reg_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10790086751881178366ull);
    vlSelf->__PVT__u_reg__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17619690520985733277ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837086522921796601ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10169578553655198781ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_tx_done__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12837501499582051087ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12681227186756069811ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8212151355700705273ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13773953781805914611ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10919267806221185400ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5583136840354229210ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_tx_empty__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16051043772822460204ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15301790381854618161ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4419912856309509131ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12128445511751629871ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12436660529167621109ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10383620592428660835ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 463500542418263566ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7804735329365871216ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6556946172105896273ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13356526107960310379ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_tx__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8639255609835788912ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_rx__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14376332902495693313ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_nf__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3286637499433913151ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_slpbk__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2584494821661448993ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_llpbk__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3937539311549068414ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_parity_en__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18306997474028808762ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16329106985628588655ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14843553484075497793ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_nco__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13878968200655401102ull);
    vlSelf->__PVT__u_reg__DOT__wdata_qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6212334455702640103ull);
    vlSelf->u_reg__DOT____Vcellout__u_wdata__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11638443216915752074ull);
    vlSelf->__PVT__u_reg__DOT__fifo_ctrl_qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13651276377824229930ull);
    vlSelf->u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3756157905690839421ull);
    vlSelf->u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11317530219544898553ull);
    vlSelf->u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14457072327947519216ull);
    vlSelf->u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17882776810710596855ull);
    vlSelf->u_reg__DOT____Vcellout__u_ovrd_txen__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5759456880469599302ull);
    vlSelf->u_reg__DOT____Vcellout__u_ovrd_txval__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4785581882172935346ull);
    vlSelf->u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12150599096623106487ull);
    vlSelf->u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 76383919749695070ull);
    vlSelf->__PVT__u_reg__DOT__addr_hit = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1707141598254270963ull);
    vlSelf->__PVT__u_reg__DOT__racl_addr_hit_read = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8585413848809972901ull);
    vlSelf->__PVT__u_reg__DOT__racl_addr_hit_write = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12687896850897655739ull);
    vlSelf->u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7300518105079694542ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11574266446475270332ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1423414613907967664ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483838778198507855ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5942539646428459931ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4970040817793820892ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950979359641051072ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17281764125264654366ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18083639633372268256ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16665274587453694460ull);
    vlSelf->__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4611914375097554809ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__re_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15642637549703451738ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4679568390029364162ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10974426428907933461ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6329736833134573906ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3696429526636382585ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1706730600893819760ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__d_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6163554174737916675ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18377078999914101879ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16982600420356756588ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12983886618155008317ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4107619224408584717ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11007983825990299790ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16507440504144729486ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12414235150457437157ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4298417715922207639ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567638118188061591ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i, __VscopeHash, 15425443102609809344ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 315523649717972342ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16805505720075257474ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3844348897485923015ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6855653245287192864ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18292299831124277337ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16016095270252080845ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13987941716916112623ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13729422208382822901ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15490792813024682127ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13319678891502441739ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17763528631982047652ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10340304918391120739ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15895005894281238286ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8968551812324757040ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11496611593291456461ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14253202843359417801ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7802722056416090834ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4235318762250337456ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8255129536498114162ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1597434054114156964ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12387847855665894192ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7632699688447867406ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2703658203172566457ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7731274989388406809ull);
    vlSelf->__PVT__u_reg__DOT__u_alert_test__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16436641583869444746ull);
    vlSelf->__PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2080168424255666526ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txempty__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5084008880370391204ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxempty__DOT__re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1261656042471653162ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxempty__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5664202692418118404ull);
    vlSelf->__PVT__u_reg__DOT__u_rdata__DOT__re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4588638478105854396ull);
    vlSelf->__PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13681831999458416566ull);
    vlSelf->__PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8354675191984062592ull);
    vlSelf->__PVT__u_reg__DOT__u_ovrd_txen__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3493275493834509632ull);
    vlSelf->__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15584619885065844921ull);
    vlSelf->__PVT__uart_core__DOT__rx_val_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11997562697440573985ull);
    vlSelf->__PVT__uart_core__DOT__rx_fifo_depth_prev_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5533989513545849468ull);
    vlSelf->__PVT__uart_core__DOT__rx_timeout_count_d = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6296485882435509654ull);
    vlSelf->__PVT__uart_core__DOT__rx_timeout_count_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3549570215350352451ull);
    vlSelf->__PVT__uart_core__DOT__tx_out_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14760207750623929546ull);
    vlSelf->__PVT__uart_core__DOT__rx_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5359712337251162896ull);
    vlSelf->__PVT__uart_core__DOT__allzero_cnt_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14051142591211706364ull);
    vlSelf->__PVT__uart_core__DOT__allzero_cnt_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2168688016700089144ull);
    vlSelf->__PVT__uart_core__DOT__event_tx_watermark = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9893802758881709991ull);
    vlSelf->__PVT__uart_core__DOT__event_rx_watermark = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11491404170101022877ull);
    vlSelf->__PVT__uart_core__DOT__tx_uart_idle_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7408089301676946355ull);
    vlSelf->__PVT__uart_core__DOT__break_st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4758474423839185358ull);
    vlSelf->__PVT__uart_core__DOT__nco_sum_q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17584325219569960103ull);
    vlSelf->__PVT__uart_core__DOT__rx_sync_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10879633543954239805ull);
    vlSelf->__PVT__uart_core__DOT__rx_sync_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483591805349707419ull);
    vlSelf->__PVT__uart_core__DOT__tx_watermark_thresh = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16005578957455571848ull);
    vlSelf->__PVT__uart_core__DOT__rx_watermark_thresh = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6298516821877748510ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2027796596154112913ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 571013024846161409ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7291112825780948491ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9578502290896894936ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8050347987999675845ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4401003534093595379ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 700671607535248522ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8701660588774107531ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 10121123259122769060ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7209401143389016224ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17272697893886064843ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11500046903530222853ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5577515066543492519ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15473219115302454314ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12765170033897411049ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7140252132371499755ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18376464251625361110ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__baud_div_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13318278706128367626ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14461048810445429695ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13351111655119118875ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2808501423084790071ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__sreg_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12310462909614607304ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__sreg_d = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10567329440102654662ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__tx_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17316483643179618325ull);
    vlSelf->__PVT__uart_core__DOT__uart_tx__DOT__tx_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9244157198676386057ull);
    vlSelf->__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971292878945770658ull);
    vlSelf->__PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15472755562108881435ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6901293448339767526ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13009367372666736273ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__sreg_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13186466941799448750ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__sreg_d = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4908244643712072468ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6790153926756089483ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16316736784021840535ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__baud_div_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 584734920737728957ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__baud_div_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11507526712276559713ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8315395394276272047ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8787397209850637519ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__idle_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2368983648260376937ull);
    vlSelf->__PVT__uart_core__DOT__uart_rx__DOT__idle_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8369139126090036138ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17768953976184269238ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1484941185057991143ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8030897155168918964ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1358043265886212656ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4506940284341799538ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 956436862494006424ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7748415154375581162ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5424981669510133235ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17210561666352680127ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 16331938263506904847ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2928426513260178983ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9612454271759196287ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14772976981943780450ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14036372421517132297ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14052241367151868075ull);
    vlSelf->__PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16051769027016820969ull);
    vlSelf->__PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7906782512606527178ull);
    vlSelf->__PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15581974055064212652ull);
    vlSelf->__PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17240056190284672950ull);
    vlSelf->__PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13256731917335642533ull);
    vlSelf->__PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3125787072637203004ull);
    vlSelf->__PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3991386053199162720ull);
    vlSelf->__PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765585885202891680ull);
    vlSelf->__VdfgRegularize_hb1c522f8_1_2 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13432450311164497042ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628151262156786870ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6497513165002300816ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__4__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 703434038796944005ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__4__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10443713945620973568ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__7__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7569868130054017914ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__7__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17903009249238741777ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__10__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8254159213477385893ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__10__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15959678897842229011ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1192 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8997187535087721046ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1193 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1645753198717839591ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1194 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8374156082938727095ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1195 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17413446670999505180ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1381, __VscopeHash, 9333376507096233667ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1382, __VscopeHash, 13564016171423214985ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1383, __VscopeHash, 8097027346945797345ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1384, __VscopeHash, 3584470672531494608ull);
}
