// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CMAC_CORE_mac___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5__11(Vsim_NV_NVDLA_CMAC_CORE_mac* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CMAC_CORE_mac___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0;
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = 0;
    CData/*0:0*/ u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0;
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = 0;
    CData/*0:0*/ u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0;
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = 0;
    QData/*45:0*/ u_tree_l4n0__DOT____Vlvbound_h22772cbc__0;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__0 = 0;
    QData/*45:0*/ u_tree_l4n0__DOT____Vlvbound_h05236820__0;
    u_tree_l4n0__DOT____Vlvbound_h05236820__0 = 0;
    QData/*45:0*/ u_tree_l4n0__DOT____Vlvbound_h53f88fff__0;
    u_tree_l4n0__DOT____Vlvbound_h53f88fff__0 = 0;
    QData/*45:0*/ u_tree_l4n0__DOT____Vlvbound_h026feafb__0;
    u_tree_l4n0__DOT____Vlvbound_h026feafb__0 = 0;
    QData/*45:0*/ u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = 0;
    // Body
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[3U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffffffeULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | (IData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[3U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffffffdULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 1U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U]);
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffffffbULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 2U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffffff7ULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 3U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffffffefULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 4U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffffffdfULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 5U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffffffbfULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 6U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffffff7fULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 7U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffffeffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 8U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffffdffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 9U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffffbffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000aU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffff7ffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000bU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffffefffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000cU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffffdfffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000dU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffffbfffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000eU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffff7fffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000fU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffeffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000010U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffdffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000011U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffffbffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000012U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffff7ffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000013U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffefffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000014U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffdfffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000015U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffffbfffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000016U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffff7fffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000017U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffeffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000018U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffdffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000019U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fffbffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001aU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fff7ffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001bU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffefffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001cU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffdfffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001dU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ffbfffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001eU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003ff7fffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001fU));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003feffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000020U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[4U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fdffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000021U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U]);
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003fbffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000022U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003f7ffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000023U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003efffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000024U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003dfffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000025U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000003bfffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000026U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x0000037fffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000027U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000002ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000028U));
    u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n6__DOT__INPUT[5U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice 
        = ((0x000001ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n6__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000029U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[3U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array[0U] 
        = ((vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
            [0U] ^ vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
            [1U]) ^ vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
           [2U]);
    vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array[1U] 
        = (0x000003ffffffffffULL & VL_SHIFTL_QQI(42,42,32, 
                                                 (((vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                    [0U] 
                                                    & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                    [1U]) 
                                                   | (vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                      [1U] 
                                                      & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                      [2U])) 
                                                  | (vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                     [0U] 
                                                     & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                     [2U])), 1U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array[2U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
        [3U];
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[0U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array
        [0U];
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[1U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array
        [1U];
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[2U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array
        [2U];
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[3U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array
        [3U];
    vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array[0U] 
        = ((vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
            [0U] ^ vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
            [1U]) ^ vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
           [2U]);
    vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array[1U] 
        = (0x000003ffffffffffULL & VL_SHIFTL_QQI(42,42,32, 
                                                 (((vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                    [0U] 
                                                    & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                    [1U]) 
                                                   | (vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                      [1U] 
                                                      & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                      [2U])) 
                                                  | (vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                     [0U] 
                                                     & vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array
                                                     [2U])), 1U));
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[0U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array
        [0U];
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[1U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array
        [1U];
    vlSelfRef.__PVT__u_tree_l2n6__DOT__input_array[2U] 
        = vlSelfRef.__PVT__u_tree_l2n6__DOT__temp_array
        [2U];
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffeULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | (IData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffdULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 1U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffbULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 2U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffff7ULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 3U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffefULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 4U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffdfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 5U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffbfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 6U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffff7fULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 7U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffeffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 8U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffdffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 9U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffbffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffff7ffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffefffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffdfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffbfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffff7fffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffeffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000010U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffdffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000011U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffbffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000012U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffff7ffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000013U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffefffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000014U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffdfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000015U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffbfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000016U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffff7fffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000017U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffeffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000018U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffdffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000019U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffbffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fff7ffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffefffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffdfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffbfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[0U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ff7fffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003feffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000020U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fdffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000021U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fbffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000022U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003f7ffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000023U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003efffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000024U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003dfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000025U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003bfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000026U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x0000037fffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000027U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000002ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000028U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000001ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000029U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[0U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice;
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffeULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | (IData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffdULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 1U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffbULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 2U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffff7ULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 3U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffefULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 4U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffdfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 5U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffbfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 6U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffff7fULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 7U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffeffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 8U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffdffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 9U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffbffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffff7ffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffefffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffdfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffbfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffff7fffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffeffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000010U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffdffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000011U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffbffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000012U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffff7ffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000013U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffefffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000014U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[1U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffdfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000015U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffbfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000016U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffff7fffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000017U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffeffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000018U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffdffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000019U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffbffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fff7ffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffefffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffdfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffbfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ff7fffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003feffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000020U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fdffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000021U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fbffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000022U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003f7ffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000023U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003efffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000024U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003dfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000025U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003bfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000026U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x0000037fffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000027U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000002ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000028U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000001ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000029U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[1U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice;
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffeULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | (IData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffdULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 1U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffbULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 2U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffff7ULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 3U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffefULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 4U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffdfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 5U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffbfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 6U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffff7fULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 7U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffeffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 8U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffdffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 9U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffbffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[2U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffff7ffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffefffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffdfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffbfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffff7fffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffeffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000010U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffdffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000011U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffbffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000012U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffff7ffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000013U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffefffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000014U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffdfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000015U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffbfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000016U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffff7fffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000017U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffeffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000018U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffdffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000019U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffbffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fff7ffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffefffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffdfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffbfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ff7fffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003feffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000020U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fdffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000021U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fbffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000022U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003f7ffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000023U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003efffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000024U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003dfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000025U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003bfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000026U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x0000037fffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000027U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000002ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000028U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000001ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000029U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[2U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice;
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffeULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | (IData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[3U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffdULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 1U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffffbULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 2U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffff7ULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 3U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffefULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 4U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffdfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 5U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffffbfULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 6U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffff7fULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 7U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffeffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 8U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffdffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 9U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffffbffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffff7ffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffefffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffdfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffffbfffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffff7fffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000000fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffeffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000010U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffdffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000011U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffffbffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000012U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffff7ffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000013U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffefffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000014U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffdfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000015U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffffbfffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000016U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffff7fffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000017U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffeffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000018U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffdffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000019U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fffbffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001aU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fff7ffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001bU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffefffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001cU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffdfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001dU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ffbfffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001eU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003ff7fffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x0000001fU));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003feffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000020U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[4U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fdffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000021U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003fbffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000022U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003f7ffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000023U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003efffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000024U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003dfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000025U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000003bfffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000026U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x0000037fffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000027U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000002ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000028U));
    u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l2n7__DOT__INPUT[5U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice 
        = ((0x000001ffffffffffULL & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l2n7__DOT____Vlvbound_hfaa9ac73__0)) 
              << 0x00000029U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[3U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array[0U] 
        = ((vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
            [0U] ^ vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
            [1U]) ^ vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
           [2U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array[1U] 
        = (0x000003ffffffffffULL & VL_SHIFTL_QQI(42,42,32, 
                                                 (((vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                    [0U] 
                                                    & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                    [1U]) 
                                                   | (vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                      [1U] 
                                                      & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                      [2U])) 
                                                  | (vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                     [0U] 
                                                     & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                     [2U])), 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array[2U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
        [3U];
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[0U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array
        [0U];
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[1U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array
        [1U];
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[2U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array
        [2U];
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[3U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array
        [3U];
    vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array[0U] 
        = ((vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
            [0U] ^ vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
            [1U]) ^ vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
           [2U]);
    vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array[1U] 
        = (0x000003ffffffffffULL & VL_SHIFTL_QQI(42,42,32, 
                                                 (((vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                    [0U] 
                                                    & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                    [1U]) 
                                                   | (vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                      [1U] 
                                                      & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                      [2U])) 
                                                  | (vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                     [0U] 
                                                     & vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array
                                                     [2U])), 1U));
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[0U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array
        [0U];
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[1U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array
        [1U];
    vlSelfRef.__PVT__u_tree_l2n7__DOT__input_array[2U] 
        = vlSelfRef.__PVT__u_tree_l2n7__DOT__temp_array
        [2U];
    vlSelfRef.__PVT__sop_2 = (0x0000ffffffffffffULL 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19319)
                                   ? (vlSelfRef.__PVT__u_tree_l4n2__DOT__input_array
                                      [0U] & (0x00003fffff000000ULL 
                                              | (QData)((IData)(
                                                                (0x003fffffU 
                                                                 | (0x00c00000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__cfg_is_int8_d2) 
                                                                                >> 8U))))) 
                                                                       << 0x00000016U)))))))
                                   : 0ULL) + (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19319)
                                                ? (
                                                   vlSelfRef.__PVT__u_tree_l4n2__DOT__input_array
                                                   [1U] 
                                                   & (0x00003fffff000000ULL 
                                                      | (QData)((IData)(
                                                                        (0x003fffffU 
                                                                         | (0x00c00000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__cfg_is_int8_d2) 
                                                                                >> 8U))))) 
                                                                               << 0x00000016U)))))))
                                                : 0ULL) 
                                              + ((4U 
                                                  & (IData)(vlSelfRef.__PVT__cfg_is_wg_d3))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d3))
                                                   ? 0x00000015aaaaaad7ULL
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.__PVT__cfg_is_int8_d3))
                                                    ? 0x000003fc0203fc02ULL
                                                    : 0x00003d03fffc0002ULL))
                                                  : 0ULL))));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffeULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | (IData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffdULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 1U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffbULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 2U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffff7ULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 3U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffefULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 4U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffdfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 5U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffbfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 6U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffff7fULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 7U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffeffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 8U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffdffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 9U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffbffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffff7ffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffefffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffdfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffbfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffff7fffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffeffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000010U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffdffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000011U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffbffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000012U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffff7ffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000013U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffefffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000014U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffdfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000015U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffbfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000016U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffff7fffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000017U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffeffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000018U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffdffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000019U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffbffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffff7ffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffefffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffdfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffbfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[0U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fff7fffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffeffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000020U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffdffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000021U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffbffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000022U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ff7ffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000023U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fefffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000024U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fdfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000025U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fbfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000026U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003f7fffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000027U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003effffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000028U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003dffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000029U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003bffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x000037ffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00002fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00001fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002dU));
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__0 = vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[0U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__0;
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffeULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | (IData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffdULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 1U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffbULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 2U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffff7ULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 3U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffefULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 4U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffdfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 5U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffbfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 6U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffff7fULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 7U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffeffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 8U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffdffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 9U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffbffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffff7ffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffefffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffdfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffbfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffff7fffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffeffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000010U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[1U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffdffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000011U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffbffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000012U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffff7ffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000013U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffefffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000014U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffdfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000015U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffbfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000016U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffff7fffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000017U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffeffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000018U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffdffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000019U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffbffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffff7ffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffefffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffdfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffbfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fff7fffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffeffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000020U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffdffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000021U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffbffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000022U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ff7ffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000023U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fefffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000024U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fdfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000025U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fbfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000026U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003f7fffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000027U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003effffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000028U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003dffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000029U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003bffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x000037ffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00002fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00001fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002dU));
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__0 = vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[1U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__0;
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffeULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | (IData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffdULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 1U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffbULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 2U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[2U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffff7ULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 3U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffefULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 4U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffdfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 5U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffbfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 6U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffff7fULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 7U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffeffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 8U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffdffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 9U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffbffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffff7ffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffefffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffdfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffbfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffff7fffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffeffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000010U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffdffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000011U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffbffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000012U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffff7ffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000013U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffefffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000014U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffdfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000015U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffbfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000016U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffff7fffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000017U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffeffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000018U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffdffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000019U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffbffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffff7ffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffefffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffdfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffbfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fff7fffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffeffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000020U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffdffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000021U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffbffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000022U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[3U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ff7ffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000023U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fefffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000024U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fdfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000025U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fbfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000026U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003f7fffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000027U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003effffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000028U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003dffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000029U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003bffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x000037ffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00002fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00001fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002dU));
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__0 = vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[2U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__0;
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffeULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | (IData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffdULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 1U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffbULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 2U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffff7ULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 3U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffefULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 4U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffdfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 5U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffbfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 6U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffff7fULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 7U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffeffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 8U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffdffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 9U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffbffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffff7ffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffefffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffdfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffbfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffff7fffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffeffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000010U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffdffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000011U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffbffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000012U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffff7ffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000013U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffefffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000014U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[4U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffdfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000015U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffbfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000016U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffff7fffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000017U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffeffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000018U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffdffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000019U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffbffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffff7ffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffefffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffdfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffbfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fff7fffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffeffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000020U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffdffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000021U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffbffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000022U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ff7ffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000023U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fefffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000024U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fdfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000025U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fbfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000026U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003f7fffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000027U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003effffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000028U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003dffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000029U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003bffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x000037ffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00002fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00001fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002dU));
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__0 = vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[3U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__0;
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffeULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | (IData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffdULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 1U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffbULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 2U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffff7ULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 3U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffefULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 4U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffdfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 5U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffbfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 6U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[5U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffff7fULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 7U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffeffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 8U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffdffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 9U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffbffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffff7ffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffefffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffdfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffbfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffff7fffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffeffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000010U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffdffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000011U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffbffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000012U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffff7ffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000013U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffefffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000014U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffdfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000015U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffbfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000016U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffff7fffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000017U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffeffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000018U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffdffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000019U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffbffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffff7ffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffefffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffdfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffbfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fff7fffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffeffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000020U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffdffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000021U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffbffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000022U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ff7ffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000023U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fefffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000024U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fdfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000025U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fbfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000026U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[6U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003f7fffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000027U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003effffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000028U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003dffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000029U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003bffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x000037ffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00002fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00001fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002dU));
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__0 = vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[4U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__0;
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffeULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | (IData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffdULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 1U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffffbULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 2U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffff7ULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 3U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffefULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 4U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffdfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 5U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffffbfULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 6U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffff7fULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 7U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffeffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 8U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffdffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 9U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffffbffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffff7ffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffefffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffdfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000014U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffffbfffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000015U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffff7fffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000000fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000016U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffeffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000010U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000017U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffdffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000011U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000018U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffffbffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000012U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x00000019U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffff7ffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000013U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000001aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffefffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000014U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000001bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffdfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000015U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000001cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffffbfffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000016U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000001dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffff7fffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000017U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                    >> 0x0000001eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffeffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000018U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[7U] 
                                                 >> 0x0000001fU);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffdffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000019U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffffbffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffff7ffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 2U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffefffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 3U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffdfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001dU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 4U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fffbfffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001eU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 5U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fff7fffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000001fU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 6U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffeffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000020U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffdffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000021U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 8U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ffbffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000022U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 9U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003ff7ffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000023U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x0000000aU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fefffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000024U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x0000000bU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fdfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000025U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x0000000cU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003fbfffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000026U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x0000000dU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003f7fffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000027U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x0000000eU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003effffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000028U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x0000000fU));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003dffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x00000029U));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x00000010U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00003bffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002aU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x00000011U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x000037ffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002bU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x00000012U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00002fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002cU));
    u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0 = (1U 
                                                 & (vlSelfRef.__PVT__u_tree_l4n0__DOT__INPUT[8U] 
                                                    >> 0x00000013U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice 
        = ((0x00001fffffffffffULL & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice) 
           | ((QData)((IData)(u_tree_l4n0__DOT____Vlvbound_he2c3a6c9__0)) 
              << 0x0000002dU));
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__0 = vlSelfRef.__PVT__u_tree_l4n0__DOT__input_slice;
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[5U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__0;
    u_tree_l4n0__DOT____Vlvbound_h05236820__0 = ((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [0U] 
                                                  ^ 
                                                  vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [1U]) 
                                                 ^ 
                                                 vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                 [2U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[0U] 
        = u_tree_l4n0__DOT____Vlvbound_h05236820__0;
    u_tree_l4n0__DOT____Vlvbound_h53f88fff__0 = (0x00003fffffffffffULL 
                                                 & VL_SHIFTL_QQI(46,46,32, 
                                                                 (((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [0U] 
                                                                    & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [1U]) 
                                                                   | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [1U] 
                                                                      & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [2U])) 
                                                                  | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [0U] 
                                                                     & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [2U])), 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[1U] 
        = u_tree_l4n0__DOT____Vlvbound_h53f88fff__0;
    u_tree_l4n0__DOT____Vlvbound_h05236820__0 = ((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [3U] 
                                                  ^ 
                                                  vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [4U]) 
                                                 ^ 
                                                 vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                 [5U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[2U] 
        = u_tree_l4n0__DOT____Vlvbound_h05236820__0;
    u_tree_l4n0__DOT____Vlvbound_h53f88fff__0 = (0x00003fffffffffffULL 
                                                 & VL_SHIFTL_QQI(46,46,32, 
                                                                 (((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [3U] 
                                                                    & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [4U]) 
                                                                   | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [4U] 
                                                                      & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [5U])) 
                                                                  | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [3U] 
                                                                     & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [5U])), 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[3U] 
        = u_tree_l4n0__DOT____Vlvbound_h53f88fff__0;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [0U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[0U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [1U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[1U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [2U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[2U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [3U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[3U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [4U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[4U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [5U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[5U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h05236820__0 = ((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [0U] 
                                                  ^ 
                                                  vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [1U]) 
                                                 ^ 
                                                 vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                 [2U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[0U] 
        = u_tree_l4n0__DOT____Vlvbound_h05236820__0;
    u_tree_l4n0__DOT____Vlvbound_h53f88fff__0 = (0x00003fffffffffffULL 
                                                 & VL_SHIFTL_QQI(46,46,32, 
                                                                 (((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [0U] 
                                                                    & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [1U]) 
                                                                   | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [1U] 
                                                                      & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [2U])) 
                                                                  | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [0U] 
                                                                     & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [2U])), 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[1U] 
        = u_tree_l4n0__DOT____Vlvbound_h53f88fff__0;
    u_tree_l4n0__DOT____Vlvbound_h026feafb__0 = vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
        [3U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[2U] 
        = u_tree_l4n0__DOT____Vlvbound_h026feafb__0;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [0U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[0U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [1U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[1U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [2U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[2U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [3U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[3U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h05236820__0 = ((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [0U] 
                                                  ^ 
                                                  vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                  [1U]) 
                                                 ^ 
                                                 vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                 [2U]);
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[0U] 
        = u_tree_l4n0__DOT____Vlvbound_h05236820__0;
    u_tree_l4n0__DOT____Vlvbound_h53f88fff__0 = (0x00003fffffffffffULL 
                                                 & VL_SHIFTL_QQI(46,46,32, 
                                                                 (((vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [0U] 
                                                                    & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                    [1U]) 
                                                                   | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [1U] 
                                                                      & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                      [2U])) 
                                                                  | (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [0U] 
                                                                     & vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                                     [2U])), 1U));
    vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array[1U] 
        = u_tree_l4n0__DOT____Vlvbound_h53f88fff__0;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [0U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[0U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [1U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[1U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    u_tree_l4n0__DOT____Vlvbound_h22772cbc__1 = vlSelfRef.__PVT__u_tree_l4n0__DOT__temp_array
        [2U];
    vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array[2U] 
        = u_tree_l4n0__DOT____Vlvbound_h22772cbc__1;
    vlSelfRef.__PVT__sop_0 = (0x0000ffffffffffffULL 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19320)
                                   ? (vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                      [0U] & (0x00003fffff000000ULL 
                                              | (QData)((IData)(
                                                                (0x003fffffU 
                                                                 | (0x00c00000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__cfg_is_int8_d2) 
                                                                                >> 6U))))) 
                                                                       << 0x00000016U)))))))
                                   : 0ULL) + (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19320)
                                                ? (
                                                   vlSelfRef.__PVT__u_tree_l4n0__DOT__input_array
                                                   [1U] 
                                                   & (0x00003fffff000000ULL 
                                                      | (QData)((IData)(
                                                                        (0x003fffffU 
                                                                         | (0x00c00000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__cfg_is_int8_d2) 
                                                                                >> 6U))))) 
                                                                               << 0x00000016U)))))))
                                                : 0ULL) 
                                              + (((~ (IData)(vlSelfRef.__PVT__cfg_is_wg_d3)) 
                                                  & (IData)(vlSelfRef.__PVT__cfg_is_int16_d3))
                                                  ? 0x0000002aaac00000ULL
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__cfg_is_wg_d3)) 
                                                      & (IData)(vlSelfRef.__PVT__cfg_is_int8_d3)))
                                                   ? 0x00002ac0002ac000ULL
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__cfg_is_wg_d3)) 
                                                       & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d3)))
                                                    ? 0x00000015aaaaaad5ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d3))
                                                     ? 0x00000015aaaaaad5ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__cfg_is_int8_d3))
                                                      ? 0x0000340c00340c00ULL
                                                      : 0x000008f4000c0000ULL))))))));
}

void Vsim_NV_NVDLA_CMAC_CORE_mac___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__0(Vsim_NV_NVDLA_CMAC_CORE_mac* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CMAC_CORE_mac___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_wg_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                     & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_wg_6__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CMAC_CORE_mac___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__0(Vsim_NV_NVDLA_CMAC_CORE_mac* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CMAC_CORE_mac___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_exp__DOT__exp_p1_pvld_w) {
        vlSelfRef.__PVT__exp_sft_00 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_00)));
        vlSelfRef.__PVT__exp_sft_01 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_01)));
        vlSelfRef.__PVT__exp_sft_02 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_02)));
        vlSelfRef.__PVT__exp_sft_03 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_03)));
        vlSelfRef.__PVT__exp_sft_04 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_04)));
        vlSelfRef.__PVT__exp_sft_05 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_05)));
        vlSelfRef.__PVT__exp_sft_06 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_06)));
        vlSelfRef.__PVT__exp_sft_07 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_07)));
        vlSelfRef.__PVT__exp_sft_08 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_08)));
        vlSelfRef.__PVT__exp_sft_09 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_09)));
        vlSelfRef.__PVT__exp_sft_10 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_10)));
        vlSelfRef.__PVT__exp_sft_11 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_11)));
        vlSelfRef.__PVT__exp_sft_12 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_12)));
        vlSelfRef.__PVT__exp_sft_13 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_13)));
        vlSelfRef.__PVT__exp_sft_14 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_14)));
        vlSelfRef.__PVT__exp_sft_15 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_15)));
        vlSelfRef.__PVT__exp_sft_16 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_16)));
        vlSelfRef.__PVT__exp_sft_17 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_17)));
        vlSelfRef.__PVT__exp_sft_18 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_18)));
        vlSelfRef.__PVT__exp_sft_19 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_19)));
        vlSelfRef.__PVT__exp_sft_20 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_20)));
        vlSelfRef.__PVT__exp_sft_21 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_21)));
        vlSelfRef.__PVT__exp_sft_22 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_22)));
        vlSelfRef.__PVT__exp_sft_23 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_23)));
        vlSelfRef.__PVT__exp_sft_24 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_24)));
        vlSelfRef.__PVT__exp_sft_25 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_25)));
        vlSelfRef.__PVT__exp_sft_26 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_26)));
        vlSelfRef.__PVT__exp_sft_27 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_27)));
        vlSelfRef.__PVT__exp_sft_28 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_28)));
        vlSelfRef.__PVT__exp_sft_29 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_29)));
        vlSelfRef.__PVT__exp_sft_30 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_30)));
        vlSelfRef.__PVT__exp_sft_31 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_31)));
        vlSelfRef.__PVT__exp_sft_32 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_32)));
        vlSelfRef.__PVT__exp_sft_33 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_33)));
        vlSelfRef.__PVT__exp_sft_34 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_34)));
        vlSelfRef.__PVT__exp_sft_35 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_35)));
        vlSelfRef.__PVT__exp_sft_36 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_36)));
        vlSelfRef.__PVT__exp_sft_37 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_37)));
        vlSelfRef.__PVT__exp_sft_38 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_38)));
        vlSelfRef.__PVT__exp_sft_39 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_39)));
        vlSelfRef.__PVT__exp_sft_40 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_40)));
        vlSelfRef.__PVT__exp_sft_41 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_41)));
        vlSelfRef.__PVT__exp_sft_42 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_42)));
        vlSelfRef.__PVT__exp_sft_43 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_43)));
        vlSelfRef.__PVT__exp_sft_44 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_44)));
        vlSelfRef.__PVT__exp_sft_45 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_45)));
        vlSelfRef.__PVT__exp_sft_46 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_46)));
        vlSelfRef.__PVT__exp_sft_47 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_47)));
        vlSelfRef.__PVT__exp_sft_48 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_48)));
        vlSelfRef.__PVT__exp_sft_49 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_49)));
        vlSelfRef.__PVT__exp_sft_50 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_50)));
        vlSelfRef.__PVT__exp_sft_51 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_51)));
        vlSelfRef.__PVT__exp_sft_52 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_52)));
        vlSelfRef.__PVT__exp_sft_53 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_53)));
        vlSelfRef.__PVT__exp_sft_54 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_54)));
        vlSelfRef.__PVT__exp_sft_55 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_55)));
        vlSelfRef.__PVT__exp_sft_56 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_56)));
        vlSelfRef.__PVT__exp_sft_57 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_57)));
        vlSelfRef.__PVT__exp_sft_58 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_58)));
        vlSelfRef.__PVT__exp_sft_59 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_59)));
        vlSelfRef.__PVT__exp_sft_60 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_60)));
        vlSelfRef.__PVT__exp_sft_61 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_61)));
        vlSelfRef.__PVT__exp_sft_62 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_62)));
        vlSelfRef.__PVT__exp_sft_63 = (0x0000000fU 
                                       & ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0) 
                                          - (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_63)));
    }
    if ((1U & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
               & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n00_0_d1 = vlSelfRef.__PVT__u_tree_l0n00__DOT__input_array
            [0U];
    } else if ((1U & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                       & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                      & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n00_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n00_1_d1 = vlSelfRef.__PVT__u_tree_l0n00__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n00_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 8U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n04_0_d1 = vlSelfRef.__PVT__u_tree_l0n04__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 8U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n04_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 9U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n04_1_d1 = vlSelfRef.__PVT__u_tree_l0n04__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 9U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n04_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000010U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n08_0_d1 = vlSelfRef.__PVT__u_tree_l0n08__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000010U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n08_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000011U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n08_1_d1 = vlSelfRef.__PVT__u_tree_l0n08__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000011U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n08_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000018U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n12_0_d1 = vlSelfRef.__PVT__u_tree_l0n12__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000018U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n12_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000019U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n12_1_d1 = vlSelfRef.__PVT__u_tree_l0n12__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000019U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n12_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n01_0_d1 = vlSelfRef.__PVT__u_tree_l0n01__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n01_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n01_1_d1 = vlSelfRef.__PVT__u_tree_l0n01__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n01_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000000aU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n05_0_d1 = vlSelfRef.__PVT__u_tree_l0n05__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000000aU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n05_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000000bU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n05_1_d1 = vlSelfRef.__PVT__u_tree_l0n05__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000000bU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n05_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000012U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n09_0_d1 = vlSelfRef.__PVT__u_tree_l0n09__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000012U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n09_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000013U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n09_1_d1 = vlSelfRef.__PVT__u_tree_l0n09__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000013U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n09_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000001aU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n13_0_d1 = vlSelfRef.__PVT__u_tree_l0n13__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000001aU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n13_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000001bU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n13_1_d1 = vlSelfRef.__PVT__u_tree_l0n13__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000001bU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n13_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n03_0_d1 = vlSelfRef.__PVT__u_tree_l0n03__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n03_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n03_1_d1 = vlSelfRef.__PVT__u_tree_l0n03__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n03_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000000eU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n07_0_d1 = vlSelfRef.__PVT__u_tree_l0n07__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000000eU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n07_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000000fU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n07_1_d1 = vlSelfRef.__PVT__u_tree_l0n07__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000000fU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n07_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000016U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n11_0_d1 = vlSelfRef.__PVT__u_tree_l0n11__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000016U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n11_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000017U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n11_1_d1 = vlSelfRef.__PVT__u_tree_l0n11__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000017U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n11_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000001eU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n15_0_d1 = vlSelfRef.__PVT__u_tree_l0n15__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000001eU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n15_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000001fU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n15_1_d1 = vlSelfRef.__PVT__u_tree_l0n15__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000001fU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n15_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n02_0_d1 = vlSelfRef.__PVT__u_tree_l0n02__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n02_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n02_1_d1 = vlSelfRef.__PVT__u_tree_l0n02__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n02_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000000cU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n06_0_d1 = vlSelfRef.__PVT__u_tree_l0n06__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000000cU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n06_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000000dU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n06_1_d1 = vlSelfRef.__PVT__u_tree_l0n06__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000000dU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n06_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000014U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n10_0_d1 = vlSelfRef.__PVT__u_tree_l0n10__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000014U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n10_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x00000015U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n10_1_d1 = vlSelfRef.__PVT__u_tree_l0n10__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x00000015U) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n10_1_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000001cU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n14_0_d1 = vlSelfRef.__PVT__u_tree_l0n14__DOT__input_array
            [0U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000001cU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n14_0_d1 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                >> 0x0000001dU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n14_1_d1 = vlSelfRef.__PVT__u_tree_l0n14__DOT__input_array
            [1U];
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U]) 
                       >> 0x0000001dU) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__pp_out_l0n14_1_d1 = 0ULL;
    }
    if ((1U & (vlSelfRef.__PVT__pp_pvld_d1 & (~ vlSelfRef.__PVT__pp_nan_pvld_d1)))) {
        vlSelfRef.__PVT__pp_out_l2n0_0_d2 = vlSelfRef.__PVT__u_tree_l2n0__DOT__input_array
            [0U];
        vlSelfRef.__PVT__pp_out_l2n0_1_d2 = vlSelfRef.__PVT__u_tree_l2n0__DOT__input_array
            [1U];
    } else if ((1U & (vlSelfRef.__PVT__pp_pvld_d1 & 
                      (~ vlSelfRef.__PVT__pp_nan_pvld_d1)))) {
        vlSelfRef.__PVT__pp_out_l2n0_0_d2 = 0ULL;
        vlSelfRef.__PVT__pp_out_l2n0_1_d2 = 0ULL;
    }
    if ((1U & ((vlSelfRef.__PVT__pp_pvld_d1 >> 1U) 
               & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                     >> 1U))))) {
        vlSelfRef.__PVT__pp_out_l2n1_0_d2 = vlSelfRef.__PVT__u_tree_l2n1__DOT__input_array
            [0U];
        vlSelfRef.__PVT__pp_out_l2n1_1_d2 = vlSelfRef.__PVT__u_tree_l2n1__DOT__input_array
            [1U];
    } else if ((1U & ((vlSelfRef.__PVT__pp_pvld_d1 
                       >> 1U) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                    >> 1U))))) {
        vlSelfRef.__PVT__pp_out_l2n1_0_d2 = 0ULL;
        vlSelfRef.__PVT__pp_out_l2n1_1_d2 = 0ULL;
    }
    if ((1U & ((vlSelfRef.__PVT__pp_pvld_d1 >> 3U) 
               & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                     >> 3U))))) {
        vlSelfRef.__PVT__pp_out_l2n3_0_d2 = vlSelfRef.__PVT__u_tree_l2n3__DOT__input_array
            [0U];
        vlSelfRef.__PVT__pp_out_l2n3_1_d2 = vlSelfRef.__PVT__u_tree_l2n3__DOT__input_array
            [1U];
    } else if ((1U & ((vlSelfRef.__PVT__pp_pvld_d1 
                       >> 3U) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                    >> 3U))))) {
        vlSelfRef.__PVT__pp_out_l2n3_0_d2 = 0ULL;
        vlSelfRef.__PVT__pp_out_l2n3_1_d2 = 0ULL;
    }
    if ((1U & ((vlSelfRef.__PVT__pp_pvld_d1 >> 2U) 
               & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                     >> 2U))))) {
        vlSelfRef.__PVT__pp_out_l2n2_0_d2 = vlSelfRef.__PVT__u_tree_l2n2__DOT__input_array
            [0U];
        vlSelfRef.__PVT__pp_out_l2n2_1_d2 = vlSelfRef.__PVT__u_tree_l2n2__DOT__input_array
            [1U];
    } else if ((1U & ((vlSelfRef.__PVT__pp_pvld_d1 
                       >> 2U) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                    >> 2U))))) {
        vlSelfRef.__PVT__pp_out_l2n2_0_d2 = 0ULL;
        vlSelfRef.__PVT__pp_out_l2n2_1_d2 = 0ULL;
    }
    if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d0)) 
               & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b0_d1 = vlSelfRef.__PVT__res_tag_b0;
    } else if ((1U & (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                        & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                       & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d0)) 
                      & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b0_d1 = 0ULL;
    }
    if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                  & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                           >> 1U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b1_d1 = vlSelfRef.__PVT__res_tag_b1;
    } else if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                        >> 1U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                  >> 1U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b1_d1 = 0ULL;
    }
    if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                  & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                 >> 2U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                           >> 2U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b2_d1 = vlSelfRef.__PVT__res_tag_b2;
    } else if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                        >> 2U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                  >> 2U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b2_d1 = 0ULL;
    }
    if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                  & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                 >> 3U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                           >> 3U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b3_d1 = vlSelfRef.__PVT__res_tag_b3;
    } else if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                        >> 3U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                  >> 3U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b3_d1 = 0ULL;
    }
    if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                  & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                 >> 4U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                           >> 4U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b4_d1 = vlSelfRef.__PVT__res_tag_b4;
    } else if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                        >> 4U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                  >> 4U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b4_d1 = 0ULL;
    }
    if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                  & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                 >> 5U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                           >> 5U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b5_d1 = vlSelfRef.__PVT__res_tag_b5;
    } else if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                        >> 5U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                  >> 5U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b5_d1 = 0ULL;
    }
    if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                  & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                 >> 6U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                           >> 6U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b6_d1 = vlSelfRef.__PVT__res_tag_b6;
    } else if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                        >> 6U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                  >> 6U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b6_d1 = 0ULL;
    }
    if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                  & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                 >> 7U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                           >> 7U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b7_d1 = vlSelfRef.__PVT__res_tag_b7;
    } else if ((1U & ((((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U]) 
                        >> 7U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                  >> 7U)) & (~ (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))))) {
        vlSelfRef.__PVT__res_tag_b7_d1 = 0ULL;
    }
    if (vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_set) {
        vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[0U];
        vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[1U];
        vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[2U];
        vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[3U];
        vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[4U];
        vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[5U];
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 8U) 
                 & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d1)) 
                & (vlSelfRef.__PVT__cfg_is_wg_d1 >> 0x14U)) 
               & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                     >> 8U))))) {
        vlSelfRef.__PVT__ps_n1b0_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_1) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_1))));
        vlSelfRef.__PVT__ps_n2b0_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_2) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_2))));
        vlSelfRef.__PVT__ps_n3b0_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_52) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_52))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 8U) & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d1)) 
                       & (vlSelfRef.__PVT__cfg_is_wg_d1 
                          >> 0x14U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                           >> 8U))))) {
        vlSelfRef.__PVT__ps_n1b0_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b0_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b0_d2 = 0U;
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 9U) 
                 & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                    >> 1U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                               >> 0x15U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 9U))))) {
        vlSelfRef.__PVT__ps_n1b1_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_3) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_3))));
        vlSelfRef.__PVT__ps_n2b1_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_4) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_4))));
        vlSelfRef.__PVT__ps_n3b1_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_47) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_47))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 9U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                   >> 1U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                                              >> 0x15U)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 9U))))) {
        vlSelfRef.__PVT__ps_n1b1_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b1_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b1_d2 = 0U;
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0aU) 
                 & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                    >> 2U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                               >> 0x16U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 0x0aU))))) {
        vlSelfRef.__PVT__ps_n1b2_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_5) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_5))));
        vlSelfRef.__PVT__ps_n2b2_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_6) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_6))));
        vlSelfRef.__PVT__ps_n3b2_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_42) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_42))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 0x0aU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                      >> 2U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                                                 >> 0x16U)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 0x0aU))))) {
        vlSelfRef.__PVT__ps_n1b2_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b2_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b2_d2 = 0U;
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0bU) 
                 & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                    >> 3U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                               >> 0x17U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 0x0bU))))) {
        vlSelfRef.__PVT__ps_n1b3_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_7) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_7))));
        vlSelfRef.__PVT__ps_n2b3_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_8) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_8))));
        vlSelfRef.__PVT__ps_n3b3_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_37) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_37))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 0x0bU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                      >> 3U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                                                 >> 0x17U)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 0x0bU))))) {
        vlSelfRef.__PVT__ps_n1b3_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b3_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b3_d2 = 0U;
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0cU) 
                 & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                    >> 4U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                               >> 0x18U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 0x0cU))))) {
        vlSelfRef.__PVT__ps_n1b4_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_9) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_9))));
        vlSelfRef.__PVT__ps_n2b4_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_10) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_10))));
        vlSelfRef.__PVT__ps_n3b4_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_32) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_32))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 0x0cU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                      >> 4U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                                                 >> 0x18U)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 0x0cU))))) {
        vlSelfRef.__PVT__ps_n1b4_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b4_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b4_d2 = 0U;
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0dU) 
                 & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                    >> 5U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                               >> 0x19U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 0x0dU))))) {
        vlSelfRef.__PVT__ps_n1b5_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_11) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_11))));
        vlSelfRef.__PVT__ps_n2b5_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_12) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_12))));
        vlSelfRef.__PVT__ps_n3b5_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_27) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_27))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 0x0dU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                      >> 5U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                                                 >> 0x19U)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 0x0dU))))) {
        vlSelfRef.__PVT__ps_n1b5_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b5_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b5_d2 = 0U;
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0eU) 
                 & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                    >> 6U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                               >> 0x1aU)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 0x0eU))))) {
        vlSelfRef.__PVT__ps_n1b6_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_13) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_13))));
        vlSelfRef.__PVT__ps_n2b6_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_14) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_14))));
        vlSelfRef.__PVT__ps_n3b6_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_22) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_22))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 0x0eU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                      >> 6U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                                                 >> 0x1aU)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 0x0eU))))) {
        vlSelfRef.__PVT__ps_n1b6_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b6_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b6_d2 = 0U;
    }
    if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0fU) 
                 & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                    >> 7U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                               >> 0x1bU)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 0x0fU))))) {
        vlSelfRef.__PVT__ps_n1b7_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_15) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_15))));
        vlSelfRef.__PVT__ps_n2b7_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_16) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_16))));
        vlSelfRef.__PVT__ps_n3b7_d2 = (0x0000007fU 
                                       & (~ ((0x00000040U 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_17) 
                                                 << 1U)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6fd604fd_0_17))));
    } else if ((1U & ((((vlSelfRef.__PVT__pp_pvld_d1 
                         >> 0x0fU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                      >> 7U)) & (vlSelfRef.__PVT__cfg_is_wg_d1 
                                                 >> 0x1bU)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 0x0fU))))) {
        vlSelfRef.__PVT__ps_n1b7_d2 = 0U;
        vlSelfRef.__PVT__ps_n2b7_d2 = 0U;
        vlSelfRef.__PVT__ps_n3b7_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 8U) 
                & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d1)) 
               & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                     >> 8U))))) {
        vlSelfRef.__PVT__ps_n0b0_d2 = (0x0000007fU 
                                       & (~ ((0x00000100U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b0_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b0_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 8U) & (IData)(vlSelfRef.__PVT__cfg_is_fp16_d1)) 
                      & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                            >> 8U))))) {
        vlSelfRef.__PVT__ps_n0b0_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 9U) 
                & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                   >> 1U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                 >> 9U))))) {
        vlSelfRef.__PVT__ps_n0b1_d2 = (0x0000007fU 
                                       & (~ ((0x00000200U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b1_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b1_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 9U) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                  >> 1U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                >> 9U))))) {
        vlSelfRef.__PVT__ps_n0b1_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0aU) 
                & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                   >> 2U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                 >> 0x0aU))))) {
        vlSelfRef.__PVT__ps_n0b2_d2 = (0x0000007fU 
                                       & (~ ((0x00000400U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b2_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b2_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 0x0aU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                     >> 2U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                   >> 0x0aU))))) {
        vlSelfRef.__PVT__ps_n0b2_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0bU) 
                & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                   >> 3U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                 >> 0x0bU))))) {
        vlSelfRef.__PVT__ps_n0b3_d2 = (0x0000007fU 
                                       & (~ ((0x00000800U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b3_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b3_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 0x0bU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                     >> 3U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                   >> 0x0bU))))) {
        vlSelfRef.__PVT__ps_n0b3_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0cU) 
                & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                   >> 4U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                 >> 0x0cU))))) {
        vlSelfRef.__PVT__ps_n0b4_d2 = (0x0000007fU 
                                       & (~ ((0x00001000U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b4_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b4_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 0x0cU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                     >> 4U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                   >> 0x0cU))))) {
        vlSelfRef.__PVT__ps_n0b4_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0dU) 
                & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                   >> 5U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                 >> 0x0dU))))) {
        vlSelfRef.__PVT__ps_n0b5_d2 = (0x0000007fU 
                                       & (~ ((0x00002000U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b5_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b5_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 0x0dU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                     >> 5U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                   >> 0x0dU))))) {
        vlSelfRef.__PVT__ps_n0b5_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0eU) 
                & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                   >> 6U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                 >> 0x0eU))))) {
        vlSelfRef.__PVT__ps_n0b6_d2 = (0x0000007fU 
                                       & (~ ((0x00004000U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b6_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b6_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 0x0eU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                     >> 6U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                   >> 0x0eU))))) {
        vlSelfRef.__PVT__ps_n0b6_d2 = 0U;
    }
    if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 >> 0x0fU) 
                & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                   >> 7U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                 >> 0x0fU))))) {
        vlSelfRef.__PVT__ps_n0b7_d2 = (0x0000007fU 
                                       & (~ ((0x00008000U 
                                              & vlSelfRef.__PVT__cfg_is_wg_d1)
                                              ? (0x0000003fU 
                                                 & ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_0) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_1) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_2) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_4) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_5) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_6) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_8) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_9) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b7_sum_10))))))))))
                                              : ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_15) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_14) 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_13) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_12) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_11) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_10) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_9) 
                                                       + 
                                                       ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_8) 
                                                        + 
                                                        ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_7) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_6) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_5) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_4) 
                                                            + 
                                                            ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_3) 
                                                             + 
                                                             ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_2) 
                                                              + 
                                                              ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_1) 
                                                               + (IData)(vlSelfRef.__PVT__res_tag_b7_sum_0)))))))))))))))))));
    } else if ((1U & (((vlSelfRef.__PVT__pp_pvld_d1 
                        >> 0x0fU) & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                     >> 7U)) & (~ (vlSelfRef.__PVT__pp_nan_pvld_d1 
                                                   >> 0x0fU))))) {
        vlSelfRef.__PVT__ps_n0b7_d2 = 0U;
    }
    vlSelfRef.__PVT__res_tag_b0_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b0_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b0_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b0_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b0_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b0_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b0_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b0_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b0_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b0_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b0_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b0_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b0_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b1_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b1_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b1_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b1_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b1_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b1_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b1_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b1_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b1_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b1_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b1_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b1_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b2_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b2_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b2_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b2_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b2_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b2_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b2_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b2_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b2_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b2_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b2_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b2_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b3_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b3_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b3_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b3_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b3_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b3_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b3_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b3_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b3_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b3_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b3_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b3_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b4_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b4_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b4_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b4_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b4_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b4_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b4_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b4_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b4_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b4_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b4_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b4_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b5_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b5_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b5_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b5_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b5_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b5_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b5_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b5_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b5_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b5_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b5_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b5_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b6_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b6_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b6_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b6_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b6_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b6_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b6_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b6_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b6_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b6_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b6_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b6_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_0 = (7U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__res_tag_b7_d1)) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 1U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 3U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_1 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 4U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 5U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 7U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_2 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 8U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 9U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000000aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000000bU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_3 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 0x0000000cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 0x0000000dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000000eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000000fU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_4 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 0x00000010U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 0x00000011U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000012U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000013U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_8 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 0x00000020U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 0x00000021U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000022U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000023U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_12 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b7_d1 
                                                            >> 0x00000030U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000031U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x00000032U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x00000033U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_15 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b7_d1 
                                                            >> 0x0000003cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000003dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000003eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000003fU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_7 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 0x0000001cU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 0x0000001dU))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000001eU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000001fU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_11 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b7_d1 
                                                            >> 0x0000002cU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000002dU))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000002eU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000002fU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_13 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b7_d1 
                                                            >> 0x00000034U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000035U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x00000036U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x00000037U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_14 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b7_d1 
                                                            >> 0x00000038U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000039U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000003aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000003bU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_5 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 0x00000014U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 0x00000015U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000016U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000017U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_6 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 0x00000018U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 0x00000019U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000001aU))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x0000001bU)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_9 = (7U & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__res_tag_b7_d1 
                                                           >> 0x00000024U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__res_tag_b7_d1 
                                                              >> 0x00000025U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000026U))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000027U)))))));
    vlSelfRef.__PVT__res_tag_b7_sum_10 = (7U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__res_tag_b7_d1 
                                                            >> 0x00000028U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__res_tag_b7_d1 
                                                               >> 0x00000029U))) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000002aU))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__res_tag_b7_d1 
                                                                >> 0x0000002bU)))))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_1 = (0x0000003fU 
                                                & (((((((((IData)(vlSelfRef.__PVT__res_tag_b0_sum_1) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_2)) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_3)) 
                                                        + (IData)(vlSelfRef.__PVT__res_tag_b0_sum_5)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_6)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_7)) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b0_sum_9)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_10)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_2 = (0x0000003fU 
                                                & ((((((((IData)(vlSelfRef.__PVT__res_tag_b0_sum_4) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_5) 
                                                          + (IData)(vlSelfRef.__PVT__res_tag_b0_sum_6))) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_8)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_9)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_10)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_12)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_13)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_52 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b0_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b0_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b0_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b0_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b0_sum_15))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_3 = (0x0000003fU 
                                                & (((((((((IData)(vlSelfRef.__PVT__res_tag_b1_sum_1) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_2)) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_3)) 
                                                        + (IData)(vlSelfRef.__PVT__res_tag_b1_sum_5)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_6)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_7)) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b1_sum_9)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_10)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_4 = (0x0000003fU 
                                                & ((((((((IData)(vlSelfRef.__PVT__res_tag_b1_sum_4) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_5) 
                                                          + (IData)(vlSelfRef.__PVT__res_tag_b1_sum_6))) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_8)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_9)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_10)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_12)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_13)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_47 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b1_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b1_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b1_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b1_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b1_sum_15))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_5 = (0x0000003fU 
                                                & (((((((((IData)(vlSelfRef.__PVT__res_tag_b2_sum_1) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_2)) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_3)) 
                                                        + (IData)(vlSelfRef.__PVT__res_tag_b2_sum_5)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_6)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_7)) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b2_sum_9)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_10)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_6 = (0x0000003fU 
                                                & ((((((((IData)(vlSelfRef.__PVT__res_tag_b2_sum_4) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_5) 
                                                          + (IData)(vlSelfRef.__PVT__res_tag_b2_sum_6))) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_8)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_9)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_10)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_12)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_13)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_42 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b2_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b2_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b2_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b2_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b2_sum_15))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_7 = (0x0000003fU 
                                                & (((((((((IData)(vlSelfRef.__PVT__res_tag_b3_sum_1) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_2)) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_3)) 
                                                        + (IData)(vlSelfRef.__PVT__res_tag_b3_sum_5)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_6)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_7)) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b3_sum_9)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_10)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_8 = (0x0000003fU 
                                                & ((((((((IData)(vlSelfRef.__PVT__res_tag_b3_sum_4) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_5) 
                                                          + (IData)(vlSelfRef.__PVT__res_tag_b3_sum_6))) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_8)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_9)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_10)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_12)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_13)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_37 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b3_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b3_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b3_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b3_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b3_sum_15))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_9 = (0x0000003fU 
                                                & (((((((((IData)(vlSelfRef.__PVT__res_tag_b4_sum_1) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_2)) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_3)) 
                                                        + (IData)(vlSelfRef.__PVT__res_tag_b4_sum_5)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_6)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_7)) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b4_sum_9)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_10)) 
                                                   - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_10 = (0x0000003fU 
                                                 & ((((((((IData)(vlSelfRef.__PVT__res_tag_b4_sum_4) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_5) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b4_sum_6))) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_8)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_9)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_10)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_12)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_13)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_32 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b4_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b4_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b4_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b4_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b4_sum_15))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_11 = (0x0000003fU 
                                                 & (((((((((IData)(vlSelfRef.__PVT__res_tag_b5_sum_1) 
                                                           - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_2)) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_3)) 
                                                         + (IData)(vlSelfRef.__PVT__res_tag_b5_sum_5)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_6)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_7)) 
                                                      + (IData)(vlSelfRef.__PVT__res_tag_b5_sum_9)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_10)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_12 = (0x0000003fU 
                                                 & ((((((((IData)(vlSelfRef.__PVT__res_tag_b5_sum_4) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_5) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b5_sum_6))) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_8)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_9)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_10)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_12)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_13)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_27 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b5_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b5_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b5_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b5_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b5_sum_15))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_13 = (0x0000003fU 
                                                 & (((((((((IData)(vlSelfRef.__PVT__res_tag_b6_sum_1) 
                                                           - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_2)) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_3)) 
                                                         + (IData)(vlSelfRef.__PVT__res_tag_b6_sum_5)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_6)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_7)) 
                                                      + (IData)(vlSelfRef.__PVT__res_tag_b6_sum_9)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_10)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_14 = (0x0000003fU 
                                                 & ((((((((IData)(vlSelfRef.__PVT__res_tag_b6_sum_4) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_5) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b6_sum_6))) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_8)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_9)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_10)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_12)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_13)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_22 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b6_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b6_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b6_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b6_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b6_sum_15))));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_15 = (0x0000003fU 
                                                 & (((((((((IData)(vlSelfRef.__PVT__res_tag_b7_sum_1) 
                                                           - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_2)) 
                                                          - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_3)) 
                                                         + (IData)(vlSelfRef.__PVT__res_tag_b7_sum_5)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_6)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_7)) 
                                                      + (IData)(vlSelfRef.__PVT__res_tag_b7_sum_9)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_10)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_11)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_16 = (0x0000003fU 
                                                 & ((((((((IData)(vlSelfRef.__PVT__res_tag_b7_sum_4) 
                                                          + 
                                                          ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_5) 
                                                           + (IData)(vlSelfRef.__PVT__res_tag_b7_sum_6))) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_8)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_9)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_10)) 
                                                      - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_12)) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_13)) 
                                                    - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_14)));
    vlSelfRef.__VdfgRegularize_h6fd604fd_0_17 = (0x0000003fU 
                                                 & (((((((IData)(vlSelfRef.__PVT__res_tag_b7_sum_5) 
                                                         - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_6)) 
                                                        - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_7)) 
                                                       - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_9)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_10) 
                                                       + (IData)(vlSelfRef.__PVT__res_tag_b7_sum_11))) 
                                                     - (IData)(vlSelfRef.__PVT__res_tag_b7_sum_13)) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__res_tag_b7_sum_14) 
                                                     + (IData)(vlSelfRef.__PVT__res_tag_b7_sum_15))));
}

void Vsim_NV_NVDLA_CMAC_CORE_mac___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__1(Vsim_NV_NVDLA_CMAC_CORE_mac* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CMAC_CORE_mac___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_pvld = 
        ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (IData)(vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_pvld_w));
    vlSelfRef.__PVT__u_exp__DOT__exp_p1_pvld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                                && (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_p1_pvld_w));
    vlSelfRef.__PVT__pp_exp_pvld_d2 = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__pp_exp_pvld_d1));
    vlSelfRef.__PVT__mac_out_nan = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pp_nan_pvld_d2) 
                                              >> 4U)));
    vlSelfRef.__PVT__mac_out_pvld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__pp_pvld_d2) 
                                               >> 4U)));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__pp_exp_pvld_d1) {
            vlSelfRef.__PVT__pp_exp_d2 = vlSelfRef.__PVT__pp_exp_d1;
        }
        if ((0x00010000U & vlSelfRef.__PVT__pp_nan_pvld_d1)) {
            vlSelfRef.__PVT__pp_nan_mts_d2 = vlSelfRef.__PVT__pp_nan_mts_d1;
        }
        if (vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_set) {
            vlSelfRef.__PVT__u_exp__DOT__wt_actv_mask 
                = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_mask;
        }
        if (vlSelfRef.__PVT__cfg_reg_en_d2) {
            vlSelfRef.__PVT__cfg_is_int16_d3 = vlSelfRef.__PVT__cfg_is_int16_d2;
            vlSelfRef.__PVT__cfg_is_fp16_d3 = (0x000000ffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d2) 
                                                                >> 8U)))));
        }
        if (vlSelfRef.__PVT__pp_exp_pvld_w) {
            vlSelfRef.__PVT__pp_exp_d1 = vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0_d1;
        }
        vlSelfRef.__PVT__pp_pvld_d2 = (0x0000001fU 
                                       & (- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.__PVT__pp_pvld_d1 
                                                        >> 0x10U)))));
        if (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[0U] 
              & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[0U]) 
             & (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))) {
            vlSelfRef.__PVT__pp_nan_mts_d1 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17434)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17430)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17422)
                                                     ? (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n0)
                                                     : (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n1))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17424)
                                                     ? (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n2)
                                                     : (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n3)))
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17432)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17426)
                                                     ? (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n4)
                                                     : (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n5))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17428)
                                                     ? (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n6)
                                                     : (IData)(vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n7)))) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17434) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17432) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17428) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17420) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17404) 
                                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17372) 
                                                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17371))))))))));
        } else if (((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[0U] 
                     & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[0U]) 
                    & (IData)(vlSelfRef.__PVT__u_nan__DOT__out_nan_pvld))) {
            vlSelfRef.__PVT__pp_nan_mts_d1 = 0U;
        }
        if (vlSelfRef.__PVT__cfg_reg_en_d1) {
            vlSelfRef.__PVT__cfg_is_int16_d2 = vlSelfRef.__PVT__cfg_is_int16_d1;
            vlSelfRef.__PVT__cfg_is_fp16_d2 = (0x000001ffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d1) 
                                                                >> 8U)))));
        }
        if (vlSelfRef.__PVT__cfg_reg_en_d0) {
            vlSelfRef.__PVT__cfg_is_int16_d1 = vlSelfRef.__PVT__cfg_is_int16_d0;
            vlSelfRef.__PVT__cfg_is_fp16_d1 = (0x000001ffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.__PVT__cfg_is_fp16_d0) 
                                                                >> 8U)))));
        }
        if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_nan__DOT__cfg_is_fp16_d1 
                = (0x00000001ffffffffULL & (- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16))));
            vlSelfRef.__PVT__u_exp__DOT__cfg_is_fp16_d1 
                = (3U & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16))));
            vlSelfRef.__PVT__cfg_is_int16_d0 = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_int16;
            vlSelfRef.__PVT__cfg_is_fp16_d0 = (0x000001ffU 
                                               & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16))));
        }
    } else {
        vlSelfRef.__PVT__pp_exp_d2 = 0U;
        vlSelfRef.__PVT__pp_nan_mts_d2 = 0U;
        vlSelfRef.__PVT__u_nan__DOT__cfg_is_fp16_d1 = 0ULL;
        vlSelfRef.__PVT__u_exp__DOT__cfg_is_fp16_d1 = 0U;
        vlSelfRef.__PVT__u_exp__DOT__wt_actv_mask = 0ULL;
        vlSelfRef.__PVT__cfg_is_int16_d3 = 0U;
        vlSelfRef.__PVT__cfg_is_fp16_d3 = 0U;
        vlSelfRef.__PVT__pp_exp_d1 = 0U;
        vlSelfRef.__PVT__pp_pvld_d2 = 0U;
        vlSelfRef.__PVT__pp_nan_mts_d1 = 0U;
        vlSelfRef.__PVT__cfg_is_int16_d2 = 0U;
        vlSelfRef.__PVT__cfg_is_fp16_d2 = 0U;
        vlSelfRef.__PVT__cfg_is_int16_d1 = 0U;
        vlSelfRef.__PVT__cfg_is_fp16_d1 = 0U;
        vlSelfRef.__PVT__cfg_is_int16_d0 = 0U;
        vlSelfRef.__PVT__cfg_is_fp16_d0 = 0U;
    }
    vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_clr = 
        ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_end) 
                   >> 6U)));
    vlSelfRef.__PVT__pp_exp_pvld_d1 = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__pp_exp_pvld_w));
}

void Vsim_NV_NVDLA_CMAC_CORE_mac___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__2(Vsim_NV_NVDLA_CMAC_CORE_mac* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CMAC_CORE_mac___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a = 0;
    CData/*1:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a;
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a;
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a = 0;
    CData/*3:0*/ __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a;
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a = 0;
    // Body
    vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U] = 
        ((IData)(vlSelfRef.__PVT__u_nan__DOT__cfg_is_fp16_d1) 
         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_nan));
    vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U] = 
        ((IData)(vlSelfRef.__PVT__u_nan__DOT__cfg_is_fp16_d1) 
         & (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_nan 
                    >> 0x00000020U)));
    vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U] = 
        ((IData)(vlSelfRef.__PVT__u_nan__DOT__cfg_is_fp16_d1) 
         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nan_reg6));
    vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U] = 
        ((IData)(vlSelfRef.__PVT__u_nan__DOT__cfg_is_fp16_d1) 
         & (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nan_reg6 
                    >> 0x00000020U)));
    vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_set = 
        ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__VdfgRegularize_h6e95ff9d_0_13149) 
         & (IData)(vlSelfRef.__PVT__u_exp__DOT__cfg_is_fp16_d1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17371 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17363 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000c000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17355 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17339 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17372 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17347 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000c000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17331 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000c000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17323 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17369 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0c000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17367 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00c00000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17364 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00003000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17356 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17340 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17315 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000c000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17361 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000c00U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17353 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0c000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17359 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000000c0U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17337 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0c000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17351 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00c00000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17335 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00c00000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17348 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00003000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17332 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00003000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17324 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17370 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x03000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17368 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00300000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17345 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000c00U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17329 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000c00U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17343 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000000c0U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17321 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0c000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17327 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000000c0U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17319 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00c00000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17365 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000c0000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17316 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00003000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17362 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000300U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17354 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x03000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17360 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000030U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17338 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x03000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17352 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00300000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17336 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00300000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17313 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000c00U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17311 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000000c0U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17357 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000000cU 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17349 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000c0000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17333 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000c0000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17346 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000300U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17330 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000300U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17344 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000030U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17322 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x03000000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17328 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000030U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17320 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00300000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17366 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17341 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000000cU 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17325 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000000cU 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17317 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000c0000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17314 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000300U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17312 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000030U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17358 = (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17350 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17334 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17309 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000000cU 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17342 = (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17326 = (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17318 = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17310 = (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])));
    vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_pvld_w 
        = ((IData)(vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_set) 
           | ((~ (IData)(vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_clr)) 
              & (IData)(vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_pvld)));
    if (vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_set) {
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[0U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[1U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[2U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[3U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[4U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_exp[5U];
    } else {
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
            = vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[0U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
            = vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[1U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
            = vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[2U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
            = vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[3U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
            = vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[4U];
        vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
            = vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp[5U];
    }
    vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask = (((IData)(vlSelfRef.__PVT__u_exp__DOT__wt_actv_exp_set)
                                                   ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_mask
                                                   : vlSelfRef.__PVT__u_exp__DOT__wt_actv_mask) 
                                                 & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_mask6);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17404 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17370) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17369));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17400 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17362) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17361));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17396 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17354) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17353));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17388 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17338) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17337));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17392 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17346) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17345));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17384 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17330) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17329));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17380 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17322) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17321));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17402 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17366) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17365));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17376 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17314) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17313));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17398 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17358) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17357));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17394 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17350) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17349));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17386 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17334) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17333));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17390 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17342) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17341));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17382 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17326) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17325));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17378 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17318) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17317));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17374 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17310) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17309));
    vlSelfRef.__PVT__u_nan__DOT__nan_flag_l1 = (((QData)((IData)(
                                                                 (((((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17371) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17372) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17369) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17370))) 
                                                                      << 0x0000000cU) 
                                                                     | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17367) 
                                                                           << 3U) 
                                                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17368) 
                                                                             << 2U)) 
                                                                         | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17365) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17366))) 
                                                                        << 8U)) 
                                                                    | ((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17363) 
                                                                           << 3U) 
                                                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17364) 
                                                                             << 2U)) 
                                                                         | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17361) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17362))) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17359) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17360) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17357) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17358))))) 
                                                                   << 0x00000010U) 
                                                                  | (((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17355) 
                                                                          << 3U) 
                                                                         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17356) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17353) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17354))) 
                                                                       << 0x0000000cU) 
                                                                      | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17351) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17352) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17349) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17350))) 
                                                                         << 8U)) 
                                                                     | ((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17347) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17348) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17345) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17346))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17343) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17344) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17341) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17342)))))))) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  (((((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17339) 
                                                                          << 3U) 
                                                                         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17340) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17337) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17338))) 
                                                                       << 0x0000000cU) 
                                                                      | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17335) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17336) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17333) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17334))) 
                                                                         << 8U)) 
                                                                     | ((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17331) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17332) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17329) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17330))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17327) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17328) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17325) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17326))))) 
                                                                    << 0x00000010U) 
                                                                   | (((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17323) 
                                                                           << 3U) 
                                                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17324) 
                                                                             << 2U)) 
                                                                         | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17321) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17322))) 
                                                                        << 0x0000000cU) 
                                                                       | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17319) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17320) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17317) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17318))) 
                                                                          << 8U)) 
                                                                      | ((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17315) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17316) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17313) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17314))) 
                                                                          << 4U) 
                                                                         | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17311) 
                                                                              << 3U) 
                                                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17312) 
                                                                                << 2U)) 
                                                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17309) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17310)))))))));
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_58 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000003aU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 0x0000000eU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 0x0000000eU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_57 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000039U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 0x0000000bU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 0x0000000bU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_56 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000038U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 8U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 8U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_55 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000037U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 5U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 5U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_54 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000036U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 2U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 2U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_53 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000035U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                           << 1U) 
                                                          | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                             >> 0x0000001fU))) 
                                                      + 
                                                      (7U 
                                                       & ((vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                           << 1U) 
                                                          | (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                             >> 0x0000001fU)))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_52 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000034U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 0x0000001cU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 0x0000001cU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_51 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000033U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 0x00000019U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 0x00000019U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_50 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000032U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 0x00000016U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 0x00000016U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_49 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000031U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 0x00000013U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 0x00000013U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_48 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000030U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 0x00000010U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 0x00000010U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_47 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000002fU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 0x0000000dU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 0x0000000dU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_46 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000002eU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 0x0000000aU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 0x0000000aU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_45 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000002dU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 7U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 7U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_44 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000002cU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 4U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 4U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_43 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000002bU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                          >> 1U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                          >> 1U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_42 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000002aU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[4U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                             >> 0x0000001eU))) 
                                                      + 
                                                      (7U 
                                                       & ((vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[4U] 
                                                           << 2U) 
                                                          | (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                             >> 0x0000001eU)))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_41 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000029U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 0x0000001bU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 0x0000001bU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_40 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000028U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 0x00000018U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 0x00000018U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_39 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000027U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 0x00000015U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 0x00000015U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_38 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000026U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 0x00000012U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 0x00000012U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_37 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000025U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 0x0000000fU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 0x0000000fU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_36 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000024U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 0x0000000cU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 0x0000000cU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_35 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000023U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 9U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 9U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_34 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000022U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 6U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 6U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_33 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000021U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U] 
                                                          >> 3U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U] 
                                                          >> 3U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_32 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000020U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[3U]) 
                                                      + 
                                                      (7U 
                                                       & vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[3U])))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_31 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000001fU)))
                                                ? (0x0000000fU 
                                                   & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                       >> 0x0000001dU) 
                                                      + 
                                                      (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                       >> 0x0000001dU)))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_30 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000001eU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 0x0000001aU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 0x0000001aU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_29 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000001dU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 0x00000017U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 0x00000017U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_12 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000000cU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 4U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 4U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_11 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000000bU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 1U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 1U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_10 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000000aU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                             >> 0x0000001eU))) 
                                                      + 
                                                      (7U 
                                                       & ((vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                           << 2U) 
                                                          | (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                             >> 0x0000001eU)))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_09 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 9U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 0x0000001bU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 0x0000001bU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_08 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 8U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 0x00000018U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 0x00000018U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_07 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 7U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 0x00000015U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 0x00000015U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_06 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 6U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 0x00000012U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 0x00000012U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_04 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 4U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 0x0000000cU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 0x0000000cU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_03 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 3U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 9U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 9U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_02 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 2U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 6U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 6U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_01 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 1U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 3U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 3U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_05 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 5U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U] 
                                                          >> 0x0000000fU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U] 
                                                          >> 0x0000000fU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_13 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000000dU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 7U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 7U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_14 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000000eU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 0x0000000aU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 0x0000000aU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_15 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000000fU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 0x0000000dU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 0x0000000dU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_16 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000010U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 0x00000010U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 0x00000010U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_17 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000011U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 0x00000013U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 0x00000013U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_18 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000012U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 0x00000016U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 0x00000016U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_19 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000013U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 0x00000019U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 0x00000019U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_20 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000014U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                          >> 0x0000001cU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                          >> 0x0000001cU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_21 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000015U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                           << 1U) 
                                                          | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[1U] 
                                                             >> 0x0000001fU))) 
                                                      + 
                                                      (7U 
                                                       & ((vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                           << 1U) 
                                                          | (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[1U] 
                                                             >> 0x0000001fU)))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_22 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000016U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 2U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 2U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_23 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000017U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 5U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 5U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_24 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000018U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 8U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 8U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_25 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x00000019U)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 0x0000000bU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 0x0000000bU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_26 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000001aU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 0x0000000eU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 0x0000000eU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_27 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000001bU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 0x00000011U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 0x00000011U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_00 = ((1U 
                                                & (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[0U]) 
                                                      + 
                                                      (7U 
                                                       & vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[0U])))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_62 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000003eU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 0x0000001aU)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 0x0000001aU))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_28 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000001cU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[2U] 
                                                          >> 0x00000014U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[2U] 
                                                          >> 0x00000014U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_59 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000003bU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 0x00000011U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 0x00000011U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_60 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000003cU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 0x00000014U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 0x00000014U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_61 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000003dU)))
                                                ? (0x0000000fU 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                          >> 0x00000017U)) 
                                                      + 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                          >> 0x00000017U))))
                                                : 0U);
    vlSelfRef.__PVT__u_exp__DOT__exp_sum_63 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_exp__DOT__exp_cur_mask 
                                                           >> 0x0000003fU)))
                                                ? (0x0000000fU 
                                                   & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_exp_reg6[5U] 
                                                       >> 0x0000001dU) 
                                                      + 
                                                      (vlSelfRef.__PVT__u_exp__DOT__wt_cur_exp[5U] 
                                                       >> 0x0000001dU)))
                                                : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17420 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17402) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17368) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17367)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17418 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17398) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17360) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17359)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17416 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17394) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17352) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17351)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17412 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17386) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17336) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17335)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17414 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17390) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17344) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17343)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17410 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17382) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17328) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17327)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17408 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17378) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17320) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17319)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17406 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17374) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17312) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17311)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_55) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_54) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_53) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_52)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_51) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_50) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_49) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_48)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_47) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_46) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_45) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_44)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_43) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_42) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_41) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_40)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_39) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_38) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_37) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_36)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_35) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_34) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_33) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_32)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_11) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_10) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_09) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_08)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_07) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_06) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_05) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_04)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_15) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_14) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_13) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_12)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_19) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_18) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_17) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_16)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_23) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_22) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_21) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_20)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_27) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_26) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_25) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_24)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_03) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_02) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_01) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_00)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_31) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_30) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_29) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_28)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_59) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_58) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_57) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_56)));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__a 
        = ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_63) 
             << 0x0000000cU) | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_62) 
                                << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_61) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_sum_60)));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n7 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17420)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17402)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17366)
                                                    ? 
                                                   ((0x00010000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000018U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000018U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000018U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000018U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00040000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000019U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000019U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000019U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000019U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17368)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001aU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001aU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001aU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001aU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00400000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001bU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001bU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001bU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001bU] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17404)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17370)
                                                    ? 
                                                   ((0x01000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001cU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001cU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001cU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001cU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x04000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001dU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001dU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001dU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001dU] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17372)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001eU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001eU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001eU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001eU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001fU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001fU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001fU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000001fU] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17428 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17418) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17400) 
            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17364) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17363))));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n6 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17418)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17398)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17358)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000010U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000010U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000010U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000010U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000011U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000011U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000011U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000011U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17360)
                                                    ? 
                                                   ((0x00000010U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000012U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000012U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000012U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000012U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000040U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000013U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000013U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000013U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000013U] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17400)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17362)
                                                    ? 
                                                   ((0x00000100U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000014U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000014U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000014U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000014U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000400U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000015U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000015U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000015U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000015U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17364)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000016U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000016U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000016U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000016U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00004000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[3U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000017U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000017U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000017U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x00000017U] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n5 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17416)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17394)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17350)
                                                    ? 
                                                   ((0x00010000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[8U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[8U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[8U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[8U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00040000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[9U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[9U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[9U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[9U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17352)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000aU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000aU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000aU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000aU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00400000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000bU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000bU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000bU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000bU] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17396)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17354)
                                                    ? 
                                                   ((0x01000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000cU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000cU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000cU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000cU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x04000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000dU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000dU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000dU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000dU] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17356)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000eU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000eU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000eU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000eU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000fU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000fU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000fU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0x0000000fU] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n3 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17412)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17386)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17334)
                                                    ? 
                                                   ((0x00010000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000018U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000018U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000018U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000018U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00040000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000019U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000019U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000019U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000019U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17336)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001aU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001aU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001aU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001aU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00400000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001bU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001bU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001bU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001bU] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17388)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17338)
                                                    ? 
                                                   ((0x01000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001cU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001cU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001cU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001cU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x04000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001dU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001dU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001dU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001dU] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17340)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001eU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001eU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001eU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001eU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001fU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001fU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001fU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000001fU] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n4 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17414)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17390)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17342)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[0U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[1U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[1U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[1U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[1U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17344)
                                                    ? 
                                                   ((0x00000010U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[2U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[2U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[2U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[2U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000040U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[3U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[3U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[3U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[3U] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17392)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17346)
                                                    ? 
                                                   ((0x00000100U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[4U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[4U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[4U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[4U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000400U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[5U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[5U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[5U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[5U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17348)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[6U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[6U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[6U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[6U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00004000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[2U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[7U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[7U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[7U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg6[7U] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17426 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17414) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17392) 
            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17348) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17347))));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n2 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17410)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17382)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17326)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000010U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000010U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000010U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000010U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000011U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000011U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000011U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000011U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17328)
                                                    ? 
                                                   ((0x00000010U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000012U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000012U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000012U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000012U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000040U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000013U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000013U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000013U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000013U] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17384)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17330)
                                                    ? 
                                                   ((0x00000100U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000014U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000014U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000014U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000014U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000400U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000015U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000015U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000015U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000015U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17332)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000016U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000016U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000016U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000016U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00004000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[1U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000017U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000017U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000017U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x00000017U] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17424 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17410) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17384) 
            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17332) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17331))));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n1 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17408)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17378)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17318)
                                                    ? 
                                                   ((0x00010000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[8U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[8U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[8U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[8U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00040000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[9U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[9U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[9U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[9U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17320)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000aU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000aU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000aU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000aU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00400000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000bU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000bU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000bU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000bU] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17380)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17322)
                                                    ? 
                                                   ((0x01000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000cU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000cU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000cU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000cU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x04000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000dU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000dU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000dU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000dU] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17324)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000eU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000eU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000eU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000eU] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000fU] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000fU] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000fU] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0x0000000fU] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__PVT__u_nan__DOT__nan_mts_l4n0 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17406)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17374)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17310)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[0U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[1U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[1U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[1U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[1U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17312)
                                                    ? 
                                                   ((0x00000010U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[2U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[2U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[2U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[2U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000040U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[3U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[3U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[3U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[3U] 
                                                           >> 0x00000013U))))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17376)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17314)
                                                    ? 
                                                   ((0x00000100U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[4U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[4U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[4U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[4U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00000400U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[5U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[5U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[5U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[5U] 
                                                           >> 0x00000013U)))))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17316)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[6U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[6U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[6U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[6U] 
                                                           >> 0x00000013U))))
                                                    : 
                                                   ((0x00004000U 
                                                     & vlSelfRef.__PVT__u_nan__DOT__nan_flag_l0[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[7U] 
                                                         >> 5U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[7U] 
                                                           >> 3U)))
                                                     : 
                                                    ((0x00000400U 
                                                      & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[7U] 
                                                         >> 0x00000015U)) 
                                                     | (0x000003ffU 
                                                        & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_data[7U] 
                                                           >> 0x00000013U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17422 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17406) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17376) 
            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17316) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17315))));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_index__503__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_13 = __Vfunc_u_exp__DOT__u_expmax_l0n13__DOT__max_unsigned_value__502__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_index__501__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_12 = __Vfunc_u_exp__DOT__u_expmax_l0n12__DOT__max_unsigned_value__500__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_index__499__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_11 = __Vfunc_u_exp__DOT__u_expmax_l0n11__DOT__max_unsigned_value__498__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_index__497__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_10 = __Vfunc_u_exp__DOT__u_expmax_l0n10__DOT__max_unsigned_value__496__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_index__495__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_09 = __Vfunc_u_exp__DOT__u_expmax_l0n09__DOT__max_unsigned_value__494__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_index__493__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_08 = __Vfunc_u_exp__DOT__u_expmax_l0n08__DOT__max_unsigned_value__492__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_index__481__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_02 = __Vfunc_u_exp__DOT__u_expmax_l0n02__DOT__max_unsigned_value__480__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_index__479__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_01 = __Vfunc_u_exp__DOT__u_expmax_l0n01__DOT__max_unsigned_value__478__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_index__483__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_03 = __Vfunc_u_exp__DOT__u_expmax_l0n03__DOT__max_unsigned_value__482__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_index__485__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_04 = __Vfunc_u_exp__DOT__u_expmax_l0n04__DOT__max_unsigned_value__484__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_index__487__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_05 = __Vfunc_u_exp__DOT__u_expmax_l0n05__DOT__max_unsigned_value__486__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_index__489__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_06 = __Vfunc_u_exp__DOT__u_expmax_l0n06__DOT__max_unsigned_value__488__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_index__477__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_00 = __Vfunc_u_exp__DOT__u_expmax_l0n00__DOT__max_unsigned_value__476__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_index__491__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_07 = __Vfunc_u_exp__DOT__u_expmax_l0n07__DOT__max_unsigned_value__490__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_index__505__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_14 = __Vfunc_u_exp__DOT__u_expmax_l0n14__DOT__max_unsigned_value__504__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_index__507__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a), 4U));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a), 4U));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a 
        = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__a), 4U));
    __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_15 = __Vfunc_u_exp__DOT__u_expmax_l0n15__DOT__max_unsigned_value__506__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17432 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17426) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17416) 
            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17396) 
               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17356) 
                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17355)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17430 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17422) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17408) 
            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17380) 
               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17324) 
                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17323)))));
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__a 
        = (((QData)((IData)(((((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_15) 
                                 << 0x0000000cU) | 
                                ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_14) 
                                 << 8U)) | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_13) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_12))) 
                              << 0x00000010U) | ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_11) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_10) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_09) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_08)))))) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_07) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_06) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_05) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_04))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_03) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_02) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_01) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.__PVT__u_exp__DOT__exp_max_l0_00)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17434 = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17430) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17424) 
            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17412) 
               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17388) 
                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17340) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17339))))));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__a_v;
    }
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__a, 4U);
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__Vstatic__value_v;
    vlSelfRef.__PVT__u_exp__DOT__exp_max_l1_0 = __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_value__508__Vfuncout;
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__a;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 0U;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 1U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 2U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 3U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 4U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 5U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 6U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 7U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 8U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 9U;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 0x0aU;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 0x0bU;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 0x0cU;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 0x0dU;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 0x0eU;
    }
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v 
        = (0x0000000fU & (IData)(__Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a));
    if (((IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v) 
         >= (IData)(vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v))) {
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__value_v 
            = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__a_v;
        vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v = 0x0fU;
    }
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a 
        = VL_SHIFTR_QQI(64,64,32, __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__a, 4U);
    __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__Vfuncout 
        = vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__Vstatic__index_v;
    vlSelfRef.__PVT__u_exp__DOT__u_expmax_l1n0__DOT__index 
        = __Vfunc_u_exp__DOT__u_expmax_l1n0__DOT__max_unsigned_index__509__Vfuncout;
}
