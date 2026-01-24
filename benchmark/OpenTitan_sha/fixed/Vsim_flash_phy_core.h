// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_FLASH_PHY_CORE_H_
#define VERILATED_VSIM_FLASH_PHY_CORE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_fifo_sync_cnt__D2_Sz5;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_flash_phy_core final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_fifo_sync_cnt__D2_Sz5* __PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt;
    Vsim_prim_fifo_sync_cnt__D2_Sz5* __PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(host_req_i,0,0);
        VL_IN8(host_scramble_en_i,0,0);
        VL_IN8(host_ecc_en_i,0,0);
        VL_IN8(req_i,0,0);
        VL_IN8(scramble_en_i,0,0);
        VL_IN8(ecc_en_i,0,0);
        VL_IN8(he_en_i,0,0);
        VL_IN8(rd_i,0,0);
        VL_IN8(prog_i,0,0);
        VL_IN8(pg_erase_i,0,0);
        VL_IN8(bk_erase_i,0,0);
        VL_IN8(erase_suspend_req_i,0,0);
        VL_IN8(part_i,0,0);
        VL_IN8(info_sel_i,1,0);
        VL_IN8(prog_last_i,0,0);
        VL_IN8(prog_type_i,0,0);
        VL_IN8(rd_buf_en_i,0,0);
        VL_IN8(flash_disable_i,3,0);
        VL_OUT8(host_req_rdy_o,0,0);
        VL_OUT8(host_req_done_o,0,0);
        VL_OUT8(rd_done_o,0,0);
        VL_OUT8(prog_done_o,0,0);
        VL_OUT8(erase_done_o,0,0);
        VL_OUT8(rd_err_o,0,0);
        VL_OUT8(ecc_single_err_o,0,0);
        VL_OUT8(fsm_err_o,0,0);
        VL_OUT8(prog_intg_err_o,0,0);
        VL_OUT8(relbl_ecc_err_o,0,0);
        VL_OUT8(intg_ecc_err_o,0,0);
        VL_OUT8(spurious_ack_o,0,0);
        VL_OUT8(arb_err_o,0,0);
        VL_OUT8(host_gnt_err_o,0,0);
        VL_OUT8(fifo_err_o,0,0);
        VL_OUT8(cnt_err_o,0,0);
        CData/*2:0*/ __PVT__reqs;
        CData/*0:0*/ __PVT__ctrl_rsp_vld;
        CData/*0:0*/ __PVT__prog_ack;
        CData/*0:0*/ __PVT__erase_ack;
        CData/*0:0*/ __PVT__muxed_scramble_en;
        CData/*0:0*/ __PVT__muxed_ecc_en;
        CData/*0:0*/ __PVT__rd_stage_rdy;
        CData/*2:0*/ __PVT__arb_cnt;
        CData/*0:0*/ __PVT__calc_ack;
        CData/*0:0*/ __PVT__op_ack;
        CData/*0:0*/ __PVT__host_gnt;
        CData/*0:0*/ __PVT__ctrl_gnt;
        CData/*0:0*/ __PVT__ctrl_fsm_idle;
        CData/*0:0*/ __PVT__host_req;
        CData/*0:0*/ __PVT__host_gnt_err_event;
        CData/*0:0*/ __PVT__host_outstanding_err_event;
        CData/*0:0*/ __PVT__host_gnt_rd_err;
        CData/*0:0*/ __PVT__host_outstanding_rd_err;
        CData/*0:0*/ __PVT__ctrl_req;
        CData/*0:0*/ __PVT__fsm_err;
        CData/*0:0*/ __PVT__rd_calc_req;
        CData/*0:0*/ __PVT__rd_op_req;
        CData/*0:0*/ __PVT__arb_host_gnt_err;
        CData/*0:0*/ __PVT__prog_last;
        CData/*0:0*/ __PVT__flash_prog_req;
        CData/*0:0*/ __PVT__prog_calc_req;
        CData/*0:0*/ __PVT__prog_op_req;
        CData/*0:0*/ __PVT__prog_fsm_err;
    };
    struct {
        CData/*0:0*/ __VdfgExtracted_hded1f362__0;
        CData/*3:0*/ __PVT__u_disable_buf__DOT__gen_no_flops__DOT__unused_logic;
        CData/*0:0*/ __PVT__u_host_outstanding_cnt__DOT__incr_en_i;
        CData/*0:0*/ __PVT__u_host_outstanding_cnt__DOT__decr_en_i;
        CData/*0:0*/ __PVT__u_host_outstanding_cnt__DOT__err_q;
        CData/*2:0*/ __PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
        CData/*1:0*/ __PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
        CData/*2:0*/ __PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
        CData/*1:0*/ __PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        CData/*0:0*/ u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0;
        CData/*1:0*/ __PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        CData/*1:0*/ __PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        CData/*0:0*/ __PVT__u_host_arb__DOT__err_q;
        CData/*1:0*/ __PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o;
        CData/*0:0*/ __PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o;
        CData/*0:0*/ __PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__;
        CData/*0:0*/ __PVT__u_rd__DOT__req_i;
        CData/*0:0*/ __PVT__u_rd__DOT__buf_en_q;
        CData/*0:0*/ __PVT__u_rd__DOT__muxed_err;
        CData/*3:0*/ __PVT__u_rd__DOT__alloc;
        CData/*3:0*/ __PVT__u_rd__DOT__update;
        CData/*3:0*/ __PVT__u_rd__DOT__buf_match;
        CData/*3:0*/ __PVT__u_rd__DOT__buf_dependency;
        CData/*0:0*/ __PVT__u_rd__DOT__data_hazard__BRA__0__KET__;
        CData/*3:0*/ __PVT__u_rd__DOT__buf_invalid_alloc;
        CData/*3:0*/ __PVT__u_rd__DOT__buf_alloc;
        CData/*3:0*/ __PVT__u_rd__DOT__alloc_q;
        CData/*0:0*/ __PVT__u_rd__DOT__rd_start;
        CData/*0:0*/ __PVT__u_rd__DOT__rd_busy;
        CData/*0:0*/ __PVT__u_rd__DOT__rd_stages_rdy;
        CData/*0:0*/ __PVT__u_rd__DOT__no_buf_en_change;
        CData/*0:0*/ __PVT__u_rd__DOT__valid_ecc;
        CData/*0:0*/ __PVT__u_rd__DOT__ecc_multi_err;
        CData/*0:0*/ __PVT__u_rd__DOT__ecc_single_err;
        CData/*0:0*/ __PVT__u_rd__DOT__data_erased;
        CData/*0:0*/ __PVT__u_rd__DOT__fifo_data_ready;
        CData/*0:0*/ __PVT__u_rd__DOT__descram;
        CData/*0:0*/ __PVT__u_rd__DOT__forward;
        CData/*0:0*/ __PVT__u_rd__DOT__hint_forward;
        CData/*0:0*/ __PVT__u_rd__DOT__hint_dropmsk;
        CData/*0:0*/ __PVT__u_rd__DOT__hint_descram;
        CData/*3:0*/ __PVT__u_rd__DOT__buf_rsp_match;
        CData/*0:0*/ __PVT__u_rd__DOT__buf_rsp_err;
        CData/*0:0*/ __PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match;
        CData/*0:0*/ __PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match;
        CData/*0:0*/ __PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match;
        CData/*0:0*/ __PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_11;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_12;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_14;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15;
        CData/*1:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24;
        CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25;
        CData/*3:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__req_i;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__ready_i;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__;
    };
    struct {
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__;
        CData/*3:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_d;
        CData/*3:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ __PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0;
        CData/*3:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__wr_buf_i;
        CData/*7:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt;
        CData/*1:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel;
        CData/*1:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel;
        CData/*1:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt;
        CData/*1:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr;
        CData/*0:0*/ u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o;
        CData/*5:0*/ __PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        SData/*11:0*/ __PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*5:0*/ u_rd__DOT__u_rsp_order_fifo__DOT____Vlvbound_h3810951a__0;
        CData/*7:0*/ __PVT__u_rd__DOT__u_dec__DOT__syndrome_o;
        CData/*7:0*/ u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rd_storage__DOT__wready_o;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ __PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__wvalid_i;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__wready_o;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__rready_i;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*1:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*1:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*1:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*1:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ __PVT__u_rd__DOT__u_intg_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
        CData/*0:0*/ __PVT__u_rd__DOT__gen_bufs__BRA__1__KET____DOT__u_rd_buf__DOT__wipe_i;
        CData/*0:0*/ __PVT__u_rd__DOT__gen_bufs__BRA__2__KET____DOT__u_rd_buf__DOT__wipe_i;
        CData/*0:0*/ __PVT__u_rd__DOT__gen_bufs__BRA__3__KET____DOT__u_rd_buf__DOT__wipe_i;
        CData/*1:0*/ __PVT__u_erase__DOT__state_d;
    };
    struct {
        CData/*1:0*/ __PVT__u_erase__DOT__state_q;
        CData/*0:0*/ __PVT__u_erase__DOT__suspend_valid;
        CData/*0:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__idx;
        CData/*0:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid;
        CData/*1:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__data_sel;
        CData/*0:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en;
        CData/*0:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q;
        CData/*0:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_d;
        CData/*0:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__ack;
        CData/*3:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc;
        CData/*6:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o;
        CData/*1:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__err_o;
        CData/*0:0*/ __Vfunc_mubi4_test_false_strict__0__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_false_strict__0__val;
        CData/*0:0*/ __Vfunc_mubi4_test_false_strict__1__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_false_strict__1__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__3__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__3__val;
        CData/*0:0*/ __Vfunc_mubi4_test_false_strict__4__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_false_strict__4__val;
        CData/*0:0*/ __Vfunc_mubi4_test_false_strict__5__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_false_strict__5__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__7__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__7__val;
        SData/*9:0*/ __PVT__state_d;
        SData/*9:0*/ __PVT__u_state_regs__DOT__state_raw;
        SData/*15:0*/ __PVT__u_rd__DOT__buf_addr_xor;
        IData/*31:0*/ __PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__storage;
        SData/*10:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__state_d;
        SData/*10:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw;
        VL_IN(host_addr_i,16,0);
        VL_IN(addr_i,16,0);
        VL_OUT(ecc_addr_o,16,0);
        IData/*16:0*/ __PVT__muxed_addr;
        VlWide<3>/*67:0*/ __PVT__u_rd__DOT__muxed_data;
        IData/*17:0*/ __PVT__u_rd__DOT__rd_attrs;
        VlWide<3>/*67:0*/ __PVT__u_rd__DOT__data_int;
        VlWide<3>/*67:0*/ __PVT__u_rd__DOT__buf_rsp_data;
        VlWide<3>/*67:0*/ __PVT__u_rd__DOT__data_out_muxed;
        IData/*31:0*/ __PVT__u_rd__DOT__u_rd_buf_dep__DOT__unnamedblk1__DOT__i;
        VlWide<3>/*75:0*/ __PVT__u_rd__DOT__u_dec__DOT__data_i;
        VlWide<3>/*67:0*/ __PVT__u_rd__DOT__u_dec__DOT__data_o;
        VlWide<3>/*75:0*/ __PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o;
        VlWide<5>/*151:0*/ __PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage;
        VlWide<3>/*75:0*/ u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0;
        QData/*63:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__packed_data;
        IData/*31:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_o;
        VlWide<3>/*67:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i;
        VlWide<3>/*74:0*/ gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6;
        VlWide<3>/*70:0*/ gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6;
        VlWide<3>/*94:0*/ __VdfgRegularize_h6e95ff9d_0_1469;
        VlWide<3>/*94:0*/ __VdfgRegularize_h6e95ff9d_0_1470;
        VL_IN64(prog_data_i,38,0);
        VL_OUTW(scramble_req_o,146,0,5);
        VL_INW(scramble_rsp_i,193,0,7);
        VL_INW(prim_flash_rsp_i,77,0,3);
        VL_OUTW(prim_flash_req_o,102,0,4);
        VL_OUT64(rd_data_host_o,38,0);
        VL_OUT64(rd_data_ctrl_o,38,0);
        QData/*63:0*/ __PVT__rd_descrambled_data;
        QData/*63:0*/ __PVT__prog_scrambled_data;
        VlWide<3>/*89:0*/ u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o;
        VlWide<3>/*89:0*/ u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o;
        VlWide<3>/*89:0*/ u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o;
    };
    struct {
        VlWide<3>/*89:0*/ u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o;
        QData/*63:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o;
        VlWide<4>/*127:0*/ __PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage;
        QData/*63:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__mask_q;
        QData/*38:0*/ __PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i;
        VlUnpacked<CData/*1:0*/, 2> __PVT__data_tie_off;
        VlUnpacked<CData/*1:0*/, 2> __PVT__u_host_arb__DOT__data_i;
        VlUnpacked<CData/*1:0*/, 2> __PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf;
        VlUnpacked<CData/*1:0*/, 2> __PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf;
        VlUnpacked<CData/*1:0*/, 2> __PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i;
        VlUnpacked<CData/*1:0*/, 2> __PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i;
        VlUnpacked<VlWide<3>/*89:0*/, 4> __PVT__u_rd__DOT__read_buf;
        VlUnpacked<CData/*1:0*/, 4> __PVT__u_rd__DOT__dummy_data;
        VlUnpacked<CData/*1:0*/, 4> u_rd__DOT____Vcellinp__u_valid_random__data_i;
        VlUnpacked<CData/*1:0*/, 4> __PVT__u_rd__DOT__u_valid_random__DOT__data_i;
        VlUnpacked<CData/*0:0*/, 256> u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_flash_phy_core(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_flash_phy_core();
    VL_UNCOPYABLE(Vsim_flash_phy_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
