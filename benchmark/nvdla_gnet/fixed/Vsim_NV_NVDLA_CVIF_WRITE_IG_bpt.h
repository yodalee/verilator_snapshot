// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_CVIF_WRITE_IG_BPT_H_
#define VERILATED_VSIM_NV_NVDLA_CVIF_WRITE_IG_BPT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(dma2bpt_req_valid,0,0);
        VL_OUT8(dma2bpt_req_ready,0,0);
        VL_OUT8(bpt2arb_cmd_valid,0,0);
        VL_IN8(bpt2arb_cmd_ready,0,0);
        VL_OUT8(bpt2arb_dat_valid,0,0);
        VL_IN8(bpt2arb_dat_ready,0,0);
        VL_IN8(axid,3,0);
        CData/*1:0*/ __PVT__beat_count;
        CData/*0:0*/ __PVT__cmd_en;
        CData/*0:0*/ __PVT__dat_en;
        CData/*0:0*/ __PVT__in_dat1_dis;
        CData/*2:0*/ __PVT__out_size;
        CData/*0:0*/ __PVT__bpt2arb_cmd_accept;
        CData/*0:0*/ __PVT__dfifo0_rd_prdy;
        CData/*0:0*/ __PVT__dfifo0_wr_pvld;
        CData/*0:0*/ __PVT__dfifo1_rd_prdy;
        CData/*0:0*/ __PVT__dfifo1_wr_pvld;
        CData/*0:0*/ __PVT__dfifo_rd_prdy;
        CData/*0:0*/ __PVT__dfifo_wr_vld;
        CData/*2:0*/ __PVT__ftran_size;
        CData/*0:0*/ __PVT__in_dat0_dis;
        CData/*0:0*/ __PVT__in_dat0_pvld;
        CData/*0:0*/ __PVT__in_dat1_pvld;
        CData/*0:0*/ __PVT__in_dat_last;
        CData/*0:0*/ __PVT__ipipe_cmd_rdy;
        CData/*0:0*/ __PVT__ipipe_cmd_vld;
        CData/*0:0*/ __PVT__ipipe_vld_p;
        CData/*0:0*/ __PVT__is_last_beat;
        CData/*0:0*/ __PVT__is_ltran;
        CData/*0:0*/ __PVT__is_single_tran;
        CData/*0:0*/ __PVT__large_req_grow;
        CData/*2:0*/ __PVT__ltran_size;
        CData/*0:0*/ __PVT__out_cmd_inc;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_ready;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_catch;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready_flop;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_valid;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_rand_ready;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_ready_bc;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_catch;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready_flop;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_valid;
        CData/*0:0*/ __PVT__pipe_p3__DOT__p3_pipe_valid;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__nvdla_core_clk_mgated;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_wr_pvld_in;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__wr_busy_in;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_wr_busy_next;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__wr_busy_in_int;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_wr_busy_int;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__wr_popping;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_wr_count;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_prdy_d;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_pvld_p;
    };
    struct {
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_count_p;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__rd_count_p_next;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__rd_req_next_o;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__rd_req_next;
        CData/*0:0*/ u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__nvdla_core_clk_mgated;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_wr_pvld_in;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__wr_busy_in;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_wr_busy_next;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__wr_busy_in_int;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_wr_busy_int;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__wr_popping;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_wr_count;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_prdy_d;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_pvld_p;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_count_p;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__rd_count_p_next;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__rd_req_next_o;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__rd_req_next;
        CData/*0:0*/ u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*0:0*/ __Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in;
        CData/*0:0*/ __Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int;
        CData/*0:0*/ __Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in;
        CData/*0:0*/ __Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int;
        SData/*12:0*/ __PVT__in_dat_cnt;
        SData/*10:0*/ __PVT__req_count;
        SData/*10:0*/ __PVT__req_num;
        SData/*12:0*/ __PVT__mtran_num;
        VL_INW(dma2bpt_req_pd,514,0,17);
        VL_OUTW(bpt2arb_cmd_pd,76,0,3);
        VL_OUTW(bpt2arb_dat_pd,513,0,17);
        VL_IN(pwrbus_ram_pd,31,0);
        VlWide<8>/*255:0*/ __PVT__dfifo0_rd_pd;
        VlWide<8>/*255:0*/ __PVT__dfifo1_rd_pd;
        VlWide<3>/*77:0*/ __PVT__in_cmd_vld_pd;
        VlWide<17>/*514:0*/ __PVT__ipipe_pd_p;
        VlWide<17>/*514:0*/ __PVT__pipe_p1__DOT__p1_pipe_data;
        VlWide<17>/*514:0*/ __PVT__pipe_p1__DOT__p1_skid_data;
        VlWide<17>/*514:0*/ __PVT__pipe_p2__DOT__p2_pipe_data;
        VlWide<17>/*514:0*/ __PVT__pipe_p2__DOT__p2_skid_data;
        VlWide<3>/*77:0*/ __PVT__pipe_p3__DOT__p3_pipe_data;
        VlWide<8>/*255:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_pd_p;
        VlWide<8>/*255:0*/ __PVT__u_dfifo0__DOT__dfifo_rd_pd_o;
        VlWide<8>/*255:0*/ __PVT__u_dfifo0__DOT__ram__DOT__di_d;
        VlWide<8>/*255:0*/ __PVT__u_dfifo0__DOT__ram__DOT__ram_ff0;
        VlWide<8>/*255:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_pd_p;
        VlWide<8>/*255:0*/ __PVT__u_dfifo1__DOT__dfifo_rd_pd_o;
        VlWide<8>/*255:0*/ __PVT__u_dfifo1__DOT__ram__DOT__di_d;
        VlWide<8>/*255:0*/ __PVT__u_dfifo1__DOT__ram__DOT__ram_ff0;
        VlWide<17>/*514:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
        QData/*63:0*/ __PVT__out_addr;
        QData/*32:0*/ __PVT__u_dfifo0__DOT__prand_inst2__Vstatic__diff;
    };
    struct {
        QData/*32:0*/ __PVT__u_dfifo0__DOT__prand_inst3__Vstatic__diff;
        QData/*32:0*/ __PVT__u_dfifo1__DOT__prand_inst2__Vstatic__diff;
        QData/*32:0*/ __PVT__u_dfifo1__DOT__prand_inst3__Vstatic__diff;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
