// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_SDP_BRDMA_EG_RO_H_
#define VERILATED_VSIM_NV_NVDLA_SDP_BRDMA_EG_RO_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_SDP_BRDMA_EG_ro final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(cfg_do_8,0,0);
        VL_IN8(cfg_dp_8,0,0);
        VL_IN8(cfg_mode_multi_batch,0,0);
        VL_IN8(cfg_mode_per_element,0,0);
        VL_IN8(reg2dp_batch_number,4,0);
        VL_IN8(roc_wr_pd,3,0);
        VL_IN8(roc_wr_vld,0,0);
        VL_IN8(rod_wr_mask,3,0);
        VL_IN8(rod_wr_vld,0,0);
        VL_IN8(sdp_brdma2dp_ready,0,0);
        VL_OUT8(layer_end,0,0);
        VL_OUT8(roc_wr_rdy,0,0);
        VL_OUT8(rod_wr_rdy,0,0);
        VL_OUT8(sdp_brdma2dp_valid,0,0);
        CData/*1:0*/ __PVT__beat_cnt;
        CData/*4:0*/ __PVT__count_b;
        CData/*0:0*/ __PVT__count_e;
        CData/*1:0*/ __PVT__count_step;
        CData/*0:0*/ __PVT__is_last_beat;
        CData/*0:0*/ __PVT__out_vld;
        CData/*1:0*/ __PVT__size_of_step;
        CData/*0:0*/ __PVT__is_batch_end;
        CData/*0:0*/ __PVT__is_cube_end;
        CData/*0:0*/ __PVT__is_elem_end;
        CData/*0:0*/ __PVT__is_half_step;
        CData/*0:0*/ __PVT__is_last_h;
        CData/*0:0*/ __PVT__is_last_step;
        CData/*0:0*/ __PVT__is_last_w;
        CData/*0:0*/ __PVT__is_line_end;
        CData/*0:0*/ __PVT__is_surf_end;
        CData/*0:0*/ __PVT__out_accept;
        CData/*0:0*/ __PVT__out_rdy;
        CData/*0:0*/ __PVT__roc_rd_pvld;
        CData/*0:0*/ __PVT__rod0_rd_prdy;
        CData/*0:0*/ __PVT__rod1_rd_prdy;
        CData/*0:0*/ __PVT__rod2_rd_prdy;
        CData/*0:0*/ __PVT__rod3_rd_prdy;
        CData/*1:0*/ __PVT__rod_sel;
        CData/*1:0*/ __PVT__size_of_beat;
        CData/*0:0*/ __VdfgRegularize_he389c3cf_0_0;
        CData/*0:0*/ __VdfgRegularize_he389c3cf_0_1;
        CData/*0:0*/ __PVT__u_rod0__DOT__nvdla_core_clk_mgated;
        CData/*0:0*/ __PVT__u_rod0__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_wr_busy_int;
        CData/*0:0*/ __PVT__u_rod0__DOT__wr_popping;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_wr_count;
        CData/*0:0*/ __PVT__u_rod0__DOT__wr_count_next_no_wr_popping;
        CData/*0:0*/ __PVT__u_rod0__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_rod0__DOT__wr_count_next_is_1;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_rd_prdy_d;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_rd_pvld_int;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_rd_pvld_p;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_rd_pvld_int_o;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_rd_count_p;
        CData/*0:0*/ __PVT__u_rod0__DOT__rd_count_p_next;
        CData/*0:0*/ __PVT__u_rod0__DOT__rd_req_next_o;
        CData/*0:0*/ __PVT__u_rod0__DOT__rod_rd_pvld_int_d;
        CData/*0:0*/ __PVT__u_rod0__DOT__rd_req_next;
        CData/*0:0*/ u_rod0__DOT____VdfgRegularize_hae7466ad_0_1;
        CData/*0:0*/ u_rod0__DOT____VdfgRegularize_hae7466ad_0_2;
        CData/*0:0*/ __PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
    };
    struct {
        CData/*0:0*/ __PVT__u_rod1__DOT__nvdla_core_clk_mgated;
        CData/*0:0*/ __PVT__u_rod1__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_wr_busy_int;
        CData/*0:0*/ __PVT__u_rod1__DOT__wr_popping;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_wr_count;
        CData/*0:0*/ __PVT__u_rod1__DOT__wr_count_next_no_wr_popping;
        CData/*0:0*/ __PVT__u_rod1__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_rod1__DOT__wr_count_next_is_1;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_rd_prdy_d;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_rd_pvld_int;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_rd_pvld_p;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_rd_pvld_int_o;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_rd_count_p;
        CData/*0:0*/ __PVT__u_rod1__DOT__rd_count_p_next;
        CData/*0:0*/ __PVT__u_rod1__DOT__rd_req_next_o;
        CData/*0:0*/ __PVT__u_rod1__DOT__rod_rd_pvld_int_d;
        CData/*0:0*/ __PVT__u_rod1__DOT__rd_req_next;
        CData/*0:0*/ u_rod1__DOT____VdfgRegularize_hae7466ad_0_1;
        CData/*0:0*/ u_rod1__DOT____VdfgRegularize_hae7466ad_0_2;
        CData/*0:0*/ __PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*0:0*/ __PVT__u_rod2__DOT__nvdla_core_clk_mgated;
        CData/*0:0*/ __PVT__u_rod2__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_wr_busy_int;
        CData/*0:0*/ __PVT__u_rod2__DOT__wr_popping;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_wr_count;
        CData/*0:0*/ __PVT__u_rod2__DOT__wr_count_next_no_wr_popping;
        CData/*0:0*/ __PVT__u_rod2__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_rod2__DOT__wr_count_next_is_1;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_rd_prdy_d;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_rd_pvld_int;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_rd_pvld_p;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_rd_pvld_int_o;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_rd_count_p;
        CData/*0:0*/ __PVT__u_rod2__DOT__rd_count_p_next;
        CData/*0:0*/ __PVT__u_rod2__DOT__rd_req_next_o;
        CData/*0:0*/ __PVT__u_rod2__DOT__rod_rd_pvld_int_d;
        CData/*0:0*/ __PVT__u_rod2__DOT__rd_req_next;
        CData/*0:0*/ u_rod2__DOT____VdfgRegularize_hae7466ad_0_1;
        CData/*0:0*/ u_rod2__DOT____VdfgRegularize_hae7466ad_0_2;
        CData/*0:0*/ __PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*0:0*/ __PVT__u_rod3__DOT__nvdla_core_clk_mgated;
        CData/*0:0*/ __PVT__u_rod3__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_wr_busy_int;
        CData/*0:0*/ __PVT__u_rod3__DOT__wr_popping;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_wr_count;
        CData/*0:0*/ __PVT__u_rod3__DOT__wr_count_next_no_wr_popping;
        CData/*0:0*/ __PVT__u_rod3__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_rod3__DOT__wr_count_next_is_1;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_rd_prdy_d;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_rd_pvld_int;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_rd_pvld_p;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_rd_pvld_int_o;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_rd_count_p;
        CData/*0:0*/ __PVT__u_rod3__DOT__rd_count_p_next;
        CData/*0:0*/ __PVT__u_rod3__DOT__rd_req_next_o;
        CData/*0:0*/ __PVT__u_rod3__DOT__rod_rd_pvld_int_d;
        CData/*0:0*/ __PVT__u_rod3__DOT__rd_req_next;
        CData/*0:0*/ u_rod3__DOT____VdfgRegularize_hae7466ad_0_1;
        CData/*0:0*/ u_rod3__DOT____VdfgRegularize_hae7466ad_0_2;
        CData/*0:0*/ __PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*0:0*/ __PVT__u_roc__DOT__nvdla_core_clk_mgated;
    };
    struct {
        CData/*0:0*/ __PVT__u_roc__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_wr_busy_int;
        CData/*0:0*/ __PVT__u_roc__DOT__wr_popping;
        CData/*2:0*/ __PVT__u_roc__DOT__roc_wr_count;
        CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
        CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_roc__DOT__wr_count_next_is_4;
        CData/*1:0*/ __PVT__u_roc__DOT__roc_wr_adr;
        CData/*1:0*/ __PVT__u_roc__DOT__roc_rd_adr;
        CData/*3:0*/ __PVT__u_roc__DOT__roc_rd_pd_p;
        CData/*1:0*/ __PVT__u_roc__DOT__rd_adr_next_popping;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_prdy_d;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_p;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_int_o;
        CData/*2:0*/ __PVT__u_roc__DOT__roc_rd_count_p;
        CData/*2:0*/ __PVT__u_roc__DOT__rd_count_p_next;
        CData/*3:0*/ __PVT__u_roc__DOT__roc_rd_pd_o;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_d;
        CData/*0:0*/ u_roc__DOT____VdfgRegularize_hd55967b3_0_1;
        CData/*0:0*/ u_roc__DOT____VdfgRegularize_hd55967b3_0_3;
        CData/*0:0*/ __PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*2:0*/ __PVT__u_roc__DOT__ram__DOT__ra;
        CData/*3:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff0;
        CData/*3:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff1;
        CData/*3:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff2;
        CData/*3:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff3;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_valid;
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_576;
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_578;
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_580;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3076;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3083;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3495;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3498;
        CData/*0:0*/ __Vdly__u_rod0__DOT__rod_rd_pvld_int;
        CData/*0:0*/ __Vdly__u_rod1__DOT__rod_rd_pvld_int;
        CData/*0:0*/ __Vdly__u_rod2__DOT__rod_rd_pvld_int;
        CData/*0:0*/ __Vdly__u_rod3__DOT__rod_rd_pvld_int;
        CData/*1:0*/ __Vdly__u_roc__DOT__roc_wr_adr;
        VL_IN16(reg2dp_channel,12,0);
        VL_IN16(reg2dp_height,12,0);
        VL_IN16(reg2dp_width,12,0);
        SData/*8:0*/ __PVT__count_c;
        SData/*12:0*/ __PVT__count_h;
        SData/*12:0*/ __PVT__count_w;
        SData/*8:0*/ __PVT__size_of_surf;
        VL_IN(pwrbus_ram_pd,31,0);
        VL_INW(rod0_wr_pd,255,0,8);
        VL_INW(rod1_wr_pd,255,0,8);
        VL_INW(rod2_wr_pd,255,0,8);
        VL_INW(rod3_wr_pd,255,0,8);
        VL_OUTW(sdp_brdma2dp_pd,256,0,9);
        VlWide<8>/*255:0*/ __PVT__rod0_rd_pd;
        VlWide<8>/*255:0*/ __PVT__rod1_rd_pd;
        VlWide<8>/*255:0*/ __PVT__rod2_rd_pd;
        VlWide<8>/*255:0*/ __PVT__rod3_rd_pd;
        VlWide<8>/*255:0*/ __PVT__u_rod0__DOT__rod_rd_pd_p;
        VlWide<8>/*255:0*/ __PVT__u_rod0__DOT__rod_rd_pd_o;
        VlWide<8>/*255:0*/ __PVT__u_rod0__DOT__ram__DOT__ram_ff0;
        VlWide<8>/*255:0*/ __PVT__u_rod1__DOT__rod_rd_pd_p;
        VlWide<8>/*255:0*/ __PVT__u_rod1__DOT__rod_rd_pd_o;
        VlWide<8>/*255:0*/ __PVT__u_rod1__DOT__ram__DOT__ram_ff0;
        VlWide<8>/*255:0*/ __PVT__u_rod2__DOT__rod_rd_pd_p;
    };
    struct {
        VlWide<8>/*255:0*/ __PVT__u_rod2__DOT__rod_rd_pd_o;
        VlWide<8>/*255:0*/ __PVT__u_rod2__DOT__ram__DOT__ram_ff0;
        VlWide<8>/*255:0*/ __PVT__u_rod3__DOT__rod_rd_pd_p;
        VlWide<8>/*255:0*/ __PVT__u_rod3__DOT__rod_rd_pd_o;
        VlWide<8>/*255:0*/ __PVT__u_rod3__DOT__ram__DOT__ram_ff0;
        VlWide<9>/*256:0*/ __PVT__pipe_p1__DOT__p1_pipe_data;
        VlWide<9>/*256:0*/ __Vdly__pipe_p1__DOT__p1_pipe_data;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_SDP_BRDMA_EG_ro(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_SDP_BRDMA_EG_ro();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_SDP_BRDMA_EG_ro);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
