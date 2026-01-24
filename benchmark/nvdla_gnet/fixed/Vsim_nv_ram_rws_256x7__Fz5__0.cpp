// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_256x7__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rws_256x7__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0;
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 = 0;
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000007fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000007fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                           == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)))))));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                     | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                         == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                        & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x7eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | (IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 1U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 1U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x7dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 1U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 2U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 2U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x7bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 2U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 3U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 3U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x77U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 3U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 4U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 4U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x6fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 4U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 5U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 5U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x5fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 5U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 6U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 6U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 6U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6 = 0U;
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__wr_reserving_and_not_bypassing)));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__we_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0;
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__5(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__re_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__we_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__8(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__RA;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hf7a46379_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h2ac4e62a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h8677cf3c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hd8796a29_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hd25f4b33_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h6b82ef6d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h3347d2c4_0;

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
    __Vtableidx1 = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_6 
        = Vsim__ConstPool__TABLE_hf7a46379_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_5 
        = Vsim__ConstPool__TABLE_h2ac4e62a_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_4 
        = Vsim__ConstPool__TABLE_h8677cf3c_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_3 
        = Vsim__ConstPool__TABLE_hd8796a29_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_2 
        = Vsim__ConstPool__TABLE_hd25f4b33_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_1 
        = Vsim__ConstPool__TABLE_h6b82ef6d_0[__Vtableidx1];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_0 
        = Vsim__ConstPool__TABLE_h3347d2c4_0[__Vtableidx1];
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0 
            = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0 = 1U;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__12(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat) 
                     >> 1U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1 = 1U;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__13(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat) 
                     >> 2U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2 = 1U;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__14(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat) 
                     >> 3U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3 = 1U;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__15(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat) 
                     >> 4U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4 = 1U;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__16(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat) 
                     >> 5U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5 = 1U;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__17(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat) 
                     >> 6U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6 = 1U;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__18(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__19(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__20(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__21(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x7eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__22(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x7dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) 
              << 1U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__23(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x7bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) 
              << 2U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__24(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x77U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) 
              << 3U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__25(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x6fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) 
              << 4U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__26(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x5fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) 
              << 5U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__27(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__27\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) 
              << 6U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__28(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0] 
            = ((0x7eU & vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1] 
            = ((0x7dU & vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1) 
                  << 1U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2] 
            = ((0x7bU & vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2) 
                  << 2U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3] 
            = ((0x77U & vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3) 
                  << 3U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4] 
            = ((0x6fU & vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5] 
            = ((0x5fU & vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5) 
                  << 5U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6] 
            = ((0x3fU & vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6) 
                  << 6U));
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__29(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__29\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__30(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__30\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA;
    }
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__re_lat));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat];
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__5(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000007fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_pd));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__access_en_r)))
            : (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig)));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__8(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000007fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                           == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)))))));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0;
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 = 0;
    // Body
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                     | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                         == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                        & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x7eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | (IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 1U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 1U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x7dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 1U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 2U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 2U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x7bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 2U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 3U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 3U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x77U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 3U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 4U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 4U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x6fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 4U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 5U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 5U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x5fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 5U));
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 
        = ((1U & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff) 
                      >> 6U) | (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat)) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk))))) 
           && (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr) 
                     >> 6U)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
           | ((IData)(r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0) 
              << 6U));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_pd_p)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__12(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__wr_reserving_and_not_bypassing));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__wr_reserving_and_not_bypassing)));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
    __Vtableidx2 = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_6 
        = Vsim__ConstPool__TABLE_hf7a46379_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_5 
        = Vsim__ConstPool__TABLE_h2ac4e62a_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_4 
        = Vsim__ConstPool__TABLE_h8677cf3c_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_3 
        = Vsim__ConstPool__TABLE_hd8796a29_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_2 
        = Vsim__ConstPool__TABLE_hd25f4b33_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_1 
        = Vsim__ConstPool__TABLE_h6b82ef6d_0[__Vtableidx2];
    vlSelfRef.r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_0 
        = Vsim__ConstPool__TABLE_h3347d2c4_0[__Vtableidx2];
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_pd));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__access_en_r)))
            : (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig)));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_pd_p)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr));
}

void Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__12(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__wr_reserving_and_not_bypassing));
}
