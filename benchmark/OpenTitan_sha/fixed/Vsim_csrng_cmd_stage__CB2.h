// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_CSRNG_CMD_STAGE__CB2_H_
#define VERILATED_VSIM_CSRNG_CMD_STAGE__CB2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_csrng_cmd_stage__CB2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(cs_enable_i,0,0);
        VL_IN8(cmd_stage_vld_i,0,0);
        VL_IN8(cmd_stage_shid_i,3,0);
        VL_OUT8(cmd_stage_rdy_o,0,0);
        VL_IN8(reseed_cnt_reached_i,0,0);
        VL_OUT8(reseed_cnt_alert_o,0,0);
        VL_OUT8(invalid_cmd_seq_alert_o,0,0);
        VL_OUT8(invalid_acmd_alert_o,0,0);
        VL_OUT8(cmd_arb_req_o,0,0);
        VL_OUT8(cmd_arb_sop_o,0,0);
        VL_OUT8(cmd_arb_mop_o,0,0);
        VL_OUT8(cmd_arb_eop_o,0,0);
        VL_IN8(cmd_arb_gnt_i,0,0);
        VL_IN8(cmd_ack_i,0,0);
        VL_IN8(cmd_ack_sts_i,2,0);
        VL_OUT8(cmd_stage_ack_o,0,0);
        VL_OUT8(cmd_stage_ack_sts_o,2,0);
        VL_IN8(genbits_vld_i,0,0);
        VL_IN8(genbits_fips_i,0,0);
        VL_OUT8(genbits_vld_o,0,0);
        VL_IN8(genbits_rdy_i,0,0);
        VL_OUT8(genbits_fips_o,0,0);
        VL_OUT8(cmd_stage_sfifo_cmd_err_o,2,0);
        VL_OUT8(cmd_stage_sfifo_genbits_err_o,2,0);
        VL_OUT8(cmd_gen_cnt_err_o,0,0);
        VL_OUT8(cmd_stage_sm_err_o,0,0);
        CData/*0:0*/ __PVT__cmd_fifo_pop;
        CData/*0:0*/ __PVT__cmd_len_dec;
        CData/*0:0*/ __PVT__cmd_gen_cnt_dec;
        CData/*0:0*/ __PVT__cmd_gen_1st_req;
        CData/*0:0*/ __PVT__cmd_gen_inc_req;
        CData/*0:0*/ __PVT__cmd_gen_cnt_last;
        CData/*0:0*/ __PVT__cmd_final_ack;
        CData/*0:0*/ __PVT__cmd_err_ack;
        CData/*0:0*/ __PVT__reseed_cnt_exceeded;
        CData/*0:0*/ __PVT__invalid_cmd_seq;
        CData/*0:0*/ __PVT__invalid_acmd;
        CData/*0:0*/ __PVT__cmd_ack_q;
        CData/*2:0*/ __PVT__cmd_ack_sts_q;
        CData/*2:0*/ __PVT__cmd_ack_sts_d;
        CData/*3:0*/ __PVT__cmd_len_q;
        CData/*3:0*/ __PVT__cmd_len_d;
        CData/*0:0*/ __PVT__cmd_gen_flag_q;
        CData/*0:0*/ __PVT__cmd_gen_flag_d;
        CData/*0:0*/ __PVT__instantiated_d;
        CData/*0:0*/ __PVT__instantiated_q;
        CData/*7:0*/ __PVT__state_d;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__wvalid_i;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__rready_i;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__full_o;
        CData/*1:0*/ __PVT__u_prim_fifo_cmd__DOT__depth_o;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*1:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*1:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ __PVT__u_prim_count_cmd_gen_cntr__DOT__err_q;
    };
    struct {
        CData/*7:0*/ __PVT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ __PVT__u_prim_fifo_genbits__DOT__wvalid_i;
        CData/*0:0*/ __PVT__u_prim_fifo_genbits__DOT__rready_i;
        CData/*0:0*/ __PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d;
        CData/*0:0*/ __PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_306;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_307;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_424;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_425;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_426;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_427;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_428;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_429;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_430;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_431;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_432;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_433;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_434;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_435;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_436;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_437;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_438;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_439;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_440;
        SData/*11:0*/ __PVT__cmd_gen_cmd_q;
        SData/*11:0*/ __PVT__cmd_gen_cmd_d;
        SData/*12:0*/ __PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
        SData/*11:0*/ __PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
        SData/*12:0*/ __PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
        SData/*11:0*/ __PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        SData/*11:0*/ __PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        SData/*11:0*/ __PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        VL_IN(cmd_stage_bus_i,31,0);
        VL_OUT(cmd_arb_bus_o,31,0);
        VL_INW(genbits_bus_i,127,0,4);
        VL_OUTW(genbits_bus_o,127,0,4);
        IData/*31:0*/ __PVT__u_prim_fifo_cmd__DOT__rdata_o;
        QData/*63:0*/ __PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage;
        VlWide<5>/*128:0*/ __PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_csrng_cmd_stage__CB2(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_csrng_cmd_stage__CB2();
    VL_UNCOPYABLE(Vsim_csrng_cmd_stage__CB2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
