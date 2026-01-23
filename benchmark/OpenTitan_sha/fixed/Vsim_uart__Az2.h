// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_UART__AZ2_H_
#define VERILATED_VSIM_UART__AZ2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_alert_sender__Iz2;
class Vsim_tlul_cmd_intg_chk;
class Vsim_tlul_err;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_uart__Az2 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_alert_sender__Iz2* __PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender;
    Vsim_tlul_cmd_intg_chk* __PVT__u_reg__DOT__u_chk;
    Vsim_tlul_err* __PVT__u_reg__DOT__u_reg_if__DOT__u_err;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(alert_rx_i,3,0);
        VL_OUT8(alert_tx_o,1,0);
        VL_IN8(racl_policies_i,3,0);
        VL_OUT8(__PVT__racl_error_o,0,0);
        VL_OUT8(__PVT__racl_error_log_o,2,0);
        VL_OUT8(__PVT__lsio_trigger_o,0,0);
        VL_IN8(cio_rx_i,0,0);
        VL_OUT8(cio_tx_o,0,0);
        VL_OUT8(__PVT__cio_tx_en_o,0,0);
        VL_OUT8(intr_tx_watermark_o,0,0);
        VL_OUT8(intr_tx_empty_o,0,0);
        VL_OUT8(intr_rx_watermark_o,0,0);
        VL_OUT8(intr_tx_done_o,0,0);
        VL_OUT8(intr_rx_overflow_o,0,0);
        VL_OUT8(intr_rx_frame_err_o,0,0);
        VL_OUT8(intr_rx_break_err_o,0,0);
        VL_OUT8(intr_rx_timeout_o,0,0);
        VL_OUT8(intr_rx_parity_err_o,0,0);
        CData/*0:0*/ __PVT__u_reg__DOT__addrmiss;
        CData/*0:0*/ __PVT__u_reg__DOT__wr_err;
        CData/*0:0*/ __PVT__u_reg__DOT__err_q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_tx_done__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state_tx_empty__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_tx_done__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_tx__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_rx__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_nf__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_slpbk__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_llpbk__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_parity_en__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_parity_odd__q;
        CData/*1:0*/ u_reg__DOT____Vcellout__u_ctrl_rxblvl__q;
        CData/*0:0*/ __PVT__u_reg__DOT__wdata_qe;
        CData/*7:0*/ u_reg__DOT____Vcellout__u_wdata__q;
        CData/*0:0*/ __PVT__u_reg__DOT__fifo_ctrl_qe;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q;
        CData/*2:0*/ u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q;
        CData/*2:0*/ u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ovrd_txen__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ovrd_txval__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_timeout_ctrl_en__q;
        CData/*0:0*/ u_reg__DOT____VdfgRegularize_hddfe4fb5_0_7;
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o;
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__;
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__;
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__;
    };
    struct {
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__;
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__;
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__;
        CData/*0:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__;
        CData/*5:0*/ __PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__re_o;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__we_o;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__error_i;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__d_ack;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__error_q;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__instr_error;
        CData/*7:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__reqid_q;
        CData/*1:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q;
        CData/*2:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__rspop_q;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_tx_watermark__DOT__d;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_watermark__DOT__d;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_tx_done__DOT__de;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_tx_done__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__de;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__we;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__de;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__de;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__de;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state_tx_empty__DOT__d;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__we;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_test_rx_break_err__DOT__we;
        CData/*0:0*/ __PVT__u_reg__DOT__u_alert_test__DOT__we;
        CData/*0:0*/ __PVT__u_reg__DOT__u_ctrl_llpbk__DOT__we;
        CData/*0:0*/ __PVT__u_reg__DOT__u_status_txempty__DOT__d;
        CData/*0:0*/ __PVT__u_reg__DOT__u_status_rxempty__DOT__re;
        CData/*0:0*/ __PVT__u_reg__DOT__u_status_rxempty__DOT__d;
        CData/*0:0*/ __PVT__u_reg__DOT__u_rdata__DOT__re;
        CData/*0:0*/ __PVT__u_reg__DOT__u_wdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        CData/*0:0*/ __PVT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__we;
        CData/*0:0*/ __PVT__u_reg__DOT__u_ovrd_txen__DOT__we;
        CData/*0:0*/ __PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we;
        CData/*6:0*/ __PVT__uart_core__DOT__rx_fifo_depth_prev_q;
        CData/*0:0*/ __PVT__uart_core__DOT__tx_out_q;
        CData/*0:0*/ __PVT__uart_core__DOT__rx_sync;
        CData/*4:0*/ __PVT__uart_core__DOT__allzero_cnt_d;
        CData/*4:0*/ __PVT__uart_core__DOT__allzero_cnt_q;
        CData/*0:0*/ __PVT__uart_core__DOT__event_tx_watermark;
        CData/*0:0*/ __PVT__uart_core__DOT__event_rx_watermark;
        CData/*0:0*/ __PVT__uart_core__DOT__tx_uart_idle_q;
        CData/*0:0*/ __PVT__uart_core__DOT__break_st_q;
        CData/*0:0*/ __PVT__uart_core__DOT__rx_sync_q1;
        CData/*0:0*/ __PVT__uart_core__DOT__rx_sync_q2;
    };
    struct {
        CData/*5:0*/ __PVT__uart_core__DOT__tx_watermark_thresh;
        CData/*6:0*/ __PVT__uart_core__DOT__rx_watermark_thresh;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__clr_i;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__wready_o;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__rready_i;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__full_o;
        CData/*5:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__depth_o;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst;
        VlWide<8>/*255:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*7:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata;
        CData/*5:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*5:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_tx__DOT__idle;
        CData/*3:0*/ __PVT__uart_core__DOT__uart_tx__DOT__baud_div_q;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_tx__DOT__tick_baud_q;
        CData/*3:0*/ __PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        CData/*3:0*/ __PVT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_tx__DOT__tx_q;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_tx__DOT__tx_d;
        CData/*0:0*/ __PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        CData/*0:0*/ __PVT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_rx__DOT__rx;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_rx__DOT__rx_valid_q;
        CData/*3:0*/ __PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        CData/*3:0*/ __PVT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        CData/*3:0*/ __PVT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        CData/*3:0*/ __PVT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_rx__DOT__tick_baud_d;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_rx__DOT__tick_baud_q;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_rx__DOT__idle_d;
        CData/*0:0*/ __PVT__uart_core__DOT__uart_rx__DOT__idle_q;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__clr_i;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__wvalid_i;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__wready_o;
        CData/*7:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__wdata_i;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__full_o;
        CData/*6:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__depth_o;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst;
        VlWide<16>/*511:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*6:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*6:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ __PVT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ __PVT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q;
        CData/*0:0*/ __PVT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q;
        CData/*0:0*/ __PVT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q;
        CData/*0:0*/ __PVT__uart_core__DOT__intr_hw_rx_frame_err__DOT__event_intr_i;
        CData/*0:0*/ __PVT__uart_core__DOT__intr_hw_rx_break_err__DOT__event_intr_i;
        CData/*0:0*/ __PVT__uart_core__DOT__intr_hw_rx_timeout__DOT__event_intr_i;
        CData/*0:0*/ __PVT__uart_core__DOT__intr_hw_rx_parity_err__DOT__event_intr_i;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__1__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__1__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__4__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__4__val;
    };
    struct {
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__7__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__7__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__10__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__10__val;
        SData/*15:0*/ u_reg__DOT____Vcellout__u_ctrl_nco__q;
        SData/*12:0*/ __PVT__u_reg__DOT__addr_hit;
        SData/*12:0*/ __PVT__u_reg__DOT__racl_addr_hit_read;
        SData/*12:0*/ __PVT__u_reg__DOT__racl_addr_hit_write;
        SData/*12:0*/ __PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
        SData/*15:0*/ __PVT__uart_core__DOT__rx_val_q;
        SData/*10:0*/ __PVT__uart_core__DOT__uart_tx__DOT__sreg_q;
        SData/*10:0*/ __PVT__uart_core__DOT__uart_tx__DOT__sreg_d;
        SData/*10:0*/ __PVT__uart_core__DOT__uart_rx__DOT__sreg_q;
        SData/*10:0*/ __PVT__uart_core__DOT__uart_rx__DOT__sreg_d;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1192;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1193;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1194;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1195;
        IData/*31:0*/ __PVT__u_reg__DOT__reg_rdata_next;
        IData/*23:0*/ u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
        IData/*31:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__wdata_o;
        IData/*31:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__rdata_q;
        IData/*23:0*/ __PVT__uart_core__DOT__rx_timeout_count_d;
        IData/*23:0*/ __PVT__uart_core__DOT__rx_timeout_count_q;
        IData/*16:0*/ __PVT__uart_core__DOT__nco_sum_q;
        IData/*23:0*/ __VdfgRegularize_hb1c522f8_1_2;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1381;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1382;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1383;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1384;
        VL_INW(tl_i,108,0,4);
        VL_OUTW(tl_o,65,0,3);
        VlWide<5>/*131:0*/ __PVT__u_reg__DOT__reg2hw;
        VlWide<3>/*65:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 13> __PVT__RaclPolicySelVec = {{
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 13> __PVT__u_reg__DOT__RaclPolicySelVec = {{
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U
    }};

    // CONSTRUCTORS
    Vsim_uart__Az2(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_uart__Az2();
    VL_UNCOPYABLE(Vsim_uart__Az2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
