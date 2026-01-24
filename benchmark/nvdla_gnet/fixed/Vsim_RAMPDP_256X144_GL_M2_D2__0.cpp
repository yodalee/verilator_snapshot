// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) {
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[0U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[1U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[2U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[3U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[4U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U];
        vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0 
            = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                              >> 1U));
        vlSelfRef.__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ITOP__DOT__iow1__DOT__arr__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF))) {
        vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[0U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[1U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[2U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[3U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0[4U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U];
        vlSelfRef.__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0 
            = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                              >> 1U));
        vlSelfRef.__VdlySet__ITOP__DOT__iow1__DOT__arr__v0 = 1U;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__2(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__ITOP__DOT__WE_FF = (1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)));
        vlSelfRef.__PVT__ITOP__DOT__RE_FF = (1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__3(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__ITOP__DOT__dout[0U] = ((vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                 [(0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][0U] 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                   [
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U))][0U] 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[1U] = ((vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                 [(0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][1U] 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                   [
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U))][1U] 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[2U] = ((vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                 [(0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][2U] 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                   [
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U))][2U] 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[3U] = ((vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                 [(0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][3U] 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                   [
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U))][3U] 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__ITOP__DOT__dout[4U] = ((vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                 [(0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 1U))][4U] 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                               & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))))) 
                                                | (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                                   [
                                                   (0x0000007fU 
                                                    & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                       >> 1U))][4U] 
                                                   & (- (IData)(
                                                                ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                                 & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))))));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__6(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__6\n"); );
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

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__7(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__7\n"); );
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

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSelfRef.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b0c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__2(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__3(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__6(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b0c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b1c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b1c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b2c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b2c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b3c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b3c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b4c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b4c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b5c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b5c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b6c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b6c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b7c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b7c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b8c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b8c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b9c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b9c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b10c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b10c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b11c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b11c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b12c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b12c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b13c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b13c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b14c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b14c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b15c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][0U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][1U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][2U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][3U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                              [(0x0000007fU 
                                                & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                   >> 1U))][4U] 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                            ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0)
                                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_ra_b15c0));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                                                 >> 0x00000010U));
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                                              >> 0x00000010U);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__RA;
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = (0x0000ffffU 
                                              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9(Vsim_RAMPDP_256X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_RAMPDP_256X144_GL_M2_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288)));
    }
}
