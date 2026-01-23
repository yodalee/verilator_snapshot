// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__0(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*7:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0;
    // Body
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni))) 
           || ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid) 
               | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q)
                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q) 
                & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))) 
               || ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending))) 
                   && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)));
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)))) {
        vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__intg_error_q = 0U;
    }
    vlSelfRef.__PVT__lsio_trigger_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                       && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d) 
                                           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0x40U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0x49U <= (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__missed_err_gnt_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i) 
               & ((~ (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)) 
                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                     [1U][3U] >> 0x0000000cU))));
    vlSelfRef.intr_spi_event_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                  && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d) 
                                      & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q)));
    vlSelfRef.intr_error_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                              && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                  & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni))) 
           || (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
               & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming) 
                   & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q) 
                      >> 8U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni))) 
           || (((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                         ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d
                         : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i) 
                   & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o))) 
               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q;
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
                   | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        } else {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
            vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000080U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 7U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000080U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 7U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (4U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                             << 2U));
            } else if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (4U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                             << 2U));
            } else if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q 
            = vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d;
        if (vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack) {
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__we_o) 
                   | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal));
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__we_o) 
                     | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req))
                    ? 0xffffffffU : ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                      ? 0U : (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                               & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i))
                                               ? vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                               : ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x000007ffU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))))) 
                                                  | (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x0000003fU 
                                                      & (VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U)))))));
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q 
                = (0x000000ffU & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [0U][3U] << 4U) 
                                  | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [0U][2U] >> 0x0000001cU)));
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q 
                = (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                         [0U][3U] >> 4U));
        } else if (vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__d_ack) {
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q = 0U;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                    ? (3U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                    : (3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)));
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data;
        }
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q 
            = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)
                ? 4U : (7U & (((1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 2U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 2U)))
                               ? ((3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                  - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                               : (((IData)(4U) - (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                  + (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
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
                = (0x000000ffU & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][3U] << 4U) 
                                  | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][2U] >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                         [2U][3U] >> 4U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if ((3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we)))))) {
            vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                         [2U][0U] >> 0x00000019U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                       [2U][0U] >> 0x00000018U);
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q 
                    = (0x000000ffU & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                       [2U][1U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000015U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000017U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000018U));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000019U));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001aU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001bU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001cU));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] >> 0x0000000cU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] >> 0x00000010U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000018U));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000019U));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001aU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001bU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001cU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001dU));
        }
        if (((IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__u_reg__DOT__err_q = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q = 0U;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q = 0U;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0x7fU;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__err_q = 0U;
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q) {
        vlSelfRef.__PVT__sd_en_core = 0U;
    } else {
        vlSelfRef.__PVT__sd_en_core = (0x0000000fU 
                                       & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q) 
                                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit))
                                           : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                               ? (3U 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q))))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                   ? 
                                                  (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)))
                                                   : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                << 2U) 
                                               | (((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:594: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 594, "");
                }
            }
        }
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000019U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000018U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d;
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][1U] >> 0x00000016U));
        }
    } else {
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
           | (7U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
            ? (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q)
            : (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
        = (0x0000000fffffffffULL & VL_SHIFTR_QQI(36,36,32, vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q, 
                                                 ((IData)(9U) 
                                                  * (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0ULL);
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (3U & ((0x3ffffffeU & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q) 
                                 << 1U)) | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
                                            >> 2U)));
    vlSelfRef.__PVT__event_mask = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                     << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                  << 3U))) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                   << 0x00000039U) 
                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                      << 0x00000031U) 
                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                 >> 0x00000020U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                         << 0x0000001eU));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((2U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                               >> 2U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((1U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.__PVT__fifo_win_d2h[0U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_4 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                                  << 0x0000000bU) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                                     << 0x0000000aU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                                       << 9U))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                                       << 7U) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q) 
                                                          << 6U) 
                                                         | (IData)(vlSelfRef.__PVT__event_mask)))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                      >> 8U)));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_5 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                  << 0x00000010U) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                     << 0x0000000fU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                       << 0x0000000eU))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                    << 0x0000000dU) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q) 
                                                       << 0x0000000cU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i 
        = ((~ (0U != (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4) 
                                     >> 6U)))) & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)) 
              & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i) 
           & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)) 
              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
                 | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)));
}

void Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__1(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h1acac003__0 
            = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wdata_i;
        if ((0x0a1fU >= (0x00000fffU & ((IData)(0x00000024U) 
                                        * (0x0000007fU 
                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) {
            VL_ASSIGNSEL_WQ(2592, 36, (0x00000fffU 
                                       & ((IData)(0x00000024U) 
                                          * (0x0000007fU 
                                             & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))), vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h1acac003__0);
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (0x0000001eU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                              [1U][1U] >> 0x00000017U));
    }
    if (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = ((((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [1U][3U] >> 9U))) ? 1U
                  : 0U) << 0x0000000fU) | (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i) 
                                            << 0x0000000eU) 
                                           | ((0x00003c00U 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][0U] 
                                                  >> 5U)) 
                                              | (0x000003ffU 
                                                 & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][2U] 
                                                       >> 0x0000001cU))))));
    }
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h55a17f9b__0 
            = (((QData)((IData)(((((0x0000000cU & (
                                                   vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][0U] 
                                                   >> 0x00000017U)) 
                                   | ((1U == (3U & 
                                              (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][0U] 
                                               >> 0x0000001bU)))
                                       ? 1U : ((2U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][0U] 
                                                    >> 0x0000001bU)))
                                                ? 2U
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][0U] 
                                                        >> 0x0000001bU)))
                                                    ? 3U
                                                    : 0U)))) 
                                  << 0x00000015U) | 
                                 ((0x001ffffeU & ((
                                                   vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 4U) 
                                                  | (0x0000000eU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][0U] 
                                                        >> 0x0000001cU)))) 
                                  | (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][0U] 
                                           >> 0x00000018U)))))) 
                << 0x00000020U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q) 
                                                       << 0x0000000cU) 
                                                      | ((0x00000ff0U 
                                                          & (vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[3U] 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q) 
                                                                << 1U) 
                                                               | ((1U 
                                                                   > vlSelfRef.u_reg__DOT____Vcellout__u_csid__q) 
                                                                  & vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)))))))));
        if ((0xe3U >= (0x000000ffU & ((IData)(0x00000039U) 
                                      * (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) {
            VL_ASSIGNSEL_WQ(228, 57, (0x000000ffU & 
                                      ((IData)(0x00000039U) 
                                       * (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))), vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h55a17f9b__0);
        }
    }
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(2048, 32, (0x000007ffU & VL_SHIFTL_III(11,32,32, 
                                                               (0x0000003fU 
                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 5U)), vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q);
    }
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__0(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_passthrough_implementation__DOT__pt_sd_out 
        = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addr_swap_en) 
            | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info_payload_swap_en_outclk) 
               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payload_replace_outclk)))
            ? (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addr_swap_en)
                      ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_addr_swap_mask__q 
                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_addr_swap_data__q) 
                         >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addrcnt_outclk))
                      : ((VL_STREAML_III(32, vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_payload_swap_mask__q, 8U) 
                          & VL_STREAML_III(32, vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_payload_swap_data__q, 8U)) 
                         >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payloadcnt_outclk))))
            : 0U);
}

void Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__2(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (4U ^ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000015U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000016U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000017U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q 
                    = (0x0000ffffU & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][1U] << 8U) 
                                      | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                         [2U][0U] >> 0x00000018U)));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] >> 8U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_csid__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we)
                    ? ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                        [2U][1U] << 8U) | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][0U] 
                                           >> 0x00000018U))
                    : 0U);
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d;
    } else {
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_csid__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q = 0U;
    }
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d 
        = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)
                            ? 0x00000048U : (0x0000007fU 
                                             & (((1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 7U)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                 : 
                                                (((IData)(0x48U) 
                                                  - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                 + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d) 
           < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q));
    vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o) 
            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d 
        = ((0U != (((((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d) 
                        << 2U) | (((0U == (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)) 
                                   << 1U) | (0x40U 
                                             <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o))))) 
                   & (IData)(vlSelfRef.__PVT__event_mask))) 
           | (IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q))
            ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)
                     ? (VL_SHIFTL_III(32,32,32, ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)
                                                  ? 0U
                                                  : 
                                                 (0x000000ffU 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q))), 
                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q), 3U)) 
                        | ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q))
                            ? 0U : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q))
                     : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q));
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__1(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en 
        = ((~ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__csb_status_committed) 
           & (2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)));
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h6295770a_0;

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__2(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = 7U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = 0U;
    } else {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
            = ((0xe3U >= (0x000000ffU & ((IData)(0x00000039U) 
                                         * (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                ? (0x01ffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                             (((IData)(0x00000038U) 
                                                               + 
                                                               (0x000000ffU 
                                                                & ((IData)(0x00000039U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                  ? 0x00000020U
                                                  : 
                                                 ((IData)(0x00000040U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000039U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x0000001fU) 
                                                                   + 
                                                                   (0x000000ffU 
                                                                    & ((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (7U 
                                                                   & (((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                : 0ULL);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active 
            = (((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q))
                ? 4U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
                         ? 3U : 2U));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle 
            = ((((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                >> 1U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)) 
                | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                   >> 2U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)) 
                   | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 3U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)) 
                      | (((0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                  >> 0x0000000cU))) 
                          != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q)) 
                         | (((0x0000000fU & (IData)(
                                                    (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                     >> 4U))) 
                             != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q)) 
                            | (((0x0000000fU & (IData)(
                                                       (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                        >> 8U))) 
                                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q)) 
                               | ((0x0000ffffU & (IData)(
                                                         (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                          >> 0x00000010U))) 
                                  != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q))))))))
                ? 6U : 1U);
    }
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           || ((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
               == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val 
                    = (0x0000000fU & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(((0x00008000U != (0x0001c000U 
                                       & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                      | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 0U;
    if ((1U & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)))) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                  | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))) {
                        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                        }
                    }
                } else if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                      | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                     | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))))) {
                    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
            }
        }
    }
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
           & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
              & (0x00008000U == (0x00018000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                            ? 1U : 6U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
                }
            } else if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                    ? ((1U & (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                               | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))
                        ? 2U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                 ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                 : 4U)) : ((1U & ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                                  | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))
                                            ? 3U : 
                                           ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                             : 4U)));
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 3U;
            }
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
        }
    }
    __Vtableidx2 = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d 
        = Vsim__ConstPool__TABLE_h6295770a_0[__Vtableidx2];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
           != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                      ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                            & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                          ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                      & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((1U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 1U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000020U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000010U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 8U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x0000000cU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 4U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000021U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000037U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000035U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 3U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000036U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q));
    }
    vlSelfRef.__PVT__fifo_win_d2h[1U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
            ? 0U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                   : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)
                                       ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)
                                       : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q))
                                           ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                           : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q) 
                                              - (IData)(1U)))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing)
                                   ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                       ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle))
                                           : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle)
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail)))
                                       : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead)
                                                    : 0U)))
                                   : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                       ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q) 
                                               - (IData)(1U))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)) 
               & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d))))) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 7U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 2U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 6U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 4U;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:410: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 410, "");
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  | ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                     & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0;
    }
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
            ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits) 
                                                >> 1U)))
            : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                ? ((0x000000fcU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                   << 2U)) | (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits)))
                : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                    ? ((0x000000f0U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                       << 4U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits))
                    : 0U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d));
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1)
               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting));
    vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4 
        = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
            & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = 0U;
    } else {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                    = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                    = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
            } else {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                    = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                                      - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)));
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                    = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                                      - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)));
            }
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
                = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting)
                          ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit)
                          : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting)
                              ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q) 
                                 - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size))
                              : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
                = (7U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d 
            = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2)
                    : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q)))
                ? 0U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)
                ? ((((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                              ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q
                              : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)) 
                     & (IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)) 
                    << 8U) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted))
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d 
            = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o) 
                               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i))
                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted)
                               : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted)
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q))));
    }
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (3U == (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4) 
              | ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i) 
           | ((~ (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                          >> 8U))) & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i) 
            & (1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data))));
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__3(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i 
        = ((1U == (7U & ((vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[2U] 
                          << 2U) | (vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[1U] 
                                    >> 0x0000001eU))))
            ? ((vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[1U] 
                << 0x00000010U) | (vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[0U] 
                                   >> 0x00000010U))
            : 0U);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h7e888032_0;

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__4(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__0__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__0__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__payload;
    __Vfunc_extract_d2h_rsp_intg__0__payload = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->__VdfgRegularize_h6e95ff9d_0_1388[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->__VdfgRegularize_h6e95ff9d_0_1388[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = ((2U & vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[2U]) 
           | vlSelf->__PVT__u_reg__DOT__u_socket->__VdfgRegularize_h6e95ff9d_0_1388[2U]);
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][0U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][1U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][2U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][3U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][0U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][1U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][2U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][3U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][0U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][1U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][2U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][2U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][3U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][3U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[0U] = vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[1U] = vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[2U] = vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
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
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][3U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][3U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
           [2U][0U]);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__d_ack 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
           [0U][0U]);
    vlSelfRef.__PVT__fifo_win_h2d[0U][0U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.__PVT__fifo_win_h2d[0U][1U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.__PVT__fifo_win_h2d[0U][2U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.__PVT__fifo_win_h2d[0U][3U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][0U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][1U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][2U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][3U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U] >> 0x0000000cU) & (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
           [1U][0U]);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o 
        = ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U] >> 0x0000000cU) & ((0U == (7U 
                                                & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    if ((0x00001000U & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val 
                = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [0U][0U] >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
        = ((0x00001000U & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U]) ? ((((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x0000001bU)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [1U][1U] 
                                                           >> 0x0000001aU)))))) 
                          << 0x00000010U) | ((0x0000ff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [1U][1U] 
                                                                >> 0x00000019U)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [1U][1U] 
                                                                 >> 0x00000018U)))))))
            : 0U);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q)) 
                 & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                    [0U][3U] >> 0x0000000cU)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__5__val 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__5__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__5__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__5__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__5__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout)));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = 0U;
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0ff8U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((8U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 2U) 
                                                | (((4U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x0000003cU 
                                                       & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][2U] 
                                                           << 4U) 
                                                          | (0x0000000cU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001cU))))))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0fc7U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x14U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 5U) 
                                                | (((0x10U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 4U) 
                                                   | ((0x0cU 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001cU))))) 
                                                      << 3U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0e3fU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 8U) 
                                                | (((0x1cU 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 7U) 
                                                   | ((0x18U 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001cU))))) 
                                                      << 6U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x01ffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x34U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 0x0000000bU) 
                                                | (((0x30U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 0x0000000aU) 
                                                   | ((0x2cU 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001cU))))) 
                                                      << 9U))));
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val 
                = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [2U][0U] >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                 & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                    [2U][3U] >> 0x0000000cU)));
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][0U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][1U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][2U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][3U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][3U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][0U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][1U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][2U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][3U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][3U];
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i))
                  : (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((~ (IData)(((0x00008000U == (0x0001c000U 
                                        & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                       & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i)))) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack) 
           & (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [0U][3U] >> 9U))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack) 
           & ((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                            [0U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_be_i = (
                                                   (((0U 
                                                      != 
                                                      (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
                                                       >> 0x00000018U)) 
                                                     << 3U) 
                                                    | ((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
                                                            >> 0x00000010U))) 
                                                       << 2U)) 
                                                   | (((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
                                                            >> 8U))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o))));
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host_reg_top.sv:1927: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_host_reg_top.sv", 1927, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x00ffU & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q)));
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q)));
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffff0000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                       << 8U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x1fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                       << 0x0000001fU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                           << 0x0000001eU) 
                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                             << 0x0000001dU))));
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffe00000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q) 
                        << 0x00000014U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q) 
                                           << 0x00000010U)) 
                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q) 
                          << 8U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xc03fffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__q) 
                                    << 2U)) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q))) 
                       << 0x0000001aU) | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__q) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q))) 
                                          << 0x00000016U)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x3fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q) 
                       << 0x0000001fU) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q) 
                                          << 0x0000001eU)));
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf0000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q) 
                       << 0x00000018U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q) 
                                              << 0x00000010U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x1fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q) 
                       << 0x0000001fU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q) 
                                           << 0x0000001eU) 
                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q) 
                                             << 0x0000001dU))));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = vlSelfRef.u_reg__DOT____Vcellout__u_csid__q;
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x00000100U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                ? (0xfe000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                : ((0x00000200U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                    ? ((0xffffffe0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                           << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                       << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                         << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q)))))
                    : ((0x00000400U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                        ? ((0xffffffc0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                           | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                          << 4U)) | 
                              ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                 << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                   << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q)))))
                        : ((0x00000800U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                            ? ((0xffffffc0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                    << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                              << 4U)) 
                                  | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                       << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                         << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q)))))
                            : 0xffffffffU))));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [2U][3U] >> 9U))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                            [2U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wdata_i 
        = (((QData)((IData)(((0x00001000U & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                              [1U][3U]) ? ((((((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][1U] 
                                                >> 0x0000001bU) 
                                               & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                               ? (0x000000ffU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000010U))
                                               : 0U) 
                                             << 0x00000018U) 
                                            | ((((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][1U] 
                                                  >> 0x0000001aU) 
                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                                 ? 
                                                (0x000000ffU 
                                                 & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 8U))
                                                 : 0U) 
                                               << 0x00000010U)) 
                                           | (((((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][1U] 
                                                  >> 0x00000019U) 
                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                                 ? 
                                                (0x000000ffU 
                                                 & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][1U])
                                                 : 0U) 
                                               << 8U) 
                                              | (((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x00000018U) 
                                                  & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                                  ? 
                                                 (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][0U] 
                                                  >> 0x00000018U)
                                                  : 0U)))
                              : 0U))) << 4U) | (QData)((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_be_i)));
    __Vtableidx1 = vlSelfRef.__PVT__u_data_fifos__DOT__tx_be_i;
    vlSelfRef.__PVT__access_valid = Vsim__ConstPool__TABLE_h7e888032_0
        [__Vtableidx1];
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__5(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hf4aef21c_0_0;
    __VdfgRegularize_hf4aef21c_0_0 = 0;
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_h0fa715ac_0_5;
    u_reg__DOT____VdfgRegularize_h0fa715ac_0_5 = 0;
    // Body
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [0U][1U] >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [0U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [0U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [0U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i 
        = (1U & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [1U][3U] >> 9U))) | 
                 ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__instr_error) 
                  | ((~ (((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [1U][3U] >> 9U))) 
                          | ((1U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [1U][3U] 
                                           >> 9U))) 
                             | (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [1U][3U] 
                                             >> 9U))))) 
                         & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__addr_sz_chk) 
                            & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__mask_chk) 
                               & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 9U))) 
                                  | ((1U == (7U & (
                                                   vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                     | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__fulldata_chk))))))) 
                     | ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__instr_type_err) 
                        | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [2U][1U] >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rd_req));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o 
        = (1U & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                  [1U][3U] >> 0x0000000cU) & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rready_i)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rready_i));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__access_valid)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][1U] 
                                                      << 8U) 
                                                     | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U))))) 
                                               & ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                     >> 1U))) 
                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                   >> 2U) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][1U] 
                                                           << 8U) 
                                                          | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][1U] 
                                                             >> 0x00000018U)))))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                      >> 3U) 
                                                     & (0U 
                                                        != 
                                                        (1U 
                                                         & (~ 
                                                            ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              << 8U) 
                                                             | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x00000018U)))))) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                         >> 4U) 
                                                        & (0U 
                                                           != 
                                                           (0x0000000fU 
                                                            & (~ 
                                                               ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x00000018U)))))) 
                                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                            >> 5U) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & (~ 
                                                                  ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    << 8U) 
                                                                   | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                      [2U][1U] 
                                                                      >> 0x00000018U)))))) 
                                                          | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                               >> 6U) 
                                                              & (0U 
                                                                 != 
                                                                 (0x0000000fU 
                                                                  & (~ 
                                                                     ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [2U][1U] 
                                                                       << 8U) 
                                                                      | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                         [2U][1U] 
                                                                         >> 0x00000018U)))))) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                  >> 7U) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x0000000fU 
                                                                     & (~ 
                                                                        ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                          [2U][1U] 
                                                                          << 8U) 
                                                                         | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                            [2U][1U] 
                                                                            >> 0x00000018U)))))) 
                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                     >> 8U) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x0000000fU 
                                                                        & (~ 
                                                                           ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                             [2U][1U] 
                                                                             << 8U) 
                                                                            | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                               [2U][1U] 
                                                                               >> 0x00000018U)))))) 
                                                                   | ((0U 
                                                                       != 
                                                                       (1U 
                                                                        & (~ 
                                                                           ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                             [2U][1U] 
                                                                             << 8U) 
                                                                            | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                               [2U][1U] 
                                                                               >> 0x00000018U))))) 
                                                                      & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x0e00U 
                                                                                & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit))) 
                                             & (((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i 
        = ((~ ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
               | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de))) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    u_reg__DOT____VdfgRegularize_h0fa715ac_0_5 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x47U == (0x0000007fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x0000000fffffffffULL & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i))
                                                ? vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wdata_i
                                                : (
                                                   (0x0a1fU 
                                                    >= 
                                                    (0x00000fffU 
                                                     & ((IData)(0x00000024U) 
                                                        * 
                                                        (0x0000007fU 
                                                         & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x00000023U) 
                                                                       + 
                                                                       (0x00000fffU 
                                                                        & ((IData)(0x00000024U) 
                                                                           * 
                                                                           (0x0000007fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000024U) 
                                                           * 
                                                           (0x0000007fU 
                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000024U) 
                                                           * 
                                                           (0x0000007fU 
                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000024U) 
                                                             * 
                                                             (0x0000007fU 
                                                              & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x00000fffU 
                                                                            & ((IData)(0x00000024U) 
                                                                               * 
                                                                               (0x0000007fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000024U) 
                                                              * 
                                                              (0x0000007fU 
                                                               & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (0x0000007fU 
                                                                           & (((IData)(0x00000024U) 
                                                                               * 
                                                                               (0x0000007fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000024U) 
                                                              * 
                                                              (0x0000007fU 
                                                               & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))))
                                                    : 0ULL))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 9U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000bU) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 6U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we = 
        (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
          >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x00000019U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001aU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001dU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((0U != (0x0000000fU & (- (IData)((0x0000000fU 
                                             == (0x0000000fU 
                                                 & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))))))) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
             << 0x0000000bU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we) 
                                 << 0x0000000aU) | 
                                ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                                 << 9U))) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we) 
                                              << 8U) 
                                             | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
                                                        << 4U) 
                                                       | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we) 
                                                             << 2U))) 
                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d)) 
           & (0U != (0x0000000fU & (- (IData)((0x0000000fU 
                                               == (0x0000000fU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))))))));
    __VdfgRegularize_hf4aef21c_0_0 = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d) 
                                      & (0U != (0x0000000fU 
                                                & (- (IData)(
                                                             (0x0000000fU 
                                                              == 
                                                              (0x0000000fU 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))))))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U] = 
        ((0xff800000U & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U]) 
         | ((((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
              << 0x00000016U) | (0x00300000U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][0U] 
                                                >> 5U))) 
            | (((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
                << 0x00000013U) | ((0x00040000U & (
                                                   vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][0U] 
                                                   >> 6U)) 
                                   | (((0x0000000fU 
                                        == (0x0000000fU 
                                            & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
                                       << 0x00000011U) 
                                      | vlSelfRef.__VdfgRegularize_hf4aef21c_1_5)))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U] = 
        ((0xfc7fffffU & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U]) 
         | (0xff800000U & (((0x0000000fU == (0x0000000fU 
                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
                            << 0x00000019U) | (0x01800000U 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][0U] 
                                                  >> 4U)))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U] = 
        ((0x03ffffffU & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U]) 
         | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                      << 0x00000014U) | (QData)((IData)(
                                                        (0x000fffffU 
                                                         & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][1U] 
                                                             << 3U) 
                                                            | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][0U] 
                                                               >> 0x0000001dU))))))) 
            << 0x0000001aU));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[1U] = 
        (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                    << 0x00000014U) | (QData)((IData)(
                                                      (0x000fffffU 
                                                       & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][1U] 
                                                           << 3U) 
                                                          | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][0U] 
                                                             >> 0x0000001dU))))))) 
          >> 6U) | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                               << 0x00000014U) | (QData)((IData)(
                                                                 (0x000fffffU 
                                                                  & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                      [2U][1U] 
                                                                      << 3U) 
                                                                     | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                        [2U][0U] 
                                                                        >> 0x0000001dU)))))) 
                             >> 0x00000020U)) << 0x0000001aU));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U] = 
        ((0xffffc000U & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U]) 
         | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                       << 0x00000014U) | (QData)((IData)(
                                                         (0x000fffffU 
                                                          & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              << 3U) 
                                                             | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][0U] 
                                                                >> 0x0000001dU)))))) 
                     >> 0x00000020U)) >> 6U));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U] = 
        ((0x00003fffU & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U]) 
         | (0xffffc000U & (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q) 
                            << 0x0000001eU) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q) 
                                               << 0x0000000eU))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[3U] = 
        (0x000003ffU & ((0x00003fc0U & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q) 
                                        << 6U)) | (
                                                   (0x00003ffcU 
                                                    & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q) 
                                                       << 2U)) 
                                                   | ((0x00003fffU 
                                                       & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q) 
                                                          >> 2U)) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q) 
                                                         >> 0x00000012U)))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x47U == (0x0000007fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q))
            ? 0ULL : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data)
                       ? (((QData)((IData)(((((0x00000100U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                           >> 3U)) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                            >> 0x0000001cU)))) 
                                             << 9U) 
                                            | ((0x00000100U 
                                                & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                            >> 2U)) 
                                                   << 8U)) 
                                               | (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                             >> 0x00000014U))))))) 
                           << 0x00000012U) | (QData)((IData)(
                                                             ((((0x00000100U 
                                                                 & ((IData)(
                                                                            (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                                             >> 1U)) 
                                                                    << 8U)) 
                                                                | (0x000000ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                                              >> 0x0000000cU)))) 
                                                               << 9U) 
                                                              | ((0x00000100U 
                                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o) 
                                                                     << 8U)) 
                                                                 | (0x000000ffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                                               >> 4U))))))))
                       : vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (3U == (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x00000018U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de 
        = ((IData)(__VdfgRegularize_hf4aef21c_0_0) 
           & (1U <= vlSelfRef.u_reg__DOT____Vcellout__u_csid__q));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = ((0xfffffc00U 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U]) 
                                               | vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[3U]);
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = ((0x000003ffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U]) 
                                               | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                                     << 0x00000015U) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                                        << 0x00000014U) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                                           << 0x00000013U) 
                                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                                             << 0x0000000bU)))) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q))))) 
                                                  << 0x0000000aU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = (0x000003ffU 
                                               & ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                      << 4U) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                           << 2U))) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][0U] 
                                                             >> 0x00000019U)))) 
                                                   << 5U) 
                                                  | ((((3U 
                                                        == 
                                                        (3U 
                                                         & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we))))) 
                                                       << 4U) 
                                                      | (((2U 
                                                           & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][0U] 
                                                              >> 0x00000017U)) 
                                                          | (3U 
                                                             == 
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we)))))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][0U] 
                                                            >> 0x00000017U)) 
                                                        | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001cU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                             >> 0x00000014U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                     >> 0x00000014U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000014U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                   >> 0x00000014U))) 
                     << 2U) | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                              >> 0x00000014U))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000014U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:210: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                    >> 0x00000014U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_host.sv", 210, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                             >> 0x00000017U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                     >> 0x00000017U))) 
                                          << 1U) | 
                                         (1U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000017U))))))))) {
        if ((0U != (((3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                   >> 0x00000017U))) 
                     << 2U) | (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                              >> 0x00000017U))) 
                                << 1U) | (1U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000017U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:227: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                    >> 0x00000017U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_host.sv", 227, "");
            }
        }
    }
    vlSelfRef.__PVT__test_speed_inval = 1U;
    vlSelfRef.__PVT__test_dir_inval = 1U;
    if ((0U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                      >> 0x00000014U)))) {
        vlSelfRef.__PVT__test_speed_inval = 0U;
        vlSelfRef.__PVT__test_dir_inval = 0U;
    } else if (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                              >> 0x00000014U))) || 
                (2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                              >> 0x00000014U))))) {
        vlSelfRef.__PVT__test_speed_inval = 0U;
        vlSelfRef.__PVT__test_dir_inval = (3U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                     >> 0x00000017U)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we)) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                      | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we))))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
                  | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we)) 
                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we)))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de 
        = ((IData)(__VdfgRegularize_hf4aef21c_0_0) 
           & ((IData)(vlSelfRef.__PVT__test_dir_inval) 
              | (IData)(vlSelfRef.__PVT__test_speed_inval)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001bU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de 
        = (((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
             [2U][0U] >> 0x00000018U) & (3U == (3U 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we)))))) 
           | (0U != (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de)))) 
                     & (0x00000020U | (0x0000001fU 
                                       & (vlSelfRef.__VdfgRegularize_hf4aef21c_1_5 
                                          >> 0x0000000cU))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x00000018U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q)));
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__6(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cio_sck_o = ((~ (IData)(vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en)) 
                           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q));
    vlSelfRef.cio_sck_en_o = ((IData)(vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en) 
                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q));
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__7(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en) {
        vlSelfRef.cio_csb_o = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__csb_deassert_outclk;
        vlSelfRef.cio_sd_en_o = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__passthrough_s_en;
        vlSelfRef.cio_sd_o = (0x0000000fU & (IData)(vlSelfRef.__PVT__gen_passthrough_implementation__DOT__pt_sd_out));
    } else {
        vlSelfRef.cio_csb_o = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q;
        vlSelfRef.cio_sd_en_o = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q)
                                  ? (IData)(vlSelfRef.__PVT__sd_en_core)
                                  : 0U);
        vlSelfRef.cio_sd_o = (0x0000000fU & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                              ? (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                    >> 7U))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                     >> 6U))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                   >> 4U)
                                                   : 0U))));
    }
}

void Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__0(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*7:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q = 0;
    CData/*2:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0;
    // Body
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q) 
                & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))) 
               || ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending))) 
                   && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni))) 
           || ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid) 
               | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q)
                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))));
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)))) {
        vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__intg_error_q = 0U;
    }
    vlSelfRef.__PVT__lsio_trigger_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                       && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d) 
                                           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0x40U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (0x49U <= (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d));
    vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__missed_err_gnt_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i) 
               & ((~ (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)) 
                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                     [1U][3U] >> 0x0000000cU))));
    vlSelfRef.intr_spi_event_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                  && ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d) 
                                      & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q)));
    vlSelfRef.intr_error_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                              && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                  & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni))) 
           || (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
               & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming) 
                   & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q) 
                      >> 8U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni))) 
           || (((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                         ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d
                         : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i) 
                   & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o))) 
               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
                   | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        } else {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
        if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
            vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 6U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x00000080U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                                      << 7U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x00000080U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                                      << 7U));
            } else if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (4U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                             << 2U));
            } else if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (4U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                             << 2U));
            } else if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q 
            = vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d;
        if (vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack) {
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__we_o) 
                   | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal));
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__we_o) 
                     | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req))
                    ? 0xffffffffU : ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                      ? 0U : (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                               & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i))
                                               ? vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                               : ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x000007ffU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))))) 
                                                  | (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x0000003fU 
                                                      & (VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000003fU 
                                                                       & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U)))))));
        } else if (vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__d_ack) {
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q = 0U;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d;
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                    ? (3U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                    : (3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)));
        }
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q 
            = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)
                ? 4U : (7U & (((1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 2U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 2U)))
                               ? ((3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                  - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                               : (((IData)(4U) - (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                  + (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    } else {
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q = 0U;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q = 0U;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0U;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q = 0U;
    }
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
           | (7U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
            ? (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q)
            : (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
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
                = (0x000000ffU & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][3U] << 4U) 
                                  | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][2U] >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                         [2U][3U] >> 4U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if ((3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we)))))) {
            vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                         [2U][0U] >> 0x00000019U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                       [2U][0U] >> 0x00000018U);
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q 
                    = (0x000000ffU & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                       [2U][1U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000017U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000015U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000018U));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000019U));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001aU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001bU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001cU));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] >> 0x0000000cU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] >> 0x00000010U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack) {
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q 
                = (0x000000ffU & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [0U][3U] << 4U) 
                                  | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [0U][2U] >> 0x0000001cU)));
            vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q 
                = (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                         [0U][3U] >> 4U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000018U));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000019U));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001aU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001bU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001cU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x0000001dU));
        }
        if (((IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__u_reg__DOT__err_q = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0x7fU;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__err_q = 0U;
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q) {
        vlSelfRef.__PVT__sd_en_core = 0U;
    } else {
        vlSelfRef.__PVT__sd_en_core = (0x0000000fU 
                                       & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q) 
                                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit))
                                           : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                               ? (3U 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q))))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                   ? 
                                                  (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)))
                                                   : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                << 2U) 
                                               | (((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:594: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 594, "");
                }
            }
        }
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000019U));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][0U] >> 0x00000018U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__qe) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d;
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                      [2U][1U] >> 0x00000016U));
        }
    } else {
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q = 0U;
    }
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
        = (0x0000000fffffffffULL & VL_SHIFTR_QQI(36,36,32, vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q, 
                                                 ((IData)(9U) 
                                                  * (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0ULL);
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (3U & ((0x3ffffffeU & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q) 
                                 << 1U)) | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
                                            >> 2U)));
    vlSelfRef.__PVT__event_mask = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                     << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                  << 3U))) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                   << 0x00000039U) 
                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                      << 0x00000031U) 
                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                 >> 0x00000020U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                         << 0x0000001eU));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((2U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                               >> 2U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((1U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.__PVT__fifo_win_d2h[0U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_4 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                                  << 0x0000000bU) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                                     << 0x0000000aU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                                       << 9U))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                                       << 7U) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q) 
                                                          << 6U) 
                                                         | (IData)(vlSelfRef.__PVT__event_mask)))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                      >> 8U)));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_5 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                  << 0x00000010U) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                     << 0x0000000fU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                       << 0x0000000eU))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                    << 0x0000000dU) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q) 
                                                       << 0x0000000cU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i 
        = ((~ (0U != (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4) 
                                     >> 6U)))) & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)) 
              & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i) 
           & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)) 
              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
                 | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)));
}

void Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__2(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (4U ^ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000015U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000016U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] >> 0x00000017U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q 
                    = (0x0000ffffU & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][1U] << 8U) 
                                      | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                         [2U][0U] >> 0x00000018U)));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] >> 8U));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we) {
            vlSelfRef.u_reg__DOT____Vcellout__u_csid__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we)
                    ? ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                        [2U][1U] << 8U) | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][0U] 
                                           >> 0x00000018U))
                    : 0U);
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d;
    } else {
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_csid__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q = 0U;
    }
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d 
        = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)
                            ? 0x00000048U : (0x0000007fU 
                                             & (((1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 7U)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                 : 
                                                (((IData)(0x48U) 
                                                  - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                 + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d) 
           < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q));
    vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o) 
            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d 
        = ((0U != (((((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d) 
                        << 2U) | (((0U == (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)) 
                                   << 1U) | (0x40U 
                                             <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o))))) 
                   & (IData)(vlSelfRef.__PVT__event_mask))) 
           | (IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q))
            ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)
                     ? (VL_SHIFTL_III(32,32,32, ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)
                                                  ? 0U
                                                  : 
                                                 (0x000000ffU 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q))), 
                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q), 3U)) 
                        | ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q))
                            ? 0U : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q))
                     : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q));
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__0(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = 7U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = 0U;
    } else {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
            = ((0xe3U >= (0x000000ffU & ((IData)(0x00000039U) 
                                         * (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                ? (0x01ffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                             (((IData)(0x00000038U) 
                                                               + 
                                                               (0x000000ffU 
                                                                & ((IData)(0x00000039U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                  ? 0x00000020U
                                                  : 
                                                 ((IData)(0x00000040U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000039U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x0000001fU) 
                                                                   + 
                                                                   (0x000000ffU 
                                                                    & ((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (7U 
                                                                   & (((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                : 0ULL);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active 
            = (((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q))
                ? 4U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
                         ? 3U : 2U));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle 
            = ((((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                >> 1U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)) 
                | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                   >> 2U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)) 
                   | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 3U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)) 
                      | (((0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                  >> 0x0000000cU))) 
                          != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q)) 
                         | (((0x0000000fU & (IData)(
                                                    (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                     >> 4U))) 
                             != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q)) 
                            | (((0x0000000fU & (IData)(
                                                       (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                        >> 8U))) 
                                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q)) 
                               | ((0x0000ffffU & (IData)(
                                                         (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                          >> 0x00000010U))) 
                                  != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q))))))))
                ? 6U : 1U);
    }
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           || ((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
               == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__17__val 
                    = (0x0000000fU & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__17__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__17__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__17__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(((0x00008000U != (0x0001c000U 
                                       & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                      | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 0U;
    if ((1U & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)))) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                  | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))) {
                        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                        }
                    }
                } else if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                      | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                     | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))))) {
                    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
            }
        }
    }
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
           & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
              & (0x00008000U == (0x00018000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                            ? 1U : 6U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
                }
            } else if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                    ? ((1U & (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                               | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))
                        ? 2U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                 ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                 : 4U)) : ((1U & ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                                  | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))
                                            ? 3U : 
                                           ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                             : 4U)));
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 3U;
            }
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
        }
    }
    __Vtableidx4 = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d 
        = Vsim__ConstPool__TABLE_h6295770a_0[__Vtableidx4];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
           != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                      ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                            & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                          ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                      & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((1U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 1U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000020U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000010U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 8U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x0000000cU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 4U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000021U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000037U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000035U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 3U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000036U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q));
    }
    vlSelfRef.__PVT__fifo_win_d2h[1U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                   : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)
                                       ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)
                                       : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q))
                                           ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                           : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q) 
                                              - (IData)(1U)))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing)
                                   ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                       ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle))
                                           : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle)
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail)))
                                       : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead)
                                                    : 0U)))
                                   : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                       ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q) 
                                               - (IData)(1U))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)) 
               & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d))))) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 7U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 2U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 6U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 4U;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:410: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 410, "");
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  | ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                     & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))));
    }
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                                  - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                                  - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting)
                      ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit)
                      : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting)
                          ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q) 
                             - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size))
                          : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
            = (7U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q));
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
            ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)
            : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0));
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d));
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1)
               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting));
    vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4 
        = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
            & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (3U == (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4) 
              | ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i) 
           | ((~ (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                          >> 8U))) & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i) 
            & (1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data))));
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__2(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__9__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__9__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__9__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__payload;
    __Vfunc_extract_d2h_rsp_intg__9__payload = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->__VdfgRegularize_h6e95ff9d_0_1389[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->__VdfgRegularize_h6e95ff9d_0_1389[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = ((2U & vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[2U]) 
           | vlSelf->__PVT__u_reg__DOT__u_socket->__VdfgRegularize_h6e95ff9d_0_1389[2U]);
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][0U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][1U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][2U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [0U][3U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][0U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][1U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][2U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [1U][3U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][0U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][0U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][1U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][1U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][2U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][2U];
    vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][3U] 
        = vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_o
        [2U][3U];
    __Vfunc_extract_d2h_rsp_intg__9__tl[0U] = vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__9__tl[1U] = vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__9__tl[2U] = vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
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
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_h2d[2U][3U] 
        = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][3U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
           [2U][0U]);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__d_ack 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
           [0U][0U]);
    vlSelfRef.__PVT__fifo_win_h2d[0U][0U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.__PVT__fifo_win_h2d[0U][1U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.__PVT__fifo_win_h2d[0U][2U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.__PVT__fifo_win_h2d[0U][3U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][0U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][1U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][2U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.__PVT__fifo_win_h2d[1U][3U] = vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U] >> 0x0000000cU) & (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
           [1U][0U]);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o 
        = ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U] >> 0x0000000cU) & ((0U == (7U 
                                                & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    if ((0x00001000U & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__12__val 
                = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [0U][0U] >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__12__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__12__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__12__Vfuncout));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
        = ((0x00001000U & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U]) ? ((((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x0000001bU)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [1U][1U] 
                                                           >> 0x0000001aU)))))) 
                          << 0x00000010U) | ((0x0000ff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [1U][1U] 
                                                                >> 0x00000019U)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [1U][1U] 
                                                                 >> 0x00000018U)))))))
            : 0U);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q)) 
                 & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                    [0U][3U] >> 0x0000000cU)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__14__val 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__14__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__14__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__14__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__14__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__15__val 
                    = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__15__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__15__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__15__Vfuncout)));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = 0U;
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0ff8U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((8U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 2U) 
                                                | (((4U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x0000003cU 
                                                       & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][2U] 
                                                           << 4U) 
                                                          | (0x0000000cU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001cU))))))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0fc7U 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x14U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 5U) 
                                                | (((0x10U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 4U) 
                                                   | ((0x0cU 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001cU))))) 
                                                      << 3U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x0e3fU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 8U) 
                                                | (((0x1cU 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 7U) 
                                                   | ((0x18U 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001cU))))) 
                                                      << 6U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x01ffU 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             | (((0x34U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001cU))))) 
                                                 << 0x0000000bU) 
                                                | (((0x30U 
                                                     == 
                                                     (0x0000003cU 
                                                      & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001cU))))) 
                                                    << 0x0000000aU) 
                                                   | ((0x2cU 
                                                       == 
                                                       (0x0000003cU 
                                                        & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001cU))))) 
                                                      << 9U))));
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val 
                = (0x0000000fU & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [2U][0U] >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                 & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                    [2U][3U] >> 0x0000000cU)));
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][0U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][1U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][2U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[0U][3U] = 
        vlSelfRef.__PVT__fifo_win_h2d[0U][3U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][0U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][1U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][2U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_o[1U][3U] = 
        vlSelfRef.__PVT__fifo_win_h2d[1U][3U];
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i))
                  : (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((~ (IData)(((0x00008000U == (0x0001c000U 
                                        & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                       & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i)))) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack) 
           & (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [0U][3U] >> 9U))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack) 
           & ((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                            [0U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_be_i = (
                                                   (((0U 
                                                      != 
                                                      (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
                                                       >> 0x00000018U)) 
                                                     << 3U) 
                                                    | ((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
                                                            >> 0x00000010U))) 
                                                       << 2U)) 
                                                   | (((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o 
                                                            >> 8U))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o))));
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host_reg_top.sv:1927: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_host_reg_top.sv", 1927, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x00ffU & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q)));
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q)));
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffff0000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                       << 8U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x1fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                       << 0x0000001fU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                           << 0x0000001eU) 
                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                             << 0x0000001dU))));
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffe00000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q) 
                        << 0x00000014U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q) 
                                           << 0x00000010U)) 
                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q) 
                          << 8U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xc03fffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__q) 
                                    << 2U)) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q))) 
                       << 0x0000001aU) | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__q) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q))) 
                                          << 0x00000016U)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x3fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q) 
                       << 0x0000001fU) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q) 
                                          << 0x0000001eU)));
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf0000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q) 
                       << 0x00000018U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q) 
                                              << 0x00000010U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x1fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q) 
                       << 0x0000001fU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q) 
                                           << 0x0000001eU) 
                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q) 
                                             << 0x0000001dU))));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = vlSelfRef.u_reg__DOT____Vcellout__u_csid__q;
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x00000100U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                ? (0xfe000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                : ((0x00000200U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                    ? ((0xffffffe0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                           << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                       << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                         << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q)))))
                    : ((0x00000400U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                        ? ((0xffffffc0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                           | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                          << 4U)) | 
                              ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                 << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                   << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q)))))
                        : ((0x00000800U & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read))
                            ? ((0xffffffc0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                    << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                              << 4U)) 
                                  | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                       << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                         << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q)))))
                            : 0xffffffffU))));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [2U][3U] >> 9U))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                            [2U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wdata_i 
        = (((QData)((IData)(((0x00001000U & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                              [1U][3U]) ? ((((((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][1U] 
                                                >> 0x0000001bU) 
                                               & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                               ? (0x000000ffU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000010U))
                                               : 0U) 
                                             << 0x00000018U) 
                                            | ((((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][1U] 
                                                  >> 0x0000001aU) 
                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                                 ? 
                                                (0x000000ffU 
                                                 & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 8U))
                                                 : 0U) 
                                               << 0x00000010U)) 
                                           | (((((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][1U] 
                                                  >> 0x00000019U) 
                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                                 ? 
                                                (0x000000ffU 
                                                 & vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][1U])
                                                 : 0U) 
                                               << 8U) 
                                              | (((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x00000018U) 
                                                  & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o))
                                                  ? 
                                                 (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][0U] 
                                                  >> 0x00000018U)
                                                  : 0U)))
                              : 0U))) << 4U) | (QData)((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_be_i)));
    __Vtableidx3 = vlSelfRef.__PVT__u_data_fifos__DOT__tx_be_i;
    vlSelfRef.__PVT__access_valid = Vsim__ConstPool__TABLE_h7e888032_0
        [__Vtableidx3];
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__3(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hf4aef21c_0_0;
    __VdfgRegularize_hf4aef21c_0_0 = 0;
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_h0fa715ac_0_5;
    u_reg__DOT____VdfgRegularize_h0fa715ac_0_5 = 0;
    // Body
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [0U][1U] >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [0U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [0U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [0U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i 
        = (1U & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [1U][3U] >> 9U))) | 
                 ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__instr_error) 
                  | ((~ (((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [1U][3U] >> 9U))) 
                          | ((1U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [1U][3U] 
                                           >> 9U))) 
                             | (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [1U][3U] 
                                             >> 9U))))) 
                         & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__addr_sz_chk) 
                            & ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__mask_chk) 
                               & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 9U))) 
                                  | ((1U == (7U & (
                                                   vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                     | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__fulldata_chk))))))) 
                     | ((IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__instr_type_err) 
                        | (IData)(vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [2U][1U] >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rd_req));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o 
        = (1U & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                  [1U][3U] >> 0x0000000cU) & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rready_i)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rready_i));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__access_valid)) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][1U] 
                                                      << 8U) 
                                                     | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U))))) 
                                               & ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                     >> 1U))) 
                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                   >> 2U) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][1U] 
                                                           << 8U) 
                                                          | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][1U] 
                                                             >> 0x00000018U)))))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                      >> 3U) 
                                                     & (0U 
                                                        != 
                                                        (1U 
                                                         & (~ 
                                                            ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              << 8U) 
                                                             | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x00000018U)))))) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                         >> 4U) 
                                                        & (0U 
                                                           != 
                                                           (0x0000000fU 
                                                            & (~ 
                                                               ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x00000018U)))))) 
                                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                            >> 5U) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & (~ 
                                                                  ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    << 8U) 
                                                                   | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                      [2U][1U] 
                                                                      >> 0x00000018U)))))) 
                                                          | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                               >> 6U) 
                                                              & (0U 
                                                                 != 
                                                                 (0x0000000fU 
                                                                  & (~ 
                                                                     ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [2U][1U] 
                                                                       << 8U) 
                                                                      | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                         [2U][1U] 
                                                                         >> 0x00000018U)))))) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                  >> 7U) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x0000000fU 
                                                                     & (~ 
                                                                        ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                          [2U][1U] 
                                                                          << 8U) 
                                                                         | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                            [2U][1U] 
                                                                            >> 0x00000018U)))))) 
                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
                                                                     >> 8U) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x0000000fU 
                                                                        & (~ 
                                                                           ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                             [2U][1U] 
                                                                             << 8U) 
                                                                            | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                               [2U][1U] 
                                                                               >> 0x00000018U)))))) 
                                                                   | ((0U 
                                                                       != 
                                                                       (1U 
                                                                        & (~ 
                                                                           ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                             [2U][1U] 
                                                                             << 8U) 
                                                                            | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                               [2U][1U] 
                                                                               >> 0x00000018U))))) 
                                                                      & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x0e00U 
                                                                                & (IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != (IData)(vlSelfRef.__PVT__u_reg__DOT__addr_hit))) 
                                             & (((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i 
        = ((~ ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
               | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de))) 
           & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    u_reg__DOT____VdfgRegularize_h0fa715ac_0_5 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x47U == (0x0000007fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x0000000fffffffffULL & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i))
                                                ? vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wdata_i
                                                : (
                                                   (0x0a1fU 
                                                    >= 
                                                    (0x00000fffU 
                                                     & ((IData)(0x00000024U) 
                                                        * 
                                                        (0x0000007fU 
                                                         & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x00000023U) 
                                                                       + 
                                                                       (0x00000fffU 
                                                                        & ((IData)(0x00000024U) 
                                                                           * 
                                                                           (0x0000007fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000024U) 
                                                           * 
                                                           (0x0000007fU 
                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000024U) 
                                                           * 
                                                           (0x0000007fU 
                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000024U) 
                                                             * 
                                                             (0x0000007fU 
                                                              & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x00000fffU 
                                                                            & ((IData)(0x00000024U) 
                                                                               * 
                                                                               (0x0000007fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000024U) 
                                                              * 
                                                              (0x0000007fU 
                                                               & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (0x0000007fU 
                                                                           & (((IData)(0x00000024U) 
                                                                               * 
                                                                               (0x0000007fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000024U) 
                                                              * 
                                                              (0x0000007fU 
                                                               & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))))
                                                    : 0ULL))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 9U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000bU) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 6U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we = 
        (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
          >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_h0fa715ac_0_5));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x00000019U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001aU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001dU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((0U != (0x0000000fU & (- (IData)((0x0000000fU 
                                             == (0x0000000fU 
                                                 & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))))))) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we) 
             << 0x0000000bU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we) 
                                 << 0x0000000aU) | 
                                ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we) 
                                 << 9U))) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we) 
                                              << 8U) 
                                             | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
                                                        << 4U) 
                                                       | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we) 
                                                             << 2U))) 
                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d)) 
           & (0U != (0x0000000fU & (- (IData)((0x0000000fU 
                                               == (0x0000000fU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))))))));
    __VdfgRegularize_hf4aef21c_0_0 = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d) 
                                      & (0U != (0x0000000fU 
                                                & (- (IData)(
                                                             (0x0000000fU 
                                                              == 
                                                              (0x0000000fU 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))))))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U] = 
        ((0xff800000U & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U]) 
         | ((((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
              << 0x00000016U) | (0x00300000U & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][0U] 
                                                >> 5U))) 
            | (((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
                << 0x00000013U) | ((0x00040000U & (
                                                   vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][0U] 
                                                   >> 6U)) 
                                   | (((0x0000000fU 
                                        == (0x0000000fU 
                                            & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
                                       << 0x00000011U) 
                                      | vlSelfRef.__VdfgRegularize_hf4aef21c_1_5)))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U] = 
        ((0xfc7fffffU & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U]) 
         | (0xff800000U & (((0x0000000fU == (0x0000000fU 
                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we))))) 
                            << 0x00000019U) | (0x01800000U 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][0U] 
                                                  >> 4U)))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U] = 
        ((0x03ffffffU & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U]) 
         | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                      << 0x00000014U) | (QData)((IData)(
                                                        (0x000fffffU 
                                                         & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][1U] 
                                                             << 3U) 
                                                            | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][0U] 
                                                               >> 0x0000001dU))))))) 
            << 0x0000001aU));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[1U] = 
        (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                    << 0x00000014U) | (QData)((IData)(
                                                      (0x000fffffU 
                                                       & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][1U] 
                                                           << 3U) 
                                                          | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][0U] 
                                                             >> 0x0000001dU))))))) 
          >> 6U) | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                               << 0x00000014U) | (QData)((IData)(
                                                                 (0x000fffffU 
                                                                  & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                      [2U][1U] 
                                                                      << 3U) 
                                                                     | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                        [2U][0U] 
                                                                        >> 0x0000001dU)))))) 
                             >> 0x00000020U)) << 0x0000001aU));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U] = 
        ((0xffffc000U & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U]) 
         | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                       << 0x00000014U) | (QData)((IData)(
                                                         (0x000fffffU 
                                                          & ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              << 3U) 
                                                             | (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][0U] 
                                                                >> 0x0000001dU)))))) 
                     >> 0x00000020U)) >> 6U));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U] = 
        ((0x00003fffU & vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U]) 
         | (0xffffc000U & (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q) 
                            << 0x0000001eU) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q) 
                                               << 0x0000000eU))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[3U] = 
        (0x000003ffU & ((0x00003fc0U & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnlead__q) 
                                        << 6U)) | (
                                                   (0x00003ffcU 
                                                    & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csntrail__q) 
                                                       << 2U)) 
                                                   | ((0x00003fffU 
                                                       & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_csnidle__q) 
                                                          >> 2U)) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_clkdiv__q) 
                                                         >> 0x00000012U)))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x47U == (0x0000007fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q))
            ? 0ULL : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data)
                       ? (((QData)((IData)(((((0x00000100U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                           >> 3U)) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                            >> 0x0000001cU)))) 
                                             << 9U) 
                                            | ((0x00000100U 
                                                & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                            >> 2U)) 
                                                   << 8U)) 
                                               | (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                             >> 0x00000014U))))))) 
                           << 0x00000012U) | (QData)((IData)(
                                                             ((((0x00000100U 
                                                                 & ((IData)(
                                                                            (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                                             >> 1U)) 
                                                                    << 8U)) 
                                                                | (0x000000ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                                              >> 0x0000000cU)))) 
                                                               << 9U) 
                                                              | ((0x00000100U 
                                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o) 
                                                                     << 8U)) 
                                                                 | (0x000000ffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o 
                                                                               >> 4U))))))))
                       : vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (3U == (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x00000018U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de 
        = ((IData)(__VdfgRegularize_hf4aef21c_0_0) 
           & (1U <= vlSelfRef.u_reg__DOT____Vcellout__u_csid__q));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[0U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[2U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = ((0xfffffc00U 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U]) 
                                               | vlSelfRef.__VdfgRegularize_hf4aef21c_1_6[3U]);
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = ((0x000003ffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U]) 
                                               | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                                     << 0x00000015U) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                                        << 0x00000014U) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                                           << 0x00000013U) 
                                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                                             << 0x0000000bU)))) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpol__q) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_cpha__q) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_fullcyc__q))))) 
                                                  << 0x0000000aU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = (0x000003ffU 
                                               & ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                      << 4U) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                           << 2U))) 
                                                    | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][0U] 
                                                             >> 0x00000019U)))) 
                                                   << 5U) 
                                                  | ((((3U 
                                                        == 
                                                        (3U 
                                                         & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we))))) 
                                                       << 4U) 
                                                      | (((2U 
                                                           & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][0U] 
                                                              >> 0x00000017U)) 
                                                          | (3U 
                                                             == 
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we)))))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][0U] 
                                                            >> 0x00000017U)) 
                                                        | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001cU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                             >> 0x00000014U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                     >> 0x00000014U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000014U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                   >> 0x00000014U))) 
                     << 2U) | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                              >> 0x00000014U))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000014U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:210: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                    >> 0x00000014U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_host.sv", 210, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                             >> 0x00000017U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                     >> 0x00000017U))) 
                                          << 1U) | 
                                         (1U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000017U))))))))) {
        if ((0U != (((3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                   >> 0x00000017U))) 
                     << 2U) | (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                              >> 0x00000017U))) 
                                << 1U) | (1U == (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                    >> 0x00000017U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:227: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                    >> 0x00000017U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_host.sv", 227, "");
            }
        }
    }
    vlSelfRef.__PVT__test_speed_inval = 1U;
    vlSelfRef.__PVT__test_dir_inval = 1U;
    if ((0U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                      >> 0x00000014U)))) {
        vlSelfRef.__PVT__test_speed_inval = 0U;
        vlSelfRef.__PVT__test_dir_inval = 0U;
    } else if (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                              >> 0x00000014U))) || 
                (2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                              >> 0x00000014U))))) {
        vlSelfRef.__PVT__test_speed_inval = 0U;
        vlSelfRef.__PVT__test_dir_inval = (3U == (3U 
                                                  & (vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] 
                                                     >> 0x00000017U)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__we)) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                      | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__we))))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
                  | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_command_csaat__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we)) 
                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__we)))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de 
        = ((IData)(__VdfgRegularize_hf4aef21c_0_0) 
           & ((IData)(vlSelfRef.__PVT__test_dir_inval) 
              | (IData)(vlSelfRef.__PVT__test_speed_inval)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001bU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de 
        = (((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
             [2U][0U] >> 0x00000018U) & (3U == (3U 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_error__DOT__we)))))) 
           | (0U != (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__de) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__de) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de)))) 
                     & (0x00000020U | (0x0000001fU 
                                       & (vlSelfRef.__VdfgRegularize_hf4aef21c_1_5 
                                          >> 0x0000000cU))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x00000018U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de)
               ? ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__de) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q)));
}

void Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__4(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                           ? (IData)((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_851 
                                      >> 0x00000026U))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
            ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits) 
                                                >> 1U)))
            : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                ? ((0x000000fcU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                   << 2U)) | (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits)))
                : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                    ? ((0x000000f0U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                       << 4U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits))
                    : 0U)));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d 
            = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                               & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2)
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q)))
                               ? (IData)((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_851 
                                          >> 0x00000026U))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)
                ? ((((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                              ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q
                              : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)) 
                     & (IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)) 
                    << 8U) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted))
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d 
            = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o) 
                               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i))
                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted)
                               : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted)
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q))));
    }
}
