// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<17>/*514:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(515, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_7;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
    __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
    __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
    __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
    __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
    __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
    __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__ipipe_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__ipipe_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__ipipe_pd_p[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__ipipe_pd_p[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__ipipe_pd_p[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__ipipe_pd_p[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__ipipe_pd_p[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__ipipe_pd_p[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__ipipe_pd_p[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__ipipe_pd_p[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U] 
        = __Vtemp_1[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U] 
        = __Vtemp_1[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U] 
        = __Vtemp_1[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U] 
        = __Vtemp_1[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U] 
        = __Vtemp_1[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U] 
        = __Vtemp_1[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U] 
        = __Vtemp_1[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU] 
        = __Vtemp_1[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU] 
        = __Vtemp_1[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU] 
        = __Vtemp_1[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU] 
        = __Vtemp_1[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU] 
        = __Vtemp_1[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU] 
        = __Vtemp_1[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U] 
        = __Vtemp_1[0x00000010U];
    if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__req_count))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_cmd_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_cmd_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_cmd_rdy) & (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__bdma2cvif_wr_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_valid))) {
        __Vtemp_7[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[1U];
        __Vtemp_7[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[2U];
        __Vtemp_7[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[3U];
        __Vtemp_7[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[4U];
        __Vtemp_7[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[5U];
        __Vtemp_7[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[6U];
        __Vtemp_7[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[7U];
        __Vtemp_7[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[8U];
        __Vtemp_7[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_data[0U];
    } else {
        __Vtemp_7[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_7[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_7[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_7[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_7[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_7[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_7[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_7[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_7[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_7[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_7[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_7[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_7[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U] 
        = __Vtemp_7[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U] 
        = __Vtemp_7[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U] 
        = __Vtemp_7[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U] 
        = __Vtemp_7[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
        = __Vtemp_7[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
        = __Vtemp_7[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
        = __Vtemp_7[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
        = __Vtemp_7[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
        = __Vtemp_7[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
        = __Vtemp_7[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U] 
        = __Vtemp_7[0x00000010U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__ipipe_pd_p[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__ipipe_pd_p[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__ipipe_pd_p[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__ipipe_pd_p[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__ipipe_pd_p[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__ipipe_pd_p[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__ipipe_pd_p[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__ipipe_pd_p[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__ipipe_pd_p[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
        } else {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
        }
    } else {
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        if (vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo0_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo0_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo0_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo0_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo0_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo0_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo0_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo0_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        if (vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo1_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo1_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo1_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo1_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo1_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo1_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo1_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo1_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[5U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[6U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[7U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[8U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[9U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U];
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0.__PVT__wr_reserving) {
            vlSelfRef.__PVT__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                            ? 0U : 
                                           (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__beat_count))));
            vlSelfRef.__PVT__in_dat_cnt = ((IData)(vlSelfRef.__PVT__in_dat_last)
                                            ? 0U : 
                                           (0x00001fffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__in_dat_cnt))));
        }
        if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0.__PVT__wr_reserving) 
             & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x000007ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo0_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo1_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0.__PVT__wr_reserving) 
                    & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    } else {
        vlSelfRef.__PVT__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        vlSelfRef.__PVT__in_dat_cnt = 0U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                   | (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__bdma2cvif_wr_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__ipipe_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                     ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                     : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd0_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd0_ready));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next)) 
                     | ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3)) 
                       & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o)))));
    vlSelfRef.__PVT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next)) 
                     | ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3)) 
                       & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o)))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p 
                = vlSelfRef.__PVT__u_dfifo0__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__5(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p 
                = vlSelfRef.__PVT__u_dfifo1__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__6(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)))) {
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__ram_ff0[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)))) {
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__ram_ff0[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__8(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
         & (IData)(vlSelfRef.__PVT__dfifo0_wr_pvld))) {
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[1U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[2U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[3U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[4U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[5U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[6U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
        vlSelfRef.__PVT__u_dfifo0__DOT__ram__DOT__di_d[7U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
    }
    if (((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)) 
         & (IData)(vlSelfRef.__PVT__dfifo1_wr_pvld))) {
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[1U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[2U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[3U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[4U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[5U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[6U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
        vlSelfRef.__PVT__u_dfifo1__DOT__ram__DOT__di_d[7U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
        = vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U];
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    }
    vlSelfRef.__PVT__in_cmd_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U]);
    vlSelfRef.__PVT__in_cmd_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) 
                                          & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                          >> 2U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__dfifo_wr_vld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                        >> 2U));
    vlSelfRef.__PVT__large_req_grow = (1U & ((vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                              >> 5U) 
                                             & vlSelfRef.__PVT__in_cmd_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_cmd_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00001fffU 
                                                & vlSelfRef.__PVT__in_cmd_vld_pd[2U])));
    vlSelfRef.__PVT__in_dat_last = ((IData)(vlSelfRef.__PVT__in_dat_cnt) 
                                    == (0x00001fffU 
                                        & (VL_SHIFTR_III(13,13,32, 
                                                         (0x00001fffU 
                                                          & vlSelfRef.__PVT__in_cmd_vld_pd[2U]), 1U) 
                                           + (IData)(vlSelfRef.__PVT__large_req_grow))));
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

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__9(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                                  && ((IData)(vlSelfRef.__PVT__dfifo0_wr_pvld)
                                                       ? (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in) 
                                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)) 
                                                          & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_next)))));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                                  && ((IData)(vlSelfRef.__PVT__dfifo1_wr_pvld)
                                                       ? (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in) 
                                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)) 
                                                          & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_next)))));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in;
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__10(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count 
                = vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__11(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count 
                = vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_dat0_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__in_dat1_pvld = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                     & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__dfifo1_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                                          & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                                             >> 1U)));
    vlSelfRef.__PVT__dfifo0_wr_pvld = ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)) 
                                          & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U]));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_dfifo0__DOT____VdfgRegularize_h422555bb_0_4;
    u_dfifo0__DOT____VdfgRegularize_h422555bb_0_4 = 0;
    // Body
    vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in));
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
    u_dfifo0__DOT____VdfgRegularize_h422555bb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo0__DOT____VdfgRegularize_h422555bb_0_4));
    vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo0__DOT__wr_popping = ((~ (IData)(u_dfifo0__DOT____VdfgRegularize_h422555bb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_p));
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
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__5(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_dfifo1__DOT____VdfgRegularize_h422555bb_0_4;
    u_dfifo1__DOT____VdfgRegularize_h422555bb_0_4 = 0;
    // Body
    vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int) 
           & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving = 
        ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in));
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
    u_dfifo1__DOT____VdfgRegularize_h422555bb_0_4 = 
        ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3) 
         & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p) 
         | (IData)(u_dfifo1__DOT____VdfgRegularize_h422555bb_0_4));
    vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3)
                                                    ? (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_o)
                                                    : (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo1__DOT__wr_popping = ((~ (IData)(u_dfifo1__DOT____VdfgRegularize_h422555bb_0_4)) 
                                                  & (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_p));
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
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__6(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo1_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat1_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat0_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat0_pvld))));
    vlSelfRef.__PVT__dfifo0_rd_prdy = ((~ (IData)(vlSelfRef.__PVT__in_dat0_dis)) 
                                       & ((IData)(vlSelfRef.__PVT__dfifo_rd_prdy) 
                                          & ((IData)(vlSelfRef.__PVT__in_dat1_dis) 
                                             | (IData)(vlSelfRef.__PVT__in_dat1_pvld))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0.__PVT__wr_reserving)))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                     & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                    | ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                          & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)))))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__ipipe_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<17>/*514:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(515, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_9;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
    __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
    __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
    __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
    __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
    __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
    __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__ipipe_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__ipipe_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__ipipe_pd_p[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__ipipe_pd_p[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__ipipe_pd_p[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__ipipe_pd_p[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__ipipe_pd_p[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__ipipe_pd_p[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__ipipe_pd_p[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__ipipe_pd_p[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U] 
        = __Vtemp_1[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U] 
        = __Vtemp_1[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U] 
        = __Vtemp_1[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U] 
        = __Vtemp_1[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U] 
        = __Vtemp_1[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U] 
        = __Vtemp_1[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U] 
        = __Vtemp_1[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU] 
        = __Vtemp_1[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU] 
        = __Vtemp_1[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU] 
        = __Vtemp_1[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU] 
        = __Vtemp_1[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU] 
        = __Vtemp_1[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU] 
        = __Vtemp_1[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U] 
        = __Vtemp_1[0x00000010U];
    if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__req_count))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_cmd_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_cmd_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_cmd_rdy) & (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__ipipe_pd_p[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__ipipe_pd_p[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__ipipe_pd_p[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__ipipe_pd_p[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__ipipe_pd_p[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__ipipe_pd_p[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__ipipe_pd_p[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__ipipe_pd_p[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__ipipe_pd_p[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
        } else {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
        }
    } else {
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__sdp2cvif_wr_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_valid))) {
        __Vtemp_9[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[1U];
        __Vtemp_9[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[2U];
        __Vtemp_9[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[3U];
        __Vtemp_9[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[4U];
        __Vtemp_9[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[5U];
        __Vtemp_9[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[6U];
        __Vtemp_9[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[7U];
        __Vtemp_9[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[8U];
        __Vtemp_9[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[9U];
        __Vtemp_9[0x0000000aU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU];
        __Vtemp_9[0x0000000bU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU];
        __Vtemp_9[0x0000000cU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU];
        __Vtemp_9[0x0000000dU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU];
        __Vtemp_9[0x0000000eU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU];
        __Vtemp_9[0x0000000fU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU];
        __Vtemp_9[0x00000010U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_data[0U];
    } else {
        __Vtemp_9[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_9[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_9[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_9[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_9[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_9[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_9[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_9[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_9[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_9[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_9[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_9[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_9[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_9[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_9[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_9[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_9[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_9[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_9[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_9[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_9[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U] 
        = __Vtemp_9[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U] 
        = __Vtemp_9[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U] 
        = __Vtemp_9[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U] 
        = __Vtemp_9[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
        = __Vtemp_9[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
        = __Vtemp_9[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
        = __Vtemp_9[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
        = __Vtemp_9[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
        = __Vtemp_9[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
        = __Vtemp_9[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U] 
        = __Vtemp_9[0x00000010U];
    if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        if (vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo0_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo0_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo0_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo0_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo0_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo0_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo0_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo0_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        if (vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo1_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo1_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo1_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo1_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo1_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo1_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo1_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo1_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[5U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[6U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[7U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[8U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[9U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U];
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1.__PVT__wr_reserving) {
            vlSelfRef.__PVT__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                            ? 0U : 
                                           (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__beat_count))));
            vlSelfRef.__PVT__in_dat_cnt = ((IData)(vlSelfRef.__PVT__in_dat_last)
                                            ? 0U : 
                                           (0x00001fffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__in_dat_cnt))));
        }
        if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1.__PVT__wr_reserving) 
             & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x000007ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo0_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo1_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1.__PVT__wr_reserving) 
                    & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    } else {
        vlSelfRef.__PVT__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        vlSelfRef.__PVT__in_dat_cnt = 0U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                   | (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__sdp2cvif_wr_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__ipipe_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                     ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                     : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd1_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd1_ready));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__7(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1.__PVT__wr_reserving)))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                     & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                    | ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                          & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)))))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__ipipe_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<17>/*514:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(515, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_7;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
    __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
    __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
    __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
    __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
    __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
    __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__ipipe_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__ipipe_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__ipipe_pd_p[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__ipipe_pd_p[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__ipipe_pd_p[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__ipipe_pd_p[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__ipipe_pd_p[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__ipipe_pd_p[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__ipipe_pd_p[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__ipipe_pd_p[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U] 
        = __Vtemp_1[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U] 
        = __Vtemp_1[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U] 
        = __Vtemp_1[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U] 
        = __Vtemp_1[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U] 
        = __Vtemp_1[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U] 
        = __Vtemp_1[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U] 
        = __Vtemp_1[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU] 
        = __Vtemp_1[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU] 
        = __Vtemp_1[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU] 
        = __Vtemp_1[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU] 
        = __Vtemp_1[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU] 
        = __Vtemp_1[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU] 
        = __Vtemp_1[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U] 
        = __Vtemp_1[0x00000010U];
    if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__req_count))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_cmd_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_cmd_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_cmd_rdy) & (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__pdp2cvif_wr_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_valid))) {
        __Vtemp_7[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vtemp_7[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[2U];
        __Vtemp_7[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[3U];
        __Vtemp_7[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[4U];
        __Vtemp_7[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[5U];
        __Vtemp_7[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[6U];
        __Vtemp_7[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[7U];
        __Vtemp_7[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[8U];
        __Vtemp_7[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_data[0U];
    } else {
        __Vtemp_7[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_7[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_7[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_7[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_7[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_7[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_7[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_7[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_7[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_7[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_7[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_7[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_7[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U] 
        = __Vtemp_7[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U] 
        = __Vtemp_7[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U] 
        = __Vtemp_7[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U] 
        = __Vtemp_7[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
        = __Vtemp_7[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
        = __Vtemp_7[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
        = __Vtemp_7[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
        = __Vtemp_7[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
        = __Vtemp_7[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
        = __Vtemp_7[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U] 
        = __Vtemp_7[0x00000010U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__ipipe_pd_p[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__ipipe_pd_p[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__ipipe_pd_p[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__ipipe_pd_p[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__ipipe_pd_p[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__ipipe_pd_p[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__ipipe_pd_p[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__ipipe_pd_p[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__ipipe_pd_p[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
        } else {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
        }
    } else {
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        if (vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo0_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo0_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo0_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo0_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo0_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo0_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo0_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo0_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        if (vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo1_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo1_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo1_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo1_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo1_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo1_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo1_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo1_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[5U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[6U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[7U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[8U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[9U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U];
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2.__PVT__wr_reserving) {
            vlSelfRef.__PVT__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                            ? 0U : 
                                           (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__beat_count))));
            vlSelfRef.__PVT__in_dat_cnt = ((IData)(vlSelfRef.__PVT__in_dat_last)
                                            ? 0U : 
                                           (0x00001fffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__in_dat_cnt))));
        }
        if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2.__PVT__wr_reserving) 
             & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x000007ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo0_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo1_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2.__PVT__wr_reserving) 
                    & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    } else {
        vlSelfRef.__PVT__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        vlSelfRef.__PVT__in_dat_cnt = 0U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                   | (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__pdp2cvif_wr_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__ipipe_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                     ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                     : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd2_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd2_ready));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__7(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2.__PVT__wr_reserving)))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                     & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                    | ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                          & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)))))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__ipipe_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<17>/*514:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(515, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_7;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
    __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
    __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
    __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
    __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
    __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
    __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__ipipe_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__ipipe_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__ipipe_pd_p[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__ipipe_pd_p[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__ipipe_pd_p[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__ipipe_pd_p[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__ipipe_pd_p[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__ipipe_pd_p[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__ipipe_pd_p[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__ipipe_pd_p[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U] 
        = __Vtemp_1[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U] 
        = __Vtemp_1[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U] 
        = __Vtemp_1[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U] 
        = __Vtemp_1[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U] 
        = __Vtemp_1[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U] 
        = __Vtemp_1[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U] 
        = __Vtemp_1[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU] 
        = __Vtemp_1[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU] 
        = __Vtemp_1[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU] 
        = __Vtemp_1[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU] 
        = __Vtemp_1[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU] 
        = __Vtemp_1[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU] 
        = __Vtemp_1[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U] 
        = __Vtemp_1[0x00000010U];
    if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__req_count))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_cmd_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_cmd_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_cmd_rdy) & (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__cdp2cvif_wr_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_valid))) {
        __Vtemp_7[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vtemp_7[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[2U];
        __Vtemp_7[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[3U];
        __Vtemp_7[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[4U];
        __Vtemp_7[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[5U];
        __Vtemp_7[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[6U];
        __Vtemp_7[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[7U];
        __Vtemp_7[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[8U];
        __Vtemp_7[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_data[0U];
    } else {
        __Vtemp_7[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_7[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_7[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_7[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_7[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_7[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_7[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_7[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_7[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_7[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_7[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_7[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_7[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U] 
        = __Vtemp_7[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U] 
        = __Vtemp_7[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U] 
        = __Vtemp_7[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U] 
        = __Vtemp_7[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
        = __Vtemp_7[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
        = __Vtemp_7[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
        = __Vtemp_7[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
        = __Vtemp_7[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
        = __Vtemp_7[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
        = __Vtemp_7[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U] 
        = __Vtemp_7[0x00000010U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__ipipe_pd_p[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__ipipe_pd_p[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__ipipe_pd_p[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__ipipe_pd_p[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__ipipe_pd_p[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__ipipe_pd_p[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__ipipe_pd_p[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__ipipe_pd_p[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__ipipe_pd_p[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
        } else {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
        }
    } else {
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        if (vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo0_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo0_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo0_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo0_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo0_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo0_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo0_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo0_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        if (vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo1_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo1_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo1_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo1_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo1_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo1_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo1_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo1_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[5U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[6U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[7U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[8U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[9U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U];
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3.__PVT__wr_reserving) {
            vlSelfRef.__PVT__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                            ? 0U : 
                                           (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__beat_count))));
            vlSelfRef.__PVT__in_dat_cnt = ((IData)(vlSelfRef.__PVT__in_dat_last)
                                            ? 0U : 
                                           (0x00001fffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__in_dat_cnt))));
        }
        if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3.__PVT__wr_reserving) 
             & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x000007ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo0_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo1_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3.__PVT__wr_reserving) 
                    & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    } else {
        vlSelfRef.__PVT__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        vlSelfRef.__PVT__in_dat_cnt = 0U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                   | (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__cdp2cvif_wr_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__ipipe_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                     ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                     : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd3_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd3_ready));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__7(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3.__PVT__wr_reserving)))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                     & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                    | ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                          & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)))))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__ipipe_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<17>/*514:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(515, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_7;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
    __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
    __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
    __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
    __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
    __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
    __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
    vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
        = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__ipipe_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__ipipe_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__ipipe_pd_p[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__ipipe_pd_p[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__ipipe_pd_p[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__ipipe_pd_p[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__ipipe_pd_p[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__ipipe_pd_p[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__ipipe_pd_p[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__ipipe_pd_p[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
        __Vdly__pipe_p2__DOT__p2_skid_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
        __Vdly__pipe_p2__DOT__p2_skid_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
        __Vdly__pipe_p2__DOT__p2_skid_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
        __Vdly__pipe_p2__DOT__p2_skid_data[6U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
        __Vdly__pipe_p2__DOT__p2_skid_data[7U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
        __Vdly__pipe_p2__DOT__p2_skid_data[8U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
        __Vdly__pipe_p2__DOT__p2_skid_data[9U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
        __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        __Vtemp_1[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U];
        __Vtemp_1[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U];
        __Vtemp_1[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U];
        __Vtemp_1[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U];
        __Vtemp_1[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U];
        __Vtemp_1[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U];
        __Vtemp_1[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U];
        __Vtemp_1[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU];
        __Vtemp_1[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU];
        __Vtemp_1[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU];
        __Vtemp_1[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU];
        __Vtemp_1[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU];
        __Vtemp_1[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU];
        __Vtemp_1[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[3U] 
        = __Vtemp_1[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[4U] 
        = __Vtemp_1[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[5U] 
        = __Vtemp_1[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[6U] 
        = __Vtemp_1[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[7U] 
        = __Vtemp_1[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[8U] 
        = __Vtemp_1[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[9U] 
        = __Vtemp_1[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000aU] 
        = __Vtemp_1[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000bU] 
        = __Vtemp_1[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000cU] 
        = __Vtemp_1[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000dU] 
        = __Vtemp_1[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000eU] 
        = __Vtemp_1[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x0000000fU] 
        = __Vtemp_1[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0x00000010U] 
        = __Vtemp_1[0x00000010U];
    if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__req_count))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_cmd_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_cmd_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_cmd_rdy) & (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vtemp_2[2U] = (0x00003fffU & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U]);
        vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__rbk2cvif_wr_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_valid))) {
        __Vtemp_7[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vtemp_7[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[2U];
        __Vtemp_7[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[3U];
        __Vtemp_7[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[4U];
        __Vtemp_7[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[5U];
        __Vtemp_7[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[6U];
        __Vtemp_7[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[7U];
        __Vtemp_7[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[8U];
        __Vtemp_7[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_data[0U];
    } else {
        __Vtemp_7[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_7[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_7[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_7[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_7[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        __Vtemp_7[6U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        __Vtemp_7[7U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        __Vtemp_7[8U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
        __Vtemp_7[9U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U];
        __Vtemp_7[0x0000000aU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
        __Vtemp_7[0x0000000bU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
        __Vtemp_7[0x0000000cU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
        __Vtemp_7[0x0000000dU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
        __Vtemp_7[0x0000000eU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
        __Vtemp_7[0x0000000fU] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
        __Vtemp_7[0x00000010U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_7[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_7[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_7[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_7[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U] 
        = __Vtemp_7[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U] 
        = __Vtemp_7[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U] 
        = __Vtemp_7[8U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[9U] 
        = __Vtemp_7[9U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
        = __Vtemp_7[0x0000000aU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
        = __Vtemp_7[0x0000000bU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
        = __Vtemp_7[0x0000000cU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
        = __Vtemp_7[0x0000000dU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
        = __Vtemp_7[0x0000000eU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
        = __Vtemp_7[0x0000000fU];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0x00000010U] 
        = __Vtemp_7[0x00000010U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__ipipe_pd_p[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__ipipe_pd_p[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__ipipe_pd_p[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__ipipe_pd_p[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__ipipe_pd_p[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__ipipe_pd_p[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__ipipe_pd_p[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__ipipe_pd_p[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__ipipe_pd_p[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__ipipe_pd_p[0x00000010U];
        } else {
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU];
            vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U];
        }
    } else {
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[6U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[6U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[7U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[7U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[8U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[8U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[9U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[9U];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000aU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000aU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000bU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000bU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000cU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000cU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000dU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000dU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000eU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000eU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x0000000fU] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x0000000fU];
        vlSelfRef.__Vdly__pipe_p2__DOT__p2_pipe_data[0x00000010U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        if (vlSelfRef.u_dfifo0__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo0_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo0_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo0_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo0_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo0_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo0_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo0_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo0_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo0_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo0_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo0_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo0_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo0_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo0_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo0_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo0_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        if (vlSelfRef.u_dfifo1__DOT____VdfgRegularize_h422555bb_0_3) {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__dfifo1_rd_pd[0U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[0U];
            vlSelfRef.__PVT__dfifo1_rd_pd[1U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[1U];
            vlSelfRef.__PVT__dfifo1_rd_pd[2U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[2U];
            vlSelfRef.__PVT__dfifo1_rd_pd[3U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[3U];
            vlSelfRef.__PVT__dfifo1_rd_pd[4U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[4U];
            vlSelfRef.__PVT__dfifo1_rd_pd[5U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[5U];
            vlSelfRef.__PVT__dfifo1_rd_pd[6U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[6U];
            vlSelfRef.__PVT__dfifo1_rd_pd[7U] = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo1_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__dfifo1_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__dfifo1_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__dfifo1_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__dfifo1_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__dfifo1_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__dfifo1_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__dfifo1_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[5U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[6U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[6U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[7U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[7U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[8U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[8U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[9U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[9U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000aU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000aU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000bU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000bU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000cU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000cU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000dU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000dU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000eU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000eU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x0000000fU] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x0000000fU];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0x00000010U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0x00000010U];
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
        = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4.__PVT__wr_reserving) {
            vlSelfRef.__PVT__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                            ? 0U : 
                                           (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__beat_count))));
            vlSelfRef.__PVT__in_dat_cnt = ((IData)(vlSelfRef.__PVT__in_dat_last)
                                            ? 0U : 
                                           (0x00001fffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__in_dat_cnt))));
        }
        if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4.__PVT__wr_reserving) 
             & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x000007ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo0_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo1_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4.__PVT__wr_reserving) 
                    & (IData)(vlSelfRef.__PVT__is_last_beat))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo0__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo1__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int;
    } else {
        vlSelfRef.__PVT__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        vlSelfRef.__PVT__in_dat_cnt = 0U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__Vdly__u_dfifo0__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo0__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_dfifo1__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo1__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                   | (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__rbk2cvif_wr_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__ipipe_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                     ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                     : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__ipipe_vld_p)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd4_valid) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_cmd4_ready));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4.__PVT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__7(Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_WRITE_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4.__PVT__wr_reserving)))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                     & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                    | ((IData)(vlSelfRef.__PVT__dfifo_wr_vld) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_dfifo0__DOT__wr_busy_in)) 
                          & (~ (IData)(vlSelfRef.__PVT__u_dfifo1__DOT__wr_busy_in)))))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__ipipe_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}
