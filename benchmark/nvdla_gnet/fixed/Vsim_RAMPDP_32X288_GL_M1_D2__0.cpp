// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                 >> 5U)) | ((~ (3U 
                                                & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                   >> 5U))) 
                                            & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                               >> 5U)))))) 
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
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[5U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[6U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[7U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U];
        vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[8U] 
            = vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U];
        vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0 
            = (0x0000001fU & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF));
        vlSelfRef.__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__ITOP__DOT__RE_FF = (1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__ITOP__DOT__WE_FF = (1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__2(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__ITOP__DOT__dout[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__5(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__5\n"); );
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
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][5U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[5U];
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][6U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[6U];
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][7U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[7U];
        vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0][8U] 
            = vlSelfRef.__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0[8U];
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__2(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__5(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__2(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ITOP__DOT__RADRCLK) {
        vlSelfRef.__PVT__ITOP__DOT__dout[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ITOP__DOT__dout[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__2(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][0U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][1U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][2U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][3U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][4U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[5U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][5U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[6U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][6U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[7U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][7U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[8U] = (vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR))][8U] 
                                              & (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((~ (0U != 
                                              (3U & 
                                               ((3U 
                                                 & (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                     & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                                    >> 5U)) 
                                                | ((~ 
                                                    (3U 
                                                     & ((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                                        >> 5U))) 
                                                   & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                      >> 5U)))))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[0U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[1U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[2U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[3U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[4U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[5U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[6U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[7U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__ITOP__DOT__WDQ_pr[8U] = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__ITOP__DOT__WAFF = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0;
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__WE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ITOP__DOT__RADR = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ITOP__DOT__RE_LATB = (1U & 
                                               (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1(Vsim_RAMPDP_32X288_GL_M1_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_RAMPDP_32X288_GL_M1_D2___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__r_nv_ram_rws_32x512__DOT__ram_Inst_32X288_0_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RA = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}
