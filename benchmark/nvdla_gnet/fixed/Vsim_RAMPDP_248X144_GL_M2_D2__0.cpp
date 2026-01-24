// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_RAMPDP_248X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__nvdla_gated_clk) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_clk_gate_core_0_432__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][0U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][1U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][2U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][3U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][4U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][0U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][1U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][2U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][3U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][4U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__ADR = (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                        & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                       | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK)))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ITOP__DOT__empadd = (IData)((0xf8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.__PVT__ITOP__DOT__ADR))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                             & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
                                             & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
         & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
            & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))))) {
        vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[0U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[1U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[2U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[3U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[4U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U];
        if ((0x7bU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                                      >> 1U)))) {
            vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[0U] 
                = vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[0U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[1U] 
                = vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[1U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[2U] 
                = vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[2U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[3U] 
                = vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[3U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[4U] 
                = vlSelfRef.ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0[4U];
            vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                                  >> 1U));
            vlSelfRef.__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
        }
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__1(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ITOP__DOT__iow1__DOT__arr__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
         & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
            & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)))) {
        vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[0U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[1U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[2U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[3U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[4U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U];
        if ((0x7bU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                                      >> 1U)))) {
            vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[0U] 
                = vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[0U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[1U] 
                = vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[1U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[2U] 
                = vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[2U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[3U] 
                = vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[3U];
            vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[4U] 
                = vlSelfRef.ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0[4U];
            vlSelfRef.__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                                  >> 1U));
            vlSelfRef.__VdlySet__ITOP__DOT__iow1__DOT__arr__v0 = 1U;
        }
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__2(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__ITOP__DOT__RE_FF = (1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__ITOP__DOT__WE_FF = (1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__3(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__4(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__5(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__ITOP__DOT__dout[0U] = ((((0x7bU 
                                                   >= 
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U)))
                                                   ? 
                                                  vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][0U]
                                                   : 0U) 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (((0x7bU 
                                                     >= 
                                                     (0x0000007fU 
                                                      & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                         >> 1U)))
                                                     ? 
                                                    vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                    [
                                                    (0x0000007fU 
                                                     & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                        >> 1U))][0U]
                                                     : 0U) 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[1U] = ((((0x7bU 
                                                   >= 
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U)))
                                                   ? 
                                                  vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][1U]
                                                   : 0U) 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (((0x7bU 
                                                     >= 
                                                     (0x0000007fU 
                                                      & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                         >> 1U)))
                                                     ? 
                                                    vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                    [
                                                    (0x0000007fU 
                                                     & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                        >> 1U))][1U]
                                                     : 0U) 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[2U] = ((((0x7bU 
                                                   >= 
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U)))
                                                   ? 
                                                  vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][2U]
                                                   : 0U) 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (((0x7bU 
                                                     >= 
                                                     (0x0000007fU 
                                                      & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                         >> 1U)))
                                                     ? 
                                                    vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                    [
                                                    (0x0000007fU 
                                                     & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                        >> 1U))][2U]
                                                     : 0U) 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[3U] = ((((0x7bU 
                                                   >= 
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U)))
                                                   ? 
                                                  vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][3U]
                                                   : 0U) 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (((0x7bU 
                                                     >= 
                                                     (0x0000007fU 
                                                      & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                         >> 1U)))
                                                     ? 
                                                    vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                    [
                                                    (0x0000007fU 
                                                     & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                        >> 1U))][3U]
                                                     : 0U) 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[4U] = ((((0x7bU 
                                                   >= 
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U)))
                                                   ? 
                                                  vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][4U]
                                                   : 0U) 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (((0x7bU 
                                                     >= 
                                                     (0x0000007fU 
                                                      & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                         >> 1U)))
                                                     ? 
                                                    vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                    [
                                                    (0x0000007fU 
                                                     & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                        >> 1U))][4U]
                                                     : 0U) 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__6(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[3U];
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[4U];
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__7(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ITOP__DOT__iow1__DOT__arr__v0) {
        vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[0U];
        vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[1U];
        vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[2U];
        vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[3U];
        vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[4U];
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__8(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__9(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__nvdla_gated_clk) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_clk_gate_core_0_432__DOT__qd));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__1(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__2(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__3(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][0U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][1U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][2U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][3U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][4U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__4(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][0U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][1U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][2U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][3U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][4U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__5(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__ADR = (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                        & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                       | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK)))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ITOP__DOT__empadd = (IData)((0xf8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.__PVT__ITOP__DOT__ADR))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                             & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
                                             & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_144__3(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_144__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_144__4(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_144__9(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_288__3(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_288__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_288__4(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_288__9(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_re_r0_0_288)));
    }
}
