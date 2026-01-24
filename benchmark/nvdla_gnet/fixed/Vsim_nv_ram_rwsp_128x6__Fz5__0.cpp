// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rwsp_128x6__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0;
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 = 0;
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000003fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000003fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                           == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)))))));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                     | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                         == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                        & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | (IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 1U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 1U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 1U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 2U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 2U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 2U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 3U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 3U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x37U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 3U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 4U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 4U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x2fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 4U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 5U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 5U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x1fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 5U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5 = 0U;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__we_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__re_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__7(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0) 
                 >> 4U));
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0) 
                 >> 5U));
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0) 
                 >> 3U));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_he6bd8b03_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h881e9653_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h56c190ed_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h8c6a59f0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h4d193276_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h66672509_0;

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
    __Vtableidx1 = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_5 
        = Vsim__ConstPool__TABLE_he6bd8b03_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_4 
        = Vsim__ConstPool__TABLE_h881e9653_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_3 
        = Vsim__ConstPool__TABLE_h56c190ed_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_2 
        = Vsim__ConstPool__TABLE_h8c6a59f0_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_1 
        = Vsim__ConstPool__TABLE_h4d193276_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_0 
        = Vsim__ConstPool__TABLE_h66672509_0[__Vtableidx1];
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__12(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelfRef.r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__13(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0 
            = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat));
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0 = 1U;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__14(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat) 
                     >> 1U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1 = 1U;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__15(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat) 
                     >> 2U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2 = 1U;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__16(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat) 
                     >> 3U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3 = 1U;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__17(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat) 
                     >> 4U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4 = 1U;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__18(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat) 
                     >> 5U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5 = 1U;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__19(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p = 0U;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__20(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__re_q));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__21(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x3eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__22(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x3dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk) 
              << 1U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__23(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x3bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk) 
              << 2U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__24(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x37U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk) 
              << 3U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__25(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x2fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk) 
              << 4U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__26(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x1fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk) 
              << 5U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__27(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__27\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__28(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0] 
            = ((0x3eU & vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1] 
            = ((0x3dU & vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1) 
                  << 1U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2] 
            = ((0x3bU & vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2) 
                  << 2U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3] 
            = ((0x37U & vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3) 
                  << 3U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4] 
            = ((0x2fU & vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5] 
            = ((0x1fU & vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5) 
                  << 5U));
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__29(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__29\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA;
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__30(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__30\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                    ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_data)
                    : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_data_in));
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__32(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__32\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0 
        = ((((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_5) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_4) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_3) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_2) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_0))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat];
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__33(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__33\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000003fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_data)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_data_in));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__7(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000003fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                           == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)))))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0;
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 = 0;
    // Body
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                     | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                         == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                        & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | (IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 1U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 1U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 1U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 2U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 2U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 2U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 3U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 3U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x37U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 3U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 4U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 4U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x2fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 4U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 5U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 5U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x1fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 5U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Ra_reg_r0)
                               : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr) 
                                        + (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__11(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_enable));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0;
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 = 0;
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000003fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000003fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                           == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)))))));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                     | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                         == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                        & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | (IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 1U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 1U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 1U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 2U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 2U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 2U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 3U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 3U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x37U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 3U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 4U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 4U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x2fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 4U));
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 5U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 5U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x1fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0) 
              << 5U));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
    __Vtableidx2 = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_5 
        = Vsim__ConstPool__TABLE_he6bd8b03_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_4 
        = Vsim__ConstPool__TABLE_h881e9653_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_3 
        = Vsim__ConstPool__TABLE_h56c190ed_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_2 
        = Vsim__ConstPool__TABLE_h8c6a59f0_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_1 
        = Vsim__ConstPool__TABLE_h4d193276_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_0 
        = Vsim__ConstPool__TABLE_h66672509_0[__Vtableidx2];
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__28(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                    ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_data)
                    : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_data_in));
    }
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__31(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__31\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_data)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_data_in));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Ra_reg_r0)
                               : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr) 
                                        + (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore))));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_enable));
}

void Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__11(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving));
}
