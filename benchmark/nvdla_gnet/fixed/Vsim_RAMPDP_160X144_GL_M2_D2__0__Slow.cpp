// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_0__0(Vsim_RAMPDP_160X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__ADR = (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                        & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                       | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK)))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ITOP__DOT__empadd = (IData)((((IData)(vlSelfRef.__PVT__ITOP__DOT__ADR) 
                                                   >> 7U) 
                                                  & (0U 
                                                     != 
                                                     (0x60U 
                                                      & (IData)(vlSelfRef.__PVT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                             & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
                                             & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)));
}

VL_ATTR_COLD void Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_144__0(Vsim_RAMPDP_160X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_144__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__empadd = (IData)((((IData)(vlSelfRef.__PVT__ITOP__DOT__ADR) 
                                                   >> 7U) 
                                                  & (0U 
                                                     != 
                                                     (0x60U 
                                                      & (IData)(vlSelfRef.__PVT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                             & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
                                             & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)));
}

VL_ATTR_COLD void Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_0__0(Vsim_RAMPDP_160X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RADRCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                           & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (((0x4fU 
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
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (((0x4fU 
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
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADRCLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__ADR = (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                        & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                       | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK)))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ITOP__DOT__empadd = (IData)((((IData)(vlSelfRef.__PVT__ITOP__DOT__ADR) 
                                                   >> 7U) 
                                                  & (0U 
                                                     != 
                                                     (0x60U 
                                                      & (IData)(vlSelfRef.__PVT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                             & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
                                             & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)));
}

VL_ATTR_COLD void Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_144__0(Vsim_RAMPDP_160X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_RAMPDP_160X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_144__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (((0x4fU 
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
    vlSelfRef.__PVT__ITOP__DOT__empadd = (IData)((((IData)(vlSelfRef.__PVT__ITOP__DOT__ADR) 
                                                   >> 7U) 
                                                  & (0U 
                                                     != 
                                                     (0x60U 
                                                      & (IData)(vlSelfRef.__PVT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                             & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
                                             & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)));
}

VL_ATTR_COLD void Vsim_RAMPDP_160X144_GL_M2_D2___ctor_var_reset(Vsim_RAMPDP_160X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_RAMPDP_160X144_GL_M2_D2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__WE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4668325564236645225ull);
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__IDDQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1130225301473651705ull);
    vlSelf->__PVT__SVOP_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 184968307436363472ull);
    vlSelf->__PVT__SVOP_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9612690259849201187ull);
    vlSelf->__PVT__SVOP_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1708810954687351682ull);
    vlSelf->__PVT__SVOP_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7874834918431534372ull);
    vlSelf->__PVT__SVOP_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2365343343208949488ull);
    vlSelf->__PVT__SVOP_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12232406503343677013ull);
    vlSelf->__PVT__SVOP_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12198607055614373760ull);
    vlSelf->__PVT__SVOP_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347377052855199463ull);
    vlSelf->__PVT__WD_143 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3195103692777080328ull);
    vlSelf->__PVT__WD_142 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15449778509622624595ull);
    vlSelf->__PVT__WD_141 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13220398747303201216ull);
    vlSelf->__PVT__WD_140 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7695787335544791224ull);
    vlSelf->__PVT__WD_139 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5399314985803137382ull);
    vlSelf->__PVT__WD_138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13520995495972043363ull);
    vlSelf->__PVT__WD_137 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12459029288037409669ull);
    vlSelf->__PVT__WD_136 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17209176507607243406ull);
    vlSelf->__PVT__WD_135 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3047260262186031594ull);
    vlSelf->__PVT__WD_134 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14187714768113683494ull);
    vlSelf->__PVT__WD_133 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2225197406907349709ull);
    vlSelf->__PVT__WD_132 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13461422212446276749ull);
    vlSelf->__PVT__WD_131 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4536507422458204784ull);
    vlSelf->__PVT__WD_130 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2383429301298752313ull);
    vlSelf->__PVT__WD_129 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3170765091062192239ull);
    vlSelf->__PVT__WD_128 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9835679157634376545ull);
    vlSelf->__PVT__WD_127 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8773712949699973947ull);
    vlSelf->__PVT__WD_126 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14980626612866182423ull);
    vlSelf->__PVT__WD_125 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8699003387038874688ull);
    vlSelf->__PVT__WD_124 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7307386281957178204ull);
    vlSelf->__PVT__WD_123 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5025958654538947004ull);
    vlSelf->__PVT__WD_122 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8109881988812692807ull);
    vlSelf->__PVT__WD_121 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14822394718474783658ull);
    vlSelf->__PVT__WD_120 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17698627739687846254ull);
    vlSelf->__PVT__WD_119 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5742667348103470790ull);
    vlSelf->__PVT__WD_118 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4693596375700444821ull);
    vlSelf->__PVT__WD_117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17110129971155466901ull);
    vlSelf->__PVT__WD_116 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3967303820032927245ull);
    vlSelf->__PVT__WD_115 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13489133103754479643ull);
    vlSelf->__PVT__WD_114 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5078836387216216501ull);
    vlSelf->__PVT__WD_113 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4016870179281724703ull);
    vlSelf->__PVT__WD_112 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10681784245854000617ull);
    vlSelf->__PVT__WD_111 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17623155966106482085ull);
    vlSelf->__PVT__WD_110 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 42107766996342573ull);
    vlSelf->__PVT__WD_109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 829443556759812691ull);
    vlSelf->__PVT__WD_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7494357623332040837ull);
    vlSelf->__PVT__WD_107 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13978584335835325020ull);
    vlSelf->__PVT__WD_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4757527921050793928ull);
    vlSelf->__PVT__WD_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11260583209013400250ull);
    vlSelf->__PVT__WD_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1947290751895873658ull);
    vlSelf->__PVT__WD_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12521079319274900881ull);
    vlSelf->__PVT__WD_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2749786458751345941ull);
    vlSelf->__PVT__WD_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16788821504990193422ull);
    vlSelf->__PVT__WD_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15397204399908335626ull);
    vlSelf->__PVT__WD_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5295463404049640913ull);
    vlSelf->__PVT__WD_98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6232664826598839981ull);
    vlSelf->__PVT__WD_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13626364284719454897ull);
    vlSelf->__PVT__WD_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10996639977289372927ull);
    vlSelf->__PVT__WD_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 822277777144340526ull);
    vlSelf->__PVT__WD_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6928557937928782766ull);
    vlSelf->__PVT__WD_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11512481479502889629ull);
    vlSelf->__PVT__WD_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4864192360691291695ull);
    vlSelf->__PVT__WD_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6764926143581968802ull);
    vlSelf->__PVT__WD_90 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796110321330813277ull);
    vlSelf->__PVT__WD_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1459551409994782657ull);
    vlSelf->__PVT__WD_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17276571176274303746ull);
    vlSelf->__PVT__WD_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 730560885455340029ull);
    vlSelf->__PVT__WD_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7160727983234540320ull);
    vlSelf->__PVT__WD_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9061461766125079701ull);
    vlSelf->__PVT__WD_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6546166953990181929ull);
    vlSelf->__PVT__WD_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8446900736880842942ull);
    vlSelf->__PVT__WD_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8181532806991256741ull);
    vlSelf->__PVT__WD_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4378818697520343405ull);
    vlSelf->__PVT__WD_80 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 299289842097057779ull);
    vlSelf->__PVT__WD_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5737282681796235005ull);
    vlSelf->__PVT__WD_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7638016464686936331ull);
    vlSelf->__PVT__WD_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10826169544913674500ull);
    vlSelf->__PVT__WD_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 441325127636975507ull);
    vlSelf->__PVT__WD_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6758087505553117187ull);
    vlSelf->__PVT__WD_74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4525826981766929348ull);
    vlSelf->__PVT__WD_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8057268547879214911ull);
    vlSelf->__PVT__WD_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3586354240095826523ull);
    vlSelf->__PVT__WD_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 511210393659932549ull);
    vlSelf->__PVT__WD_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8783592267224576290ull);
    vlSelf->__PVT__WD_69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5031004760862959508ull);
    vlSelf->__PVT__WD_68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6376943065304311122ull);
    vlSelf->__PVT__WD_67 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13361905641532718926ull);
    vlSelf->__PVT__WD_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8890991333749385218ull);
    vlSelf->__PVT__WD_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18125880792223256080ull);
    vlSelf->__PVT__WD_64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7951518592078272142ull);
    vlSelf->__PVT__WD_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2193184986958839551ull);
    vlSelf->__PVT__WD_62 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6332572553846608682ull);
    vlSelf->__PVT__WD_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310243416941772292ull);
    vlSelf->__PVT__WD_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11210977199832398475ull);
    vlSelf->__PVT__WD_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4215350900486222000ull);
    vlSelf->__PVT__WD_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487732774050729753ull);
    vlSelf->__PVT__WD_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3275878158815130923ull);
    vlSelf->__PVT__WD_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5500498878700395671ull);
    vlSelf->__PVT__WD_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2425355032264533873ull);
    vlSelf->__PVT__WD_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4326088815155137862ull);
    vlSelf->__PVT__WD_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13675407768924065609ull);
    vlSelf->__PVT__WD_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576141551814751839ull);
    vlSelf->__PVT__WD_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3446159856021316182ull);
    vlSelf->__PVT__WD_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13957195513583238106ull);
    vlSelf->__PVT__WD_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3508048204120797337ull);
    vlSelf->__PVT__WD_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5408781987011392740ull);
    vlSelf->__PVT__WD_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6022096472565906938ull);
    vlSelf->__PVT__WD_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7922830255456565236ull);
    vlSelf->__PVT__WD_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4528853027877639716ull);
    vlSelf->__PVT__WD_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13125121838436871239ull);
    vlSelf->__PVT__WD_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 995140142643473518ull);
    vlSelf->__PVT__WD_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5579063684217678845ull);
    vlSelf->__PVT__WD_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9110505250329884598ull);
    vlSelf->__PVT__WD_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4639590942546566234ull);
    vlSelf->__PVT__WD_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7135065692723448572ull);
    vlSelf->__PVT__WD_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9035799475614000354ull);
    vlSelf->__PVT__WD_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11260420195499280916ull);
    vlSelf->__PVT__WD_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2373477292690480322ull);
    vlSelf->__PVT__WD_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9767176750811122753ull);
    vlSelf->__PVT__WD_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 988585012013545546ull);
    vlSelf->__PVT__WD_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14964414777939831606ull);
    vlSelf->__PVT__WD_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5752560162704003352ull);
    vlSelf->__PVT__WD_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16263595820265818652ull);
    vlSelf->__PVT__WD_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4133614124472431588ull);
    vlSelf->__PVT__WD_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12456122601146544919ull);
    vlSelf->__PVT__WD_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8653408491675503567ull);
    vlSelf->__PVT__WD_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8388040561785905173ull);
    vlSelf->__PVT__WD_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10288774344676492395ull);
    vlSelf->__PVT__WD_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 438299081526288964ull);
    vlSelf->__PVT__WD_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3301540449326191376ull);
    vlSelf->__PVT__WD_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5202274232216816002ull);
    vlSelf->__PVT__WD_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5815588717771337888ull);
    vlSelf->__PVT__WD_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10399512259345410650ull);
    vlSelf->__PVT__WD_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1302087139404951201ull);
    vlSelf->__PVT__WD_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16441663245758828905ull);
    vlSelf->__PVT__WD_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10520944389982183418ull);
    vlSelf->__PVT__WD_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7891220082552150587ull);
    vlSelf->__PVT__WD_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9581471648311078529ull);
    vlSelf->__PVT__WD_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3823138043191670088ull);
    vlSelf->__PVT__WD_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12095519916756188990ull);
    vlSelf->__PVT__WD_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7948492545967626339ull);
    vlSelf->__PVT__WD_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10926163409062603713ull);
    vlSelf->__PVT__WD_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 751801208917688683ull);
    vlSelf->__PVT__WD_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13440211677507877008ull);
    vlSelf->__PVT__WD_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2157828887673794491ull);
    vlSelf->__PVT__WD_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 698500823530770596ull);
    vlSelf->__PVT__WD_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3977073901198154829ull);
    vlSelf->__PVT__WD_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3333134889320507823ull);
    vlSelf->__PVT__WD_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14388244015935034702ull);
    vlSelf->__PVT__WD_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 790526605577775072ull);
    vlSelf->__PVT__WD_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17694046555875545186ull);
    vlSelf->__PVT__WD_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4036004626672379364ull);
    vlSelf->__PVT__WD_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046197163566834499ull);
    vlSelf->__PVT__WD_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1722255333519995531ull);
    vlSelf->__PVT__RD_143 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3837499085725975212ull);
    vlSelf->__PVT__RD_142 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457903265177091888ull);
    vlSelf->__PVT__RD_141 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5248781636535830423ull);
    vlSelf->__PVT__RD_140 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 286846323803979574ull);
    vlSelf->__PVT__RD_139 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6357433704449527479ull);
    vlSelf->__PVT__RD_138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4958854703764522472ull);
    vlSelf->__PVT__RD_137 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584259912201419823ull);
    vlSelf->__PVT__RD_136 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12318884402570549595ull);
    vlSelf->__PVT__RD_135 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11235848575572532444ull);
    vlSelf->__PVT__RD_134 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3580050979508747923ull);
    vlSelf->__PVT__RD_133 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14068459349699776788ull);
    vlSelf->__PVT__RD_132 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 50202049691302033ull);
    vlSelf->__PVT__RD_131 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12040003470487331157ull);
    vlSelf->__PVT__RD_130 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8643892389421194061ull);
    vlSelf->__PVT__RD_129 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14629815578014194168ull);
    vlSelf->__PVT__RD_128 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13231236577329132099ull);
    vlSelf->__PVT__RD_127 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3762771806971560814ull);
    vlSelf->__PVT__RD_126 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2144522202425501280ull);
    vlSelf->__PVT__RD_125 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1482450809690979102ull);
    vlSelf->__PVT__RD_124 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16231178217385471766ull);
    vlSelf->__PVT__RD_123 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2804932516979171192ull);
    vlSelf->__PVT__RD_122 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322583923255913942ull);
    vlSelf->__PVT__RD_121 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 986958854898421448ull);
    vlSelf->__PVT__RD_120 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15827109630410168465ull);
    vlSelf->__PVT__RD_119 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3366288745293485637ull);
    vlSelf->__PVT__RD_118 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8549840052414115580ull);
    vlSelf->__PVT__RD_117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12456118114799553512ull);
    vlSelf->__PVT__RD_116 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15909869751219944847ull);
    vlSelf->__PVT__RD_115 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17009792543392697665ull);
    vlSelf->__PVT__RD_114 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 774332559142142390ull);
    vlSelf->__PVT__RD_113 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 362189776061343846ull);
    vlSelf->__PVT__RD_112 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8354032861809100844ull);
    vlSelf->__PVT__RD_111 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9144911233167801458ull);
    vlSelf->__PVT__RD_110 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5652747430265216490ull);
    vlSelf->__PVT__RD_109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17017206798792840269ull);
    vlSelf->__PVT__RD_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 305087215452288657ull);
    vlSelf->__PVT__RD_107 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7774721589884432204ull);
    vlSelf->__PVT__RD_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 453024092976785375ull);
    vlSelf->__PVT__RD_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12538878235609315990ull);
    vlSelf->__PVT__RD_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8932284937411622740ull);
    vlSelf->__PVT__RD_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11538916150089731611ull);
    vlSelf->__PVT__RD_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3883118554025765601ull);
    vlSelf->__PVT__RD_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12134809648634230811ull);
    vlSelf->__PVT__RD_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8436792982618975771ull);
    vlSelf->__PVT__RD_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12113880734350334872ull);
    vlSelf->__PVT__RD_98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11670719624677867052ull);
    vlSelf->__PVT__RD_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17232417469174596078ull);
    vlSelf->__PVT__RD_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 915266168945959486ull);
    vlSelf->__PVT__RD_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10255396735985719225ull);
    vlSelf->__PVT__RD_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18277574569662986524ull);
    vlSelf->__PVT__RD_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 338903872942018013ull);
    vlSelf->__PVT__RD_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12410179954027263015ull);
    vlSelf->__PVT__RD_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15072127491424708877ull);
    vlSelf->__PVT__RD_90 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4563665192123572774ull);
    vlSelf->__PVT__RD_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7294045216285679945ull);
    vlSelf->__PVT__RD_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2717889799936527745ull);
    vlSelf->__PVT__RD_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6354572474614556397ull);
    vlSelf->__PVT__RD_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13143365097601431708ull);
    vlSelf->__PVT__RD_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13651438474590071890ull);
    vlSelf->__PVT__RD_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3142976175288987861ull);
    vlSelf->__PVT__RD_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5470823613530411317ull);
    vlSelf->__PVT__RD_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7705657495577218558ull);
    vlSelf->__PVT__RD_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13917178764927555778ull);
    vlSelf->__PVT__RD_80 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7625606831571893123ull);
    vlSelf->__PVT__RD_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7171155822187469755ull);
    vlSelf->__PVT__RD_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7450370208585865823ull);
    vlSelf->__PVT__RD_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4297479523968495886ull);
    vlSelf->__PVT__RD_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1448084612677425404ull);
    vlSelf->__PVT__RD_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1004923503005006088ull);
    vlSelf->__PVT__RD_74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 863173455140000549ull);
    vlSelf->__PVT__RD_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14733762112500332661ull);
    vlSelf->__PVT__RD_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5627148605830524007ull);
    vlSelf->__PVT__RD_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2579499029778993380ull);
    vlSelf->__PVT__RD_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8791020299129285151ull);
    vlSelf->__PVT__RD_69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6100103154959022225ull);
    vlSelf->__PVT__RD_68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680254657983134831ull);
    vlSelf->__PVT__RD_67 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15550843315343573278ull);
    vlSelf->__PVT__RD_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2665797086130559384ull);
    vlSelf->__PVT__RD_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10832937851129217205ull);
    vlSelf->__PVT__RD_64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14135520426651284363ull);
    vlSelf->__PVT__RD_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477568975928507832ull);
    vlSelf->__PVT__RD_62 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2985642352917211454ull);
    vlSelf->__PVT__RD_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16206407585423898309ull);
    vlSelf->__PVT__RD_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13585871664723203341ull);
    vlSelf->__PVT__RD_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6283639536605267057ull);
    vlSelf->__PVT__RD_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5807789389584100040ull);
    vlSelf->__PVT__RD_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1231633973234926977ull);
    vlSelf->__PVT__RD_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9001310954589729803ull);
    vlSelf->__PVT__RD_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17023488788267130222ull);
    vlSelf->__PVT__RD_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531562165255774700ull);
    vlSelf->__PVT__RD_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12305583324052772645ull);
    vlSelf->__PVT__RD_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15388495295713729712ull);
    vlSelf->__PVT__RD_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11585781186242791792ull);
    vlSelf->__PVT__RD_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16647813304171395489ull);
    vlSelf->__PVT__RD_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1463804018540634382ull);
    vlSelf->__PVT__RD_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5100486693218735331ull);
    vlSelf->__PVT__RD_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7756285009528854497ull);
    vlSelf->__PVT__RD_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13967806278879019173ull);
    vlSelf->__PVT__RD_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15447575627506488063ull);
    vlSelf->__PVT__RD_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4216737832134491300ull);
    vlSelf->__PVT__RD_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12155019606542814143ull);
    vlSelf->__PVT__RD_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12746989042800468617ull);
    vlSelf->__PVT__RD_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2238526743499270744ull);
    vlSelf->__PVT__RD_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11578657310538868066ull);
    vlSelf->__PVT__RD_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2936947346734365112ull);
    vlSelf->__PVT__RD_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3445020723723072830ull);
    vlSelf->__PVT__RD_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2352036189196926327ull);
    vlSelf->__PVT__RD_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16222624846557255095ull);
    vlSelf->__PVT__RD_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7753678102173515586ull);
    vlSelf->__PVT__RD_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15586718768016078005ull);
    vlSelf->__PVT__RD_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15865933154414249041ull);
    vlSelf->__PVT__RD_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10868813303801916520ull);
    vlSelf->__PVT__RD_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5895194103808754797ull);
    vlSelf->__PVT__RD_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13833475878217074386ull);
    vlSelf->__PVT__RD_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16897956001535414999ull);
    vlSelf->__PVT__RD_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13943319981678428121ull);
    vlSelf->__PVT__RD_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16599118297988671675ull);
    vlSelf->__PVT__RD_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17107191674977320097ull);
    vlSelf->__PVT__RD_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10731723682352883666ull);
    vlSelf->__PVT__RD_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11438051724101971643ull);
    vlSelf->__PVT__RD_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15074734398780195311ull);
    vlSelf->__PVT__RD_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4566272099478931974ull);
    vlSelf->__PVT__RD_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4824141436580321530ull);
    vlSelf->__PVT__RD_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7058975318627102142ull);
    vlSelf->__PVT__RD_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16831288343294268709ull);
    vlSelf->__PVT__RD_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4596065538935076833ull);
    vlSelf->__PVT__RD_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6830899420981847100ull);
    vlSelf->__PVT__RD_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3006769372410298396ull);
    vlSelf->__PVT__RD_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10839810038252913601ull);
    vlSelf->__PVT__RD_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5415576532289548623ull);
    vlSelf->__PVT__RD_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18136676038228334715ull);
    vlSelf->__PVT__RD_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924765846565680447ull);
    vlSelf->__PVT__RD_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5007677818226589610ull);
    vlSelf->__PVT__RD_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18228443050733308283ull);
    vlSelf->__PVT__RD_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11285883497837141057ull);
    vlSelf->__PVT__RD_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14880179901202082148ull);
    vlSelf->__PVT__RD_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6188898104399819656ull);
    vlSelf->__PVT__RD_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13147765902760449817ull);
    vlSelf->__PVT__RD_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17620744721569357007ull);
    vlSelf->__PVT__RD_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1197843465539861007ull);
    vlSelf->__PVT__RD_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973563876125086912ull);
    vlSelf->__PVT__RD_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18446542694934048510ull);
    vlSelf->__PVT__RD_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9641856178268755770ull);
    vlSelf->__PVT__RD_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16714128696492365670ull);
    vlSelf->__PVT__RE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8687078416072546629ull);
    vlSelf->__PVT__RADR_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13482887095707743097ull);
    vlSelf->__PVT__RADR_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16699439758473509679ull);
    vlSelf->__PVT__RADR_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17322526011294571158ull);
    vlSelf->__PVT__RADR_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17043645079211590698ull);
    vlSelf->__PVT__RADR_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14535584952329002933ull);
    vlSelf->__PVT__RADR_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17427225902668040256ull);
    vlSelf->__PVT__RADR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3677262645042491750ull);
    vlSelf->__PVT__RADR_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14814465884411982546ull);
    vlSelf->__PVT__WADR_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12761331047967355283ull);
    vlSelf->__PVT__WADR_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12368586033534125162ull);
    vlSelf->__PVT__WADR_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2678393547965152387ull);
    vlSelf->__PVT__WADR_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17842890622958678136ull);
    vlSelf->__PVT__WADR_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635437795171749454ull);
    vlSelf->__PVT__WADR_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11525176238836850697ull);
    vlSelf->__PVT__WADR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14789786927179751912ull);
    vlSelf->__PVT__WADR_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15849991676839784344ull);
    vlSelf->__PVT__SLEEP_EN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6907653577924469870ull);
    vlSelf->__PVT__SLEEP_EN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10776085316934267920ull);
    vlSelf->__PVT__SLEEP_EN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13528353244619972529ull);
    vlSelf->__PVT__SLEEP_EN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10571695522259801809ull);
    vlSelf->__PVT__SLEEP_EN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5218345697039378944ull);
    vlSelf->__PVT__SLEEP_EN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13474251824603501735ull);
    vlSelf->__PVT__SLEEP_EN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7438212596918924991ull);
    vlSelf->__PVT__SLEEP_EN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13555511282087385708ull);
    vlSelf->__PVT__RET_EN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15335480921433835294ull);
    vlSelf->__PVT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14222803279704465139ull);
    vlSelf->__PVT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13186250667163041980ull);
    vlSelf->__PVT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1998488790595241610ull);
    vlSelf->__PVT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5609030881195598433ull);
    vlSelf->__PVT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16734172825655326025ull);
    vlSelf->__PVT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15701428887501665035ull);
    vlSelf->__PVT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3390628522626487402ull);
    vlSelf->__PVT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18418016431028263519ull);
    vlSelf->__PVT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2059066234595000849ull);
    vlSelf->__PVT__ITOP__DOT__RADRCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5920455995670837835ull);
    vlSelf->__PVT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4162830297282555971ull);
    vlSelf->__PVT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13441380941185181607ull);
    vlSelf->__PVT__ITOP__DOT__ADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15745603815418240510ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__WDQ_pr, __VscopeHash, 15761591322181655513ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__dout, __VscopeHash, 9076273213115856377ull);
    vlSelf->__PVT__ITOP__DOT__RD_rdnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17029718269901874823ull);
    vlSelf->__PVT__ITOP__DOT__empadd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10184800481870755875ull);
    vlSelf->__PVT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4755027397151743479ull);
    vlSelf->__PVT__ITOP__DOT__WrClk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13078525159083522099ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__rmuxd0, __VscopeHash, 12884034309190912602ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__rmuxd1, __VscopeHash, 9371767274147809993ull);
    vlSelf->ITOP__DOT____Vcellinp__iow0____pinNumber1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2578968063729581232ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 14418191360003535688ull);
    }
    vlSelf->__PVT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7816149342431733580ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->ITOP__DOT__iow0__DOT____Vlvbound_h44a9f55a__0, __VscopeHash, 4565262201493057970ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__iow1__DOT__arr[__Vi0], __VscopeHash, 18053956084718333372ull);
    }
    vlSelf->__PVT__ITOP__DOT__iow1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11414842937349277193ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->ITOP__DOT__iow1__DOT____Vlvbound_h44a9f55a__0, __VscopeHash, 15368533688442871547ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 3042058078067856211ull);
    vlSelf->__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3130700030927203296ull);
    vlSelf->__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 0;
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0, __VscopeHash, 9751840278074453319ull);
    vlSelf->__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 563901265749606262ull);
    vlSelf->__VdlySet__ITOP__DOT__iow1__DOT__arr__v0 = 0;
}
