// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    CData/*0:0*/ u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                          >> 2U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__dfifo_wr_vld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                        >> 2U));
    vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__in_cmd_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd0_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd0_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__dfifo0_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)) 
                                          & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U]));
    vlSelfRef.__PVT__dfifo1_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                                          & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                             >> 1U)));
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o));
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving));
    vlSelfRef.__PVT__large_req_grow = (1U & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                              >> 5U) 
                                             & vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00001fffU 
                                                & vlSelfRef.__PVT__in_cmd_vld_pd[2U])));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping = ((~ (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping = ((~ (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__in_dat_last = ((IData)(vlSelfRef.__PVT__in_dat_cnt) 
                                    == (0x00001fffU 
                                        & (VL_SHIFTR_III(13,13,32, 
                                                         (0x00001fffU 
                                                          & vlSelfRef.__PVT__in_cmd_vld_pd[2U]), 1U) 
                                           + (IData)(vlSelfRef.__PVT__large_req_grow))));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__in_dat0_dis = (vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                    & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                        >> 5U) & (IData)(vlSelfRef.__PVT__in_dat_last)));
    vlSelfRef.__PVT__in_dat1_dis = ((1U & vlSelfRef.__PVT__in_cmd_vld_pd[2U])
                                     ? ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                         >> 5U) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__in_dat_cnt)))
                                     : ((0x00000020U 
                                         & vlSelfRef.__PVT__in_cmd_vld_pd[0U])
                                         ? (0U == (IData)(vlSelfRef.__PVT__in_dat_cnt))
                                         : (IData)(vlSelfRef.__PVT__in_dat_last)));
    if (vlSelfRef.__PVT__is_single_tran) {
        vlSelfRef.__PVT__ftran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
        vlSelfRef.__PVT__ltran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
    } else {
        vlSelfRef.__PVT__ftran_size = (7U & ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                   >> 5U))));
        vlSelfRef.__PVT__ltran_size = (7U & (((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               << 0x0000001bU) 
                                              | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 >> 5U)) 
                                             + vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    }
    vlSelfRef.__PVT__mtran_num = (0x00001fffU & (((
                                                   vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                                   - (IData)(vlSelfRef.__PVT__ftran_size)) 
                                                  - (IData)(vlSelfRef.__PVT__ltran_size)) 
                                                 - (IData)(1U)));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x000007ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x000003ffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__in_dat0_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__in_dat1_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__dfifo1_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat0_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat0_pvld))));
    vlSelfRef.__PVT__dfifo0_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat1_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat1_pvld))));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == ((IData)(vlSelfRef.__PVT__req_num) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__out_cmd_inc = ((IData)(vlSelfRef.__PVT__is_ltran) 
                                    & ((0U == (IData)(vlSelfRef.__PVT__req_count)) 
                                       & (IData)(vlSelfRef.__PVT__large_req_grow)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__req_count))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__req_count)) 
                & ((IData)(vlSelfRef.__PVT__req_count) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__is_ltran) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ltran_size;
    }
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_count) 
                                     == (3U & (((IData)(vlSelfRef.__PVT__out_size) 
                                                >> 1U) 
                                               + (IData)(vlSelfRef.__PVT__out_cmd_inc))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__0(Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    CData/*0:0*/ u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                          >> 2U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__dfifo_wr_vld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                        >> 2U));
    vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__in_cmd_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd1_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd1_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__dfifo0_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)) 
                                          & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U]));
    vlSelfRef.__PVT__dfifo1_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                                          & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                             >> 1U)));
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o));
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving));
    vlSelfRef.__PVT__large_req_grow = (1U & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                              >> 5U) 
                                             & vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00001fffU 
                                                & vlSelfRef.__PVT__in_cmd_vld_pd[2U])));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping = ((~ (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping = ((~ (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__in_dat_last = ((IData)(vlSelfRef.__PVT__in_dat_cnt) 
                                    == (0x00001fffU 
                                        & (VL_SHIFTR_III(13,13,32, 
                                                         (0x00001fffU 
                                                          & vlSelfRef.__PVT__in_cmd_vld_pd[2U]), 1U) 
                                           + (IData)(vlSelfRef.__PVT__large_req_grow))));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__in_dat0_dis = (vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                    & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                        >> 5U) & (IData)(vlSelfRef.__PVT__in_dat_last)));
    vlSelfRef.__PVT__in_dat1_dis = ((1U & vlSelfRef.__PVT__in_cmd_vld_pd[2U])
                                     ? ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                         >> 5U) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__in_dat_cnt)))
                                     : ((0x00000020U 
                                         & vlSelfRef.__PVT__in_cmd_vld_pd[0U])
                                         ? (0U == (IData)(vlSelfRef.__PVT__in_dat_cnt))
                                         : (IData)(vlSelfRef.__PVT__in_dat_last)));
    if (vlSelfRef.__PVT__is_single_tran) {
        vlSelfRef.__PVT__ftran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
        vlSelfRef.__PVT__ltran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
    } else {
        vlSelfRef.__PVT__ftran_size = (7U & ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                   >> 5U))));
        vlSelfRef.__PVT__ltran_size = (7U & (((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               << 0x0000001bU) 
                                              | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 >> 5U)) 
                                             + vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    }
    vlSelfRef.__PVT__mtran_num = (0x00001fffU & (((
                                                   vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                                   - (IData)(vlSelfRef.__PVT__ftran_size)) 
                                                  - (IData)(vlSelfRef.__PVT__ltran_size)) 
                                                 - (IData)(1U)));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x000007ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x000003ffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__in_dat0_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__in_dat1_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__dfifo1_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat0_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat0_pvld))));
    vlSelfRef.__PVT__dfifo0_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat1_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat1_pvld))));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == ((IData)(vlSelfRef.__PVT__req_num) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__out_cmd_inc = ((IData)(vlSelfRef.__PVT__is_ltran) 
                                    & ((0U == (IData)(vlSelfRef.__PVT__req_count)) 
                                       & (IData)(vlSelfRef.__PVT__large_req_grow)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__req_count))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__req_count)) 
                & ((IData)(vlSelfRef.__PVT__req_count) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__is_ltran) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ltran_size;
    }
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_count) 
                                     == (3U & (((IData)(vlSelfRef.__PVT__out_size) 
                                                >> 1U) 
                                               + (IData)(vlSelfRef.__PVT__out_cmd_inc))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__0(Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    CData/*0:0*/ u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                          >> 2U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__dfifo_wr_vld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                        >> 2U));
    vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__in_cmd_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd2_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd2_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__dfifo0_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)) 
                                          & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U]));
    vlSelfRef.__PVT__dfifo1_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                                          & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                             >> 1U)));
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o));
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving));
    vlSelfRef.__PVT__large_req_grow = (1U & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                              >> 5U) 
                                             & vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00001fffU 
                                                & vlSelfRef.__PVT__in_cmd_vld_pd[2U])));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping = ((~ (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping = ((~ (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__in_dat_last = ((IData)(vlSelfRef.__PVT__in_dat_cnt) 
                                    == (0x00001fffU 
                                        & (VL_SHIFTR_III(13,13,32, 
                                                         (0x00001fffU 
                                                          & vlSelfRef.__PVT__in_cmd_vld_pd[2U]), 1U) 
                                           + (IData)(vlSelfRef.__PVT__large_req_grow))));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__in_dat0_dis = (vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                    & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                        >> 5U) & (IData)(vlSelfRef.__PVT__in_dat_last)));
    vlSelfRef.__PVT__in_dat1_dis = ((1U & vlSelfRef.__PVT__in_cmd_vld_pd[2U])
                                     ? ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                         >> 5U) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__in_dat_cnt)))
                                     : ((0x00000020U 
                                         & vlSelfRef.__PVT__in_cmd_vld_pd[0U])
                                         ? (0U == (IData)(vlSelfRef.__PVT__in_dat_cnt))
                                         : (IData)(vlSelfRef.__PVT__in_dat_last)));
    if (vlSelfRef.__PVT__is_single_tran) {
        vlSelfRef.__PVT__ftran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
        vlSelfRef.__PVT__ltran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
    } else {
        vlSelfRef.__PVT__ftran_size = (7U & ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                   >> 5U))));
        vlSelfRef.__PVT__ltran_size = (7U & (((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               << 0x0000001bU) 
                                              | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 >> 5U)) 
                                             + vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    }
    vlSelfRef.__PVT__mtran_num = (0x00001fffU & (((
                                                   vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                                   - (IData)(vlSelfRef.__PVT__ftran_size)) 
                                                  - (IData)(vlSelfRef.__PVT__ltran_size)) 
                                                 - (IData)(1U)));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x000007ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x000003ffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__in_dat0_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__in_dat1_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__dfifo1_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat0_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat0_pvld))));
    vlSelfRef.__PVT__dfifo0_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat1_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat1_pvld))));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == ((IData)(vlSelfRef.__PVT__req_num) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__out_cmd_inc = ((IData)(vlSelfRef.__PVT__is_ltran) 
                                    & ((0U == (IData)(vlSelfRef.__PVT__req_count)) 
                                       & (IData)(vlSelfRef.__PVT__large_req_grow)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__req_count))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__req_count)) 
                & ((IData)(vlSelfRef.__PVT__req_count) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__is_ltran) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ltran_size;
    }
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_count) 
                                     == (3U & (((IData)(vlSelfRef.__PVT__out_size) 
                                                >> 1U) 
                                               + (IData)(vlSelfRef.__PVT__out_cmd_inc))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__0(Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    CData/*0:0*/ u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                          >> 2U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__dfifo_wr_vld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                        >> 2U));
    vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__in_cmd_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd3_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd3_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__dfifo0_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)) 
                                          & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U]));
    vlSelfRef.__PVT__dfifo1_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                                          & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                             >> 1U)));
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o));
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving));
    vlSelfRef.__PVT__large_req_grow = (1U & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                              >> 5U) 
                                             & vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00001fffU 
                                                & vlSelfRef.__PVT__in_cmd_vld_pd[2U])));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping = ((~ (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping = ((~ (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__in_dat_last = ((IData)(vlSelfRef.__PVT__in_dat_cnt) 
                                    == (0x00001fffU 
                                        & (VL_SHIFTR_III(13,13,32, 
                                                         (0x00001fffU 
                                                          & vlSelfRef.__PVT__in_cmd_vld_pd[2U]), 1U) 
                                           + (IData)(vlSelfRef.__PVT__large_req_grow))));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__in_dat0_dis = (vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                    & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                        >> 5U) & (IData)(vlSelfRef.__PVT__in_dat_last)));
    vlSelfRef.__PVT__in_dat1_dis = ((1U & vlSelfRef.__PVT__in_cmd_vld_pd[2U])
                                     ? ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                         >> 5U) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__in_dat_cnt)))
                                     : ((0x00000020U 
                                         & vlSelfRef.__PVT__in_cmd_vld_pd[0U])
                                         ? (0U == (IData)(vlSelfRef.__PVT__in_dat_cnt))
                                         : (IData)(vlSelfRef.__PVT__in_dat_last)));
    if (vlSelfRef.__PVT__is_single_tran) {
        vlSelfRef.__PVT__ftran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
        vlSelfRef.__PVT__ltran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
    } else {
        vlSelfRef.__PVT__ftran_size = (7U & ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                   >> 5U))));
        vlSelfRef.__PVT__ltran_size = (7U & (((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               << 0x0000001bU) 
                                              | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 >> 5U)) 
                                             + vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    }
    vlSelfRef.__PVT__mtran_num = (0x00001fffU & (((
                                                   vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                                   - (IData)(vlSelfRef.__PVT__ftran_size)) 
                                                  - (IData)(vlSelfRef.__PVT__ltran_size)) 
                                                 - (IData)(1U)));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x000007ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x000003ffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__in_dat0_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__in_dat1_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__dfifo1_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat0_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat0_pvld))));
    vlSelfRef.__PVT__dfifo0_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat1_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat1_pvld))));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == ((IData)(vlSelfRef.__PVT__req_num) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__out_cmd_inc = ((IData)(vlSelfRef.__PVT__is_ltran) 
                                    & ((0U == (IData)(vlSelfRef.__PVT__req_count)) 
                                       & (IData)(vlSelfRef.__PVT__large_req_grow)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__req_count))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__req_count)) 
                & ((IData)(vlSelfRef.__PVT__req_count) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__is_ltran) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ltran_size;
    }
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_count) 
                                     == (3U & (((IData)(vlSelfRef.__PVT__out_size) 
                                                >> 1U) 
                                               + (IData)(vlSelfRef.__PVT__out_cmd_inc))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__0(Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    CData/*0:0*/ u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4;
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 0;
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count) {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[7U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__ipipe_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__ipipe_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__ipipe_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__ipipe_pd_p[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        vlSelfRef.__PVT__ipipe_pd_p[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        vlSelfRef.__PVT__ipipe_pd_p[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        vlSelfRef.__PVT__ipipe_pd_p[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        vlSelfRef.__PVT__ipipe_pd_p[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        vlSelfRef.__PVT__ipipe_pd_p[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        vlSelfRef.__PVT__ipipe_pd_p[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        vlSelfRef.__PVT__ipipe_pd_p[0x00000010U] = 
            vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__ipipe_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                          >> 2U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__dfifo_wr_vld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                        >> 2U));
    vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__in_cmd_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd4_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd4_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__dfifo0_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)) 
                                          & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U]));
    vlSelfRef.__PVT__dfifo1_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                                          & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                             >> 1U)));
    u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o));
    u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving));
    vlSelfRef.__PVT__large_req_grow = (1U & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                              >> 5U) 
                                             & vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00001fffU 
                                                & vlSelfRef.__PVT__in_cmd_vld_pd[2U])));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping = ((~ (IData)(u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping = ((~ (IData)(u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__in_dat_last = ((IData)(vlSelfRef.__PVT__in_dat_cnt) 
                                    == (0x00001fffU 
                                        & (VL_SHIFTR_III(13,13,32, 
                                                         (0x00001fffU 
                                                          & vlSelfRef.__PVT__in_cmd_vld_pd[2U]), 1U) 
                                           + (IData)(vlSelfRef.__PVT__large_req_grow))));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__in_dat0_dis = (vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                    & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                        >> 5U) & (IData)(vlSelfRef.__PVT__in_dat_last)));
    vlSelfRef.__PVT__in_dat1_dis = ((1U & vlSelfRef.__PVT__in_cmd_vld_pd[2U])
                                     ? ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                         >> 5U) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__in_dat_cnt)))
                                     : ((0x00000020U 
                                         & vlSelfRef.__PVT__in_cmd_vld_pd[0U])
                                         ? (0U == (IData)(vlSelfRef.__PVT__in_dat_cnt))
                                         : (IData)(vlSelfRef.__PVT__in_dat_last)));
    if (vlSelfRef.__PVT__is_single_tran) {
        vlSelfRef.__PVT__ftran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
        vlSelfRef.__PVT__ltran_size = (7U & vlSelfRef.__PVT__in_cmd_vld_pd[2U]);
    } else {
        vlSelfRef.__PVT__ftran_size = (7U & ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                   >> 5U))));
        vlSelfRef.__PVT__ltran_size = (7U & (((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               << 0x0000001bU) 
                                              | (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                                 >> 5U)) 
                                             + vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    }
    vlSelfRef.__PVT__mtran_num = (0x00001fffU & (((
                                                   vlSelfRef.__PVT__in_cmd_vld_pd[2U] 
                                                   - (IData)(vlSelfRef.__PVT__ftran_size)) 
                                                  - (IData)(vlSelfRef.__PVT__ltran_size)) 
                                                 - (IData)(1U)));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x000007ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x000003ffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__in_dat0_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__in_dat1_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__dfifo1_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat0_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat0_pvld))));
    vlSelfRef.__PVT__dfifo0_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat1_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat1_pvld))));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == ((IData)(vlSelfRef.__PVT__req_num) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__out_cmd_inc = ((IData)(vlSelfRef.__PVT__is_ltran) 
                                    & ((0U == (IData)(vlSelfRef.__PVT__req_count)) 
                                       & (IData)(vlSelfRef.__PVT__large_req_grow)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__req_count))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__req_count)) 
                & ((IData)(vlSelfRef.__PVT__req_count) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__is_ltran) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ltran_size;
    }
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_count) 
                                     == (3U & (((IData)(vlSelfRef.__PVT__out_size) 
                                                >> 1U) 
                                               + (IData)(vlSelfRef.__PVT__out_cmd_inc))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___ctor_var_reset(Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_WRITE_IG_bpt___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->dma2bpt_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3467715908140493531ull);
    vlSelf->dma2bpt_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1160336375583105649ull);
    VL_SCOPED_RAND_RESET_W(515, vlSelf->dma2bpt_req_pd, __VscopeHash, 6983273954774231356ull);
    vlSelf->bpt2arb_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9377302303884003403ull);
    vlSelf->bpt2arb_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11772899427396920426ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->bpt2arb_cmd_pd, __VscopeHash, 17637416212787930335ull);
    vlSelf->bpt2arb_dat_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16631391820541705366ull);
    vlSelf->bpt2arb_dat_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11591670204890841132ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->bpt2arb_dat_pd, __VscopeHash, 13182164174289578016ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->axid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3075644639379531176ull);
    vlSelf->__PVT__beat_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18219414679562379157ull);
    vlSelf->__PVT__cmd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5847278361250794325ull);
    vlSelf->__PVT__dat_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17995163301511542386ull);
    vlSelf->__PVT__in_dat1_dis = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1710111371652777511ull);
    vlSelf->__PVT__in_dat_cnt = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7683870902594476575ull);
    vlSelf->__PVT__out_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3882636790763285487ull);
    vlSelf->__PVT__out_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16633456406362071362ull);
    vlSelf->__PVT__req_count = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2122971235715564629ull);
    vlSelf->__PVT__req_num = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 769123510778897808ull);
    vlSelf->__PVT__bpt2arb_cmd_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14660772592545222552ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dfifo0_rd_pd, __VscopeHash, 9972490863247453686ull);
    vlSelf->__PVT__dfifo0_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16521435874531869795ull);
    vlSelf->__PVT__dfifo0_wr_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 341058257007309653ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dfifo1_rd_pd, __VscopeHash, 18238394261458252464ull);
    vlSelf->__PVT__dfifo1_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9421531350992530649ull);
    vlSelf->__PVT__dfifo1_wr_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2615048487100529390ull);
    vlSelf->__PVT__dfifo_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3868724489418777301ull);
    vlSelf->__PVT__dfifo_wr_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12953819667901481433ull);
    vlSelf->__PVT__ftran_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11540470952583406881ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->__PVT__in_cmd_vld_pd, __VscopeHash, 3944242585455137715ull);
    vlSelf->__PVT__in_dat0_dis = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9083185390025537572ull);
    vlSelf->__PVT__in_dat0_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1322915921790278542ull);
    vlSelf->__PVT__in_dat1_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 546815313098684041ull);
    vlSelf->__PVT__in_dat_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15843725640545370620ull);
    vlSelf->__PVT__ipipe_cmd_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11715932492549408887ull);
    vlSelf->__PVT__ipipe_cmd_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4859833201934227514ull);
    VL_SCOPED_RAND_RESET_W(515, vlSelf->__PVT__ipipe_pd_p, __VscopeHash, 15735694247808069014ull);
    vlSelf->__PVT__ipipe_vld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2747864989005093611ull);
    vlSelf->__PVT__is_last_beat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9073342863928015582ull);
    vlSelf->__PVT__is_ltran = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1333873395854169893ull);
    vlSelf->__PVT__is_single_tran = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 442094334448683738ull);
    vlSelf->__PVT__large_req_grow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2179619059364737520ull);
    vlSelf->__PVT__ltran_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6684555247941134832ull);
    vlSelf->__PVT__mtran_num = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4185756071223660292ull);
    vlSelf->__PVT__out_cmd_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8558175489189631845ull);
    VL_SCOPED_RAND_RESET_W(515, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data, __VscopeHash, 17633712268433854607ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10171602451986936655ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275116386423144664ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7226444700603028057ull);
    VL_SCOPED_RAND_RESET_W(515, vlSelf->__PVT__pipe_p1__DOT__p1_skid_data, __VscopeHash, 8535702031018576436ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4974325833875491042ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6267025170677596381ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15406598178688267158ull);
    VL_SCOPED_RAND_RESET_W(515, vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data, __VscopeHash, 2436424408303884369ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12085065417477965883ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8178276993869393565ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4219242389160901449ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6100359491393695578ull);
    VL_SCOPED_RAND_RESET_W(515, vlSelf->__PVT__pipe_p2__DOT__p2_skid_data, __VscopeHash, 10509987700508661667ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12538433609464182378ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14983747647637505860ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13968111427139279237ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16066017874771447499ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data, __VscopeHash, 1719927844608622197ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15736517410706576585ull);
    vlSelf->__PVT__u_dfifo0__DOT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8469678791619419948ull);
    vlSelf->__PVT__u_dfifo0__DOT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13883053377092414503ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 343060490954234584ull);
    vlSelf->__PVT__u_dfifo0__DOT__wr_busy_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 356459255192790611ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_wr_busy_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3323476846819478307ull);
    vlSelf->__PVT__u_dfifo0__DOT__wr_busy_in_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17616541022786986562ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10663735676237789125ull);
    vlSelf->__PVT__u_dfifo0__DOT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3652301694164346882ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_wr_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195087158091993184ull);
    vlSelf->__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5634559160689369569ull);
    vlSelf->__PVT__u_dfifo0__DOT__wr_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12930374863747423679ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_pd_p, __VscopeHash, 2095888684117273281ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3444917831931190178ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11833444512372743918ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15849656696937551659ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9488290513996143207ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_count_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8872725976223641954ull);
    vlSelf->__PVT__u_dfifo0__DOT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15474061492868810998ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_pd_o, __VscopeHash, 6035972057263871162ull);
    vlSelf->__PVT__u_dfifo0__DOT__rd_req_next_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2927551522883594075ull);
    vlSelf->__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13388624856490002875ull);
    vlSelf->__PVT__u_dfifo0__DOT__rd_req_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3898957862119744272ull);
    vlSelf->__PVT__u_dfifo0__DOT__prand_inst2__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10073039127109462932ull);
    vlSelf->__PVT__u_dfifo0__DOT__prand_inst3__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14975453051057076608ull);
    vlSelf->u_dfifo0__DOT____VdfgRegularize_h287e8fcb_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9779678411894682448ull);
    vlSelf->__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15394075040736946639ull);
    vlSelf->__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12594010581065147425ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo0__DOT__ram__DOT__di_d, __VscopeHash, 8884489644853486705ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0, __VscopeHash, 481316757169378041ull);
    vlSelf->__PVT__u_dfifo1__DOT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14213538485833453205ull);
    vlSelf->__PVT__u_dfifo1__DOT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10879327392463461912ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8029014423818881005ull);
    vlSelf->__PVT__u_dfifo1__DOT__wr_busy_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12961980615354377464ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_wr_busy_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4229686367534967436ull);
    vlSelf->__PVT__u_dfifo1__DOT__wr_busy_in_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2574049100273821346ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6053238417987493908ull);
    vlSelf->__PVT__u_dfifo1__DOT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2583208788592579633ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_wr_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6876663730680957900ull);
    vlSelf->__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2130811967210494879ull);
    vlSelf->__PVT__u_dfifo1__DOT__wr_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 840102818287203054ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_pd_p, __VscopeHash, 6336393705306293833ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11107521961370600824ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7048071335959389984ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 31776693216514913ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6392887938574543630ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_count_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1479759909384477093ull);
    vlSelf->__PVT__u_dfifo1__DOT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8552191599826757362ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_pd_o, __VscopeHash, 13216535229429383392ull);
    vlSelf->__PVT__u_dfifo1__DOT__rd_req_next_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1099237656309159879ull);
    vlSelf->__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10122785627529970919ull);
    vlSelf->__PVT__u_dfifo1__DOT__rd_req_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3470249138312820485ull);
    vlSelf->__PVT__u_dfifo1__DOT__prand_inst2__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2085553590728594858ull);
    vlSelf->__PVT__u_dfifo1__DOT__prand_inst3__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1070188867527439518ull);
    vlSelf->u_dfifo1__DOT____VdfgRegularize_h287e8fcb_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11994490682023962946ull);
    vlSelf->__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11554056370765649891ull);
    vlSelf->__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7997704824883199031ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo1__DOT__ram__DOT__di_d, __VscopeHash, 4534174895889603489ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0, __VscopeHash, 5050260070694190752ull);
    vlSelf->__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6979734533142670106ull);
    vlSelf->__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9692451325677936637ull);
    vlSelf->__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7306908123464792466ull);
    vlSelf->__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17060134785977257660ull);
    VL_SCOPED_RAND_RESET_W(515, vlSelf->__Vdly__pipe_p2__DOT__p2_pipe_data, __VscopeHash, 1197535773998226828ull);
}
